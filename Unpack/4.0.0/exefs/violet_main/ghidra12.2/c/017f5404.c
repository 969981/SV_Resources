/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017f5404; name: FUN_017f5404
 */


void FUN_017f5404(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [24];
  long *local_30;
  undefined4 local_4;
  
  local_4 = param_4;
  FUN_017f546c(auStack_48,param_3,*param_2,param_2[1],&local_4);
  FUN_017f5500(param_1,auStack_48);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  return;
}


