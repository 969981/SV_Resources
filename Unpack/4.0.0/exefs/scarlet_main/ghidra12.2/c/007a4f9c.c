/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a4f9c; name: FUN_007a4f9c
 */


void FUN_007a4f9c(undefined8 param_1,long *param_2)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  *(undefined1 *)(param_2[0x12] + 0x24b) = 0;
  param_2[6] = (long)PTR_FUN_047d0b30;
  param_2[7] = 0;
  param_2[8] = (long)"NetEventJob::WatchUpdateEvent";
  (**(code **)(*param_2 + 0x10))(param_2,1);
  local_28[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


