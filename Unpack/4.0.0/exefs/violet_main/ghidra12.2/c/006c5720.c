/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c5720; name: FUN_006c5720
 */


void FUN_006c5720(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047cfab0 + 0x10);
  FUN_006c5b0c(param_1 + 1);
  nn::os::InitializeEvent(param_1 + 0x24,0,0);
  return;
}


