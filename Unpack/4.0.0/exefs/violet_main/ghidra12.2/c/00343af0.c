/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00343af0; name: FUN_00343af0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_00343af0(ulong *param_1)

{
  int iVar1;
  void *__base;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong unaff_x22;
  undefined8 *unaff_x26;
  int *piVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  __base = (void *)FUN_0038c780(*param_1 << 3);
  uVar4 = *param_1;
  if (uVar4 == 0) goto LAB_00343c70;
  puVar2 = param_1 + 1;
  if ((uVar4 < 8) ||
     ((__base < (void *)((long)param_1 + 9U) && (puVar2 < (ulong *)((long)__base + uVar4 * 8 + -8)))
     )) {
    uVar5 = 0;
LAB_00343b50:
    uVar7 = ~uVar5;
    uVar9 = uVar4 & 3;
    if (uVar9 != 0) {
      lVar10 = uVar5 << 5;
      do {
        uVar9 = uVar9 - 1;
        *(ulong *)((long)__base + uVar5 * 8) = *puVar2 + lVar10;
        uVar5 = uVar5 + 1;
        lVar10 = lVar10 + 0x20;
      } while (uVar9 != 0);
    }
    if (2 < uVar4 + uVar7) {
      lVar8 = uVar4 - uVar5;
      lVar10 = uVar5 << 5;
      plVar6 = (long *)((long)__base + uVar5 * 8 + 0x10);
      do {
        plVar6[-2] = *puVar2 + lVar10;
        plVar6[-1] = *puVar2 + lVar10 + 0x20;
        *plVar6 = *puVar2 + lVar10 + 0x40;
        lVar12 = *puVar2 + lVar10;
        lVar10 = lVar10 + 0x80;
        lVar8 = lVar8 + -4;
        plVar6[1] = lVar12 + 0x60;
        plVar6 = plVar6 + 4;
      } while (lVar8 != 0);
    }
  }
  else {
    uVar7 = *puVar2;
    uVar5 = uVar4 & 0xfffffffffffffff8;
    plVar6 = (long *)((long)__base + 0x20);
    uVar9 = uVar5;
    lVar10 = _DAT_03caa7b0;
    lVar8 = _UNK_03caa7b8;
    do {
      lVar12 = lVar10 * 0x20;
      lVar14 = lVar8 * 0x20;
      lVar10 = lVar10 + 8;
      lVar8 = lVar8 + 8;
      uVar9 = uVar9 - 8;
      lVar13 = lVar12 + uVar7;
      lVar15 = lVar14 + uVar7;
      plVar6[-3] = uVar7 + lVar14;
      plVar6[-4] = uVar7 + lVar12;
      plVar6[-1] = lVar15 + 0x40;
      plVar6[-2] = lVar13 + 0x40;
      plVar6[1] = lVar15 + 0x80;
      *plVar6 = lVar13 + 0x80;
      plVar6[3] = lVar15 + 0xc0;
      plVar6[2] = lVar13 + 0xc0;
      plVar6 = plVar6 + 8;
    } while (uVar9 != 0);
    if (uVar4 != uVar5) goto LAB_00343b50;
  }
  if (1 < uVar4) {
    qsort(__base,uVar4,8,(__compar_fn_t)&LAB_00343d50);
  }
LAB_00343c70:
  puVar2 = (ulong *)FUN_0038c780(0x10);
  uVar4 = *param_1;
  *puVar2 = uVar4;
  uVar4 = FUN_0038c780(uVar4 << 5);
  puVar2[1] = uVar4;
  if (*param_1 != 0) {
    lVar10 = 0;
    uVar4 = 0;
    do {
      piVar11 = *(int **)((long)__base + uVar4 * 8);
      iVar1 = *piVar11;
      uVar3 = FUN_0038ccb0(*(undefined8 *)(piVar11 + 2));
      if (iVar1 == 2) {
        unaff_x26 = *(undefined8 **)(piVar11 + 6);
        unaff_x22 = (*(code *)*unaff_x26)(*(undefined8 *)(piVar11 + 4));
      }
      else if (iVar1 == 1) {
        unaff_x22 = unaff_x22 & 0xffffffff00000000 | (ulong)(uint)piVar11[4];
      }
      else if (iVar1 == 0) {
        unaff_x22 = FUN_0038ccb0(*(undefined8 *)(piVar11 + 4));
      }
      piVar11 = (int *)(puVar2[1] + lVar10);
      lVar10 = lVar10 + 0x20;
      *piVar11 = iVar1;
      *(undefined8 *)(piVar11 + 2) = uVar3;
      *(ulong *)(piVar11 + 4) = unaff_x22;
      *(undefined8 **)(piVar11 + 6) = unaff_x26;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *param_1);
  }
  free(__base);
  return puVar2;
}


