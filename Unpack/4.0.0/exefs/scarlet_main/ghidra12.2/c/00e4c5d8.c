/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e4c5d8; name: FUN_00e4c5d8
 */


void FUN_00e4c5d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 local_50 [3];
  undefined8 local_38;
  
  plVar1 = (long *)FUN_00e50138(param_1,&local_38,param_2);
  if (*plVar1 == 0) {
    FUN_00e501b0(local_50,param_1,param_3,param_4);
    FUN_00e4e54c(param_1,local_38,plVar1,local_50[0]);
  }
  return;
}


