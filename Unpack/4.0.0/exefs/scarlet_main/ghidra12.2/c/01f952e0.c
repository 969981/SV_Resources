/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f952e0; name: FUN_01f952e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f952e0(float *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  
  fVar3 = param_1[1] * 0.5;
  fVar4 = *param_1 * 0.5;
  auVar1._4_4_ = (int)((float)(-(uint)(0.0 <= fVar4) & 0x80000000 ^ 0xbf000000) + fVar4 * 0.15915494
                      );
  auVar1._0_4_ = (int)((float)(-(uint)(0.0 <= fVar3) & 0x80000000 ^ 0xbf000000) + fVar3 * 0.15915494
                      );
  auVar1._8_8_ = 0;
  NEON_scvtf(auVar1 << 0x20,4);
  auVar2._4_4_ = (int)((float)(~-(uint)(0.0 <= fVar4 + 1.5707964) & 0x80000000 ^ 0x3f000000) +
                      (fVar4 + 1.5707964) * 0.15915494);
  auVar2._0_4_ = (int)((float)(~-(uint)(0.0 <= fVar3 + 1.5707964) & 0x80000000 ^ 0x3f000000) +
                      (fVar3 + 1.5707964) * 0.15915494);
  auVar2._8_8_ = 0;
  NEON_scvtf(auVar2 << 0x20,4);
  NEON_fmov(0x3f800000,4);
  return;
}


