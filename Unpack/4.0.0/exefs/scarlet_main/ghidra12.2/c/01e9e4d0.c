/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e9e4d0; name: FUN_01e9e4d0
 */


byte FUN_01e9e4d0(long param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1a0));
  plVar1 = *(long **)(param_1 + 0x180);
  if (((plVar1 == (long *)0x0) || (*plVar1 != *param_2)) || (plVar1[4] == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(plVar1[4] + 0x24a) & 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1a0));
  return bVar2;
}


