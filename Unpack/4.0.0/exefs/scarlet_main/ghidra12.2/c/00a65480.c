/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a65480; name: FUN_00a65480
 */


undefined1  [16] FUN_00a65480(ushort *param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  ushort uVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  uVar3 = *param_1;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar7 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar7;
  plVar2 = *(long **)(lVar7 + 0x1c8);
  plVar4 = *(long **)(lVar7 + 0x1c0);
  do {
    if (plVar4 == plVar2) goto LAB_00a654fc;
    lVar7 = *plVar4;
    uVar6 = FUN_00a669dc(lVar7 + 0x28);
    plVar4 = plVar4 + 1;
  } while ((uVar6 & 1) == 0);
  if (uVar3 < 0x402) {
    lVar7 = lVar7 + 0x28 + (ulong)uVar3 * 0x20;
    uVar6 = (ulong)*(uint *)(lVar7 + 0x2c);
    uVar8 = (ulong)*(uint *)(lVar7 + 0x30);
    uVar9 = (ulong)*(uint *)(lVar7 + 0x34);
  }
  else {
LAB_00a654fc:
    uVar6 = 0;
    uVar8 = 0;
    uVar9 = 0;
  }
  if ((param_2 != 2) && (uVar9 = uVar8, param_2 != 1)) {
    if (param_2 == 0) {
      uVar9 = uVar6;
    }
    else {
      uVar9 = 0;
    }
  }
  uVar3 = *param_1;
  uVar1 = (uint)uVar9 & 0xff;
  uVar6 = FUN_00a65ebc((ulong)uVar3,uVar1,uVar9 >> 8,(uVar9 & 0xff0000) != 0);
  auVar10._8_8_ = uVar6 & 0xffffffff;
  auVar10._0_8_ = (ulong)uVar3 | (ulong)uVar1 << 0x20;
  return auVar10;
}


