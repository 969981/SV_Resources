/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0343d1b4; name: FUN_0343d1b4
 */


void FUN_0343d1b4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_047bfc08;
  param_1[0xe] = &PTR_FUN_047bfce0;
  if (*(char *)((long)param_1 + 0x6a) != '\0') {
    lVar1 = param_1[10];
    nn::os::LockMutex((MutexType *)(lVar1 + 0x1e8));
    *(int *)(lVar1 + 0x210) = *(int *)(lVar1 + 0x210) + -1;
    nn::os::UnlockMutex((MutexType *)(lVar1 + 0x1e8));
  }
  FUN_0343cfb0(param_1);
  return;
}


