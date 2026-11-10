/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0226d758; name: FUN_0226d758
 */


undefined1  [16] FUN_0226d758(byte *param_1)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  auVar1._0_4_ = NEON_ucvtf((uint)*param_1);
  uVar2 = NEON_ucvtf((uint)param_1[1]);
  uVar3 = NEON_ucvtf((uint)param_1[2]);
  uVar4 = NEON_ucvtf((uint)param_1[3]);
  NEON_ucvtf((uint)param_1[7]);
  NEON_ucvtf((uint)param_1[4]);
  NEON_ucvtf((uint)param_1[5]);
  auVar1._12_4_ = uVar4;
  auVar1._8_4_ = uVar3;
  NEON_ucvtf((uint)param_1[6]);
  auVar1._4_4_ = uVar2;
  return auVar1;
}


