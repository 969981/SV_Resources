/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dbf510; name: FUN_01dbf510
 */


void FUN_01dbf510(long param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x60));
  piVar2 = *(int **)(param_1 + 0x28);
  piVar1 = *(int **)(param_1 + 0x30);
  if ((piVar2 != piVar1) && (*piVar2 != param_2)) {
    do {
      piVar2 = piVar2 + 4;
      if (piVar1 == piVar2) {
        piVar2 = piVar1;
        break;
      }
    } while (*piVar2 != param_2);
  }
  if (piVar1 != piVar2) {
    FUN_0211901c(param_1 + 0x28);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x60));
  return;
}


