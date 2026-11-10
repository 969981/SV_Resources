/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0275126c; name: FUN_0275126c
 */


void FUN_0275126c(long param_1)

{
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x80));
  FUN_02752a08(param_1 + 8);
  return;
}


