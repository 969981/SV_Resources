/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


