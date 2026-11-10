/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012e2fa0; name: FUN_012e2fa0
 */


void FUN_012e2fa0(undefined8 *param_1)

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
  param_1[0x115] = 0;
  FUN_012e3090(param_1 + 0x116);
  param_1[0x11a] = 0;
  param_1[0x114] = param_1 + 0x115;
  param_1[0x11b] = 0;
  *(undefined4 *)((long)param_1 + 0x8ec) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x11c,0,1);
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  FUN_012e3148(param_1 + 0x120);
  param_1[0x124] = 0;
  FUN_012e3200(param_1 + 0x125);
  param_1[0x129] = 0;
  *(undefined4 *)(param_1 + 0x12a) = 0x3f800000;
  return;
}


