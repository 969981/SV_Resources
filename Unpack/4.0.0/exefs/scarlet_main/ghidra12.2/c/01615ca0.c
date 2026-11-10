/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01615ca0; name: FUN_01615ca0
 */


void FUN_01615ca0(long param_1)

{
  long *plVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1d0));
  for (plVar1 = *(long **)(param_1 + 0x150); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    if (*(char *)(plVar1[6] + 0xdc) == '\0') {
      *(undefined1 *)(plVar1[6] + 0xdc) = 1;
      FUN_01479954();
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1d0));
  return;
}


