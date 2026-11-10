/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007b7740; name: FUN_007b7740
 */


void FUN_007b7740(undefined8 param_1)

{
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if ((DAT_047f9e81 & 1) == 0) {
    local_30[0] = 0x1040c;
  }
  else if (DAT_047f9e82 == '\x01') {
    local_30[0] = 0x10408;
  }
  else {
    FUN_0078a148(5);
    local_30[0] = 0;
    DAT_047f9e82 = '\x01';
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_30);
  return;
}


