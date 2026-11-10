/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012e32b8; name: FUN_012e32b8
 */


void FUN_012e32b8(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 1;
  nn::os::InitializeLightEvent(param_1 + 1,0,1);
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[4] = 0x1ff00000000;
  param_1[5] = 0;
  memset(param_1 + 0x106,0,0x48);
  *(undefined4 *)((long)param_1 + 0x89c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x112,0,1);
  FUN_012e333c(param_1 + 0x114);
  param_1[0x121] = 0;
  return;
}


