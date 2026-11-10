/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02500e4c; name: FUN_02500e4c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02500e4c(float param_1,float param_2,float param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar2._0_4_ = (int)((float)(-(uint)(0.0 <= param_2) & 0x80000000 ^ 0xbf000000) +
                      param_2 * 0.15915494);
  auVar2._4_4_ = (int)((float)(-(uint)(0.0 <= param_1) & 0x80000000 ^ 0xbf000000) +
                      param_1 * 0.15915494);
  auVar2._8_4_ = (int)((float)(-(uint)(0.0 <= param_3) & 0x80000000 ^ 0xbf000000) +
                      param_3 * 0.15915494);
  auVar2._12_4_ = 0;
  auVar1._0_4_ = (int)((float)(~-(uint)(0.0 <= param_2 + 1.5707964) & 0x80000000 ^ 0x3f000000) +
                      (param_2 + 1.5707964) * 0.15915494);
  auVar1._4_4_ = (int)((float)(~-(uint)(0.0 <= param_1 + 1.5707964) & 0x80000000 ^ 0x3f000000) +
                      (param_1 + 1.5707964) * 0.15915494);
  auVar1._8_4_ = (int)((float)(~-(uint)(0.0 <= param_3 + 1.5707964) & 0x80000000 ^ 0x3f000000) +
                      (param_3 + 1.5707964) * 0.15915494);
  auVar1._12_4_ = 0;
  NEON_scvtf(auVar2,4);
  NEON_scvtf(auVar1,4);
  NEON_fmov(0x3f800000,4);
  return;
}


