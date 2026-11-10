/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d0202c; name: FUN_01d0202c
 */


long FUN_01d0202c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long local_50 [3];
  undefined1 auStack_38 [8];
  undefined8 local_18;
  
  plVar1 = (long *)FUN_01d020a0(param_1,param_2,&local_18,auStack_38,param_3);
  lVar2 = *plVar1;
  if (*plVar1 == 0) {
    FUN_01d02230(local_50,param_1,param_4);
    FUN_01d0229c(param_1,local_18,plVar1,local_50[0]);
    lVar2 = local_50[0];
  }
  return lVar2;
}


