/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03346c00; name: FUN_03346c00
 */


undefined8 FUN_03346c00(long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined1 local_60 [16];
  
  if (*param_2 == param_2[1]) {
    return 0;
  }
  lVar9 = *(long *)(param_1 + 0x68);
  local_60 = FUN_03342334(*(undefined8 *)(lVar9 + 0x90));
  plVar1 = (long *)(lVar9 + 0xa8);
  lVar9 = FUN_03348c94(plVar1,local_60);
  if ((lVar9 == 0) ||
     (iVar10 = *(int *)(*plVar1 + (long)*(int *)(lVar9 + 4) * 0x10 + 8), iVar10 < 0)) {
    lVar9 = FUN_03348c94(plVar1,local_60 + 8);
    if (lVar9 == 0) {
      return 0;
    }
    iVar10 = *(int *)(*plVar1 + (long)*(int *)(lVar9 + 4) * 0x10 + 8);
    if (iVar10 < 0) {
      return 0;
    }
  }
  puVar3 = PTR_PTR_047d1a50;
  lVar9 = *(long *)(param_1 + 0x60);
  if (0 < *(int *)(lVar9 + 0x50)) {
    lVar11 = 0;
    do {
      plVar1 = (long *)(*(long *)(lVar9 + 0x18) +
                       (long)*(int *)(*(long *)(lVar9 + 0x48) + lVar11 * 4) * 0x10);
      plVar12 = plVar1 + 1;
      iVar5 = (int)*plVar12;
      lVar6 = (long)iVar5;
      if ((int)(*(uint *)((long)plVar1 + 0xc) & 0x7fffffff) <= iVar5) {
        FUN_0133bb88(plVar1,puVar3,lVar6 + 1);
        iVar5 = (int)*plVar12;
      }
      *(int *)(*plVar1 + (long)iVar5 * 4) = iVar10;
      *(int *)plVar12 = (int)(lVar6 + 1);
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(lVar9 + 0x50));
  }
  iVar5 = *(int *)(param_1 + 0x20);
  if (iVar5 <= *(int *)(param_1 + 0x28) * 2) {
    FUN_0334a3a0((long *)(param_1 + 0x18),iVar5 << 1);
    iVar5 = *(int *)(param_1 + 0x20);
  }
  uVar7 = (iVar10 * -0x61c8864f & 0xff00ff00U) >> 8 | (iVar10 * -0x61c8864f & 0xff00ffU) << 8;
  uVar7 = iVar5 - 1U & (uVar7 >> 0x10 | uVar7 << 0x10);
  lVar9 = *(long *)(param_1 + 0x18);
  piVar8 = (int *)(lVar9 + (long)(int)uVar7 * 4);
  if (*piVar8 == -1) {
LAB_03346d9c:
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    *piVar8 = iVar10;
    lVar9 = *(long *)(param_1 + 0x68);
    lVar11 = *(long *)(*(long *)(lVar9 + 0x98) + (long)iVar10 * 8);
    if (*(char *)(param_1 + 0x78) == '\0') {
      bVar4 = *(char *)(lVar11 + 0x34) == '\0';
    }
    else {
      bVar4 = true;
    }
    *(bool *)(param_1 + 0x78) = bVar4;
    if (*(char *)(param_1 + 0x79) == '\0') {
      bVar4 = *(char *)(lVar11 + 0x34) != '\0';
    }
    else {
      bVar4 = true;
    }
    *(bool *)(param_1 + 0x79) = bVar4;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  else {
    if (*piVar8 != iVar10) {
      do {
        uVar7 = uVar7 + 1 & iVar5 - 1U;
        iVar2 = *(int *)(lVar9 + (long)(int)uVar7 * 4);
        if (iVar2 == -1) {
          piVar8 = (int *)(lVar9 + (long)(int)uVar7 * 4);
          goto LAB_03346d9c;
        }
      } while (iVar2 != iVar10);
      piVar8 = (int *)(lVar9 + (long)(int)uVar7 * 4);
    }
    *piVar8 = iVar10;
    lVar9 = *(long *)(param_1 + 0x68);
  }
  return *(undefined8 *)(*(long *)(lVar9 + 0x98) + (long)iVar10 * 8);
}


