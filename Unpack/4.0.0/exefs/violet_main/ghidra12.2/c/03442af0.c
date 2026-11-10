/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03442af0; name: FUN_03442af0
 */


void FUN_03442af0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_047e6f00 + 0x138;
  param_1[-0xe] = (long)(PTR_DAT_047e6f00 + 0x10);
  *param_1 = (long)puVar1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if (*(char *)((long)param_1 + -6) != '\0') {
    lVar2 = param_1[-4];
    nn::os::LockMutex((MutexType *)(lVar2 + 0x1e8));
    *(int *)(lVar2 + 0x214) = *(int *)(lVar2 + 0x214) + -1;
    nn::os::UnlockMutex((MutexType *)(lVar2 + 0x1e8));
  }
  FUN_0343cfb0(param_1 + -0xe);
  return;
}


