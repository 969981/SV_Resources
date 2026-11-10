/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


