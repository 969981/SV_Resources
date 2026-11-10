/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01823c38; name: FUN_01823c38
 */


void FUN_01823c38(undefined8 *param_1)

{
  FUN_01823cf8();
  *param_1 = &PTR_LAB_04594e40;
  param_1[4] = &PTR_LAB_04594e70;
  param_1[5] = 0x1cc59c4000;
  param_1[6] = &DAT_b1686d3e6def5684;
  param_1[7] = "playables";
  param_1[8] = 9;
  param_1[9] = 0x6bf219b34345258;
  param_1[10] = "PartnerBall";
  param_1[0xb] = 0xb;
  param_1[0xc] = 0x30e0cf38bdc5e148;
  param_1[0xd] = "ballout";
  param_1[0xe] = 7;
  FUN_00ef8710(param_1 + 0xf,0);
  FUN_01823e20(param_1 + 0x11);
  param_1[0x13] = 0;
  return;
}


