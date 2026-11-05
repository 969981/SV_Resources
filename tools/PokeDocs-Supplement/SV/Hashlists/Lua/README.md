# SV Lua Hash 增量映射（非上游原始文件）

这里存放从完整 vendored `tools/PokeDocs/SV/Hashlists/Lua/` 派生的恢复结果，**原始文件保持不变**。

- `recovered.tsv`: 仅列出成功反算 64-bit FNV-1a Hash 的原空行补全候选（含证据名称、原始行号和状态）。
- `lua_c_hashes.merged.txt`、`lua_e_hashes.merged.txt`、`lua_f_hashes.merged.txt`、`lua_s_hashes.merged.txt`: 原行顺序不变的增强版完整 Hashlist。缺失但未命中的仍为空。
- `recovery-report.json`: 原有命名数、空缺数、此次新增数、剩余数、源文件 SHA-256、尝试次数以及歧义统计。
- `scripts/Recover-SV-Lua-Hashes.py`: 唯一转换实现；每条候选要与原始目标 Hash 完全匹配。
- `docs/research/sv-lua-hash-recovery.md`: Obsidian 技术说明及后续验证路线。

查看 [Obsidian 研究报告](../../../../../docs/research/sv-lua-hash-recovery.md)。

从仓库根目录重建：

```powershell
py -3 .\scripts\Recover-SV-Lua-Hashes.py --min-recovered 48
py -3 .\scripts\Recover-SV-Lua-Hashes.py --verify-only --min-recovered 48
```

注意：`HASH_EXACT_CANDIDATE` 只说明名称与 Hash 的数学一致性和命名规律证据；不等于已证明具体 Lua 调用或游戏 4.0.0 运行逻辑。

## SV 4.0.0 全量 Lua 的小型原生证据索引

- [`native-4.0.0/`](native-4.0.0/)：完整 Lua 源文件经原型／指令级解析后的 C 静态 S 闭包、全局注册、F 回调名称验证和完整增强 F Hashlist。**本目录不包含拆分后的 Lua 代码，也没有改写上游 PokeDocs。**
- [Obsidian 第三轮原生技术报告](../../../../../docs/research/sv-lua-native-4.0.0-followup.md)。
