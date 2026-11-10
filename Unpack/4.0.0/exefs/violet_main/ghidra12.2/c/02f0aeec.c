/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f0aeec; name: FUN_02f0aeec
 */


int * FUN_02f0aeec(int param_1,int param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  bool bVar7;
  int *__s;
  void *__dest;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  ulong local_68;
  
  uVar2 = param_2 + 0x1f >> 5;
  iVar13 = uVar2 * 4;
  uVar1 = iVar13 + 0x28;
  uVar3 = iVar13 + 0x37;
  if (-1 < (int)uVar1) {
    uVar3 = uVar1;
  }
  iVar4 = uVar1 - (uVar3 & 0xfffffff0);
  uVar5 = 0x10 - iVar4;
  uVar3 = 0x1f - iVar4;
  if (-1 < (int)uVar5) {
    uVar3 = uVar5;
  }
  uVar5 = uVar5 - (uVar3 & 0xfffffff0);
  iVar4 = uVar1 + param_2 * param_1 + uVar5;
  local_68 = (ulong)iVar4;
  __s = (int *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
  uVar6 = local_68;
  uVar15 = local_68 >> 2;
  piVar16 = __s;
  if (((ulong)__s & 0xf) == 0) {
    uVar14 = uVar15;
  }
  else {
    uVar8 = 4 - (((ulong)__s & 0xf) >> 2);
    uVar14 = uVar15;
    if (uVar8 <= uVar15) {
      uVar14 = uVar8;
    }
    if (__s < __s + uVar14) {
      memset(__s,0,uVar14 * 4);
      uVar8 = uVar14 * 4 - 1;
      uVar1 = ((uint)(uVar8 >> 2) & 0x3fffffff) + 1;
      if ((uVar1 & 7) != 0) {
        lVar10 = -((ulong)uVar1 & 7);
        do {
          piVar16 = piVar16 + 1;
          bVar7 = lVar10 != -1;
          lVar10 = lVar10 + 1;
        } while (bVar7);
      }
      if (0x1b < uVar8) {
        do {
          piVar16 = piVar16 + 8;
        } while (piVar16 < __s + uVar14);
      }
    }
    uVar14 = uVar15 - uVar14;
  }
  if ((3 < uVar14) && (0 < (long)(uVar14 & 0xfffffffffffffffc))) {
    piVar11 = piVar16 + (uVar14 & 0xfffffffffffffffc);
    piVar9 = piVar11;
    if (piVar11 <= piVar16 + 4) {
      piVar9 = piVar16 + 4;
    }
    memset(piVar16,0,(long)piVar9 + ~(ulong)piVar16 + 0x10 & 0xfffffffffffffff0);
    do {
      piVar16 = piVar16 + 4;
    } while (piVar16 < piVar11);
  }
  if (piVar16 < __s + uVar15) {
    memset(piVar16,0,
           (long)__s + (uVar6 & 0xfffffffffffffffc) + ~(ulong)piVar16 + 4 & 0xfffffffffffffffc);
  }
  *__s = iVar4;
  __s[1] = param_1;
  piVar16 = __s + 10;
  __s[4] = uVar2;
  __s[5] = uVar2 | 0x80000000;
  __dest = (void *)((ulong)uVar5 + (long)iVar13 + (long)piVar16);
  *(int **)(__s + 2) = piVar16;
  __s[6] = param_2;
  *(void **)(__s + 8) = __dest;
  if (param_3 != 0) {
    if ((int)*(uint *)(param_3 + 0x10) <= (int)uVar2) {
      uVar2 = *(uint *)(param_3 + 0x10);
    }
    if (0 < (int)uVar2) {
      piVar11 = *(int **)(param_3 + 8);
      uVar1 = uVar2 & 3;
      if (2 < uVar2 - 1) {
        iVar13 = -(uVar2 & 0xfffffffc);
        piVar9 = piVar16;
        piVar12 = piVar11;
        do {
          *piVar9 = *piVar12;
          piVar9[1] = piVar12[1];
          piVar9[2] = piVar12[2];
          piVar11 = piVar12 + 4;
          piVar16 = piVar9 + 4;
          iVar13 = iVar13 + 4;
          piVar9[3] = piVar12[3];
          piVar9 = piVar16;
          piVar12 = piVar11;
        } while (iVar13 != 0);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *piVar16 = *piVar11;
        piVar16 = piVar16 + 1;
        piVar11 = piVar11 + 1;
      }
      param_2 = __s[6];
      __dest = *(void **)(__s + 8);
    }
    if (*(int *)(param_3 + 0x18) <= param_2) {
      param_2 = *(int *)(param_3 + 0x18);
    }
    memcpy(__dest,*(void **)(param_3 + 0x20),(long)(param_2 * param_1));
  }
  return __s;
}


