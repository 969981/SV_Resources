/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0133bb3c; name: FUN_0133bb3c
 */


void FUN_0133bb3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  
  local_18 = param_2;
  nn::os::LockMutex((MutexType *)(param_1 + 0x120));
  FUN_010106e4(param_1 + 0x208,&local_18,param_3);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x120));
  return;
}


