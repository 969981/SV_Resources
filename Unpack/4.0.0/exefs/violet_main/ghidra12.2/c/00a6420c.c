/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a6420c; name: FUN_00a6420c
 */


void FUN_00a6420c(ushort *param_1,uint param_2)

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long *plVar16;
  long *plVar15;
  uint uVar17;
  ulong uVar18;
  byte *pbVar19;
  
  pbVar19 = PTR_DAT_047d4c98;
  uVar2 = *param_1;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  puVar5 = PTR_DAT_047d4ca8;
  puVar4 = PTR_DAT_047d4ca0;
  lVar9 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar9;
  plVar1 = *(long **)(lVar9 + 0x1c8);
  plVar15 = *(long **)(lVar9 + 0x1c0);
  do {
    if (plVar15 == plVar1) goto LAB_00a64290;
    lVar9 = *plVar15;
    uVar7 = FUN_00a669dc(lVar9 + 0x28);
    plVar15 = plVar15 + 1;
  } while ((uVar7 & 1) == 0);
  if (uVar2 < 0x402) {
    lVar9 = lVar9 + 0x28 + (ulong)uVar2 * 0x20;
    uVar7 = (ulong)*(uint *)(lVar9 + 0x2c);
    uVar18 = (ulong)*(uint *)(lVar9 + 0x30);
    uVar11 = (ulong)*(uint *)(lVar9 + 0x34);
  }
  else {
LAB_00a64290:
    uVar7 = 0;
    uVar18 = 0;
    uVar11 = 0;
  }
  if ((param_2 != 2) && (uVar11 = uVar18, param_2 != 1)) {
    if (param_2 == 0) {
      uVar11 = uVar7;
    }
    else {
      uVar11 = 0;
    }
  }
  if (((*pbVar19 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar9 = *(long *)puVar4;
  *(long *)puVar5 = lVar9;
  plVar1 = *(long **)(lVar9 + 0x1c8);
  if (*(long **)(lVar9 + 0x1c0) != plVar1) {
    uVar12 = (uint)(uVar11 >> 0x10);
    plVar15 = *(long **)(lVar9 + 0x1c0);
    do {
      plVar16 = plVar15 + 1;
      uVar7 = FUN_00a669dc(*plVar15 + 0x28);
      if ((uVar7 & 1) != 0) {
        uVar2 = *param_1;
        if (((*pbVar19 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d4c98);
        }
        lVar9 = *(long *)puVar4;
        *(long *)puVar5 = lVar9;
        plVar1 = *(long **)(lVar9 + 0x1c8);
        plVar15 = *(long **)(lVar9 + 0x1c0);
        goto joined_r0x00a6431c;
      }
      plVar15 = plVar16;
    } while (plVar1 != plVar16);
  }
  goto LAB_00a643a8;
  while( true ) {
    lVar9 = *plVar15;
    uVar7 = FUN_00a669dc(lVar9 + 0x28);
    plVar15 = plVar15 + 1;
    if ((uVar7 & 1) != 0) break;
joined_r0x00a6431c:
    if (plVar15 == plVar1) goto LAB_00a64344;
  }
  if (uVar2 < 0x402) {
    lVar9 = lVar9 + 0x28 + (ulong)uVar2 * 0x20;
    uVar13 = *(uint *)(lVar9 + 0x18);
    uVar14 = *(uint *)(lVar9 + 0x1c);
    uVar10 = (uint)*(byte *)(lVar9 + 0x2a);
    uVar8 = (uint)*(byte *)(lVar9 + 0x2b);
  }
  else {
LAB_00a64344:
    uVar13 = 0;
    uVar14 = 0;
    uVar10 = 0;
    uVar8 = 0;
  }
  pbVar19 = PTR_DAT_047d4c98;
  if (param_2 < 3) {
    uVar17 = (uint)uVar11;
    uVar7 = (ulong)(uVar17 & 0xff);
    if (((((uVar17 & 0xff) < 0x20) &&
         (uVar3 = 1 << (ulong)(uVar17 & 0x1f),
         (*(uint *)(param_1 + (ulong)param_2 * 2 + 6) & uVar3) != 0)) &&
        (((uVar14 | uVar13) & uVar3) != 0)) &&
       (((uVar10 >> (ulong)(uVar17 >> 8 & 0x1f) & 1) != 0 &&
        ((uVar8 >> (ulong)(uVar12 & 0x1f) & 1) != 0)))) goto LAB_00a64510;
  }
LAB_00a643a8:
  if (((*pbVar19 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar9 = *(long *)puVar4;
  *(long *)puVar5 = lVar9;
  plVar1 = *(long **)(lVar9 + 0x1c8);
  plVar15 = *(long **)(lVar9 + 0x1c0);
  do {
    if (plVar15 == plVar1) {
      uVar13 = 0;
      uVar12 = 0;
      uVar7 = 0;
      goto LAB_00a644f8;
    }
    uVar7 = FUN_00a669dc(*plVar15 + 0x28);
    plVar15 = plVar15 + 1;
  } while ((uVar7 & 1) == 0);
  uVar2 = *param_1;
  if (((*pbVar19 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar9 = *(long *)puVar4;
  *(long *)puVar5 = lVar9;
  plVar1 = *(long **)(lVar9 + 0x1c8);
  plVar15 = *(long **)(lVar9 + 0x1c0);
  do {
    if (plVar15 == plVar1) goto LAB_00a64468;
    lVar9 = *plVar15;
    uVar7 = FUN_00a669dc(lVar9 + 0x28);
    plVar15 = plVar15 + 1;
  } while ((uVar7 & 1) == 0);
  if (uVar2 < 0x402) {
    lVar9 = lVar9 + 0x28 + (ulong)uVar2 * 0x20;
    uVar12 = *(uint *)(lVar9 + 0x18);
    uVar13 = *(uint *)(lVar9 + 0x1c);
    uVar10 = (uint)*(byte *)(lVar9 + 0x2a);
    uVar14 = (uint)*(byte *)(lVar9 + 0x2b);
  }
  else {
LAB_00a64468:
    uVar12 = 0;
    uVar13 = 0;
    uVar10 = 0;
    uVar14 = 0;
  }
  if (((byte)param_1[1] != 0) && (param_2 < 3)) {
    uVar7 = 0;
    do {
      uVar8 = (uint)uVar7;
      if (((uVar8 < 0x20) &&
          (uVar17 = 1 << (ulong)(uVar8 & 0x1f), (uVar17 & (uVar13 | uVar12)) != 0)) &&
         ((*(uint *)(param_1 + (ulong)param_2 * 2 + 6) & uVar17) != 0)) goto LAB_00a644cc;
      uVar7 = (ulong)(uVar8 + 1);
    } while ((uint)(byte)param_1[1] != uVar8 + 1);
  }
  uVar7 = 0;
LAB_00a644cc:
  uVar13 = (uVar10 & 4) << 7;
  if ((uVar10 & 2) != 0) {
    uVar13 = 0x100;
  }
  uVar12 = 0;
  if ((uVar10 & 1) == 0) {
    uVar12 = uVar13;
  }
  uVar13 = 0;
  if ((uVar14 & 1) == 0) {
    uVar13 = (uVar14 & 2) << 0xf;
  }
LAB_00a644f8:
  uVar17 = uVar12 | uVar13 | (uint)uVar7;
  uVar12 = uVar17 >> 0x10;
  uVar11 = uVar7;
LAB_00a64510:
  FUN_00a63fb0(param_1,param_2,uVar7,uVar17 >> 8 & 0xff,(uVar12 & 0xff) == 1,uVar11 >> 0x18);
  return;
}


