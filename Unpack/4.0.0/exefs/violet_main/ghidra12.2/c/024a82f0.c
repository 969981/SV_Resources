/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024a82f0; name: FUN_024a82f0
 */


void FUN_024a82f0(undefined8 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  long local_18;
  
  local_18 = param_1[2];
  if (local_18 == *(long *)*param_1) {
    local_18 = *(long *)(*(long *)*param_1 + 8);
  }
  FUN_024a8750(param_1,param_2,param_3 & 1,&local_18,param_4);
  return;
}


