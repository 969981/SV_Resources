/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012c19a8; name: FUN_012c19a8
 */


void FUN_012c19a8(undefined8 *param_1)

{
  byte bVar1;
  
  FUN_012c1c60();
  *param_1 = &PTR_FUN_045ce2e8;
  param_1[4] = &PTR_LAB_045ce318;
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 1;
  nn::os::InitializeLightEvent(param_1 + 6,0,1);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  FUN_012c1ad4(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  bVar1 = thunk_FUN_012c1a1c();
  *(byte *)(param_1 + 0xf) = bVar1 & 1;
  return;
}


