/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012ca470; name: FUN_012ca470
 */


void FUN_012ca470(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 1;
  nn::os::InitializeLightEvent(param_1 + 1,0,1);
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[7] = 0x7ffffffffffffff;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = uVar1;
  param_1[0xc] = 0;
  param_1[0xd] = uVar1;
  param_1[0x13] = 0;
  param_1[0x14] = uVar1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0xffffffffffffffff;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0x1fffffffffffffff;
  param_1[0x16] = 0;
  return;
}


