/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028b3160; name: FUN_028b3160
 */


void FUN_028b3160(long param_1)

{
  FUN_028b32bc(param_1 + 0x8f0);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x8e0));
  FUN_028b32fc(param_1 + 0x8a0,*(undefined8 *)(param_1 + 0x8a8));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x890));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 8));
  return;
}


