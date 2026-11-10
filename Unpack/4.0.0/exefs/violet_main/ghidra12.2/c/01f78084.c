/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


