/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b29cc; name: FUN_007b29cc
 */


void FUN_007b29cc(long param_1,long *param_2)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x1f8));
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 0x218));
  memcpy(param_2 + 0xab,(void *)(param_1 + 0x12e0),(ulong)*(byte *)(param_1 + 0x1320));
  *(undefined1 *)(param_2 + 0xb3) = *(undefined1 *)(param_1 + 0x1320);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1f8));
  return;
}


