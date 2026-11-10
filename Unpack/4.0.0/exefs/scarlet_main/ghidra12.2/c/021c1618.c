/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021c1618; name: FUN_021c1618
 */


void FUN_021c1618(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_045a3800;
  param_1[4] = &PTR_LAB_045a3948;
  param_1[5] = &DAT_045a3a70;
  param_1[6] = &PTR_LAB_045a3ac8;
  param_1[7] = &PTR_LAB_045a3af0;
  if (param_1[0x24] != 0) {
    FUN_012c4338();
  }
  FUN_00e6bfa4(param_1);
  return;
}


