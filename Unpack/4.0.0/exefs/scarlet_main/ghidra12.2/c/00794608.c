/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00794608; name: FUN_00794608
 */


void FUN_00794608(undefined8 param_1,ulong *param_2,ulong param_3,uint param_4)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (((param_3 == 0) || ((param_3 & 3) != 0)) || (param_4 >> 4 < 0x175)) {
    local_28[0] = 0x10407;
  }
  else if (*param_2 == 0) {
    *param_2 = param_3;
    *(uint *)(param_2 + 1) = param_4;
    local_28[0] = 0;
  }
  else {
    local_28[0] = 0x10402;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


