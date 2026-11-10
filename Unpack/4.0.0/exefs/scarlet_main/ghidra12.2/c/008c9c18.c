/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008c9c18; name: FUN_008c9c18
 */


void FUN_008c9c18(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  
  plVar1 = (long *)(param_1 + 400);
  if (plVar1 != *(long **)(param_1 + 0x198)) {
    plVar3 = *(long **)(param_1 + 0x198);
    do {
      iVar6 = (int)plVar3[-5];
      plVar2 = (long *)plVar3[1];
      plVar5 = plVar3 + -5;
      if (iVar6 == 0) {
        if (plVar1 != plVar3) {
          lVar7 = *plVar2;
          *(long **)(*plVar3 + 8) = plVar2;
          *plVar2 = *plVar3;
          *(long **)(lVar7 + 8) = plVar3;
          *plVar3 = lVar7;
        }
        plVar5 = (long *)(param_1 + 0x188);
        do {
          plVar4 = (long *)*plVar5;
          if ((long *)(param_1 + 0x180) == plVar4) goto LAB_008c9c40;
          plVar5 = plVar4 + 1;
        } while (plVar4[-2] != plVar3[-4]);
        plVar4[-2] = 0;
        *(long *)(param_1 + 0x1b8) = *(long *)(param_1 + 0x1b8) - plVar4[-1];
        plVar3 = (long *)plVar4[1];
        lVar7 = *plVar3;
        *(long **)(*plVar4 + 8) = plVar3;
        *plVar3 = *plVar4;
        *(long **)(lVar7 + 8) = plVar4;
        *plVar4 = lVar7;
        iVar6 = *(int *)(param_1 + 0x1b0);
        *(long **)(param_1 + 0x1d0) = plVar4 + -3;
        plVar5 = (long *)(param_1 + 0x1b0);
      }
      *(int *)plVar5 = iVar6 + -1;
LAB_008c9c40:
      plVar3 = plVar2;
    } while (plVar1 != plVar2);
  }
  return;
}


