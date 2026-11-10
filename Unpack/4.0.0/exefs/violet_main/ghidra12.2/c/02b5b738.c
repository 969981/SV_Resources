/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b5b738; name: FUN_02b5b738
 */


void FUN_02b5b738(long *param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  *param_2 = (long)plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  plVar1 = (long *)param_1[1];
  param_2[1] = (long)plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  *(int *)(param_2 + 2) = (int)param_1[2];
  return;
}


