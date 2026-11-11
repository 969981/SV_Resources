---
title: SV 4.0.0 TrainerID 新建与持久化运行时验收
tags: [SV, TrainerID, GDB, ELF, Obsidian, Save]
updated: 2026-11-11
status: NOT_OBSERVED_RUNTIME
---

# 朱紫 4.0.0：新建存档 ID32 生成的完整链条与验证计划

主文 [[sv400-new-save-trainer-id-elf]]；数据初始化 [[sv400-trainer-id-initializer]]；汇编与指针 [[sv400-trainer-id-native-asm]]。

> [!warning] 真实结论边界
> 新建训练家姓名后何时抽取 ID32、是哪种 PRNG、用了几次随机数以及 seed 来源，都还没有由原始 ELF 和离线 guest 共同证明。不能因为保存块内存在 32 位字段就推断 ID 是 Switch OS UserID 派生的，也不能假定是 MT/xoroshiro。

## 1. 预期路径及缺口

~~~mermaid
flowchart TD
  OS[Switch OS 用户选择和 SaveData 归属] --> MAIN[朱紫 4.0.0 main]
  MAIN --> FIRST{是否存在有效旧存档}
  FIRST -->|否| INIT[新建流程初始化语言外观姓名]
  FIRST -->|是| LOAD[加载原有 KMyStatus]
  INIT --> BUF[FUN_0168D138 将候选 0x68 结构初始化]
  BUF --> BLOCK[FUN_0168D238 按 Key 建立或更新保存记录]
  BLOCK --> RNG{谁在何时赋值 ID32? UNKNOWN}
  RNG --> SAVE[原生 SaveRequest/commit/ACK UNKNOWN]
  SAVE --> LOAD
  LOAD --> SHOW[ID32 mod 1000000 展示六位数]
~~~

注意箭头 BUF→BLOCK 具有静态 FUN_0168D10C 调用顺序证据，但 UI 新建是否确实走这个调用者仍需 runtime 捕获。BLOCK→RNG 是待证实的时序，并非原生确认：ID32 也可能在某个后续系统写入、或在复制缓存前赋值。

## 2. 原生函数表与调用来源

| 函数 Ghidra VA | main RVA | 当前语义 |
|---|---|---|
| 0x0168D10C | 0x0158D10C | FUN_0168D138 → FUN_0168D238 的直接上游 |
| 0x0168D138 | 0x0158D138 | memset(state+0x40, 0, 0x68)；写版本/语言/默认字段 |
| 0x0168D1B0 | 0x0158D1B0 | 返回 DAT_048420A8 |
| 0x0168D1C0 | 0x0158D1C0 | 返回单例对象 +0x2C 的字节 |
| 0x0168D238 | 0x0158D238 | KMyStatus 查询／初始化记录候选 |
| 0x020F8D00 | 0x01FF8D00 | KMyStatus 另一条回调处理候选 |
| 0x00F844F4 | 0x00E844F4 | 获取 HashDB 容器候选 |
| 0x015D0CB8 | 0x014D0CB8 | 传入 Key/0x6D 的记录构建候选 |

在已发布 C 索引直接文本扫描中，FUN_0168D238 仅一条直接调用者 FUN_0168D10C；FUN_020F8D00 未见直接 C 调用者。不排除跨模块、函数指针、虚表间接调用。真实后端对象 vtable+0x28 和 +0x50 的方法身份必须由动态 vptr 或静态完整追踪确认。

## 3. 精确读写观察

运行时请对以下对象关系进行**只读观察**，不要猜固定 RAM 地址：

~~~text
main+0x0158D10C    首次初始化入口候选
main+0x0158D138    候选 104 字节原生数据体清零
main+0x0158D238    调用者传入 state 指针
   state+0x40      候选数据体起点
   state+0x40..43  候选 ID32 初始 4 字节
   state+0x44      版本候选
   state+0x45      性别默认值候选
   state+0x47      语言候选
     ↓ FUN_00F844F4 -> container
   container+0x08  index begin
   container+0x10  index end
   container+0x60  backend vptr
   container+0x80  mutex
   container+0xA0  mode byte
     ↓ Key 0xE3E89BD1
   MyStatus payload+0x00..03  ID32（已知存档结构）
~~~

每次断点至少记录：游戏和原版 ELF SHA、main base、PC/RVA、LR、X0..X7、SP、线程、调用前后读回、对象地址、vtable 地址、目标 4 字节和时间顺序。只读脚本只能记录内存与调用，不要为了实验在联网模式修改玩家 ID。

## 4. 生成器溯源的可证伪实验

1. 用离线测试存档，第一次创建时读取保存块 payload+0x00、记录 0→非 0 的第一处写入 PC。若写入发生在 FUN_0168D138 前，修正时序假设；若只在后续发生，追踪其来源。
2. 在真正写入 PC 处，倒追 Xn 寄存器值、LR 上游调用、被调用的随机值生产函数、seed 状态变化和是否存在重试逻辑。
3. 相同操作复验两次，比较不同新档生成 ID32、六位可见 ID、是否因 UI 选择时点而变化。不得基于单个样本归因。
4. 保存后完全退出进程，再打开读取相同 KMyStatus+0；验证持久化，不要把本地缓存成功当作真实 SaveData ACK。
5. 失败或取消创建案例核对是否写过 ID32、是否回滚，防止错误宣称“提交时才生成”。

## 5. 可复现的静态检查

~~~bash
sha256sum Unpack/4.0.0/exefs/scarlet_main/scarlet_main.elf
sha256sum Unpack/4.0.0/exefs/violet_main/violet_main.elf
python3 scripts/Trace-SV400-TrainerID.py . scarlet_main
python3 scripts/Trace-SV400-TrainerID.py . violet_main
~~~

原生发布工程恢复方法：

~~~bash
python3 tools/ghidra/sv/sv400_restore_split.py \
  --source Unpack/4.0.0/exefs/scarlet_main/ghidra12.2 \
  --out /tmp/sv400-scarlet
python3 tools/ghidra/sv/sv400_restore_split.py \
  --source Unpack/4.0.0/exefs/violet_main/ghidra12.2 \
  --out /tmp/sv400-violet
~~~

静态证据来自 [Actions #42950477990](https://github.com/969981/SV_Resources/actions/runs/42950477990) 与 [Actions #42951004888](https://github.com/969981/SV_Resources/actions/runs/42951004888)，已按朱/紫独立哈希核验。Ghidra C 是恢复伪代码，不是任天堂源码；内存中的对象身份/运行时 UI 行为仍为 NOT_OBSERVED。

## 6. 当前可下的最终结论

**已定位**训练家身份块 Key、数据体字段、初始化 C 代码、两个保存块方法的双 ELF AArch64 指令和至少一条直接调用者链。**尚未定位并验证**真正新建 ID32 的随机算法、种子、调用栈、首次写入点和持久化确认。该区分是任何修改器、RNG 导航或后续技术文档的最低证据标准。
