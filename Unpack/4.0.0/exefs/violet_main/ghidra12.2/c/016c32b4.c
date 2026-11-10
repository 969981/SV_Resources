/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016c32b4; name: FUN_016c32b4
 */


void FUN_016c32b4(long param_1,undefined8 param_2)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x1a0));
  if (*(long *)(param_1 + 0x180) != 0) {
    FUN_016c32fc(*(long *)(param_1 + 0x180),param_2);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1a0));
  return;
}


