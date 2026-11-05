using System;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Text;
using FirstPlugin;

static void Check(bool condition, string name)
{
    if (!condition) throw new InvalidOperationException("FAILED: " + name);
    Console.WriteLine("PASS: " + name);
}

static MemoryStream Bytes(string magic)
{
    byte[] data = new byte[128];
    Encoding.ASCII.GetBytes(magic).CopyTo(data, 0);
    return new MemoryStream(data, writable: false);
}

Console.WriteLine($"Runtime={Environment.Version} OS={Environment.OSVersion} Arch={System.Runtime.InteropServices.RuntimeInformation.ProcessArchitecture}");
Check(OperatingSystem.IsWindows(), "Windows runtime");
Check(System.Runtime.InteropServices.RuntimeInformation.ProcessArchitecture == System.Runtime.InteropServices.Architecture.X64, "x64 process");

// Verify that both modernized assemblies can be loaded and queried.
var typeCount = typeof(SARC).Assembly.GetExportedTypes().Length;
Check(typeCount > 20, "format assembly public type load");
Check(typeof(Toolbox.Library.IO.FileReader).Assembly.GetExportedTypes().Length > 20, "core library public type load");

// Regression of the .NET10 Reverse() overload fix: original behavior keeps leftmost characters.
Check(System.StringExtension.ToFixedString("abcdef", 3) == "abc", "fixed string truncation");
Check(System.StringExtension.ToFixedString("abc", 5) == "abc  ", "fixed string padding");
Check(System.StringExtension.ToFixedString("abc", 3) == "abc", "fixed string equal length");

// These are header identification tests, NOT complete archive read/write tests.
using (var positive = Bytes("SARC"))
using (var negative = Bytes("NONE"))
{
    var format = new SARC();
    Check(format.Identify(positive), "SARC magic");
    Check(!format.Identify(negative), "SARC rejects unknown header");
}
using (var positive = Bytes("BNTX"))
using (var negative = Bytes("NONE"))
{
    var format = new BNTX();
    Check(format.Identify(positive), "BNTX magic");
    Check(!format.Identify(negative), "BNTX rejects unknown header");
}
using (var positive = Bytes("FRES"))
using (var negative = Bytes("NONE"))
{
    var format = new BFRES();
    Check(format.Identify(positive), "BFRES magic");
    Check(!format.Identify(negative), "BFRES rejects unknown header");
}
using (var positive = Bytes("BY"))
using (var negative = Bytes("NONE"))
{
    var format = new BYAML();
    Check(format.Identify(positive), "BYML/BYAML magic");
    Check(!format.Identify(negative), "BYML/BYAML rejects unknown header");
}
// Real encode/decode of synthetic (non-copyrighted) SARC bytes, using the
// original SARCExt dependency under the .NET 10 runtime.
foreach (var byteOrder in new[] { Syroot.BinaryData.ByteOrder.LittleEndian, Syroot.BinaryData.ByteOrder.BigEndian })
{
    var expected = new byte[] { 0x00, 0x7F, 0x42, 0x53, 0xFF };
    var data = new SARCExt.SarcData
    {
        HashOnly = false,
        endianness = byteOrder,
        Files = new System.Collections.Generic.Dictionary<string, byte[]> { ["test/path.bin"] = expected }
    };
    var packed = SARCExt.SARC.PackN(data);
    Check(packed.Item2.Length > expected.Length, $"SARC {byteOrder} physical archive");
    using var stream = new MemoryStream(packed.Item2);
    var restored = SARCExt.SARC.UnpackRamN(stream);
    Check(restored.Files.TryGetValue("test/path.bin", out var actual) && actual.SequenceEqual(expected),
          $"SARC {byteOrder} complete pack/unpack roundtrip");
}
Console.WriteLine("Managed-runtime and synthetic SARC roundtrip smoke tests passed. OpenGL, complex formats and GUI editing still require validation.");
