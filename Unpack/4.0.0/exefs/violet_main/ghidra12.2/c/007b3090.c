/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b3090; name: FUN_007b3090
 */


void FUN_007b3090(int *param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 local_38;
  undefined4 local_30;
  int local_28 [2];
  
  FUN_0079d8a4();
  if (*param_1 != 0) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_2 + 0x1f8));
  plVar2 = *(long **)(param_2 + 0x218);
  uVar1 = nn::ldn::GetNetworkInfo((NetworkInfo *)(plVar2 + 0x17));
  local_28[0] = (int)uVar1;
  if (local_28[0] != 0) {
    FUN_007afb6c(&local_38,uVar1,local_28);
    FUN_018ff39c(param_1,&local_38);
  }
  local_30 = 0;
  local_38 = 0x10;
  (**(code **)(*plVar2 + 0x50))(plVar2,&local_38);
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x1f8));
  return;
}


