/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cb3608; name: FUN_00cb3608
 */


void FUN_00cb3608(long param_1,long param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  
  uVar2 = *(uint *)(param_1 + 0x44);
  plVar1 = (long *)(param_1 + 0x38);
  iVar10 = (int)((ulong)param_3 >> 0x20);
  if ((int)uVar2 < 1) {
LAB_00cb36b8:
    uVar7 = (ulong)(uVar2 + 1);
  }
  else {
    uVar3 = (int)param_3 * -0x61c8864f;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar4 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar3 = iVar10 * -0x61c8864f;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar7 = (ulong)(uVar2 & (uVar4 + (uVar4 >> 2) + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3));
    lVar9 = *(long *)(*plVar1 + uVar7 * 0x10);
    if (lVar9 == -1) goto LAB_00cb36b8;
    if (lVar9 != param_3) {
      do {
        uVar7 = (ulong)((int)uVar7 + 1U & uVar2);
        lVar9 = *(long *)(*plVar1 + uVar7 * 0x10);
        if (lVar9 == -1) goto LAB_00cb36b8;
      } while (lVar9 != param_3);
    }
  }
  if ((int)uVar2 < (int)uVar7) {
    iVar11 = *(int *)(param_1 + 0x28);
    lVar8 = *(long *)(param_3 + 0x20);
    uVar3 = *(uint *)(param_3 + 0x28);
    lVar9 = 0;
    if (lVar8 != 0) {
      lVar9 = lVar8 + param_3 + 0x20;
    }
    if ((int)uVar2 < *(int *)(param_1 + 0x40) * 2) {
      FUN_02ef598c(plVar1,uVar2 * 2 + 2);
      uVar2 = *(uint *)(param_1 + 0x44);
    }
    uVar4 = (int)param_3 * -0x61c8864f;
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar5 = uVar4 >> 0x10 | uVar4 << 0x10;
    uVar4 = iVar10 * -0x61c8864f;
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
    uVar4 = uVar5 + (uVar5 >> 2) + uVar4 * 0x40 + 0x9e3779b9 ^ uVar4;
    while( true ) {
      uVar4 = uVar2 & uVar4;
      lVar8 = *(long *)(*plVar1 + (ulong)uVar4 * 0x10);
      if (lVar8 == -1) break;
      if (lVar8 == param_3) {
        iVar10 = 0;
        goto LAB_00cb3770;
      }
      uVar4 = uVar4 + 1;
    }
    iVar10 = 1;
LAB_00cb3770:
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + iVar10;
    *(long *)(*plVar1 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar4 << 4)) =
         param_3;
    *(ulong *)(*(long *)(param_1 + 0x38) + (long)(int)uVar4 * 0x10 + 8) =
         CONCAT44(uVar3,iVar11) & 0xffffffffffff;
    lVar8 = (long)*(int *)(param_1 + 0x28) + (long)(int)uVar3;
    iVar10 = (int)lVar8;
    if ((int)(*(uint *)(param_1 + 0x2c) & 0x7fffffff) < iVar10) {
      FUN_02ef5ec8(param_1 + 0x20,PTR_PTR_047d1a50,lVar8);
    }
    *(int *)(param_1 + 0x28) = iVar10;
    if (0 < (int)uVar3) {
      uVar7 = 0;
      do {
        uVar6 = FUN_02f1ca94(*(undefined8 *)(param_1 + 0x30),lVar9);
        iVar10 = (int)uVar7;
        uVar7 = uVar7 + 1;
        lVar9 = lVar9 + 0x18;
        *(undefined2 *)(*(long *)(param_1 + 0x20) + (long)(iVar11 + iVar10) * 2) = uVar6;
      } while (uVar3 != uVar7);
    }
  }
  else {
    iVar11 = *(int *)(*plVar1 + ((long)(uVar7 << 0x20) >> 0x1c) + 8);
  }
  uVar2 = *(uint *)(param_1 + 0x54);
  plVar1 = (long *)(param_1 + 0x48);
  iVar10 = (int)((ulong)param_2 >> 0x20);
  if ((int)uVar2 < 1) {
LAB_00cb3880:
    uVar7 = (ulong)(uVar2 + 1);
  }
  else {
    uVar3 = (int)param_2 * -0x61c8864f;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar4 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar3 = iVar10 * -0x61c8864f;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar7 = (ulong)(uVar2 & (uVar4 + (uVar4 >> 2) + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3));
    lVar9 = *(long *)(*plVar1 + uVar7 * 0x10);
    if (lVar9 == -1) goto LAB_00cb3880;
    if (lVar9 != param_2) {
      do {
        uVar7 = (ulong)((int)uVar7 + 1U & uVar2);
        lVar9 = *(long *)(*plVar1 + uVar7 * 0x10);
        if (lVar9 == -1) goto LAB_00cb3880;
      } while (lVar9 != param_2);
    }
  }
  if ((int)uVar7 <= (int)uVar2) {
    if (*(long *)(*plVar1 + ((long)(uVar7 << 0x20) >> 0x1c) + 8) == param_3) goto LAB_00cb3958;
    FUN_00cb2b6c(param_1,param_2);
    uVar2 = *(uint *)(param_1 + 0x54);
  }
  if ((int)uVar2 < *(int *)(param_1 + 0x50) * 2) {
    FUN_02ef5fd4(plVar1,PTR_PTR_047d1a50,uVar2 * 2 + 2);
    uVar2 = *(uint *)(param_1 + 0x54);
  }
  uVar3 = (int)param_2 * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar4 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = iVar10 * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = uVar4 + (uVar4 >> 2) + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3;
  while( true ) {
    uVar3 = uVar2 & uVar3;
    lVar9 = *(long *)(*plVar1 + (ulong)uVar3 * 0x10);
    if (lVar9 == -1) break;
    if (lVar9 == param_2) {
      iVar10 = 0;
      goto LAB_00cb3938;
    }
    uVar3 = uVar3 + 1;
  }
  iVar10 = 1;
LAB_00cb3938:
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar10;
  *(long *)(*plVar1 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar3 << 4)) = param_2;
  *(long *)(*(long *)(param_1 + 0x48) + (long)(int)uVar3 * 0x10 + 8) = param_3;
LAB_00cb3958:
  *(int *)(param_2 + 0x40) = iVar11;
  return;
}


