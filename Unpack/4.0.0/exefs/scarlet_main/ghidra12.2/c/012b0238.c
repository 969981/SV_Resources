/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012b0238; name: FUN_012b0238
 */


void FUN_012b0238(undefined8 *param_1)

{
  FUN_012b1390();
  *param_1 = &PTR_LAB_045e86e8;
  param_1[4] = &PTR_LAB_045e8718;
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 1;
  nn::os::InitializeLightEvent(param_1 + 6,0,1);
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[10] = &DAT_cbf29ce484222645;
  param_1[0xb] = &DAT_03c886bc;
  param_1[0x21] = 0;
  param_1[0xe] = &DAT_cbf29ce484222645;
  param_1[0xf] = &DAT_03c886bc;
  param_1[0x12] = &DAT_cbf29ce484222645;
  param_1[0x13] = &DAT_03c886bc;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = param_1[1];
  param_1[0x19] = 0x666666666666666;
  param_1[0x1c] = 0;
  param_1[0x1d] = param_1[1];
  *(undefined4 *)(param_1 + 0x22) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x25) = 0x3f800000;
  param_1[0x1e] = 0x666666666666666;
  param_1[0x1f] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  return;
}


