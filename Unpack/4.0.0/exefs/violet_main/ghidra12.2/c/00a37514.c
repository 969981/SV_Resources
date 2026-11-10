/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a37514; name: FUN_00a37514
 */


void FUN_00a37514(undefined1 *param_1)

{
  long *plVar1;
  long *plVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  
  *param_1 = 0;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar6 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar6;
  plVar1 = *(long **)(lVar6 + 0x1c8);
  plVar2 = *(long **)(lVar6 + 0x1c0);
  do {
    if (plVar2 == plVar1) {
      return;
    }
    lVar6 = *plVar2;
    uVar5 = FUN_00a371b8(lVar6 + 0x28);
    plVar2 = plVar2 + 1;
  } while ((uVar5 & 1) == 0);
  uVar3 = FUN_00b0e9ac();
  if ((uVar3 < 0x100) || ((uVar3 & 0xff) == 0)) {
    param_1[0x2c] = 1;
    if (((*PTR_DAT_047d62a0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d62a0), iVar4 != 0)) {
      FUN_00100190(&LAB_00b12850,PTR_DAT_047d62a8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d62a0);
    }
    lVar6 = *(long *)PTR_DAT_047d62a8;
    *(long *)PTR_DAT_047d62b0 = lVar6;
    if (lVar6 != 0) {
      FUN_00b0ddac();
    }
  }
  else {
    FUN_02adc838(0x3f800000,lVar6,0xe,0xffffffff,0xffffffff,0,0,0);
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
  return;
}


