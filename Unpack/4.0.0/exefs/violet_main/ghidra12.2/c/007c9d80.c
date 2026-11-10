/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c9d80; name: FUN_007c9d80
 */


void FUN_007c9d80(long *param_1)

{
  FUN_007c3a5c();
  *param_1 = (long)(PTR_DAT_047d1110 + 0x10);
  nn::os::InitializeMutex((MutexType *)(param_1 + 4),true,0);
  return;
}


