/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01335dcc; name: FUN_01335dcc
 */


void FUN_01335dcc(long param_1,ulong param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x120));
  lVar3 = *(long *)(param_1 + 0x210);
  if (lVar3 != 0) {
    lVar2 = param_1 + 0x210;
    do {
      bVar1 = *(ulong *)(lVar3 + 0x20) < param_2;
      if (!bVar1) {
        lVar2 = lVar3;
      }
      lVar3 = *(long *)(lVar3 + (ulong)bVar1 * 8);
    } while (lVar3 != 0);
    if ((lVar2 != param_1 + 0x210) && (*(ulong *)(lVar2 + 0x20) <= param_2)) {
      FUN_01335e48(param_1 + 0x208);
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x120));
  return;
}


