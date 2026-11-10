/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c6820; name: FUN_006c6820
 */


undefined8 FUN_006c6820(long param_1)

{
  MutexType *pMVar1;
  undefined8 local_28;
  
  pMVar1 = (MutexType *)(param_1 + 0xa0);
  local_28 = 0;
  nn::os::LockMutex(pMVar1);
  FUN_006c6558(param_1,&local_28);
  FUN_006c6474(param_1);
  nn::os::LockMutex(pMVar1);
  if (((*(long *)(param_1 + 0x20) == param_1 + 0x18) && (*(char *)(param_1 + 0x110) == '\0')) &&
     (*(long *)(param_1 + 0x10) == param_1 + 8)) {
    nn::os::ClearEvent((EventType *)(param_1 + 0x28));
  }
  else {
    nn::os::SignalEvent((EventType *)(param_1 + 0x28));
  }
  nn::os::UnlockMutex(pMVar1);
  nn::os::UnlockMutex(pMVar1);
  return local_28;
}


