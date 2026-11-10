/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001631a0; name: FUN_001631a0
 */


long FUN_001631a0(long param_1,long param_2,long param_3,undefined4 param_4)

{
  uint *puVar1;
  int *piVar2;
  long *plVar3;
  uint *puVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  int *piVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  
  if (*(code **)PTR_DAT_047cb878 == (code *)0x0) {
    uVar6 = 0xffffffffffffffff;
  }
  else {
    uVar6 = (**(code **)PTR_DAT_047cb878)("LRM_FillMerge",0);
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  lVar10 = *(long *)(param_2 + 0x38);
  lVar12 = *(long *)(param_3 + 0x38);
  *(long *)(param_1 + 0x38) = lVar10;
  lVar12 = lVar12 - lVar10;
  lVar17 = *(long *)(param_3 + 0x48) + lVar12;
  *(long *)(param_1 + 0x48) = lVar17;
  if (0x7fffffff < lVar17) {
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_3 + 0x40);
    FUN_00164894(param_1 + 8,*(long *)(param_3 + 8),
                 *(long *)(param_3 + 8) + *(long *)(param_3 + 0x18) * 8);
    goto LAB_001634bc;
  }
  *(long *)(param_1 + 0x40) = lVar10;
  if (*(long *)(param_2 + 0x18) == 0) {
    lVar17 = 0;
    lVar10 = *(long *)(param_3 + 0x18);
    if (lVar10 != 0) goto LAB_0016326c;
LAB_00163284:
    iVar20 = 0;
    lVar10 = 0;
  }
  else {
    lVar17 = *(long *)(param_2 + 8);
    lVar10 = *(long *)(param_3 + 0x18);
    if (lVar10 == 0) goto LAB_00163284;
LAB_0016326c:
    iVar20 = (int)lVar10;
    lVar10 = *(long *)(param_3 + 8);
  }
  iVar18 = (int)*(long *)(param_2 + 0x18) + -1;
  uVar9 = *(ulong *)(param_1 + 0x18);
  uVar8 = (ulong)(iVar18 + iVar20);
  plVar3 = (long *)(param_1 + 8);
  if (uVar9 <= uVar8) {
    if ((*(ulong *)(param_1 + 0x10) < uVar8) && (lVar7 = FUN_0016443c(plVar3), lVar7 != 0)) {
      (**(code **)PTR_PTR_047cb898)();
    }
    uVar8 = (uVar8 - uVar9) + *(long *)(param_1 + 0x18);
  }
  *(ulong *)(param_1 + 0x18) = uVar8;
  if (uVar8 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *plVar3;
  }
  iVar13 = 0;
  uVar8 = 0;
  iVar14 = 0;
  iVar20 = iVar20 + -1;
  do {
    puVar1 = (uint *)(lVar17 + (long)iVar13 * 8);
    while( true ) {
      iVar11 = iVar14;
      uVar5 = *(uint *)(lVar10 + (-(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3));
      iVar19 = (int)lVar12;
      if (*puVar1 <= uVar5) break;
      iVar14 = (int)uVar8;
      puVar4 = (uint *)(lVar7 + (long)iVar11 * 8);
      *puVar4 = uVar5;
      uVar5 = iVar14 + 1;
      uVar8 = (ulong)uVar5;
      puVar4[1] = *(int *)(lVar10 + (long)iVar14 * 8 + 4) + iVar19;
      iVar14 = iVar11 + 1;
      if (iVar20 <= (int)uVar5) goto LAB_00163360;
    }
    iVar13 = iVar13 + 1;
    *(undefined8 *)(lVar7 + (long)iVar11 * 8) = *(undefined8 *)puVar1;
    iVar14 = iVar11 + 1;
  } while (iVar13 < iVar18);
LAB_00163360:
  iVar11 = iVar11 + 1;
  iVar14 = (int)uVar8;
  if (iVar14 < iVar20) {
    lVar12 = (long)iVar20 - (long)iVar14;
    piVar16 = (int *)(lVar10 + (long)iVar14 * 8 + 4);
    do {
      piVar2 = (int *)(lVar7 + (long)iVar11 * 8);
      iVar11 = iVar11 + 1;
      *piVar2 = piVar16[-1];
      lVar12 = lVar12 + -1;
      piVar2[1] = *piVar16 + iVar19;
      piVar16 = piVar16 + 2;
    } while (lVar12 != 0);
  }
  if (iVar13 < iVar18) {
    uVar8 = (ulong)iVar13;
    uVar9 = ~uVar8;
    if ((iVar18 - iVar13 & 1U) != 0) {
      lVar10 = uVar8 * 8;
      uVar8 = uVar8 + 1;
      *(undefined8 *)(lVar7 + (long)iVar11 * 8) = *(undefined8 *)(lVar17 + lVar10);
      iVar11 = iVar11 + 1;
    }
    if (uVar9 + (long)iVar18 != 0) {
      lVar10 = (long)iVar18 - uVar8;
      puVar15 = (undefined8 *)(lVar17 + uVar8 * 8 + 8);
      do {
        *(undefined8 *)(lVar7 + (long)iVar11 * 8) = puVar15[-1];
        iVar20 = iVar11 + 1;
        iVar11 = iVar11 + 2;
        lVar10 = lVar10 + -2;
        *(undefined8 *)(lVar7 + (long)iVar20 * 8) = *puVar15;
        puVar15 = puVar15 + 2;
      } while (lVar10 != 0);
    }
  }
  uVar9 = *(ulong *)(param_1 + 0x18);
  uVar8 = (ulong)iVar11;
  if (uVar9 <= uVar8) {
    if ((*(ulong *)(param_1 + 0x10) < uVar8) &&
       (lVar10 = FUN_0016443c(plVar3,uVar8,uVar9), lVar10 != 0)) {
      (**(code **)PTR_PTR_047cb898)();
    }
    uVar8 = (uVar8 - uVar9) + *(long *)(param_1 + 0x18);
  }
  *(ulong *)(param_1 + 0x18) = uVar8;
  if (*(ulong *)(param_1 + 0x10) < uVar8 + 1) {
    lVar10 = FUN_0016443c(plVar3);
    *(undefined8 *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x18) * 8) =
         *(undefined8 *)(lVar17 + (long)iVar18 * 8);
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
    if (lVar10 != 0) {
      (**(code **)PTR_PTR_047cb898)();
    }
  }
  else {
    *(undefined8 *)(*(long *)(param_1 + 8) + uVar8 * 8) = *(undefined8 *)(lVar17 + (long)iVar18 * 8)
    ;
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  }
  FUN_001629f0(param_1);
LAB_001634bc:
  FUN_00162bb0(param_1,param_4);
  if (*(code **)PTR_DAT_047cb880 != (code *)0x0) {
    (**(code **)PTR_DAT_047cb880)(uVar6);
  }
  return param_1;
}


