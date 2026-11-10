/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03060294; name: FUN_03060294
 */


long FUN_03060294(long param_1,int *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  long lVar2;
  undefined2 *puVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  int local_70 [2];
  int local_68 [2];
  
  iVar6 = *(int *)(param_1 + 0x30);
  iVar11 = *(int *)(*(long *)(param_1 + 0x70) + (long)*param_2 * 4);
  if (iVar11 == -1) {
    iVar11 = *(int *)(param_1 + 0x88);
    *(int *)(*(long *)(param_1 + 0x70) + (long)*param_2 * 4) = iVar11;
    iVar9 = *(int *)(param_1 + 0x88);
    lVar10 = (long)iVar9;
    if ((int)(*(uint *)(param_1 + 0x8c) & 0x7fffffff) <= iVar9) {
      FUN_03060850(param_1 + 0x80,PTR_PTR_047d1a50,lVar10 + 1);
      iVar9 = *(int *)(param_1 + 0x88);
    }
    *(int *)(param_1 + 0x88) = (int)(lVar10 + 1);
    *(undefined8 *)(*(long *)(param_1 + 0x80) + (long)iVar9 * 8) = 0xffffffff;
  }
  piVar1 = (int *)(*(long *)(param_1 + 0x80) + (long)iVar11 * 8);
  piVar15 = piVar1 + 1;
  FUN_03060094(local_68,param_1,*piVar15 + 1);
  iVar11 = *(int *)(param_1 + 0x30);
  iVar8 = local_68[0] - iVar11;
  lVar10 = *(long *)(param_1 + 0x90) + (long)iVar8 * 8;
  iVar9 = *piVar15;
  lVar2 = *(long *)(param_1 + 0xb0) + (long)iVar8 * 4;
  if (0 < iVar9) {
    lVar13 = 0;
    lVar14 = 0;
    while( true ) {
      iVar12 = (int)lVar13;
      iVar9 = iVar12 + *piVar1;
      lVar5 = 0x28;
      if (iVar11 <= iVar9) {
        lVar5 = 0x90;
      }
      iVar4 = 0;
      if (iVar11 <= iVar9) {
        iVar4 = iVar11;
      }
      puVar3 = (undefined2 *)(*(long *)(param_1 + lVar5) + (long)(iVar12 + (*piVar1 - iVar4)) * 8);
      *(undefined2 *)(lVar10 + lVar14) = *puVar3;
      uVar7 = *(undefined4 *)(puVar3 + 1);
      lVar5 = lVar10 + lVar13 * 8;
      *(undefined2 *)(lVar5 + 6) = puVar3[3];
      *(undefined4 *)(lVar5 + 2) = uVar7;
      iVar9 = (iVar12 - iVar6) + *piVar1;
      *(undefined4 *)(lVar2 + lVar13 * 4) =
           *(undefined4 *)(*(long *)(param_1 + 0xb0) + (long)iVar9 * 4);
      iVar11 = *(int *)(param_1 + 0x58);
      memcpy((void *)(*(long *)(param_1 + 0xa0) + (long)(iVar11 * (iVar8 + iVar12)) * 4),
             (void *)(*(long *)(param_1 + 0xa0) + (long)(iVar11 * iVar9) * 4),(long)iVar11 << 2);
      iVar9 = *piVar15;
      lVar13 = lVar13 + 1;
      if (iVar9 <= lVar13) break;
      iVar11 = *(int *)(param_1 + 0x30);
      lVar14 = lVar14 + 8;
    }
  }
  if (param_3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x58) == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = *(long *)(param_1 + 0xa0) + (long)(*(int *)(param_1 + 0x58) * (iVar9 + iVar8)) * 4;
    }
    *param_3 = lVar13;
    iVar9 = *piVar15;
  }
  if (iVar9 != 0) {
    local_70[0] = *piVar1;
    FUN_030604c0(param_1,local_70,iVar9);
  }
  if (param_4 != (long *)0x0) {
    *param_4 = lVar2 + (long)*piVar15 * 4;
  }
  *(undefined4 *)(lVar2 + (long)*piVar15 * 4) = 0;
  *piVar15 = *piVar15 + 1;
  *piVar1 = local_68[0];
  return lVar10 + (long)iVar9 * 8;
}


