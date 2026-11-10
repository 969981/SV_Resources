/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015ab1c4; name: FUN_015ab1c4
 */


void FUN_015ab1c4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 local_40;
  undefined4 local_38;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x7640));
  local_40 = *param_2;
  local_38 = *(undefined4 *)(param_2 + 1);
  uVar1 = FUN_015ab234(param_1,&local_40);
  if ((uVar1 & 1) != 0) {
    FUN_015ab298(param_1 + 0xd0,param_2);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x7640));
  return;
}


