/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007cf654; name: FUN_007cf654
 */


void FUN_007cf654(undefined8 param_1,long *param_2,long param_3)

{
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if (param_2[0xb] == 0) {
    param_2[0xb] = param_3;
    FUN_0078cb14(param_3);
    (**(code **)(*param_2 + 0x10))(param_2,1);
    param_2[8] = (long)"LeaveSessionJob::LeaveMesh";
    param_2[6] = (long)PTR_FUN_047d1238;
    param_2[7] = 0;
    local_30[0] = 0;
  }
  else {
    local_30[0] = 0x10408;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_30);
  return;
}


