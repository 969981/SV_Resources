/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ccb12c; name: FUN_00ccb12c
 */


void FUN_00ccb12c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[4] = param_2;
  param_1[5] = 0x666666666666666;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[10] = 0x666666666666666;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *param_1 = param_3;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[9] = param_2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = param_2;
  param_1[0x13] = 0x1fffffffffffffff;
  param_1[0x14] = 0;
  *(undefined4 *)((long)param_1 + 0xc4) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x17,0,1);
  *(undefined1 *)(param_1 + 0x19) = 1;
  return;
}


