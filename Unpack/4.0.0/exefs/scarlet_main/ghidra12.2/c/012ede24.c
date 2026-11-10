/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012ede24; name: FUN_012ede24
 */


void FUN_012ede24(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[4] = 0x1e1e1e1e1e1e1e1;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[9] = 0x1e1e1e1e1e1e1e1;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  param_1[0x10] = param_2;
  param_1[0x11] = 0x124924924924924;
  param_1[0x16] = 0x124924924924924;
  param_1[0x17] = 0;
  *(undefined4 *)((long)param_1 + 0xfc) = 1;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[7] = 0;
  param_1[8] = param_2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = param_2;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  nn::os::InitializeLightEvent(param_1 + 0x1e,0,1);
  return;
}


