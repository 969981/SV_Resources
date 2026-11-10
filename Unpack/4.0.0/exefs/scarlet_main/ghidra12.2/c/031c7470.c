/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c7470; name: FUN_031c7470
 */


long * FUN_031c7470(long *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  
  iVar5 = (int)param_1[1];
  iVar7 = -1;
  lVar8 = (long)iVar5 + -1;
  do {
    lVar4 = lVar8 + -1;
    if (lVar8 < 1) goto LAB_031c74b8;
    lVar1 = *param_1 + lVar8;
    lVar8 = lVar4;
  } while (*(char *)(lVar1 + -1) != '\\');
  iVar7 = (int)lVar4;
LAB_031c74b8:
  iVar9 = -1;
  lVar8 = (long)iVar5 + -1;
  do {
    lVar4 = lVar8 + -1;
    if (lVar8 < 1) goto LAB_031c74e0;
    lVar1 = *param_1 + lVar8;
    lVar8 = lVar4;
  } while (*(char *)(lVar1 + -1) != '/');
  iVar9 = (int)lVar4;
LAB_031c74e0:
  if (iVar7 <= iVar9) {
    iVar7 = iVar9;
  }
  if (iVar7 < 0) {
    if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) == 0) {
      FUN_030b4a20(param_1,PTR_PTR_047d1a50 + 0x20,1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != 1) {
      *(undefined4 *)(param_1 + 1) = 1;
    }
    puVar6 = (undefined1 *)*param_1;
  }
  else {
    uVar2 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
    iVar3 = uVar2 - 1;
    iVar9 = iVar7;
    if (iVar3 <= iVar7) {
      iVar9 = iVar3;
    }
    if ((int)param_1[0x12] != 0) {
      iVar9 = iVar7;
    }
    iVar7 = iVar9 + 1;
    if ((int)uVar2 <= iVar9) {
      FUN_030b4a20(param_1,PTR_PTR_047d1a50 + 0x20,iVar7);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 <= iVar9 || iVar7 < iVar5) {
      *(int *)(param_1 + 1) = iVar7;
    }
    puVar6 = (undefined1 *)(*param_1 + (long)iVar9);
  }
  *puVar6 = 0;
  return param_1;
}


