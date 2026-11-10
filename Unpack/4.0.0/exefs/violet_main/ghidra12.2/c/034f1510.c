/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034f1510; name: FUN_034f1510
 */


void FUN_034f1510(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  long *plVar5;
  int iVar6;
  byte bVar7;
  long lVar8;
  void *pvVar9;
  undefined1 *puVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  int *piVar18;
  ulong uVar19;
  int *piVar20;
  long lStack_70;
  int local_64;
  
  uVar2 = DAT_048b0810;
  plVar5 = DAT_048b0808;
  if (DAT_048b084c == '\0') {
    return;
  }
  uVar19 = (ulong)DAT_048b0810;
  if (DAT_048b0810 == 0) {
    DAT_048b084c = 0;
    return;
  }
  uVar1 = DAT_048b0810 & 3;
  uVar11 = uVar19 & 3;
  if (uVar19 - 1 < 3) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    plVar14 = DAT_048b0808 + 2;
    do {
      *(undefined4 *)(plVar14[-2] + 0x1a0) = 0x7fffffff;
      *(undefined4 *)(plVar14[-1] + 0x1a0) = 0x7fffffff;
      *(undefined4 *)(*plVar14 + 0x1a0) = 0x7fffffff;
      plVar16 = plVar14 + 1;
      uVar13 = uVar13 + 4;
      plVar14 = plVar14 + 4;
      *(undefined4 *)(*plVar16 + 0x1a0) = 0x7fffffff;
    } while ((uVar19 & 0xfffffffc) != uVar13);
  }
  if (uVar1 != 0) {
    plVar14 = plVar5 + uVar13;
    do {
      uVar11 = uVar11 - 1;
      *(undefined4 *)(*plVar14 + 0x1a0) = 0x7fffffff;
      plVar14 = plVar14 + 1;
    } while (uVar11 != 0);
  }
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  uVar13 = (ulong)uVar2;
  local_64 = 0;
  DAT_048b0848 = 0;
  plVar14 = plVar5;
  uVar11 = uVar13;
  do {
    lVar8 = *plVar14;
    if ((*(long *)(lVar8 + 0x28) == 0) &&
       ((*(long *)(lVar8 + 0x60) == 0 || (*(long *)(*(long *)(lVar8 + 0x60) + 0xa0) == 0)))) {
      FUN_034f2be4(lVar8,0,&local_64);
    }
    iVar6 = local_64;
    uVar11 = uVar11 - 1;
    plVar14 = plVar14 + 1;
  } while (uVar11 != 0);
  plVar14 = (long *)((long)&lStack_70 - (uVar19 * 8 + 0xf & 0xffffffff0));
  uVar2 = local_64 + 1;
  if ((DAT_048b0820 <= uVar2) && (DAT_048b0824 < uVar2)) {
    uVar1 = DAT_048b0824 + (uVar2 - DAT_048b0820);
    pvVar9 = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(5,DAT_048b0818,(ulong)uVar1 << 2);
    if (pvVar9 == (void *)0x0) {
      return;
    }
    DAT_048b0818 = pvVar9;
    DAT_048b0824 = uVar1;
  }
  DAT_048b0820 = uVar2;
  if ((DAT_048b0830 <= uVar2) && (DAT_048b0834 < uVar2)) {
    uVar1 = DAT_048b0834 + (uVar2 - DAT_048b0830);
    puVar10 = (undefined1 *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(5,DAT_048b0828,uVar1);
    if (puVar10 == (undefined1 *)0x0) {
      return;
    }
    DAT_048b0828 = puVar10;
    DAT_048b0834 = uVar1;
  }
  pvVar9 = DAT_048b0818;
  DAT_048b0830 = uVar2;
  memset(DAT_048b0818,0,-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2);
  plVar15 = plVar5;
  plVar16 = plVar14;
  uVar11 = uVar13;
  do {
    lVar8 = *plVar15;
    *plVar16 = lVar8;
    iVar12 = *(int *)(lVar8 + 0x1a0);
    if (iVar12 != 0x7fffffff) {
      *(int *)((long)pvVar9 + (long)iVar12 * 4) = *(int *)((long)pvVar9 + (long)iVar12 * 4) + 1;
    }
    uVar11 = uVar11 - 1;
    plVar16 = plVar16 + 1;
    plVar15 = plVar15 + 1;
  } while (uVar11 != 0);
  piVar20 = (int *)((long)plVar14 - ((long)(int)uVar2 * 4 + 0xfU & 0xfffffffffffffff0));
  *piVar20 = 0;
  if (0 < iVar6) {
    if (uVar2 == 2) {
      iVar12 = 0;
      lVar8 = 1;
    }
    else {
      iVar12 = 0;
      uVar11 = 0;
      piVar18 = (int *)((long)pvVar9 + 4);
      piVar4 = piVar20;
      do {
        uVar17 = uVar11;
        iVar3 = piVar18[-1];
        piVar4[1] = iVar3 + iVar12;
        uVar11 = uVar17 + 2;
        iVar12 = *piVar18 + iVar3 + iVar12;
        piVar4[2] = iVar12;
        piVar18 = piVar18 + 2;
        piVar4 = piVar4 + 2;
      } while (((ulong)uVar2 - 1 & 0xfffffffffffffffe) != uVar11);
      lVar8 = uVar17 + 3;
      if (((ulong)uVar2 - 1 & 1) == 0) goto LAB_034f17d8;
    }
    piVar20[lVar8] = *(int *)((long)pvVar9 + lVar8 * 4 + -4) + iVar12;
  }
LAB_034f17d8:
  do {
    lVar8 = *plVar14;
    iVar12 = *(int *)(lVar8 + 0x1a0);
    if (iVar12 == 0x7fffffff) {
      uVar11 = (ulong)((int)uVar19 - 1);
      uVar19 = uVar11;
    }
    else {
      uVar11 = (ulong)piVar20[iVar12];
      piVar20[iVar12] = piVar20[iVar12] + 1;
    }
    uVar13 = uVar13 - 1;
    plVar14 = plVar14 + 1;
    plVar5[uVar11] = lVar8;
  } while (uVar13 != 0);
  if (((DAT_048b0848 & 1) != 0) && (*DAT_048b0828 = 0, 0 < iVar6)) {
    lVar8 = 0;
    do {
      if (*(int *)((long)pvVar9 + lVar8 * 4 + 4) < 2) {
        DAT_048b0828[lVar8 + 1] = 0;
      }
      else {
        bVar7 = FUN_034eff78((int)lVar8 + 1,piVar20[lVar8]);
        DAT_048b0828[lVar8 + 1] = bVar7 & 1;
      }
      lVar8 = lVar8 + 1;
    } while ((ulong)uVar2 - 1 != lVar8);
  }
  DAT_048b084c = 0;
  return;
}


