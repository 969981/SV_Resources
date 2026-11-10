/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03348388; name: FUN_03348388
 */


void FUN_03348388(undefined8 *param_1)

{
  *param_1 = &DAT_047acac0;
  if (((*(char *)(param_1 + 1) != '\0') && (*(int *)(param_1[2] + 0xb0) == 0)) &&
     (*(int *)(param_1[2] + 0xa0) != 0)) {
    FUN_033431ec();
  }
  if ((MutexType *)param_1[3] == (MutexType *)0x0) {
    return;
  }
  nn::os::UnlockMutex((MutexType *)param_1[3]);
  return;
}


