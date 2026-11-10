/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018fdf30; name: FUN_018fdf30
 */


void FUN_018fdf30(undefined8 param_1)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if ((DAT_047fb1f4 & 1) == 0) {
    local_28[0] = 0x1040c;
  }
  else if (DAT_047fb1f5 == '\x01') {
    local_28[0] = 0x10408;
  }
  else {
    DAT_047fb1f5 = '\x01';
    FUN_0078a148(0x12);
    local_28[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


