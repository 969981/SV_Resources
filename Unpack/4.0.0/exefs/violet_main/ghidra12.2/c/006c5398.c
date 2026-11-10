/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c5398; name: FUN_006c5398
 */


void FUN_006c5398(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047cfa98 + 0x10);
  nn::os::InitializeMutex((MutexType *)(param_1 + 1),false,0);
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}


