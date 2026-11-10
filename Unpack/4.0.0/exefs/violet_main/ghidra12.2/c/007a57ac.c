/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a57ac; name: FUN_007a57ac
 */


undefined8 FUN_007a57ac(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    uVar1 = 5;
    switch(*(int *)(param_1 + 0x60)) {
    case 1:
      goto switchD_007a5848_caseD_1;
    case 2:
      FUN_0079b6f0(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0x90));
      local_28[0] = 0;
      local_18[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
      FUN_018ff39c(param_1 + 0x94,local_28);
      uVar2 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x1e8))();
      if ((uVar2 & 1) != 0) {
        FUN_0079d698(*(undefined8 *)(param_1 + 0xa8));
        *(undefined **)(param_1 + 0x30) = PTR_FUN_047d0b88;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "NetNetworkStateJob::WaitSendUpdateNetworkProperty";
        return 0;
      }
      break;
    case 3:
      FUN_00cbd7c0(local_28,param_1 + 100);
      goto LAB_007a57f0;
    case 4:
      goto switchD_007a5848_caseD_4;
    default:
      return 1;
    }
  }
  else {
    if (*(int *)(param_1 + 0x60) == 1) {
      FUN_0078cc8c();
    }
switchD_007a5848_caseD_4:
    local_28[0] = 0x6c05;
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
LAB_007a57f0:
    FUN_018ff39c(param_1 + 0x94,local_28);
  }
  uVar1 = 0;
  *(undefined **)(param_1 + 0x30) = PTR_FUN_047d0b80;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NetNetworkStateJob::WaitBackgroundJobEnd";
switchD_007a5848_caseD_1:
  return uVar1;
}


