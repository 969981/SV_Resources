/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027ba6c0; name: FUN_027ba6c0
 */


void FUN_027ba6c0(undefined8 *param_1,undefined8 *param_2)

{
  FUN_01f78de8();
  *param_1 = &PTR_FUN_045e14e0;
  param_1[4] = &PTR_LAB_045e1568;
  param_1[5] = &DAT_045e15b8;
  param_1[10] = *param_2;
  param_1[0xb] = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}


