/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a6468c; name: FUN_00a6468c
 */


void FUN_00a6468c(ushort *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  long *plVar2;
  ushort uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  puVar5 = PTR_DAT_047d4c98;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  puVar7 = PTR_DAT_047d4ca8;
  puVar6 = PTR_DAT_047d4ca0;
  lVar10 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar10;
  plVar2 = *(long **)(lVar10 + 0x1c8);
  plVar4 = *(long **)(lVar10 + 0x1c0);
  do {
    if (plVar4 == plVar2) {
      return;
    }
    lVar10 = *plVar4;
    uVar9 = FUN_00a669dc(lVar10 + 0x28);
    plVar4 = plVar4 + 1;
  } while ((uVar9 & 1) == 0);
  uVar3 = *param_1;
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar11 = *(long *)puVar6;
  *(long *)puVar7 = lVar11;
  plVar2 = *(long **)(lVar11 + 0x1c8);
  plVar4 = *(long **)(lVar11 + 0x1c0);
  do {
    if (plVar4 == plVar2) goto LAB_00a64754;
    lVar11 = *plVar4;
    uVar9 = FUN_00a669dc(lVar11 + 0x28);
    plVar4 = plVar4 + 1;
  } while ((uVar9 & 1) == 0);
  if (uVar3 < 0x402) {
    lVar11 = lVar11 + 0x28 + (ulong)uVar3 * 0x20;
    uVar13 = *(undefined8 *)(lVar11 + 0x18);
    uVar14 = *(uint *)(lVar11 + 0x20);
    uVar12 = *(undefined8 *)(lVar11 + 0x24);
    uVar15 = *(uint *)(lVar11 + 0x2c);
    uVar16 = *(uint *)(lVar11 + 0x30);
    uVar17 = *(uint *)(lVar11 + 0x34);
  }
  else {
LAB_00a64754:
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
  }
  if ((param_3 & 0xff) < 0x20) {
    uVar1 = param_3 & 0xff | (param_4 & 0xff) << 8;
    if (param_2 == 2) {
      uVar17 = uVar1;
    }
    else if (param_2 == 1) {
      uVar16 = uVar1;
    }
    else if (param_2 == 0) {
      uVar15 = uVar1;
    }
    if ((ulong)*param_1 < 0x402) {
      lVar10 = lVar10 + (ulong)*param_1 * 0x20;
      *(undefined8 *)(lVar10 + 0x40) = uVar13;
      *(uint *)(lVar10 + 0x48) = uVar14 | 1 << (ulong)(param_3 & 0x1f);
      *(undefined8 *)(lVar10 + 0x4c) = uVar12;
      *(uint *)(lVar10 + 0x54) = uVar15;
      *(uint *)(lVar10 + 0x58) = uVar16;
      *(uint *)(lVar10 + 0x5c) = uVar17;
    }
  }
  return;
}


