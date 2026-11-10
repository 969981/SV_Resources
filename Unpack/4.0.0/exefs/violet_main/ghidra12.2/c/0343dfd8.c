/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0343dfd8; name: FUN_0343dfd8
 */


void FUN_0343dfd8(undefined8 *param_1)

{
  long lVar1;
  
  param_1[-0xe] = &PTR_FUN_047bfd68;
  *param_1 = &PTR_FUN_047bfe90;
  if (*(char *)((long)param_1 + -6) != '\0') {
    lVar1 = param_1[-4];
    nn::os::LockMutex((MutexType *)(lVar1 + 0x1e8));
    *(int *)(lVar1 + 0x214) = *(int *)(lVar1 + 0x214) + -1;
    nn::os::UnlockMutex((MutexType *)(lVar1 + 0x1e8));
  }
  FUN_0343cfb0(param_1 + -0xe);
  return;
}


