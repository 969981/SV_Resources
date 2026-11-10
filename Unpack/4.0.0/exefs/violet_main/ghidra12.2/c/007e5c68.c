/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e5c68; name: FUN_007e5c68
 */


void FUN_007e5c68(undefined8 param_1,long *param_2,long param_3,long *param_4,undefined8 param_5)

{
  ulong uVar1;
  int *piVar2;
  int local_58 [4];
  int local_48 [4];
  undefined4 local_38 [2];
  
  if (param_3 == 0) {
    local_48[0] = 0x10407;
LAB_007e5cd0:
    local_58[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_58);
  }
  else {
    uVar1 = (**(code **)(*param_4 + 0xd8))(param_4);
    if (((uVar1 & 1) == 0) || (uVar1 = (**(code **)(*param_4 + 0xe8))(param_4), (uVar1 & 1) != 0)) {
      local_48[0] = 0x10408;
      goto LAB_007e5cd0;
    }
    (**(code **)(*param_4 + 0xa8))(local_48,param_4,param_2 + 0xc,param_5);
    if (local_48[0] == 0) {
      param_2[0xb] = param_3;
      FUN_0078cb14(param_3);
      param_2[6] = (long)PTR_LAB_047d1478;
      param_2[7] = 0;
      param_2[8] = (long)"UpdateSessionPropertySettingJob::WaitUpdateNetworkSetting";
      (**(code **)(*param_2 + 0x10))(param_2,1);
      local_58[0] = 0;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
      piVar2 = local_58;
      goto LAB_007e5cec;
    }
  }
  piVar2 = local_48;
LAB_007e5cec:
  FUN_00cbd7c0(param_1,piVar2);
  return;
}


