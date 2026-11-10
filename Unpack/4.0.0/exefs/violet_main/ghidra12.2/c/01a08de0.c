/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a08de0; name: FUN_01a08de0
 */


void FUN_01a08de0(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x40));
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0x150);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x40));
  return;
}


