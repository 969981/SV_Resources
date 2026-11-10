/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


