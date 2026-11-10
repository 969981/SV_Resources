/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


