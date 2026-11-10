/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017417bc; name: FUN_017417bc
 */


void FUN_017417bc(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  FUN_01741868();
  *(undefined4 *)(param_1 + 0x12) = 0;
  *param_1 = &DAT_04554200;
  param_1[4] = &PTR_LAB_04554250;
  param_1[5] = &PTR_LAB_04554270;
  param_1[8] = param_2;
  *(undefined1 *)(param_1 + 9) = param_3;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[6] = &PTR_LAB_04554290;
  param_1[7] = &PTR_LAB_045542a8;
  param_1[0x10] = 0xfffffffffffffff;
  param_1[0x11] = 0;
  param_1[0x17] = 0xfffffffffffffff;
  param_1[0x18] = 0;
  param_1[0x1e] = 0x7ffffffffffffff;
  param_1[0x1f] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = param_2;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = param_2;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = param_2;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = param_2;
  param_1[0x25] = 0x3ffffffffffffff;
  param_1[0x26] = 0;
  return;
}


