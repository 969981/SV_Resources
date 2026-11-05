# Switch-Toolbox .NET 10 迁移与验证

**状态：实验迁移。完整软件功能尚未通过验收，禁止发布为已完成升级。**

上游 `KillzXGaming/Switch-Toolbox` 已归档，原本是五个 .NET Framework 4.8 的旧式项目。保留原始项目作为可运行基线，新增五个并行 SDK-style `*.Net10.csproj`，目标 `net10.0-windows` / Windows x64：Toolbox、Toolbox_Library、File_Format_Library、BrawlboxHelper 和 Updater。

## 依赖状况

第一批尝试转向 NuGet 的依赖包括 `Newtonsoft.Json 13.0.3`、`SharpZipLib 1.4.2`、`K4os.Compression.LZ4 1.3.8`、`K4os.Compression.LZ4.Streams 1.3.8`，以及 `System.Configuration.ConfigurationManager 10.0.0`。

**高风险、目前仍保留旧版、需逐项替换验证的依赖**：OpenTK 3 / OpenTK.GLControl 3、AssimpNet 4.1.0、DirectXTexNet 1.0.0-rc3、DockPanelSuite 3.0.6、CsvHelper 8、ZstdSharp 0.7.2、大量预编译的 `Toolbox/Lib` 和原生 DLL。不得未经验证就声称这些库已完成 .NET 10 兼容升级。

上游 README 已明确注明 **XCI/NSP/NCA 不再支持**；.NET 10 升级不会自动恢复这一功能。

## 验收阶段

1. Windows Runner 上用 .NET 10 SDK 执行所有五个工程的 Restore/Build，逐项修复编译错误和不兼容 API。
2. 检查 Win-x64 依赖程序集加载、首次启动和正常退出；实际验证 WinForms UI 和 OpenGL GLControl。
3. 以合法且可分发的测试文件复现 BFRES、BNTX、SARC、BYML、BFLYT、BFLAN、动画与导入/导出；比对 .NET Framework 原版读取、编辑、保存再读结果。
4. 逐项测试模型/纹理渲染、插件加载、文件关联及绿色版部署，并记录自动与手动测试结果。
5. 只有编译、运行、格式回归和 UI 关键流程全部通过才能发布正式 .NET10 Release。

Windows 开发机命令：

```powershell
dotnet restore .\tools\Switch-Toolbox\Toolbox\Toolbox.Net10.csproj
dotnet build .\tools\Switch-Toolbox\Toolbox\Toolbox.Net10.csproj -c Release --no-restore
```

CI: [switch-toolbox-net10.yml](../../.github/workflows/switch-toolbox-net10.yml)。构建成功并不等于功能已通过验证。
