/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a59cc; name: FUN_007a59cc
 */


undefined8 FUN_007a59cc(long param_1)

{
  MutexType *pMVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    uVar3 = 5;
    switch(*(int *)(param_1 + 0x60)) {
    case 1:
      goto switchD_007a5a20_caseD_1;
    case 2:
      pMVar1 = (MutexType *)(*(long *)(param_1 + 0xa8) + 0x1f8);
      nn::os::LockMutex(pMVar1);
      uVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0xa8) + 0x218) + 0x10))();
      uVar4 = 1;
      if ((uVar2 & 1) == 0) {
        uVar4 = 2;
      }
      FUN_0079b6f0(*(undefined8 *)(param_1 + 0xa8),uVar4);
      nn::os::UnlockMutex(pMVar1);
      FUN_0079c79c(*(undefined8 *)(param_1 + 0xa8));
      local_30[0] = 0;
      goto LAB_007a5a80;
    case 3:
      FUN_00cbd7c0(local_30,param_1 + 100);
      break;
    case 4:
      goto switchD_007a5a20_caseD_4;
    default:
      return 1;
    }
  }
  else {
    if (*(int *)(param_1 + 0x60) == 1) {
      FUN_0078cc8c();
    }
switchD_007a5a20_caseD_4:
    local_30[0] = 0x6c05;
LAB_007a5a80:
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  }
  FUN_018ff39c(param_1 + 0x94,local_30);
  uVar3 = 0;
  *(undefined **)(param_1 + 0x30) = PTR_FUN_047d0b80;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NetNetworkStateJob::WaitBackgroundJobEnd";
switchD_007a5a20_caseD_1:
  return uVar3;
}


