/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e1c44; name: FUN_007e1c44
 */


void FUN_007e1c44(undefined8 param_1,long param_2,long param_3)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (param_3 == 0) {
    local_28[0] = 0x10407;
  }
  else {
    FUN_007e51d8(param_3,param_2 + 0x90);
    local_28[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


