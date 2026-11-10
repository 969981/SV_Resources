/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0343ada4; name: FUN_0343ada4
 */


void FUN_0343ada4(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_047e6ef8 + 0x10;
  param_1[0xe] = (long)(PTR_DAT_047e6ef8 + 0xe8);
  *param_1 = (long)puVar1;
  if (*(char *)((long)param_1 + 0x6a) != '\0') {
    lVar2 = param_1[10];
    nn::os::LockMutex((MutexType *)(lVar2 + 0x1e8));
    *(int *)(lVar2 + 0x210) = *(int *)(lVar2 + 0x210) + -1;
    nn::os::UnlockMutex((MutexType *)(lVar2 + 0x1e8));
  }
  FUN_0343cfb0(param_1);
  return;
}


