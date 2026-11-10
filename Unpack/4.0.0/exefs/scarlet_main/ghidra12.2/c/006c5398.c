/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c5398; name: FUN_006c5398
 */


void FUN_006c5398(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047cfa98 + 0x10);
  nn::os::InitializeMutex((MutexType *)(param_1 + 1),false,0);
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}


