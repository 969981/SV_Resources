/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03487dd4; name: FUN_03487dd4
 */


int FUN_03487dd4(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR_DAT_047e6f28;
  nn::os::LockMutex((MutexType *)(lVar2 + 0x118));
  iVar1 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar1;
  nn::os::UnlockMutex((MutexType *)(lVar2 + 0x118));
  return iVar1;
}


