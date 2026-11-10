/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c4ab80; name: FUN_00c4ab80
 */


void FUN_00c4ab80(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  size_t sVar3;
  long *plVar4;
  
  plVar4 = (long *)param_1[8];
  plVar2 = (long *)param_1[9];
  if ((plVar4 != plVar2) && (*plVar4 != param_2)) {
    do {
      if (plVar2 + -1 == plVar4) {
        plVar4 = plVar2;
        goto LAB_00c4abdc;
      }
      plVar1 = plVar4 + 1;
      plVar4 = plVar4 + 1;
    } while (*plVar1 != param_2);
  }
LAB_00c4abdc:
  if (plVar2 != plVar4) {
    sVar3 = (long)plVar2 - (long)(plVar4 + 1);
    if (sVar3 != 0) {
      memmove(plVar4,plVar4 + 1,sVar3);
    }
    param_1[9] = (long)plVar4 + sVar3;
  }
  plVar4 = *(long **)(param_2 + 0x48);
  plVar2 = *(long **)(param_2 + 0x50);
  if ((plVar4 != plVar2) && (*plVar4 != *param_1)) {
    do {
      if (plVar2 + -1 == plVar4) {
        plVar4 = plVar2;
        goto LAB_00c4ac2c;
      }
      plVar1 = plVar4 + 1;
      plVar4 = plVar4 + 1;
    } while (*plVar1 != *param_1);
  }
LAB_00c4ac2c:
  if (plVar2 != plVar4) {
    sVar3 = (long)plVar2 - (long)(plVar4 + 1);
    if (sVar3 != 0) {
      memmove(plVar4,plVar4 + 1,sVar3);
    }
    *(size_t *)(param_2 + 0x50) = (long)plVar4 + sVar3;
  }
  plVar2 = (long *)param_1[2];
  for (plVar4 = (long *)param_1[1]; plVar4 != plVar2; plVar4 = plVar4 + 1) {
    FUN_00c493f0(*plVar4 + 0x40,param_2);
  }
  return;
}


