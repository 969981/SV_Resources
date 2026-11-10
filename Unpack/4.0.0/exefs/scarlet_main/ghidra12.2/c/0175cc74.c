/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0175cc74; name: FUN_0175cc74
 */


void FUN_0175cc74(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0x100000;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[2] = 0x400000;
  param_1[3] = 0;
  FUN_0175cca0();
  FUN_0175ccb0();
  return;
}


