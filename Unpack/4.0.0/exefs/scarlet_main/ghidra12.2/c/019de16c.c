/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019de16c; name: FUN_019de16c
 */


void FUN_019de16c(undefined8 *param_1)

{
  FUN_019de1c0();
  *param_1 = &DAT_045ceae0;
  param_1[10] = 0;
  param_1[4] = &PTR_LAB_045ceb90;
  param_1[5] = &DAT_045cebe0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[8] = &PTR_LAB_045cec38;
  param_1[9] = 0;
  param_1[0x10] = 0x100000001;
  return;
}


