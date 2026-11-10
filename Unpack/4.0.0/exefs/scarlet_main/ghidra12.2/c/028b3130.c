/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028b3130; name: FUN_028b3130
 */


void FUN_028b3130(long param_1)

{
  FUN_028b327c(param_1 + 0x8a0);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x890));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 8));
  return;
}


