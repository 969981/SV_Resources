/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010184ec; name: FUN_010184ec
 */


void FUN_010184ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  FUN_010185f0();
  *param_1 = &PTR_FUN_04561fe8;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)((long)param_1 + 0x1ec) = 0;
  param_1[4] = &PTR_LAB_04562158;
  param_1[5] = &DAT_04562280;
  param_1[6] = &PTR_LAB_045622d8;
  param_1[7] = &PTR_LAB_04562300;
  param_1[0x2a] = &PTR_LAB_04562338;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  FUN_01018590(param_1 + 0x2a,param_4);
  FUN_01018598(param_1 + 0x2a,param_4 + 0x10);
  return;
}


