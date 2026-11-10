/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01aef2b8; name: FUN_01aef2b8
 */


void FUN_01aef2b8(undefined8 *param_1)

{
  *param_1 = &DAT_0451a9d0;
  param_1[4] = &PTR_LAB_0451aa00;
  FUN_01aef2f4(param_1 + 9);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 5));
  return;
}


