/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029a56c4; name: FUN_029a56c4
 */


void FUN_029a56c4(long *param_1)

{
  if (*(int *)((long)param_1 + 0x3f4) == 1) {
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x25));
  if (*(char *)((long)param_1 + 0x461) != '\0') {
    (**(code **)(*param_1 + 0x198))(param_1);
    *(undefined1 *)((long)param_1 + 0x461) = 0;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x25));
  return;
}


