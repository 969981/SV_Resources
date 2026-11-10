/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00808668; name: FUN_00808668
 */


void FUN_00808668(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047d1750 + 0x10);
  FUN_0080ebe8(param_1 + 0x28c);
  FUN_0078cb10(param_1 + 0x285);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x27e));
  FUN_007fce5c(param_1);
  return;
}


