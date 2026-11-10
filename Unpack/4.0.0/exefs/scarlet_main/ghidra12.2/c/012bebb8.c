/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012bebb8; name: FUN_012bebb8
 */


void FUN_012bebb8(undefined8 *param_1)

{
  FUN_012bec48();
  *param_1 = &PTR_FUN_045a7170;
  param_1[4] = &PTR_LAB_045a71a0;
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 1;
  nn::os::InitializeLightEvent(param_1 + 6,0,1);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  FUN_012bf108(param_1 + 0xb);
  param_1[0xf] = 0x447a000043fa0000;
  param_1[0x12] = param_1 + 0xf;
  param_1[0x10] = 0x447a000047c35000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x47c35000;
  return;
}


