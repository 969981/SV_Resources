/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d3fd0; name: FUN_007d3fd0
 */


void FUN_007d3fd0(undefined8 param_1,long param_2)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (*(int *)(param_2 + 0x98) == 2) {
    if (*(int *)(param_2 + 0x68) == 1) {
      FUN_0078cc8c();
      local_28[0] = 0;
      goto LAB_007d4014;
    }
  }
  local_28[0] = 0x10408;
LAB_007d4014:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


