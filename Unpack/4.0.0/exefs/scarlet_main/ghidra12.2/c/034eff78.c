/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034eff78; name: FUN_034eff78
 */


/* WARNING: Removing unreachable block (ram,0x034f0100) */

undefined8 FUN_034eff78(int param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  size_t __n;
  int iVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  int *piVar15;
  undefined8 *__dest;
  uint uVar16;
  void *__s;
  ulong uVar17;
  int *piVar18;
  undefined8 auStack_460 [127];
  undefined4 uStack_64;
  
  lVar13 = DAT_048b0808;
  lVar5 = -((-(ulong)(param_3 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_3 << 2) + 0xf &
           0xfffffffffffffff0);
  puVar9 = (uint *)((long)auStack_460 + lVar5 + 0x400);
  uVar8 = 0;
  uVar17 = (ulong)param_3;
  uVar16 = 0;
  do {
    lVar10 = *(long *)(*(long *)(DAT_048b0808 + (ulong)((int)uVar8 + param_2) * 8) + 0x28);
    if (lVar10 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      do {
        if (((*(byte *)(lVar10 + 0x1d8) >> 2 & 1) == 0) &&
           (*(int *)(*(long *)(lVar10 + 0x198) + 0x1a0) == param_1)) {
          uVar14 = uVar14 + 1;
        }
        lVar10 = *(long *)(lVar10 + 0x20);
      } while (lVar10 != 0);
    }
    puVar9[uVar8] = uVar14;
    uVar8 = uVar8 + 1;
    if (uVar14 <= uVar16) {
      uVar14 = uVar16;
    }
    uVar16 = uVar14;
  } while (uVar8 != uVar17);
  if (uVar14 == 0) {
    return 0;
  }
  __dest = (undefined8 *)((long)puVar9 - ((long)(int)param_3 * 8 + 0xfU & 0xfffffffffffffff0));
  memcpy(__dest,(void *)(DAT_048b0808 + (ulong)param_2 * 8),(long)(int)param_3 * 8);
  uVar14 = uVar14 + 1;
  __n = (ulong)uVar14 * 4;
  uVar8 = __n + 0xf & 0x7fffffff0;
  __s = (void *)((long)__dest - uVar8);
  piVar18 = (int *)((long)__s - uVar8);
  memset(__s,0,__n);
  if (param_3 == 1) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    do {
      puVar2 = puVar9 + uVar8;
      uVar8 = uVar8 + 2;
      uVar1 = (ulong)*puVar2;
      uVar11 = (ulong)puVar2[1];
      *(int *)((long)__s + uVar1 * 4) = *(int *)((long)__s + uVar1 * 4) + 1;
      *(int *)((long)__s + uVar11 * 4) = *(int *)((long)__s + uVar11 * 4) + 1;
    } while ((uVar17 & 0xfffffffe) != uVar8);
  }
  if ((param_3 & 1) != 0) {
    *(int *)((long)__s + (ulong)puVar9[uVar8] * 4) =
         *(int *)((long)__s + (ulong)puVar9[uVar8] * 4) + 1;
  }
  *piVar18 = 0;
  if (1 < uVar14) {
    uVar8 = (ulong)uVar14 - 1;
    if (uVar14 == 2) {
      iVar7 = 0;
      lVar10 = 1;
    }
    else {
      iVar7 = 0;
      piVar15 = (int *)((long)__s + 4);
      uVar1 = 0;
      piVar6 = piVar18;
      do {
        uVar11 = uVar1;
        iVar3 = piVar15[-1];
        iVar4 = *piVar15;
        piVar15 = piVar15 + 2;
        uVar1 = uVar11 + 2;
        piVar6[1] = iVar3 + iVar7;
        iVar7 = iVar4 + iVar3 + iVar7;
        piVar6[2] = iVar7;
        piVar6 = piVar6 + 2;
      } while ((uVar8 & 0xfffffffffffffffe) != uVar1);
      lVar10 = uVar11 + 3;
      if ((uVar8 & 1) == 0) goto LAB_034f0154;
    }
    piVar18[lVar10] = *(int *)((long)__s + lVar10 * 4 + -4) + iVar7;
  }
LAB_034f0154:
  uVar12 = *__dest;
  iVar7 = piVar18[*puVar9];
  piVar18[*puVar9] = iVar7 + 1;
  *(undefined8 *)(lVar13 + (ulong)(iVar7 + param_2) * 8) = uVar12;
  if (param_3 != 1) {
    lVar13 = uVar17 - 1;
    puVar9 = (uint *)((long)auStack_460 + lVar5 + 0x404);
    do {
      __dest = __dest + 1;
      lVar13 = lVar13 + -1;
      uVar12 = *__dest;
      iVar7 = piVar18[*puVar9];
      piVar18[*puVar9] = iVar7 + 1;
      *(undefined8 *)(DAT_048b0808 + (ulong)(iVar7 + param_2) * 8) = uVar12;
      puVar9 = puVar9 + 1;
    } while (lVar13 != 0);
  }
  return 1;
}


