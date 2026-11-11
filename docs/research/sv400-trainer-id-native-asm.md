---
title: SV 4.0.0 TrainerID 双 ELF ARM64 原生汇编及指针链
tags: [SV, ELF, ARM64, Ghidra, Obsidian, TrainerID]
status: STATIC_CONFIRMED_NO_RUNTIME
updated: 2026-11-11
---

# 朱紫：KMyStatus 原生汇编逐行注释

主索引 [[sv400-new-save-trainer-id-elf]]；下一步 [[sv400-trainer-id-validation]]。

> [!warning] 正确地址空间
> 下列左列数字取自真实 ELF PT_LOAD 的 p_vaddr（main RVA）；要进入 Ghidra，全部加 0x100000；要在游戏运行时断点，使用 main 模块装载基址 + RVA。文件偏移还要加 0x8D8（第一可执行段）。不能把三个空间互换。

## 1. 来源及双版本字节对账

- 朱 ELF SHA256 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
- 紫 ELF SHA256 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
- 只读 CI [Actions #42951004888](https://github.com/969981/SV_Resources/actions/runs/42951004888) 使用 Capstone 5.0.6 从原始 ELF 机器码解码，两个以下窗口的字节与汇编在朱紫完全相同。
- 可执行 PT_LOAD：文件偏移起点 0x8D8，p_vaddr 起点 0，p_filesz 0x343FC90。
- 第一处 Key：ELF fileoffset 0x158DB98 → ELF RVA 0x158D2C0 → Ghidra VA 0x168D2C0，位于 FUN_0168D238。
- 第二处 Key：ELF fileoffset 0x1FF9654 → RVA 0x1FF8D7C → Ghidra VA 0x20F8D7C，位于 FUN_020F8D00。

## 2. FUN_0168D238（两版同字节）的真实指令

~~~asm
; 左列是 main RVA，非 Ghidra VA；右列均已对照 ELF machine bytes
0158D2B4 90dce397  bl    #0xe844f4
; 调用 FUN_00F844F4 对应的 main+0xE844F4，结果返回 X0（容器指针候选）
0158D2B8 13000291  add   x19, x0, #0x80
; X19 = container+0x80：互斥锁对象
0158D2BC f40300aa  mov   x20, x0
; X20 = container
0158D2C0 287a9352  mov   w8, #0x9bd1
; 构造 KMyStatus 的低 16 位
0158D2C4 087dbc72  movk  w8, #0xe3e8, lsl #16
; W8 = 0xE3E89BD1，KMyStatus 完整 32 位 Key
0158D2C8 e80300b9  str   w8, [sp]
; 局部栈中保存查询 Key，不是 ID32 写入！
0158D2CC e00313aa  mov   x0, x19
; X0 = mutex 指针
0158D2D0 1cbc7a94  bl    #0x343c340
; nn::os::LockMutex 的目标地址候选；静态 Ghidra C 印证
0158D2D4 88820291  add   x8, x20, #0xa0
; X8 = container+0xA0
0158D2D8 08fddf08  ldarb w8, [x8]
; 读取 1 byte 状态位
0158D2DC a8150037  tbnz  w8, #0, #0x158d590
; 如果 bit0=1，转入另一条处理分支
0158D2E0 e00313aa  mov   x0, x19
; 正常路径再次传入 mutex
0158D2E8 16bc7a94  bl    #0x343c340
; 二次加锁：是否为递归锁或嵌套模式尚待核对
0158D2EC 88de40a9  ldp   x8, x23, [x20, #8]
; X8 = container+0x08 起始指针，X23 = container+0x10 结束指针
0158D2F0 ed0208cb  sub   x13, x23, x8
; 计算索引所占字节数
0158D2F4 bf0500f1  cmp   x13, #1
; 判断索引是否为空/不足；不等于新建 ID
0158D2F8 4b020054  b.lt  #0x158d340
; 空列表走单独分支
0158D2FC ea0340b9  ldr   w10, [sp]
; 重新取回 0xE3E89BD1 键
~~~

> [!important] 反误判
> 这里的 STR W8,[SP] 只是在堆栈中写**SCBlock Key**，绝不是写入训练家的 ID32。真实的 ID32 应在确定 payload 指针后对 +0x00 写入；本函数窗口尚未揭示这一步。

## 3. FUN_020F8D00（两版同字节）的真实指令

~~~asm
01FF8D70 e12dba97  bl    #0xe844f4
; 取得 container，X0 为返回值
01FF8D74 14000291  add   x20, x0, #0x80
; X20 = mutex
01FF8D78 f30300aa  mov   x19, x0
; X19 = container
01FF8D7C 287a9352  mov   w8, #0x9bd1
; Key 低 16 位
01FF8D80 087dbc72  movk  w8, #0xe3e8, lsl #16
; W8 = 0xE3E89BD1
01FF8D84 a81b00b9  str   w8, [x29, #0x18]
; 保存在栈帧，不是 ID32 payload 写入
01FF8D88 e00314aa  mov   x0, x20
; mutex 参数
01FF8D8C 6d0d5194  bl    #0x343c340
; 锁操作
01FF8D90 603240f9  ldr   x0, [x19, #0x60]
; 取出回调/存储后端对象指针
01FF8D94 a00000b4  cbz   x0, #0x1ff8da8
; 若回调对象为空，跳过
01FF8D98 080040f9  ldr   x8, [x0]
; 获取对象 vtable 指针
01FF8D9C a1630091  add   x1, x29, #0x18
; X1 = &local Key
01FF8DA0 081540f9  ldr   x8, [x8, #0x28]
; 取 vtable+0x28 方法指针
01FF8DA4 00013fd6  blr   x8
; 间接调用：真实目标取决于运行时对象 vptr
01FF8DA8 e00314aa  mov   x0, x20
; mutex
01FF8DAC 650d5194  bl    #0x343c340
; 锁操作
01FF8DB0 68da40a9  ldp   x8, x22, [x19, #8]
; 从 container+0x08/+0x10 获取索引界
01FF8DB4 cd0208cb  sub   x13, x22, x8
; 计算索引跨度
01FF8DBC 4b020054  b.lt  #0x1ff8e04
; 跳向空索引路径
01FF8DC0 aa1b40b9  ldr   w10, [x29, #0x18]
; 再次取得 KMyStatus Key
~~~

## 4. 同版本反编译 C 与函数调用者

原始文件：
- [朱 0168d238.c](../../Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/0168d238.c) ／ [紫 0168d238.c](../../Unpack/4.0.0/exefs/violet_main/ghidra12.2/c/0168d238.c)
- [朱 020f8d00.c](../../Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/020f8d00.c) ／ [紫 020f8d00.c](../../Unpack/4.0.0/exefs/violet_main/ghidra12.2/c/020f8d00.c)
- [朱 0168d10c.c](../../Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/0168d10c.c) ／ [紫 0168d10c.c](../../Unpack/4.0.0/exefs/violet_main/ghidra12.2/c/0168d10c.c)

~~~c
// 双版本反编译直调结构
void FUN_0168d10c(undefined8 param_1) {
    DAT_04840AC0 = param_1;  // 注册到全局
    FUN_0168d138();          // 待恢复语义
    FUN_0168d238(param_1);   // MyStatus 块创建/更新候选
}
~~~

对于 FUN_0168D238，Ghidra C 还有：

~~~c
pMVar1 = (MutexType *)(lVar11 + 0x80); // mutex
local_160[0] = 0xe3e89bd1;             // MyStatus key
FUN_015d0cb8(&local_88, lVar11, local_160, 0x6d);
// 找不到记录时的分支；0x6D 长度与数据体 0x68 相差 5
uVar15 = FUN_015d05bc(&local_e0, param_1 + 0x40, 0x68);
// 处理源对象的 +0x40 缓冲区、0x68 字节
~~~

需要独立核对 5 字节是否真为 SCBlock header；不能将“0x68 是训练家 block 的字节长度”扩大成对序列化头的证明。

## 5. 指针链及相对偏移

~~~text
Ghidra 静态符号 PTR_DAT_047D4CA0
  -> 读取指针 -> FUN_00F844F4(global, context)
  -> X0 / container (运行时堆地址 UNKNOWN)
       +0x08  记录索引起点候选
       +0x10  记录索引结束候选
       +0x40  存储辅助对象
       +0x60  backend 对象指针 -> vtable+0x28/+0x50 等间接目标
       +0x80  Mutex（有原生 LockMutex 证据）
       +0xA0  模式标志 bit0
    -> Key = 0xE3E89BD1，查询得到记录
    -> payload pointer（当前 UNKNOWN）
    -> payload+0x00 = ID32（PKHeX 结构已证）
~~~

所有运行时指针需由 guest 实际 X0 和 vtable 读回确认；以上不是可直接用于金手指的固定地址。参见 [[sv400-trainer-id-validation]]。
