/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01637bb0; name: FUN_01637bb0
 */


void FUN_01637bb0(undefined8 *param_1)

{
  FUN_01637c28();
  *param_1 = &PTR_LAB_04580720;
  param_1[4] = &PTR_LAB_04580750;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0x1612e1b1014aab70;
  param_1[7] = "kNone";
  param_1[8] = 5;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[10] = 0x1612e1b1014aab70;
  param_1[0xb] = "kNone";
  param_1[0xc] = 5;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_0163af6c(param_1);
  FUN_01637d50();
  return;
}


