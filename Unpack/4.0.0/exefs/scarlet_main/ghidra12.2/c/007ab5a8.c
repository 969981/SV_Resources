/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ab5a8; name: FUN_007ab5a8
 */


void FUN_007ab5a8(undefined8 param_1,long *param_2)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  param_2[7] = 0;
  param_2[6] = (long)PTR_FUN_047d0ca8;
  param_2[8] = (long)"NetResendMessageJob::ResendMessage";
  (**(code **)(*param_2 + 0x10))(param_2,1);
  local_28[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


