/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027083ec; name: FUN_027083ec
 */


void FUN_027083ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_045d04b8;
  param_1[1] = &PTR_LAB_045d05d8;
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 8));
  FUN_02705888(param_1);
  return;
}


