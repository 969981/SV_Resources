/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008c9960; name: FUN_008c9960
 */


undefined8 FUN_008c9960(long param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = *(uint *)(param_1 + 0x1b4);
  if ((int)uVar2 <= *(int *)(param_1 + 0x1b0)) {
    FUN_008d43e0("GpuBuffer management domain is lacking. \n");
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x1d0);
  if (lVar3 == 0) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x1c0) + 1U != uVar2) {
      iVar1 = *(int *)(param_1 + 0x1c0) + 1;
    }
    lVar3 = *(long *)(param_1 + 0x1a8);
    *(int *)(param_1 + 0x1c0) = iVar1;
    if (*(long *)(lVar3 + (long)iVar1 * 0x38 + 8) == 0) {
      lVar3 = lVar3 + (long)iVar1 * 0x38;
      *(long *)(param_1 + 0x1d0) = lVar3;
    }
    else {
      if (0 < (int)uVar2) {
        uVar5 = 0;
        do {
          if (*(long *)(lVar3 + 8) == 0) {
            *(long *)(param_1 + 0x1d0) = lVar3;
            *(int *)(param_1 + 0x1c0) = (int)uVar5;
            goto LAB_008c9a18;
          }
          uVar5 = uVar5 + 1;
          lVar3 = lVar3 + 0x38;
        } while (uVar2 != uVar5);
      }
      lVar3 = 0;
    }
  }
LAB_008c9a18:
  plVar6 = *(long **)(param_1 + 0x188);
  plVar4 = (long *)(param_1 + 0x180);
  lVar8 = param_3 + -1;
  lVar7 = *(long *)(param_1 + 0x170);
  uVar5 = -param_3;
  if (plVar4 == plVar6) {
    lVar11 = lVar7;
LAB_008c9aa0:
    uVar5 = lVar8 + lVar11 & uVar5;
    if ((long)((lVar7 + *(long *)(param_1 + 0x178)) - uVar5) < param_2) {
      FUN_008d43d0(0,0x1000);
      FUN_008d43e0("GpuBuffer Allocation Failed. Allocated size : %d Byte.\n",param_2);
      FUN_008d43e0("Current GpuBuffer Allocation : %d/%d.\n",*(undefined8 *)(param_1 + 0x1b8),
                   *(undefined8 *)(param_1 + 0x178));
      return 0;
    }
    plVar6 = (long *)(lVar3 + 0x18);
    lVar7 = *plVar6;
    *(ulong *)(lVar3 + 8) = uVar5;
    *(long *)(lVar3 + 0x10) = param_2;
    *plVar6 = *(long *)(param_1 + 0x180);
    *(long **)(lVar7 + 8) = plVar4;
    *(long **)(*(long *)(param_1 + 0x180) + 8) = plVar6;
    *(long *)(param_1 + 0x180) = lVar7;
  }
  else {
    lVar10 = plVar6[-2];
    uVar9 = lVar8 + lVar7 & uVar5;
    lVar11 = lVar10 - uVar9;
    while (lVar11 < param_2) {
      lVar11 = lVar10 + plVar6[-1];
      plVar6 = (long *)plVar6[1];
      if (plVar4 == plVar6) goto LAB_008c9aa0;
      lVar10 = plVar6[-2];
      uVar9 = lVar8 + lVar11 & uVar5;
      lVar11 = lVar10 - uVar9;
    }
    plVar4 = (long *)(lVar3 + 0x18);
    lVar7 = *plVar4;
    *(ulong *)(lVar3 + 8) = uVar9;
    *(long *)(lVar3 + 0x10) = param_2;
    *plVar4 = *plVar6;
    *(long **)(lVar7 + 8) = plVar6;
    *(long **)(*plVar6 + 8) = plVar4;
    *plVar6 = lVar7;
  }
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + 1;
  *(long *)(param_1 + 0x1b8) = *(long *)(param_1 + 0x1b8) + *(long *)(lVar3 + 0x10);
  return *(undefined8 *)(lVar3 + 8);
}


