/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02160164; name: FUN_02160164
 */


void FUN_02160164(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  memset(param_1,0,0x41);
  FUN_0215fc70(param_1);
  *param_1 = &PTR_LAB_045992c0;
  *(undefined4 *)((long)param_1 + 0x44) = param_2;
  *(undefined4 *)(param_1 + 9) = param_3;
  param_1[4] = &PTR_LAB_04599340;
  param_1[5] = &DAT_04599390;
  param_1[0x10] = param_4;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0x3e4c9860;
  *(undefined4 *)((long)param_1 + 0x4c) = param_2;
  uVar1 = FUN_02160204(param_1);
  *(undefined4 *)(param_1 + 10) = uVar1;
  FUN_0215b59c(param_1[0x10],*(undefined4 *)((long)param_1 + 0x4c),param_1 + 0xc);
  FUN_0215b59c(param_1[0x10],*(undefined4 *)(param_1 + 10),param_1 + 0xe);
  return;
}


