/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02780ca8; name: FUN_02780ca8
 */


undefined1  [16] FUN_02780ca8(long param_1)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  float fVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar16 [16];
  undefined1 auVar15 [16];
  undefined1 auVar14 [16];
  undefined1 auVar13 [16];
  undefined1 auVar17 [16];
  undefined1 auVar21 [16];
  undefined1 auVar20 [16];
  undefined1 auVar19 [16];
  undefined1 auVar18 [16];
  float fVar22;
  float fVar23;
  
  pfVar4 = (float *)FUN_00c472c8(*(undefined8 *)(*(long *)(param_1 + 0x138) + 0x70),0);
  fVar3 = *pfVar4;
  pauVar1 = (undefined1 (*) [12])(pfVar4 + 4);
  fVar9 = (float)*(undefined8 *)(pfVar4 + 6);
  fVar11 = (float)((ulong)*(undefined8 *)(pfVar4 + 6) >> 0x20);
  fVar22 = (float)*(undefined8 *)*pauVar1;
  fVar7 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  fVar22 = fVar22 * fVar22;
  fVar3 = (float)((uint)fVar3 ^ ((uint)fVar3 ^ 0x2b8cbccc) & -(uint)(ABS(fVar3) < 1e-12));
  auVar12._12_4_ = fVar11;
  auVar12._0_12_ = *pauVar1;
  auVar2._12_4_ = fVar11;
  auVar2._0_12_ = *pauVar1;
  auVar12 = NEON_ext(auVar12,auVar2,0xc,1);
  fVar23 = fVar9 * fVar9 + fVar9 * fVar9;
  uVar5 = SUB124(*pauVar1,0);
  auVar13._4_12_ = auVar12._4_12_;
  auVar13._0_4_ = uVar5;
  auVar15._12_4_ = auVar12._12_4_;
  auVar15._0_8_ = auVar13._0_8_;
  auVar15._8_4_ = SUB124(*pauVar1,4);
  auVar14._8_8_ = auVar15._8_8_;
  auVar14._4_4_ = auVar12._0_4_;
  auVar14._0_4_ = uVar5;
  auVar16._0_12_ = auVar14._0_12_;
  auVar16._12_4_ = auVar12._4_4_;
  auVar12 = NEON_ext(auVar16,auVar16,8,1);
  fVar8 = auVar12._4_4_ * SUB124(*pauVar1,8);
  fVar10 = auVar12._8_4_ * fVar7;
  auVar12 = NEON_fmov(0x3f800000,4);
  auVar17._0_4_ = auVar12._0_4_ - (fVar22 + fVar22);
  auVar17._4_4_ = auVar12._4_4_ - (fVar7 * fVar7 + fVar7 * fVar7);
  auVar17._8_4_ = auVar12._8_4_ - fVar23;
  auVar17._12_4_ = auVar12._12_4_ - (fVar11 * fVar11 + fVar11 * fVar11);
  auVar18._4_12_ = auVar17._4_12_;
  auVar18._0_4_ = auVar17._0_4_;
  auVar20._0_8_ = auVar18._0_8_;
  auVar20._8_4_ = auVar17._4_4_;
  auVar20._12_4_ = auVar17._12_4_;
  auVar19._8_8_ = auVar20._8_8_;
  auVar19._4_4_ = auVar17._0_4_;
  auVar19._0_4_ = auVar17._0_4_;
  auVar21._0_12_ = auVar19._0_12_;
  auVar21._12_4_ = auVar17._4_4_;
  auVar12 = NEON_ext(auVar21,auVar21,0xc,1);
  auVar6._0_4_ = (auVar12._0_4_ - fVar23) * fVar3;
  auVar6._4_4_ = (fVar10 + fVar10 + fVar9 * fVar11 + fVar9 * fVar11) * fVar3;
  auVar6._8_4_ = ((fVar8 + fVar8) - (fVar7 * fVar11 + fVar7 * fVar11)) * fVar3;
  auVar6._12_4_ = fVar3 * 0.0;
  return auVar6;
}


