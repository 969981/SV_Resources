/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f3c788; name: FUN_00f3c788
 */


void FUN_00f3c788(long param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long *plVar9;
  long alStack_110 [12];
  code *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  long alStack_90 [12];
  
  if ((param_2 & 1) == 0) {
    plVar9 = alStack_110;
    lVar5 = *(long *)(param_1 + 0x20);
    lVar6 = *(long *)(param_1 + 0x28);
    alStack_110[0] = param_1;
    if (lVar5 != lVar6) {
      if (*(int *)(lVar5 + 0x2c) == 0) {
        if (*(int *)(lVar5 + 0x28) != 2) goto joined_r0x00f3c81c;
      }
      else if (*(int *)(lVar5 + 0x2c) == *(int *)(lVar5 + 0x28)) goto joined_r0x00f3c81c;
      FUN_02e60904(plVar9,lVar5);
joined_r0x00f3c81c:
      while (lVar7 = lVar5 + 0x38, lVar7 != lVar6) {
        piVar1 = (int *)(lVar5 + 0x60);
        piVar3 = (int *)(lVar5 + 100);
        lVar5 = lVar7;
        if (*piVar3 == 0) goto LAB_00f3c984;
        if (*piVar3 != *piVar1) goto LAB_00f3c98c;
      }
    }
    pcVar8 = FUN_02e609c8;
    goto LAB_00f3c7e8;
  }
  plVar9 = alStack_90;
  pcVar8 = FUN_02e608e8;
  local_b0 = FUN_02e60824;
  local_a8 = FUN_02e608e8;
  local_a0 = &LAB_02e608ec;
  local_98 = &LAB_02e608f8;
  lVar5 = *(long *)(param_1 + 0x20);
  lVar6 = *(long *)(param_1 + 0x28);
  alStack_90[0] = param_1;
  if (lVar5 != lVar6) {
    iVar2 = *(int *)(lVar5 + 0x28);
    iVar4 = *(int *)(lVar5 + 0x2c);
    pcVar8 = local_a8;
    if (iVar4 == 2) {
      if (iVar2 != 2) goto LAB_00f3c8e8;
    }
    else if (((iVar2 == 2) || ((iVar4 == 1 && (iVar2 == 1)))) || ((iVar4 == 3 && (iVar2 == 3)))) {
LAB_00f3c8e8:
      FUN_02e60824(plVar9,lVar5);
      pcVar8 = local_a8;
    }
joined_r0x00f3c8d0:
    while (lVar7 = lVar5 + 0x38, lVar7 != lVar6) {
      iVar2 = *(int *)(lVar5 + 0x60);
      iVar4 = *(int *)(lVar5 + 100);
      lVar5 = lVar7;
      if (iVar4 == 2) goto LAB_00f3c948;
      if (((iVar2 == 2) || ((iVar4 == 1 && (iVar2 == 1)))) || ((iVar4 == 3 && (iVar2 == 3))))
      goto LAB_00f3c950;
    }
    if (pcVar8 == (code *)0x0) {
      return;
    }
  }
  local_a0 = (undefined1 *)0x0;
  local_98 = (undefined1 *)0x0;
  local_b0 = (code *)0x0;
  local_a8 = (code *)0x0;
LAB_00f3c7e8:
  (*pcVar8)(plVar9);
  return;
LAB_00f3c948:
  if (iVar2 != 2) {
LAB_00f3c950:
    local_a8 = pcVar8;
    (*local_b0)(plVar9,lVar7);
    pcVar8 = local_a8;
  }
  goto joined_r0x00f3c8d0;
LAB_00f3c984:
  if (*piVar1 == 2) {
LAB_00f3c98c:
    FUN_02e60904(plVar9,lVar7);
  }
  goto joined_r0x00f3c81c;
}


