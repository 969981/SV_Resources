/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


