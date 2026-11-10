/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01335be4; name: FUN_01335be4
 */


void FUN_01335be4(long param_1,undefined8 param_2)

{
  undefined8 local_28;
  
  local_28 = param_2;
  nn::os::LockMutex((MutexType *)(param_1 + 0x120));
  *(undefined1 *)(param_1 + 0x108) = 1;
  FUN_02216d78(*(undefined8 *)(param_1 + 0xe8),&local_28);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x120));
  return;
}


