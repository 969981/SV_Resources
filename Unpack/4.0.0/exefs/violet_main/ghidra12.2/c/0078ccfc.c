/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078ccfc; name: FUN_0078ccfc
 */


void FUN_0078ccfc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_047d0900;
  lVar2 = *(long *)PTR_DAT_047d0900;
  nn::os::LockMutex((MutexType *)(lVar2 + 0x68));
  if (*(int *)(param_1 + 8) - 1U < 2) {
    FUN_0078f48c(*(undefined8 *)puVar1,param_1);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  nn::os::UnlockMutex((MutexType *)(lVar2 + 0x68));
  return;
}


