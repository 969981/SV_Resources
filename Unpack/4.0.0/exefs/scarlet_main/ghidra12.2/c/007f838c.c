/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f838c; name: FUN_007f838c
 */


void FUN_007f838c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
    FUN_007bfae0(lVar1);
    FUN_007bfaa0(lVar1);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  FUN_007971bc(param_1 + 0x88);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x58));
  return;
}


