/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278aa14; name: FUN_0278aa14
 */


void FUN_0278aa14(undefined8 param_1,long param_2,long param_3)

{
  undefined4 local_30 [4];
  undefined4 local_8 [2];
  
  if (param_3 == 0) {
    local_30[0] = 0x10407;
  }
  else {
    (**(code **)(**(long **)(param_2 + 0x28) + 0x10))();
    local_30[0] = 0;
  }
  local_8[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_8);
  FUN_00cbd7c0(param_1,local_30);
  return;
}


