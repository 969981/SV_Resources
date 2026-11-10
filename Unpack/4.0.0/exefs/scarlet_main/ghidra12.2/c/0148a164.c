/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0148a164; name: FUN_0148a164
 */


void FUN_0148a164(long param_1,long *param_2)

{
  long lVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x160));
  if ((*(long **)(param_1 + 0x140) != (long *)0x0) && (**(long **)(param_1 + 0x140) == *param_2)) {
    FUN_0148a1cc();
    lVar1 = *(long *)(param_1 + 0x140);
    *(undefined8 *)(param_1 + 0x140) = 0;
    if (lVar1 != 0) {
      FUN_016b5500(param_1 + 0x148);
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x160));
  return;
}


