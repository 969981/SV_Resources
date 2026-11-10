/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f958f8; name: FUN_01f958f8
 */


undefined1  [16] FUN_01f958f8(undefined8 *param_1)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  float fVar4;
  float fVar6;
  float fVar7;
  undefined1 auVar5 [16];
  float fVar8;
  float fVar9;
  float fVar15;
  undefined1 auVar10 [16];
  undefined1 auVar14 [16];
  undefined1 auVar13 [16];
  undefined1 auVar12 [16];
  undefined1 auVar11 [16];
  
  pauVar1 = (undefined1 (*) [12])(param_1 + 2);
  fVar7 = (float)((ulong)param_1[3] >> 0x20);
  fVar4 = (float)*(undefined8 *)*pauVar1;
  fVar6 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar10._12_4_ = fVar7;
  auVar10._0_12_ = *pauVar1;
  auVar2._12_4_ = fVar7;
  auVar2._0_12_ = *pauVar1;
  auVar10 = NEON_ext(auVar10,auVar2,0xc,1);
  uVar3 = SUB124(*pauVar1,0);
  auVar11._4_12_ = auVar10._4_12_;
  auVar11._0_4_ = uVar3;
  auVar13._12_4_ = auVar10._12_4_;
  auVar13._0_8_ = auVar11._0_8_;
  auVar13._8_4_ = SUB124(*pauVar1,4);
  auVar12._8_8_ = auVar13._8_8_;
  auVar12._4_4_ = auVar10._0_4_;
  auVar12._0_4_ = uVar3;
  auVar14._0_12_ = auVar12._0_12_;
  auVar14._12_4_ = auVar10._4_4_;
  auVar10 = NEON_ext(auVar14,auVar14,8,1);
  fVar8 = auVar10._0_4_ * SUB124(*pauVar1,8);
  fVar15 = auVar10._4_4_ * SUB124(*pauVar1,8);
  auVar10 = NEON_fmov(0x3f800000,4);
  fVar9 = *(float *)(param_1 + 4);
  auVar5._0_4_ = (float)*param_1 + (fVar15 + fVar15 + fVar6 * fVar7 + fVar6 * fVar7) * fVar9;
  auVar5._4_4_ = (float)((ulong)*param_1 >> 0x20) +
                 ((fVar8 + fVar8) - (fVar4 * fVar7 + fVar4 * fVar7)) * fVar9;
  auVar5._8_4_ = (float)param_1[1] +
                 ((auVar10._0_4_ - (fVar4 * fVar4 + fVar4 * fVar4)) -
                 (fVar6 * fVar6 + fVar6 * fVar6)) * fVar9;
  auVar5._12_4_ = (float)((ulong)param_1[1] >> 0x20) + fVar9 * 0.0;
  return auVar5;
}


