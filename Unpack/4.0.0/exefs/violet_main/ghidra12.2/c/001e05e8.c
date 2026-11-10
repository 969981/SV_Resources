/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e05e8; name: FUN_001e05e8
 */


long * FUN_001e05e8(long param_1,int param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long local_38;
  long local_30;
  
  if (param_3 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar3 = &local_38;
  local_38 = 0;
  local_30 = 0;
  plVar2 = &local_38;
  for (; param_1 < param_3[4]; param_3 = (long *)*param_3) {
LAB_001e0608:
    plVar1 = (long *)*param_3;
    if (plVar1 == (long *)0x0) goto LAB_001e06bc;
    if ((param_1 < plVar1[4]) || ((param_1 <= plVar1[4] && (param_2 < (int)plVar1[5])))) {
      *param_3 = plVar1[1];
      plVar1[1] = (long)param_3;
      param_3 = plVar1;
      if (*plVar1 == 0) goto LAB_001e06c0;
    }
    *plVar3 = (long)param_3;
    plVar1 = plVar2;
    plVar3 = param_3;
LAB_001e06b4:
    plVar2 = plVar1;
  }
  if (param_3[4] < param_1) {
LAB_001e0658:
    plVar1 = (long *)param_3[1];
    if (plVar1 != (long *)0x0) {
      if ((param_1 < plVar1[4]) || ((param_1 <= plVar1[4] && (param_2 <= (int)plVar1[5])))) {
        plVar1 = param_3;
LAB_001e06a8:
        plVar2[1] = (long)plVar1;
        param_3 = plVar1 + 1;
        goto LAB_001e06b4;
      }
      param_3[1] = *plVar1;
      *plVar1 = (long)param_3;
      if (plVar1[1] != 0) goto LAB_001e06a8;
      goto LAB_001e06c0;
    }
  }
  else {
    if (param_2 < (int)param_3[5]) goto LAB_001e0608;
    if ((int)param_3[5] < param_2) goto LAB_001e0658;
  }
LAB_001e06bc:
  plVar1 = param_3;
LAB_001e06c0:
  plVar2[1] = *plVar1;
  *plVar3 = plVar1[1];
  *plVar1 = local_30;
  plVar1[1] = local_38;
  return plVar1;
}


