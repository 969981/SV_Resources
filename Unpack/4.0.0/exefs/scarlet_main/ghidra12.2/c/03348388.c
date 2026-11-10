/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


