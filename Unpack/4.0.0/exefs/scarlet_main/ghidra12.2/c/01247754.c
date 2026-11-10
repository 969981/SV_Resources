/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


