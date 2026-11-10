/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018fe7f0; name: FUN_018fe7f0
 */


void FUN_018fe7f0(undefined8 param_1)

{
  ErrorResultVariant *this;
  undefined4 local_40 [4];
  undefined4 local_30 [4];
  
  if ((DAT_047f8f68 & 1) == 0) {
    local_30[0] = 0x1040c;
  }
  else {
    if (DAT_047f8f6a != '\x01') {
      FUN_0078a148(2);
      DAT_047f8f6a = '\x01';
      this = (ErrorResultVariant *)((ulong)local_30 | 4);
      local_30[0] = 0;
      local_40[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_40);
      FUN_0078ef18(local_40);
      FUN_018ff39c(local_30,local_40);
      FUN_0078b968(local_40);
      FUN_018ff39c(local_30,local_40);
      FUN_00807b58(local_40);
      FUN_018ff39c(local_30,local_40);
      local_30[0] = 0;
      goto LAB_018fe8c4;
    }
    local_30[0] = 0x10408;
  }
  this = (ErrorResultVariant *)((ulong)local_30 | 4);
LAB_018fe8c4:
  local_40[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_40);
  FUN_00cbd7c0(param_1,local_30);
  return;
}


