/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c4aa50; name: FUN_00c4aa50
 */


void FUN_00c4aa50(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  size_t sVar3;
  long *plVar4;
  
  plVar4 = (long *)param_1[1];
  plVar2 = (long *)param_1[2];
  if ((plVar4 != plVar2) && (*plVar4 != param_2)) {
    do {
      if (plVar2 + -1 == plVar4) {
        plVar4 = plVar2;
        goto LAB_00c4aaac;
      }
      plVar1 = plVar4 + 1;
      plVar4 = plVar4 + 1;
    } while (*plVar1 != param_2);
  }
LAB_00c4aaac:
  if (plVar2 != plVar4) {
    sVar3 = (long)plVar2 - (long)(plVar4 + 1);
    if (sVar3 != 0) {
      memmove(plVar4,plVar4 + 1,sVar3);
    }
    param_1[2] = (long)plVar4 + sVar3;
  }
  plVar4 = *(long **)(param_2 + 0x80);
  plVar2 = *(long **)(param_2 + 0x88);
  if ((plVar4 != plVar2) && (*plVar4 != *param_1)) {
    do {
      if (plVar2 + -1 == plVar4) {
        plVar4 = plVar2;
        goto LAB_00c4aafc;
      }
      plVar1 = plVar4 + 1;
      plVar4 = plVar4 + 1;
    } while (*plVar1 != *param_1);
  }
LAB_00c4aafc:
  if (plVar2 != plVar4) {
    sVar3 = (long)plVar2 - (long)(plVar4 + 1);
    if (sVar3 != 0) {
      memmove(plVar4,plVar4 + 1,sVar3);
    }
    *(size_t *)(param_2 + 0x88) = (long)plVar4 + sVar3;
  }
  plVar2 = (long *)param_1[9];
  for (plVar4 = (long *)param_1[8]; plVar4 != plVar2; plVar4 = plVar4 + 1) {
    FUN_00c495e0(*plVar4 + 0x40,param_2);
  }
  return;
}


