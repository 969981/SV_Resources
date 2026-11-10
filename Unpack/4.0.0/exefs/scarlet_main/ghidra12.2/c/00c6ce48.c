/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c6ce48; name: FUN_00c6ce48
 */


void FUN_00c6ce48(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 1;
  param_1[1] = param_1[1] | 1;
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  return;
}


