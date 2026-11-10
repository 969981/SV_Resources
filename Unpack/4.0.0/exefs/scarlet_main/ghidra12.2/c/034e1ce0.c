/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034e1ce0; name: FUN_034e1ce0
 */


void FUN_034e1ce0(long *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  long *plVar12;
  
  plVar12 = (long *)param_2[0x13];
  uVar2 = *(uint *)(param_2 + 3);
  if (plVar12 != param_1) {
    plVar12 = (long *)param_1[0x2f];
    if (plVar12 == (long *)0x0) {
      return;
    }
    plVar9 = (long *)*plVar12;
    if (*(uint *)(plVar12 + 1) == uVar2) {
      plVar7 = (long *)0x0;
      plVar10 = plVar12;
    }
    else {
      plVar10 = plVar12;
      do {
        plVar5 = plVar9;
        plVar7 = plVar10;
        if (plVar5 == (long *)0x0) {
          return;
        }
        plVar9 = (long *)*plVar5;
        plVar10 = plVar5;
      } while (*(uint *)(plVar5 + 1) != uVar2);
      if (plVar5 != plVar12) {
        *plVar7 = (long)plVar9;
        goto LAB_034e1db4;
      }
    }
    param_1[0x2f] = (long)plVar9;
    plVar5 = plVar12;
LAB_034e1db4:
    if ((long *)param_1[0x30] == plVar5) {
      param_1[0x30] = (long)plVar7;
    }
    *plVar10 = param_1[0x31];
    param_1[0x31] = (long)plVar5;
    *(int *)((long)param_1 + 0x19c) = *(int *)((long)param_1 + 0x19c) + -1;
    return;
  }
  (**(code **)(*param_2 + 0x38))(param_2,0);
  uVar4 = *(uint *)(param_1 + 0x21);
  if (uVar4 != 0) {
    iVar6 = 0;
    uVar11 = uVar4;
LAB_034e1d54:
    iVar1 = iVar6 + (uVar11 >> 1);
    plVar9 = (long *)(param_1[0x20] + (long)iVar1 * 8);
    uVar3 = *(uint *)(*plVar9 + 0x18);
    if (uVar3 != uVar2) goto code_r0x034e1d6c;
    plVar10 = (long *)((param_1[0x20] + (ulong)uVar4 * 8) - 8);
    if (plVar9 < plVar10) {
      do {
        plVar5 = plVar9 + 1;
        *plVar9 = *plVar5;
        plVar9 = plVar5;
      } while (plVar5 < plVar10);
      uVar4 = *(uint *)(param_1 + 0x21);
    }
    *(uint *)(param_1 + 0x21) = uVar4 - 1;
  }
LAB_034e1e20:
  plVar9 = (long *)param_1[0x2f];
  if (plVar9 == (long *)0x0) goto LAB_034e1ea0;
  plVar10 = (long *)*plVar9;
  if (*(uint *)(plVar9 + 1) == uVar2) {
    plVar8 = (long *)0x0;
    plVar5 = plVar9;
LAB_034e1e40:
    param_1[0x2f] = (long)plVar10;
    plVar7 = plVar9;
  }
  else {
    plVar5 = plVar9;
    do {
      plVar7 = plVar10;
      plVar8 = plVar5;
      if (plVar7 == (long *)0x0) goto LAB_034e1ea0;
      plVar10 = (long *)*plVar7;
      plVar5 = plVar7;
    } while (*(uint *)(plVar7 + 1) != uVar2);
    if (plVar7 == plVar9) goto LAB_034e1e40;
    *plVar8 = (long)plVar10;
  }
  if ((long *)param_1[0x30] == plVar7) {
    param_1[0x30] = (long)plVar8;
  }
  *plVar5 = param_1[0x31];
  param_1[0x31] = (long)plVar7;
  *(int *)((long)param_1 + 0x19c) = *(int *)((long)param_1 + 0x19c) + -1;
LAB_034e1ea0:
                    /* WARNING: Could not recover jumptable at 0x034e1eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(plVar12);
  return;
code_r0x034e1d6c:
  if (uVar3 < uVar2) {
    iVar6 = iVar1 + 1;
  }
  uVar11 = uVar11 - (uVar3 < uVar2) >> 1;
  if (uVar11 == 0) goto LAB_034e1e20;
  goto LAB_034e1d54;
}


