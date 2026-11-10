/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033b2684; name: FUN_033b2684
 */


void FUN_033b2684(long param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  char *__dest;
  
  if (-1 < *(int *)(param_1 + 0x24)) {
    lVar5 = 0;
    lVar8 = -1;
    do {
      *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar5) = 0xffffffffffffffff;
      lVar8 = lVar8 + 1;
      lVar5 = lVar5 + 0x18;
    } while (lVar8 < *(int *)(param_1 + 0x24));
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((int)*(uint *)(param_1 + 0xc0) < 2) {
    iVar10 = 0;
  }
  else {
    iVar10 = 0;
    uVar9 = 1;
    piVar7 = (int *)(*(long *)(param_1 + 0xb8) + 0xc);
    do {
      piVar1 = piVar7 + -1;
      iVar2 = *piVar7;
      piVar7 = piVar7 + 4;
      uVar9 = uVar9 + 2;
      iVar10 = ((iVar10 + iVar2) - *piVar1) + 1;
    } while (uVar9 < *(uint *)(param_1 + 0xc0));
    if ((int)(*(uint *)(param_1 + 0x4c) & 0x7fffffff) < iVar10) {
      FUN_030b4a20(param_1 + 0x40,PTR_PTR_047d1a50,(long)iVar10);
    }
  }
  if (*(int *)(param_1 + 0x48) != iVar10) {
    *(int *)(param_1 + 0x48) = iVar10;
  }
  puVar4 = PTR_PTR_047d1a50;
  if (1 < *(int *)(param_1 + 0xc0)) {
    __dest = *(char **)(param_1 + 0x40);
    lVar5 = 0;
    lVar8 = 2;
    while( true ) {
      lVar6 = *(long *)(param_1 + 0xb8) + lVar5;
      lVar3 = (long)*(int *)(lVar6 + 8);
      uVar9 = *(int *)(lVar6 + 0xc) - lVar3;
      if (0 < (int)uVar9) {
        strncpy(__dest,(char *)(*(long *)(param_1 + 0x90) + (long)*(int *)(param_1 + 0x80) + lVar3),
                uVar9 & 0xffffffff);
      }
      __dest[uVar9] = '\0';
      iVar10 = *(int *)(param_1 + 0x38);
      lVar6 = (long)iVar10;
      if ((int)(*(uint *)(param_1 + 0x3c) & 0x7fffffff) <= iVar10) {
        FUN_031b108c(param_1 + 0x30,puVar4,lVar6 + 1);
        iVar10 = *(int *)(param_1 + 0x38);
      }
      *(char **)(*(long *)(param_1 + 0x30) + (long)iVar10 * 8) = __dest;
      *(int *)(param_1 + 0x38) = (int)(lVar6 + 1);
      FUN_0324e488(param_1 + 0x18,__dest,lVar8);
      if (*(int *)(param_1 + 0xc0) <= (int)lVar8 + 1) break;
      __dest = __dest + ((int)uVar9 + 1);
      lVar8 = lVar8 + 2;
      lVar5 = lVar5 + 0x10;
    }
  }
  return;
}


