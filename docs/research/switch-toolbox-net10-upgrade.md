# Switch-Toolbox .NET 10 Windows 迁移验收与风险记录

> **目标**：保留原有 .NET Framework 4.8 构建能力，在 `tools/Switch-Toolbox/` 以并行工程支持 `net10.0-windows`，不触碰 4.0.0 原始 RomFS/ExeFS。
>
> **分支**：`upgrade/switch-toolbox-net10`；[PR #16](https://github.com/969981/SV_Resources/pull/16)（Draft，待真正运行时验收后再合并）。

## 迁移工件

- `Toolbox.net10.slnx`：五个 SDK 风格项目，使用单独的 `*.net10.csproj`；`Toolbox.sln` 与原 Framework 工程未删除。
- `Switch_Toolbox_Library`：现代压缩库引用、Yaz0 自带 .NET 10 兼容编解码器（仅内部可见，避免与 SARCExt 的 `EveryFileExplorer.YAZ0` 冲突）。
- `File_Format_Library`：移植标准 `ContextMenuStrip`，补足音频与 WMP COM 互操作引用。
- `Toolbox`：Windows 程序、插件目录 `Lib/Plugins` 的发布复制、`--verify-runtime` 插件加载模式。
- `Updater`：`DirectoryInfo` ACL API。
- `tests/Yaz0Smoke.csproj`：字节损坏拒绝、空文件、重复内容、随机内容和已知重叠后向引用样本。

## 可复现命令

在 Windows + .NET 10 SDK 下：

```powershell
cd tools/Switch-Toolbox
dotnet restore Toolbox.net10.slnx
dotnet run --project tests/Yaz0Smoke.csproj -c Release
dotnet build Toolbox.net10.slnx -c Release --no-restore
dotnet build Toolbox.net10.slnx -c Debug --no-restore
dotnet publish Toolbox/Toolbox.net10.csproj -c Release -r win-x64 --self-contained false -o artifacts/net10-win-x64
.\artifacts\net10-win-x64\Toolbox.exe --verify-runtime
```

发布和运行时检查在 GitHub Actions `.github/workflows/verify-switch-toolbox-net10.yml` 执行，报告保存在 `net10-runtime-smoke.txt`；合格包以 Actions artifact 下载。未执行的测试不得标记通过。

## 证据与范围

- **CONFIRMED（编译）**：Windows Actions Run [42009908049](https://github.com/969981/SV_Resources/actions/runs/42009908049) 通过 .NET SDK、还原、Yaz0 回归、全工程 Release 与 Debug 构建。
- **CONFIRMED（运行时子集）**：win-x64 发布目录、插件加载和测试报告（Windows CI [42011487835](https://github.com/969981/SV_Resources/actions/runs/42011487835)）；原生 FBX/纹理解码仍未验证。
- **待 GUI 验证**：首启、停靠布局、OpenGL 渲染、纹理导出、声音播放、资源编辑与保存、插件菜单、更新器。
- **待基于资源的真实回归**：BNTX、BFRES、SARC、BYAML、BFLYT 等打开→编辑→保存→重新读取→哈希/语义比对。Yaz0 压缩结果可有效解压但不保证与原版编码器字节完全一致。

## 已知兼容性边界

1. `WFO1000` 的老 WinForms Designer 属性序列化检查只在 NET10 工程中暂时抑制。全量设计器属性兼容性尚未验收。
2. `BinaryFormatter` 在 .NET10 无法工作，旧调用暂时保持显式失败，避免伪装成二进制兼容的序列化。需对每个实用调用创建可核验的数据迁移方案；原 .NET Framework 路径行为未变。
3. 许多第三方库仍为 vendored .NET Framework 原生/托管 DLL（尤其 OpenTK、音视频、FBX/DirectX），能编译不等于可在 .NET10 正常运行，必须逐项验证。
4. 测试文件不含游戏原始素材、不涉及游戏密钥、无批量数据重打包；未将 CI 编译产物提交至 Git。
5. 暂不合并 `master`，待 runtime 与真实 Windows 桌面格式回归合格。

工程级详细说明：`tools/Switch-Toolbox/docs/net10-migration.md`。
