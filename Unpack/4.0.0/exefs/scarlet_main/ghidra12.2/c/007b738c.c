/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007b738c; name: FUN_007b738c
 */


void FUN_007b738c(undefined8 param_1,long param_2,byte param_3)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (*(int *)(param_2 + 0x28) == 0) {
    local_28[0] = 0x10408;
  }
  else {
    *(byte *)(param_2 + 0xce) = param_3;
    *(ushort *)(param_2 + 0x1c) = (ushort)param_3;
    local_28[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


