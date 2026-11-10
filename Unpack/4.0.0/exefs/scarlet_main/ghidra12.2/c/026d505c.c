/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026d505c; name: FUN_026d505c
 */


void FUN_026d505c(undefined8 *param_1,undefined1 param_2)

{
  FUN_00d1a22c(param_1,0);
  *param_1 = &PTR_FUN_045cc208;
  *(undefined1 *)(param_1 + 0x26) = param_2;
  param_1[4] = &PTR_LAB_045cc3a8;
  param_1[5] = &DAT_045cc4d0;
  param_1[6] = &PTR_LAB_045cc528;
  param_1[7] = &PTR_LAB_045cc550;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  return;
}


