/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e7e52c; name: FUN_01e7e52c
 */


void FUN_01e7e52c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  plVar1 = (long *)param_1[3];
  param_2[3] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  FUN_01e7ce2c(param_2 + 4,param_1 + 4);
  return;
}


