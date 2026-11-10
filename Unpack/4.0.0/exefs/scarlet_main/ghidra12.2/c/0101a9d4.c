/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0101a9d4; name: FUN_0101a9d4
 */


void FUN_0101a9d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined2 *param_4)

{
  FUN_010186a4();
  *param_1 = &PTR_FUN_04562d90;
  param_1[4] = &PTR_LAB_04562ef0;
  param_1[5] = &DAT_04563018;
  param_1[6] = &PTR_LAB_04563070;
  param_1[7] = &PTR_LAB_04563098;
  *(undefined2 *)(param_1 + 0x2a) = 0x101;
  *(undefined2 *)((long)param_1 + 0x152) = *param_4;
  return;
}


