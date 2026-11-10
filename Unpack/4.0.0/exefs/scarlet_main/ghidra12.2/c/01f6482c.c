/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f6482c; name: FUN_01f6482c
 */


bool FUN_01f6482c(long param_1,undefined1 param_2)

{
  bool bVar1;
  long lVar2;
  undefined1 local_24 [4];
  
  local_24[0] = param_2;
  nn::os::LockMutex((MutexType *)(param_1 + 0x1e0));
  lVar2 = FUN_0289a080(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),local_24);
  bVar1 = *(long *)(param_1 + 0x60) != lVar2;
  if (bVar1) {
    FUN_02899f1c((undefined8 *)(param_1 + 0x58),lVar2);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1e0));
  return bVar1;
}


