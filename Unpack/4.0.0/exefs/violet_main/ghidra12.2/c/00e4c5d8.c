/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


