/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0211fe50; name: FUN_0211fe50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211fe50(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  
  fVar1 = fmodf(*param_1,360.0);
  fVar6 = fVar1 + 360.0;
  if (0.0 <= fVar1) {
    fVar6 = fVar1;
  }
  fVar2 = fmodf(param_1[1],360.0);
  fVar1 = fVar2 + 360.0;
  if (0.0 <= fVar2) {
    fVar1 = fVar2;
  }
  fVar3 = fmodf(param_1[2],360.0);
  fVar2 = fVar3 + 360.0;
  if (0.0 <= fVar3) {
    fVar2 = fVar3;
  }
  fVar3 = *(float *)PTR_FloatPi_047d23a0 / *(float *)PTR_FloatDegree180_047d2390;
  fVar2 = fVar2 * fVar3 * 0.5;
  fVar6 = fVar6 * fVar3 * 0.5;
  fVar1 = fVar1 * fVar3 * 0.5;
  auVar5._0_4_ = (int)((float)(-(uint)(0.0 <= fVar2) & 0x80000000 ^ 0xbf000000) + fVar2 * 0.15915494
                      );
  auVar5._4_4_ = (int)((float)(-(uint)(0.0 <= fVar6) & 0x80000000 ^ 0xbf000000) + fVar6 * 0.15915494
                      );
  auVar5._8_4_ = (int)((float)(-(uint)(0.0 <= fVar1) & 0x80000000 ^ 0xbf000000) + fVar1 * 0.15915494
                      );
  auVar5._12_4_ = 0;
  NEON_scvtf(auVar5,4);
  auVar4._0_4_ = (int)((float)(~-(uint)(0.0 <= fVar2 + 1.5707964) & 0x80000000 ^ 0x3f000000) +
                      (fVar2 + 1.5707964) * 0.15915494);
  auVar4._4_4_ = (int)((float)(~-(uint)(0.0 <= fVar6 + 1.5707964) & 0x80000000 ^ 0x3f000000) +
                      (fVar6 + 1.5707964) * 0.15915494);
  auVar4._8_4_ = (int)((float)(~-(uint)(0.0 <= fVar1 + 1.5707964) & 0x80000000 ^ 0x3f000000) +
                      (fVar1 + 1.5707964) * 0.15915494);
  auVar4._12_4_ = 0;
  NEON_scvtf(auVar4,4);
  NEON_fmov(0x3f800000,4);
  return;
}


