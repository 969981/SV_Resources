/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a64c54; name: FUN_00a64c54
 */


undefined8 FUN_00a64c54(ushort *param_1,uint param_2)

{
  long *plVar1;
  ushort uVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  
  uVar2 = *param_1;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar8 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar8;
  plVar1 = *(long **)(lVar8 + 0x1c8);
  plVar3 = *(long **)(lVar8 + 0x1c0);
  do {
    if (plVar3 == plVar1) goto LAB_00a64cd0;
    lVar8 = *plVar3;
    uVar5 = FUN_00a669dc(lVar8 + 0x28);
    plVar3 = plVar3 + 1;
  } while ((uVar5 & 1) == 0);
  if (uVar2 < 0x402) {
    lVar8 = lVar8 + 0x28 + (ulong)uVar2 * 0x20;
    uVar10 = (uint)*(byte *)(lVar8 + 0x2c);
    uVar7 = (uint)*(byte *)(lVar8 + 0x30);
    uVar9 = (uint)*(byte *)(lVar8 + 0x34);
  }
  else {
LAB_00a64cd0:
    uVar10 = 0;
    uVar7 = 0;
    uVar9 = 0;
  }
  if ((((param_2 != 0) && (uVar10 = uVar9, param_2 != 2)) && (uVar10 = uVar7, param_2 != 1)) ||
     ((0x1f < uVar10 ||
      ((*(uint *)(param_1 + (ulong)param_2 * 2 + 6) >> (ulong)(uVar10 & 0x1f) & 1) == 0)))) {
    return 0;
  }
  uVar7 = 0;
  if ((*param_1 & 0xfffe) != 0x298 && *param_1 != 0x2e8) {
    uVar7 = uVar10;
  }
  uVar5 = FUN_00a65d24(param_1,0,uVar7);
  if ((uVar5 & 1) == 0) {
    uVar7 = 0;
    if ((*param_1 & 0xfffe) != 0x298 && *param_1 != 0x2e8) {
      uVar7 = uVar10;
    }
    uVar5 = FUN_00a65d24(param_1,1,uVar7);
    if ((uVar5 & 1) == 0) {
      uVar7 = 0;
      if ((*param_1 & 0xfffe) != 0x298 && *param_1 != 0x2e8) {
        uVar7 = uVar10;
      }
      uVar5 = FUN_00a65d24(param_1,2,uVar7);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
    }
  }
  uVar6 = FUN_00a64e28(param_1,uVar10);
  return uVar6;
}


