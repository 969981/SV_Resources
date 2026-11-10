/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f78084; name: FUN_01f78084
 */


long FUN_01f78084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long local_50 [3];
  undefined8 local_38;
  
  plVar1 = (long *)FUN_01d0232c(param_1,&local_38,param_2);
  lVar2 = *plVar1;
  if (*plVar1 == 0) {
    FUN_01f780f8(local_50,param_1,param_3);
    FUN_01d0229c(param_1,local_38,plVar1,local_50[0]);
    lVar2 = local_50[0];
  }
  return lVar2;
}


