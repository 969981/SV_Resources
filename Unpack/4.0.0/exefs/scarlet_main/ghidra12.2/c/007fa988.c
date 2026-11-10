/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007fa988; name: FUN_007fa988
 */


void FUN_007fa988(undefined8 param_1,long param_2)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if ((*(byte *)(param_2 + 0xb0) | 2) == 3) {
    FUN_00cbd7c0(param_1,param_2 + 0xb8);
    return;
  }
  local_28[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


