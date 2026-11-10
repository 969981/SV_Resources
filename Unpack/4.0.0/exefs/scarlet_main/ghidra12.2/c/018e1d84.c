/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018e1d84; name: FUN_018e1d84
 */


void FUN_018e1d84(undefined8 *param_1)

{
  FUN_017b02dc();
  *param_1 = &DAT_04593530;
  param_1[4] = &PTR_LAB_045935c0;
  param_1[5] = &PTR_LAB_04593610;
  memset(param_1 + 0xb,0,0xc0);
  *(undefined1 *)(param_1 + 0x23) = 1;
  return;
}


