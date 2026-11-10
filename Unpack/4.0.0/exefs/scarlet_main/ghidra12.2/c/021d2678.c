/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021d2678; name: FUN_021d2678
 */


void FUN_021d2678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 local_50 [3];
  undefined8 local_38;
  
  plVar1 = (long *)FUN_021d33c4(param_1,&local_38,param_2);
  if (*plVar1 == 0) {
    FUN_021d3468(local_50,param_1,param_3,param_4);
    FUN_021d34f0(param_1,local_38,plVar1,local_50[0]);
  }
  return;
}


