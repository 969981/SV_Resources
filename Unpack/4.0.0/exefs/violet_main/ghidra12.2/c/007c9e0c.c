/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c9e0c; name: FUN_007c9e0c
 */


void FUN_007c9e0c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047d1110 + 0x10);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 4));
  FUN_007c3b34(param_1);
  operator_delete(param_1);
  return;
}


