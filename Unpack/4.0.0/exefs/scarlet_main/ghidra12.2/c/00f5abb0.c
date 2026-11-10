/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f5abb0; name: FUN_00f5abb0
 */


void FUN_00f5abb0(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar4 = *(long **)(param_1 + 0x40);
  plVar5 = *(long **)(param_1 + 0x48);
  if (((plVar4 != plVar5) && (*plVar4 != 0)) && (*(short *)(*plVar4 + 0x1a) != 0)) {
    do {
      plVar4 = plVar4 + 7;
      if (plVar5 == plVar4) {
        plVar4 = plVar5;
        goto LAB_00f5ac24;
      }
      if (*plVar4 == 0) goto LAB_00f5ac24;
    } while (*(short *)(*plVar4 + 0x1a) != 0);
  }
LAB_00f5ac24:
  plVar1 = plVar4;
  if (plVar4 != plVar5) {
    while (plVar3 = plVar1, plVar1 = plVar3 + 7, plVar1 != plVar5) {
      if ((*plVar1 != 0) && (*(short *)(*plVar1 + 0x1a) != 0)) {
        FUN_00d0a34c(plVar4,plVar1);
        FUN_00c93a38(plVar4 + 2,plVar3 + 9);
        FUN_00f5a410(plVar4 + 4,plVar3 + 0xb);
        plVar4[6] = plVar3[0xd];
        plVar4 = plVar4 + 7;
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x48);
  lVar2 = (long)plVar5 - (long)plVar4;
  if (lVar2 != 0) {
    plVar1 = (long *)((long)plVar4 + lVar2);
    if (plVar1 != plVar5) {
      lVar6 = *(long *)(param_1 + 0x40);
      FUN_00d0a34c(plVar4,plVar1);
      lVar6 = lVar6 + ((long)plVar4 - lVar6 >> 3) * 8;
      FUN_00c93a38(lVar6 + 0x10,plVar1 + 2);
      FUN_00f5a410(lVar6 + 0x20,plVar1 + 4);
      *(long *)(lVar6 + 0x30) = plVar1[6];
      plVar4 = plVar4 + 7;
      if (plVar1 + 7 != plVar5) {
        do {
          plVar1 = plVar4 + (lVar2 >> 3);
          FUN_00d0a34c(plVar4,plVar1);
          FUN_00c93a38(plVar4 + 2,plVar1 + 2);
          FUN_00f5a410(plVar4 + 4,plVar1 + 4);
          plVar4[6] = plVar1[6];
          plVar4 = plVar4 + 7;
        } while (plVar5 + -(lVar2 >> 3) != plVar4);
      }
      plVar5 = *(long **)(param_1 + 0x48);
    }
    if (((plVar5 != plVar4) && (FUN_011753e0(plVar5 + -7), plVar5 + -7 != plVar4)) &&
       (FUN_011753e0(plVar5 + -0xe), plVar5 + -0xe != plVar4)) {
      do {
        FUN_011753e0(plVar5 + -0x15);
        plVar5 = plVar5 + -7;
      } while (plVar4 + 0xe != plVar5);
    }
    *(long **)(param_1 + 0x48) = plVar4;
  }
  return;
}


