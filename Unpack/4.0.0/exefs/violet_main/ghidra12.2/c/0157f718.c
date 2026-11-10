/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0157f718; name: FUN_0157f718
 */


undefined4 FUN_0157f718(long param_1,long *param_2)

{
  undefined4 uVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1a0));
  if ((*(long **)(param_1 + 0x180) == (long *)0x0) || (**(long **)(param_1 + 0x180) != *param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0157f780();
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1a0));
  return uVar1;
}


