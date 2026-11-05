using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;
using System.Globalization;
using System.Threading;
using System.Runtime.InteropServices;
using System.Reflection;
using Microsoft.VisualBasic.ApplicationServices;
using Toolbox.Library;

namespace Toolbox
{
    static class Program
    {
        /// <summary>
        /// The main entry point for the application.
        /// </summary>
        [STAThread]
        static void Main()
        {
            AppDomain.CurrentDomain.AssemblyResolve += AssemblyResolve;

            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            Toolbox.Library.Runtime.ExecutableDir = System.IO.Path.GetDirectoryName(System.Reflection.Assembly.GetEntryAssembly().Location);

            string[] args = Environment.GetCommandLineArgs();

            List<string> Files = new List<string>();
            foreach (var arg in args)
            {
                if (arg != Application.ExecutablePath)
                    Files.Add(arg);
            }

            try
            {
                Config.StartupFromFile(Runtime.ExecutableDir + "\\config.xml");
                Config.GamePathsFromFile(Runtime.ExecutableDir + "\\config_paths.xml");
            }
            catch (Exception ex)
            {
                MessageBox.Show($"Failed to load config file! {ex}");
            }

            var domain = AppDomain.CurrentDomain;
            domain.AssemblyResolve += LoadAssembly;

#if NET10_0_OR_GREATER
            // CI/runtime acceptance mode: validate the deployed plugin tree
            // without requiring a desktop or opening a game asset.
            if (args.Any(a => string.Equals(a, "--verify-runtime", StringComparison.OrdinalIgnoreCase)))
            {
                var plugins = PluginLoader.LoadPlugins();
                if (plugins.Count == 0)
                    throw new InvalidOperationException("No .NET 10 plugins were loaded from Lib/Plugins.");

                var verification = new List<string>();
                foreach (var plugin in plugins)
                {
                    plugin.Load();
                    Type[] types = plugin.Types;
                    if (types == null || types.Length == 0)
                        throw new InvalidOperationException("Plugin has no registered resource types: " + plugin.Name);
                    verification.Add(plugin.Name + ": " + types.Length + " resource types");
                }
                VerifyFormatIdentification(plugins.SelectMany(p => p.Types).ToArray(), verification);
                File.WriteAllLines(Path.Combine(Runtime.ExecutableDir, "net10-runtime-smoke.txt"), verification);
                return;
            }
#endif

            bool LoadedDX = TryLoadDirectXTex();
            if (!LoadedDX && !Toolbox.Library.Runtime.UseDirectXTexDecoder)
            {
                var result = MessageBox.Show("Direct X Tex Failed to load! Make sure to install Visual C++ and Direct X Tex. Do you want to go to the install sites?", "", MessageBoxButtons.YesNo);
                if (result == DialogResult.Yes)
                {
#if NET10_0_OR_GREATER
                    System.Diagnostics.Process.Start(new System.Diagnostics.ProcessStartInfo("https://support.microsoft.com/en-us/help/2977003/the-latest-supported-visual-c-downloads") { UseShellExecute = true });
#else
                    System.Diagnostics.Process.Start("https://support.microsoft.com/en-us/help/2977003/the-latest-supported-visual-c-downloads");
#endif
#if NET10_0_OR_GREATER
                    System.Diagnostics.Process.Start(new System.Diagnostics.ProcessStartInfo("https://www.microsoft.com/en-us/download/details.aspx?id=35") { UseShellExecute = true });
#else
                    System.Diagnostics.Process.Start("https://www.microsoft.com/en-us/download/details.aspx?id=35");
#endif
                }
            }

            MainForm.LoadConfig();

            if (Toolbox.Library.Runtime.UseSingleInstance)
            {
                SingleInstanceController controller = new SingleInstanceController();
                controller.Run(args);
            }
            else
            {
                MainForm form = new MainForm();
                form.OpenedFiles = Files;
                Application.Run(form);
            }
        }

        [ComVisible(true), ComImport, Guid("000214eb-0000-0000-c000-000000000046"),
        InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]
        public interface IExtractIcon
        {
            [PreserveSig]
            uint GetIconLocation(int uFlags, IntPtr szIconFile, int cchMax, IntPtr piIndex, UIntPtr pwFlags);

            [PreserveSig]
            uint Extract(string pszFile, uint nIconIndex, ref IntPtr phiconLarge, ref IntPtr phiconSmall, uint nIconSize);
        }

        public class SingleInstanceController : WindowsFormsApplicationBase
        {
            public SingleInstanceController()
            {
                IsSingleInstance = true;
                Startup += OnStart;
                StartupNextInstance += Program_StartupNextInstance;
            }

            private void OnStart(object sender, StartupEventArgs e)
            {
                List<string> args = new List<string>();
                foreach (string arg in e.CommandLine)
                    args.Add(arg);

                args.RemoveAt(0);

                Toolbox.MainForm.Instance.OpenedFiles = args;
            }

            void Program_StartupNextInstance(object sender, StartupNextInstanceEventArgs e)
            {
                e.BringToForeground = true;
                MainForm form = MainForm as MainForm;
                form.OpenedFiles = e.CommandLine.ToList();
                form.OpenFiles();
            }

            protected override void OnCreateMainForm()
            {
                MainForm = Toolbox.MainForm.Instance;
            }
        }

#if NET10_0_OR_GREATER
        // Exercise format dispatch with synthetic headers, without writing or distributing game assets.
        // These are identification smoke tests, not file-format round-trip certification.
        private static void VerifyFormatIdentification(Type[] types, List<string> report)
        {
            var fixtures = new (string TypeName, string Header)[]
            {
                ("FirstPlugin.SARC", "SARC"),
                ("FirstPlugin.BYAML", "BY"),
                ("FirstPlugin.AAMP", "AAMP"),
                ("FirstPlugin.MSBT", "MsgStdBn"),
                ("LayoutBXLYT.Cafe.BFLYT", "FLYT"),
            };

            foreach (var fixture in fixtures)
            {
                Type format = types.FirstOrDefault(t => t.FullName == fixture.TypeName);
                if (format == null)
                    throw new InvalidOperationException("Missing format handler: " + fixture.TypeName);

                var identify = format.GetMethod("Identify", new[] { typeof(Stream) });
                if (identify == null || identify.ReturnType != typeof(bool))
                    throw new InvalidOperationException("Format handler lacks Identify(Stream): " + fixture.TypeName);

                object instance = Activator.CreateInstance(format);
                byte[] valid = new byte[32];
                byte[] header = System.Text.Encoding.ASCII.GetBytes(fixture.Header);
                Buffer.BlockCopy(header, 0, valid, 0, header.Length);
                using (var stream = new MemoryStream(valid, writable: false))
                {
                    if (!(bool)identify.Invoke(instance, new object[] { stream }))
                        throw new InvalidDataException("Valid magic rejected by " + fixture.TypeName);
                }
                valid[0] = 0;
                using (var stream = new MemoryStream(valid, writable: false))
                {
                    if ((bool)identify.Invoke(instance, new object[] { stream }))
                        throw new InvalidDataException("Invalid magic accepted by " + fixture.TypeName);
                }
                report.Add(fixture.TypeName + ": positive/negative header checks passed");
            }

            foreach (string name in new[] { "BFRES", "BNTX" })
            {
                if (!types.Any(t => t.Name == name))
                    throw new InvalidOperationException("Missing registered " + name + " handler");
                report.Add(name + ": handler registered (round-trip not tested)");
            }
        }
#endif

        private static bool TryLoadZSTD()
        {
            try
            {
                String folder = Path.GetDirectoryName(Assembly.GetExecutingAssembly().Location);
                String filePath = Path.Combine(folder, Environment.Is64BitProcess ? "x64" : "x86", "libzstd.dll");
                if (File.Exists(filePath))
                {
#if NET10_0_OR_GREATER
                    // This is a native Win32 DLL, not a managed assembly.
                    if (NativeLibrary.TryLoad(filePath, out IntPtr nativeHandle))
                    {
                        NativeLibrary.Free(nativeHandle);
                        return true;
                    }
#else
                    Assembly assembly = Assembly.LoadFile(filePath);
                    return true;
#endif
                }
            }
            catch (Exception ex)
            {
            }
            return false;
        }

        private static bool TryLoadDirectXTex()
        {
            try
            {
                String folder = Path.GetDirectoryName(Assembly.GetExecutingAssembly().Location);
                String filePath = Path.Combine(folder, Environment.Is64BitProcess ? "x64" : "x86", "DirectXTexNetImpl.dll");
                String filePathLib = Path.Combine(folder, "Lib", Environment.Is64BitProcess ? "x64" : "x86", "DirectXTexNetImpl.dll");
                if (File.Exists(filePath))
                {
#if NET10_0_OR_GREATER
                    // This is a native Win32 DLL, not a managed assembly.
                    if (NativeLibrary.TryLoad(filePath, out IntPtr nativeHandle))
                    {
                        NativeLibrary.Free(nativeHandle);
                        return true;
                    }
#else
                    Assembly assembly = Assembly.LoadFile(filePath);
                    return true;
#endif
                }
                if (File.Exists(filePathLib))
                {
#if NET10_0_OR_GREATER
                    // This is a native Win32 DLL, not a managed assembly.
                    if (NativeLibrary.TryLoad(filePathLib, out IntPtr nativeHandle))
                    {
                        NativeLibrary.Free(nativeHandle);
                        return true;
                    }
#else
                    Assembly assembly = Assembly.LoadFile(filePathLib);
                    return true;
#endif
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.ToString());
            }
            return false;
        }

        /// 
        /// Include externals dlls
        /// 
        private static Assembly LoadAssembly(object sender, ResolveEventArgs args)
        {
            Assembly result = null;
            if (args != null && !string.IsNullOrEmpty(args.Name))
    {
                //Get current exe fullpath
                FileInfo info = new FileInfo(Assembly.GetExecutingAssembly().Location);

                //Get folder of the executing .exe
                var folderPath = Path.Combine(info.Directory.FullName, "Lib");

                //Build potential fullpath to the loading assembly
                var assemblyName = args.Name.Split(new string[] { "," }, StringSplitOptions.None)[0];
                var assemblyExtension = "dll";
                var assemblyPath = Path.Combine(folderPath, string.Format("{0}.{1}", assemblyName, assemblyExtension));

                //Check if the assembly exists in our "Libs" directory
                if (File.Exists(assemblyPath))
                {
                    Console.WriteLine("Loading .dll " + assemblyPath);

                    //Load the required assembly using our custom path
                    result = Assembly.LoadFrom(assemblyPath);
                }
                else
                {
                    //Keep default loading
                    return args.RequestingAssembly;
                }
            }

            return result;
        }

        // Custom assembly resolver to find the architecture-specific implementation assembly.
        private static Assembly AssemblyResolve(object sender, ResolveEventArgs args)
        {
            if (args.Name.StartsWith("DirectXTexNetImpl", StringComparison.OrdinalIgnoreCase))
            {
                var assembly = Assembly.GetExecutingAssembly();
                var path = GetAssemblyPath(Path.GetDirectoryName(assembly.Location));

                if (!File.Exists(path))
                {
                    // If we can't find the file, try using the CodeBase instead (which can
                    // be different if using shadow copy).
                    // CodeBase is a uri, so must parse out the filename.
                    path = GetAssemblyPath(Path.GetDirectoryName(new Uri(assembly.CodeBase).AbsolutePath));
                }

                return Assembly.LoadFile(path);
            }

            return null;
        }

        private static string GetAssemblyPath(string dir) => Path.Combine(dir,"Lib", ArchitectureMoniker, "DirectXTexNetImpl.dll");

        // Note: currently no support for ARM.
        // Don't use %PROCESSOR_ARCHITECTURE% as it calls x64 'AMD64'.
        private static string ArchitectureMoniker => Environment.Is64BitProcess ? "x64" : "x86";
    }
}
