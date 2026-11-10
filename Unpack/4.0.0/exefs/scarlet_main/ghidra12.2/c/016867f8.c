/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016867f8; name: FUN_016867f8
 */


void FUN_016867f8(undefined8 *param_1,undefined8 param_2)

{
  param_1[4] = 0x666666666666666;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 1;
  param_1[9] = 0x666666666666666;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[7] = 0;
  param_1[8] = param_2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  nn::os::InitializeLightEvent(param_1 + 0x10,0,1);
  return;
}


