/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0054fcf4; name: FUN_0054fcf4
 */


undefined8 FUN_0054fcf4(long param_1)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x128);
  bVar1 = FUN_001feef4(param_1 + 200);
  nn::os::LockMutex((MutexType *)(lVar2 + 0x38));
  *(byte *)(lVar2 + 0x58) = bVar1 & 1;
  *(undefined1 *)(lVar2 + 0x59) = 1;
  nn::os::UnlockMutex((MutexType *)(lVar2 + 0x38));
  return 1;
}


