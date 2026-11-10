/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0079c29c; name: FUN_0079c29c
 */


void FUN_0079c29c(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xd8));
  nn::os::LockMutex((MutexType *)(param_1 + 0xf8));
  (**(code **)(**(long **)(param_1 + 0x120) + 0x18))
            (*(long **)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x118));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xf8));
  uVar2 = FUN_007a8118(*(undefined8 *)(param_1 + 0x120));
  if ((uVar2 & 1) == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = FUN_007a82d8(*(undefined8 *)(param_1 + 0x120));
    bVar1 = bVar1 ^ 1;
  }
  *(byte *)(param_1 + 0x24c) = bVar1 & 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xd8));
  return;
}


