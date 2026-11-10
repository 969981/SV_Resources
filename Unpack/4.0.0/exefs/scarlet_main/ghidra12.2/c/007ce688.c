/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ce688; name: FUN_007ce688
 */


ulong FUN_007ce688(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  uVar2 = FUN_007ce274();
  puVar1 = PTR_DAT_047d0a08;
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar2 = (**(code **)(**(long **)(*(long *)PTR_DAT_047d0a08 + 0x18) + 0xe8))();
    if ((uVar2 & 1) == 0) {
      uVar2 = (**(code **)(**(long **)(*(long *)puVar1 + 0x18) + 0xe0))();
      if ((uVar2 & 1) == 0) {
        local_30[0] = 0xc406;
        local_18[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
        FUN_018ff39c(param_1 + 0x14,local_30);
        uVar2 = 0;
        param_1[6] = (long)PTR_FUN_047d11c0;
        param_1[7] = 0;
        uVar3 = 0;
        uVar4 = 0;
        param_1[8] = (long)"JoinSessionJobBase::ProcessSendMonitoringData";
      }
      else if ((param_1[0xb] == 0) || (*(char *)(param_1[0xb] + 0x28) == '\0')) {
        uVar2 = (**(code **)(*param_1 + 0x40))(param_1);
        uVar3 = uVar2 & 0xffff0000;
        uVar4 = uVar2 & 0xff00;
        uVar2 = uVar2 & 0xff;
      }
      else {
        local_30[0] = 0x6c05;
        local_18[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
        FUN_018ff39c(param_1 + 0x14,local_30);
        uVar2 = 0;
        param_1[6] = (long)PTR_LAB_047d11d0;
        param_1[7] = 0;
        uVar3 = 0;
        uVar4 = 0;
        param_1[8] = (long)"JoinSessionJobBase::DisconnectNetwork";
      }
    }
    else {
      uVar3 = 0;
      uVar4 = 0;
      uVar2 = 5;
    }
  }
  return uVar3 | uVar2 | uVar4;
}


