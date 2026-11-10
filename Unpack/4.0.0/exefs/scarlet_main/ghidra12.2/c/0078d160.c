/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078d160; name: FUN_0078d160
 */


void FUN_0078d160(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined4 local_70 [4];
  undefined4 local_60 [8];
  
  if ((param_4 == 0) || (param_5 == 0)) {
    local_60[0] = 0x10407;
  }
  else if ((int)param_2[0xb] == 1) {
    local_60[0] = 0x10408;
  }
  else {
    FUN_018dd540(local_60);
    FUN_0278a178(local_70,param_2 + 0x12,local_60);
    param_2[0x11] = param_4;
    param_2[0x98] = param_5;
    (**(code **)(*param_2 + 0x10))(param_2,1);
    param_2[6] = (long)PTR_FUN_047d0918;
    param_2[7] = 0;
    param_2[8] = (long)"MonitoringServerAddressResolveJob::StepResolveMonitoringServerAddress";
    FUN_0078cb14(param_2 + 0xb);
    local_60[0] = 0;
  }
  local_70[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_70);
  FUN_00cbd7c0(param_1,local_60);
  return;
}


