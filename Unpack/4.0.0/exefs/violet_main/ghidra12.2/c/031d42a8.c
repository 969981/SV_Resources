/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d42a8; name: FUN_031d42a8
 */


void FUN_031d42a8(long *param_1)

{
  *param_1 = (long)&PTR_LAB_046a5568;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 5));
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


