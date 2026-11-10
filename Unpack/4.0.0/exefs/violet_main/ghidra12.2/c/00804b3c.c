/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00804b3c; name: FUN_00804b3c
 */


void FUN_00804b3c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047d1690 + 0x10);
  FUN_00804b7c(param_1 + 0xf);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xb));
  thunk_FUN_0078ccbc(param_1);
  return;
}


