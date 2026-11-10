/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010f3a3c; name: FUN_010f3a3c
 */


bool FUN_010f3a3c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x170));
  uVar2 = FUN_010f3a94(param_1);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x168) = 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x170));
  return bVar1;
}


