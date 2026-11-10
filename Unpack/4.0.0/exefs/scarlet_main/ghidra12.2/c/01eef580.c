/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eef580; name: FUN_01eef580
 */


void FUN_01eef580(undefined8 *param_1,byte param_2,byte param_3)

{
  FUN_01870100();
  *param_1 = &PTR_LAB_045e0a10;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[4] = &PTR_LAB_045e0a90;
  param_1[5] = &PTR_LAB_045e0ae0;
  *(byte *)((long)param_1 + 0x54) = param_2 & 1;
  *(byte *)((long)param_1 + 0x55) = param_3 & 1;
  return;
}


