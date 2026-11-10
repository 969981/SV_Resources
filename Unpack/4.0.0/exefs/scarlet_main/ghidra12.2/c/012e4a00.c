/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012e4a00; name: FUN_012e4a00
 */


void FUN_012e4a00(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  FUN_012e4c00(param_1 + 1);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_012e4b44(param_1 + 0x10);
  param_1[0x15] = 0;
  *(undefined4 *)((long)param_1 + 0xdc) = 1;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  nn::os::InitializeLightEvent(param_1 + 0x1a,0,1);
  FUN_012e4c00(param_1 + 0x1c);
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  FUN_012e4b44(param_1 + 0x2b);
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)((long)param_1 + 0x1b4) = 1;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  nn::os::InitializeLightEvent(param_1 + 0x35,0,1);
  FUN_012e4c00(param_1 + 0x37);
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  FUN_012e4b44(param_1 + 0x46);
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)((long)param_1 + 0x28c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x50,0,1);
  FUN_012e4c00(param_1 + 0x52);
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  FUN_012e4b44(param_1 + 0x61);
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  *(undefined4 *)((long)param_1 + 0x364) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x6b,0,1);
  FUN_012e4c00(param_1 + 0x6d);
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  FUN_012e4b44(param_1 + 0x7c);
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  *(undefined4 *)((long)param_1 + 0x43c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x86,0,1);
  return;
}


