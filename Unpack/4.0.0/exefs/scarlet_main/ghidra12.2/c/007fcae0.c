/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007fcae0; name: FUN_007fcae0
 */


void FUN_007fcae0(undefined8 param_1)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if ((DAT_047fb489 & 1) == 0) {
    local_28[0] = 0x1040c;
  }
  else if (DAT_047fb48a == '\x01') {
    local_28[0] = 0x10408;
  }
  else {
    DAT_047fb48a = '\x01';
    FUN_0078a148(8);
    local_28[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


