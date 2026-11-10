/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a64f20; name: FUN_00a64f20
 */


void FUN_00a64f20(uint *param_1,ushort *param_2,int param_3)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  
  puVar5 = PTR_DAT_047d4c98;
  uVar2 = *param_2;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  puVar7 = PTR_DAT_047d4ca8;
  puVar6 = PTR_DAT_047d4ca0;
  lVar14 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar14;
  plVar1 = *(long **)(lVar14 + 0x1c8);
  plVar4 = *(long **)(lVar14 + 0x1c0);
  do {
    if (plVar4 == plVar1) goto LAB_00a64fa8;
    lVar14 = *plVar4;
    uVar10 = FUN_00a669dc(lVar14 + 0x28);
    plVar4 = plVar4 + 1;
  } while ((uVar10 & 1) == 0);
  if (uVar2 < 0x402) {
    lVar14 = lVar14 + 0x28 + (ulong)uVar2 * 0x20;
    uVar13 = *(uint *)(lVar14 + 0x2c);
    uVar11 = *(uint *)(lVar14 + 0x30);
    uVar12 = *(uint *)(lVar14 + 0x34);
  }
  else {
LAB_00a64fa8:
    uVar13 = 0;
    uVar11 = 0;
    uVar12 = 0;
  }
  if (((param_3 != 2) && (uVar12 = uVar11, param_3 != 1)) && (uVar12 = uVar13, param_3 != 0)) {
    uVar12 = 0;
  }
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  bVar8 = false;
  param_1[5] = 3;
  uVar2 = *param_2;
  uVar3 = param_2[(long)param_3 + 2];
  param_1[2] = uVar12 & 0xff;
  param_1[3] = uVar12 >> 8 & 0xff;
  *(bool *)(param_1 + 4) = (uVar12 & 0xff0000) != 0;
  *param_1 = (uint)uVar2;
  param_1[1] = (uint)uVar3;
  if ((uVar12 & 0xff) < 0x20) {
    if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    lVar14 = *(long *)puVar6;
    *(long *)puVar7 = lVar14;
    plVar1 = *(long **)(lVar14 + 0x1c8);
    plVar4 = *(long **)(lVar14 + 0x1c0);
    do {
      if (plVar4 == plVar1) goto LAB_00a65074;
      lVar14 = *plVar4;
      uVar10 = FUN_00a669dc(lVar14 + 0x28);
      plVar4 = plVar4 + 1;
    } while ((uVar10 & 1) == 0);
    if (uVar2 < 0x402) {
      uVar13 = *(uint *)(lVar14 + 0x28 + (ulong)uVar2 * 0x20 + 0x24);
    }
    else {
LAB_00a65074:
      uVar13 = 0;
    }
    bVar8 = (uVar13 >> (ulong)(uVar12 & 0x1f) & 1) == 0;
  }
  *(bool *)((long)param_1 + 0x11) = bVar8;
  uVar10 = FUN_00a65174(param_2,param_3,0);
  uVar13 = 0;
  if ((uVar10 & 1) == 0) {
    uVar13 = 1;
    uVar10 = FUN_00a65174(param_2,param_3,1);
    if ((uVar10 & 1) == 0) {
      uVar13 = 2;
      uVar10 = FUN_00a65174(param_2,param_3,2);
      if ((uVar10 & 1) == 0) {
        return;
      }
    }
  }
  param_1[5] = uVar13;
  return;
}


