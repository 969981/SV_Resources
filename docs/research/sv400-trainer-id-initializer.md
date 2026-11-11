---
title: SV 4.0.0 MyStatus 原生初始化器
tags: [SV, ELF, Ghidra, TrainerID, Obsidian]
updated: 2026-11-11
status: STATIC_CONFIRMED
---

# FUN_0168D138：初始训练家数据区写入及 ID32 清零

总览 [[sv400-new-save-trainer-id-elf]]；原生汇编 [[sv400-trainer-id-native-asm]]。

> [!important] 双 ELF 的新增发现
> FUN_0168D138 对输入对象 +0x40 起连续 0x68 字节执行 memset(...,0,0x68)，其中候选 ID32 是起始 4 字节。在该函数内没有赋予 ID32 非零随机值的明显操作。结合 FUN_0168D238 将 +0x40 数据交给 KMyStatus 的静态证据，可提出强候选：**先建立空白训练家记录，再由别处写 ID32**。是否真在首次新建游戏时执行，需要实机验证。

## 1. 两版实际 Ghidra C 的逐语句解释

~~~c
void FUN_0168d138(long param_1) {
    undefined1 uVar1;

    memset((void *)(param_1 + 0x40), 0, 0x68);
    // 清空 104 字节候选 MyStatus 数据体，包含其 +0x00 ID32

    uVar1 = FUN_0168d1b0();
    // 读取 DAT_048420A8 低字节
    *(undefined1 *)(param_1 + 0x44) = uVar1;
    // 源体 +0x04：和 MyStatus.Game 的偏移一致

    uVar1 = FUN_0168d1c0();
    // 读取另一运行时对象的一个字节
    *(undefined8 *)(param_1 + 0x50) = 0;
    // 源体 +0x10 起清零（OT 名称区）
    *(undefined8 *)(param_1 + 0x58) = 0;
    // 源体 +0x18 起清零（OT 名称区）
    *(undefined1 *)(param_1 + 0x47) = uVar1;
    // 源体 +0x07：和 MyStatus.Language 偏移一致
    *(undefined1 *)(param_1 + 0x45) = 1;
    // 源体 +0x05：Gender 偏移，1 的枚举语义尚未恢复

    *(undefined4 *)(param_1 + 0x6c) = 0;
    // 源体 +0x2C
    *(undefined8 *)(param_1 + 0x60) = 0;
    // 源体 +0x20
    *(undefined2 *)(param_1 + 0x68) = 0;
    // 源体 +0x28
    *(undefined4 *)(param_1 + 0x78) = 1;
    // 源体 +0x38；真正语义 UNKNOWN
    *(undefined1 *)(param_1 + 0xa3) = 0;
    // 源体 +0x63
    *(undefined8 *)(param_1 + 0x7c) = 0;
    // 源体 +0x3C
    *(undefined8 *)(param_1 + 0x84) = 0;
    // 源体 +0x44
    *(undefined8 *)(param_1 + 0x8c) = 0;
    // 源体 +0x4C
    *(undefined8 *)(param_1 + 0x92) = 0;
    // 源体 +0x52
    return;
}
~~~

该代码与两个独立反编译文件一致：
[Scarlet](../../Unpack/4.0.0/exefs/scarlet_main/ghidra12.2/c/0168d138.c) /
[Violet](../../Unpack/4.0.0/exefs/violet_main/ghidra12.2/c/0168d138.c)。

## 2. 原生上游及参数数量异常

~~~c
// FUN_0168D10C
void FUN_0168d10c(undefined8 param_1) {
    DAT_04840ac0 = param_1;
    FUN_0168d138();
    FUN_0168d238(param_1);
}
// FUN_0168D1B0
undefined4 FUN_0168d1b0(void) {
    return DAT_048420a8;
}
// FUN_0168D1C0
undefined1 FUN_0168d1c0(void) {
    // __cxa_guard_acquire 等单例初始化细节略
    lVar2 = *(long *)PTR_DAT_047d8a00;
    return *(undefined1 *)(lVar2 + 0x2c);
}
~~~

**Ghidra ABI 异常**：上游 FUN_0168D10C 调用 FUN_0168D138() 时未显示参数；但被调函数自身签名有 long param_1。必须直接看原始 ARM64 的 X0 传值，不能由两个不一致的 C 原型断言实际是无参或有参。DAT_048420A8 来源的版本值与动态 +0x2C 来源语言，都需要检查上游赋值者和运行时实证。

## 3. 待验证的精确写入时间线

~~~text
FUN_0168D10C
 -> FUN_0168D138 : 把候选 MyStatus 104 字节清零
 -> FUN_0168D238 : 按 0xE3E89BD1 创建/更新候选记录
 ? -> 真正生成/写入 ID32 的函数尚未定位
 ? -> 游戏保存完成及读回尚未定位
~~~

关键下一步：监视对象 +0x40 起 4 字节第一次从 0 变化的时刻、对应指令 PC/LR 和 RNG 返回值；同时确认这就是运行时 KMyStatus payload 而不是一个临时拷贝。请勿将 FUN_0168D138 命名为 RNG 函数，也不要把初始化后的零值误读成最终训练家 ID。
