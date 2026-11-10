/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01247754; name: FUN_01247754
 */


void FUN_01247754(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined2 *)(param_1 + 3) = 0;
  *param_1 = &PTR_LAB_04600bb0;
  *(undefined1 *)((long)param_1 + 0x1a) = 1;
  param_1[1] = param_2;
  param_1[2] = param_3;
  FUN_01247774();
  return;
}


