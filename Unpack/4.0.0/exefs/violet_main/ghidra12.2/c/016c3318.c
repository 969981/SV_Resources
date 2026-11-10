/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016c3318; name: FUN_016c3318
 */


undefined4 FUN_016c3318(long param_1)

{
  undefined4 uVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x3a0));
  uVar1 = *(undefined4 *)(param_1 + 0x398);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3a0));
  return uVar1;
}


