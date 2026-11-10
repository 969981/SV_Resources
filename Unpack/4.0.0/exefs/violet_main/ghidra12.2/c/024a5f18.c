/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024a5f18; name: FUN_024a5f18
 */


void FUN_024a5f18(undefined8 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  long local_18;
  
  local_18 = param_1[2];
  if (local_18 == *(long *)*param_1) {
    local_18 = *(long *)(*(long *)*param_1 + 8);
  }
  FUN_024a64b0(param_1,param_2,param_3 & 1,&local_18,param_4);
  return;
}


