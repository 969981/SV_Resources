/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


