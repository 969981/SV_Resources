/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052e420; name: FUN_0052e420
 */


undefined1  [16] FUN_0052e420(long param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  auVar2._8_8_ = (ulong)*(byte *)(param_1 + 2) * 0x4000 + (param_2 & 0xffffffff) + -0x4000;
  if (-1 < (char)*(byte *)(param_1 + 2)) {
    auVar2._0_8_ = param_1 + 3;
    return auVar2;
  }
  auVar3._8_8_ = auVar2._8_8_ + (ulong)*(byte *)(param_1 + 3) * 0x200000 + -0x200000;
  if (-1 < (char)*(byte *)(param_1 + 3)) {
    auVar3._0_8_ = param_1 + 4;
    return auVar3;
  }
  lVar1 = auVar3._8_8_ + (ulong)*(byte *)(param_1 + 4) * 0x10000000 + -0x10000000;
  if (-1 < (char)*(byte *)(param_1 + 4)) {
    auVar4._8_8_ = lVar1;
    auVar4._0_8_ = param_1 + 5;
    return auVar4;
  }
  lVar1 = lVar1 + ((ulong)*(byte *)(param_1 + 5) << 0x23) + -0x800000000;
  if (-1 < (char)*(byte *)(param_1 + 5)) {
    auVar5._8_8_ = lVar1;
    auVar5._0_8_ = param_1 + 6;
    return auVar5;
  }
  lVar1 = lVar1 + ((ulong)*(byte *)(param_1 + 6) << 0x2a) + -0x40000000000;
  if (-1 < (char)*(byte *)(param_1 + 6)) {
    auVar6._8_8_ = lVar1;
    auVar6._0_8_ = param_1 + 7;
    return auVar6;
  }
  lVar1 = lVar1 + ((ulong)*(byte *)(param_1 + 7) << 0x31) + -0x2000000000000;
  if (-1 < (char)*(byte *)(param_1 + 7)) {
    auVar7._8_8_ = lVar1;
    auVar7._0_8_ = param_1 + 8;
    return auVar7;
  }
  lVar1 = lVar1 + ((ulong)*(byte *)(param_1 + 8) << 0x38) + -0x100000000000000;
  if (-1 < (char)*(byte *)(param_1 + 8)) {
    auVar8._8_8_ = lVar1;
    auVar8._0_8_ = param_1 + 9;
    return auVar8;
  }
  if (*(char *)(param_1 + 9) < 0) {
    return ZEXT816(0);
  }
  auVar9._8_8_ = lVar1 + ((ulong)(uint)~(int)*(char *)(param_1 + 9) << 0x3f);
  auVar9._0_8_ = param_1 + 10;
  return auVar9;
}


