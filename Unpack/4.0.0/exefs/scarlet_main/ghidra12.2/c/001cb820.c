/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001cb820; name: FUN_001cb820
 */


void FUN_001cb820(undefined8 *param_1,undefined8 param_2)

{
  memset(param_1 + 1,0,0x1b8);
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return;
}


