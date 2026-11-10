/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a2238; name: FUN_007a2238
 */


void FUN_007a2238(undefined8 param_1,long param_2)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (*(int *)(param_2 + 0x198) != 0) {
    FUN_00cbd7c0(param_1,param_2 + 0x198);
    return;
  }
  if (*(int *)(param_2 + 0x1a8) != 0) {
    FUN_00cbd7c0(param_1,param_2 + 0x1a8);
    return;
  }
  if (*(int *)(param_2 + 0x1c4) == 4) {
    local_28[0] = 0x8c6e;
  }
  else {
    local_28[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


