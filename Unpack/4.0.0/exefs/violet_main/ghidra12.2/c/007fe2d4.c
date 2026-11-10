/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007fe2d4; name: FUN_007fe2d4
 */


void FUN_007fe2d4(undefined8 param_1,long param_2)

{
  undefined4 local_40 [4];
  int local_30 [4];
  undefined4 local_18 [2];
  
  FUN_007fe210(local_30);
  if (local_30[0] == 0) {
    *(undefined8 *)(param_2 + 0x30) = 0x48;
    *(undefined8 *)(param_2 + 0x38) = 1;
    *(char **)(param_2 + 0x40) = "WanBackgroundLoginJob::Logout";
    local_40[0] = 0;
  }
  else {
    local_40[0] = 0x10408;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_40);
  return;
}


