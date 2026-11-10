/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018ffcb0; name: FUN_018ffcb0
 */


void FUN_018ffcb0(undefined8 param_1)

{
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if ((DAT_047fb230 & 1) == 0) {
    local_30[0] = 0x1040c;
  }
  else if (DAT_047fb231 == '\x01') {
    local_30[0] = 0x10408;
  }
  else {
    FUN_0078a148(0xe);
    local_30[0] = 0;
    DAT_047fb231 = '\x01';
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_30);
  return;
}


