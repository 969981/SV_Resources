/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0190817c; name: FUN_0190817c
 */


undefined1  [16] FUN_0190817c(long param_1)

{
  undefined1 auVar1 [16];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x150));
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x120);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x150));
  return auVar1;
}


