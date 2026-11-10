/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0284bee0; name: FUN_0284bee0
 */


void FUN_0284bee0(undefined8 param_1,long param_2,ushort param_3)

{
  undefined4 local_30 [4];
  undefined4 local_8 [2];
  
  if (param_3 < 2) {
    local_30[0] = 0x10407;
  }
  else {
    if (*(long *)(param_2 + 0x18) != 0) {
      FUN_0284c0b8();
    }
    local_30[0] = 0;
  }
  local_8[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_8);
  FUN_00cbd7c0(param_1,local_30);
  return;
}


