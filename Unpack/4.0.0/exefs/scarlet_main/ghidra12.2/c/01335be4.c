/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


