/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c5b68; name: FUN_031c5b68
 */


long * FUN_031c5b68(long *param_1)

{
  uint uVar1;
  long *plVar2;
  int *piVar3;
  int *piVar4;
  long *plVar5;
  ulong uVar6;
  bool bVar7;
  long *__s;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  ulong uVar14;
  ulong local_38;
  
  local_38 = (ulong)*(int *)((long)param_1 + 0x114);
  __s = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
  uVar6 = local_38;
  uVar14 = local_38 >> 2;
  plVar13 = __s;
  if (((ulong)__s & 0xf) == 0) {
    uVar8 = uVar14;
  }
  else {
    uVar8 = 4 - (((ulong)__s & 0xf) >> 2);
    uVar9 = uVar14;
    if (uVar8 <= uVar14) {
      uVar9 = uVar8;
    }
    plVar2 = (long *)((long)__s + uVar9 * 4);
    uVar8 = uVar14 - uVar9;
    if (__s < plVar2) {
      memset(__s,0,uVar9 * 4);
      uVar9 = uVar9 * 4 - 1;
      uVar1 = ((uint)(uVar9 >> 2) & 0x3fffffff) + 1;
      if ((uVar1 & 7) != 0) {
        lVar11 = -((ulong)uVar1 & 7);
        do {
          plVar13 = (long *)((long)plVar13 + 4);
          bVar7 = lVar11 != -1;
          lVar11 = lVar11 + 1;
        } while (bVar7);
      }
      if (0x1b < uVar9) {
        do {
          plVar13 = plVar13 + 4;
        } while (plVar13 < plVar2);
      }
    }
    else {
    }
  }
  if ((3 < uVar8) && (0 < (long)(uVar8 & 0xfffffffffffffffc))) {
    plVar2 = (long *)((long)plVar13 + (uVar8 & 0xfffffffffffffffc) * 4);
    plVar5 = plVar2;
    if (plVar2 <= plVar13 + 2) {
      plVar5 = plVar13 + 2;
    }
    memset(plVar13,0,(long)plVar5 + ~(ulong)plVar13 + 0x10 & 0xfffffffffffffff0);
    do {
      plVar13 = plVar13 + 2;
    } while (plVar13 < plVar2);
  }
  if (plVar13 < (long *)((long)__s + uVar14 * 4)) {
    memset(plVar13,0,
           (long)__s + (uVar6 & 0xfffffffffffffffc) + ~(ulong)plVar13 + 4 & 0xfffffffffffffffc);
  }
  *__s = (long)(PTR_DAT_047d1a00 + 0x10);
  __s[1] = 0xffffffff;
  __s[2] = 1;
  __s[1] = (long)*(int *)((long)param_1 + 0x114);
  __s[2] = 0;
  if (0 < (int)param_1[1]) {
    iVar12 = (int)param_1[0x22];
    lVar10 = 0;
    lVar11 = 0;
    do {
      piVar3 = (int *)(*param_1 + lVar10);
      if (piVar3[3] == 1) {
        plVar13 = (long *)((long)piVar3[1] + (long)__s);
        *plVar13 = (long)iVar12 - (long)piVar3[1];
        *(int *)(plVar13 + 1) = *piVar3;
      }
      else if (piVar3[3] == 0) {
        piVar4 = (int *)((long)piVar3[1] + (long)__s);
        *piVar4 = iVar12 - piVar3[1];
        piVar4[1] = *piVar3;
      }
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x10;
      iVar12 = (piVar3[2] * *piVar3 + 0xfU & 0xfffffff0) + iVar12;
    } while (lVar11 < (int)param_1[1]);
  }
  return __s;
}


