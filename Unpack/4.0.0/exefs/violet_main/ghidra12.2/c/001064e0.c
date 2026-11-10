/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001064e0; name: FUN_001064e0
 */


void FUN_001064e0(undefined8 param_1,float *param_2,ulong param_3)

{
  code *pcVar1;
  float *pfVar8;
  float *pfVar7;
  float *pfVar6;
  float *pfVar5;
  float *pfVar4;
  float *pfVar3;
  float *pfVar2;
  ulong uVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar21;
  float fVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar23;
  float fVar24;
  float fVar26;
  float fVar27;
  undefined1 auVar25 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar35;
  float fVar36;
  undefined1 auVar34 [16];
  float fVar37;
  
  if ((0x7fe < param_3 - 2) ||
     (uVar9 = param_3 - (param_3 >> 1 & 0x5555555555555555),
     uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333),
     (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 != 1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(0,0x106548);
    (*pcVar1)();
  }
  fVar13 = *param_2;
  uVar9 = param_3 >> 2;
  *param_2 = (fVar13 + param_2[1]) * 0.5;
  param_2[1] = (fVar13 - param_2[1]) * 0.5;
  if (uVar9 != 0) {
    if (param_3 < 0x10) {
      FUN_00106b90(param_2,uVar9,uVar9);
    }
    else {
      FUN_00106b90(param_2,4,uVar9);
      if (0x13 < param_3) {
        pfVar11 = param_2 + 8;
        pfVar10 = param_2 + uVar9 * 4 + -0xe;
        pfVar12 = (float *)(&DAT_03cacd60 + uVar9 * 8);
        do {
          fVar13 = *pfVar12;
          pfVar2 = pfVar12 + 1;
          pfVar3 = pfVar12 + 2;
          pfVar4 = pfVar12 + 3;
          pfVar5 = pfVar12 + 4;
          pfVar6 = pfVar12 + 5;
          pfVar7 = pfVar12 + 6;
          pfVar8 = pfVar12 + 7;
          pfVar12 = pfVar12 + 8;
          auVar19._0_4_ = *pfVar10;
          auVar25._0_4_ = pfVar10[1];
          auVar19._4_4_ = pfVar10[2];
          auVar25._4_4_ = pfVar10[3];
          auVar19._8_4_ = pfVar10[4];
          auVar25._8_4_ = pfVar10[5];
          auVar19._12_4_ = pfVar10[6];
          auVar25._12_4_ = pfVar10[7];
          auVar34 = NEON_rev64(auVar19,4);
          auVar20 = NEON_rev64(auVar25,4);
          auVar34 = NEON_ext(auVar34,auVar34,8,1);
          auVar20 = NEON_ext(auVar20,auVar20,8,1);
          fVar24 = (*pfVar11 - auVar34._0_4_) * 0.5;
          fVar26 = (pfVar11[2] - auVar34._4_4_) * 0.5;
          fVar27 = (pfVar11[4] - auVar34._8_4_) * 0.5;
          fVar28 = (pfVar11[6] - auVar34._12_4_) * 0.5;
          fVar18 = (pfVar11[1] + auVar20._0_4_) * 0.5;
          fVar21 = (pfVar11[3] + auVar20._4_4_) * 0.5;
          fVar22 = (pfVar11[5] + auVar20._8_4_) * 0.5;
          fVar23 = (pfVar11[7] + auVar20._12_4_) * 0.5;
          fVar33 = *pfVar11 - fVar24;
          fVar35 = pfVar11[2] - fVar26;
          fVar36 = pfVar11[4] - fVar27;
          fVar37 = pfVar11[6] - fVar28;
          fVar29 = pfVar11[1] - fVar18;
          fVar30 = pfVar11[3] - fVar21;
          fVar31 = pfVar11[5] - fVar22;
          fVar32 = pfVar11[7] - fVar23;
          fVar14 = fVar13 * fVar18 + *pfVar2 * fVar24;
          fVar15 = *pfVar3 * fVar21 + *pfVar4 * fVar26;
          fVar16 = *pfVar5 * fVar22 + *pfVar6 * fVar27;
          fVar17 = *pfVar7 * fVar23 + *pfVar8 * fVar28;
          fVar13 = fVar13 * fVar24 - *pfVar2 * fVar18;
          fVar18 = *pfVar3 * fVar26 - *pfVar4 * fVar21;
          fVar21 = *pfVar5 * fVar27 - *pfVar6 * fVar22;
          fVar22 = *pfVar7 * fVar28 - *pfVar8 * fVar23;
          auVar34._0_4_ = fVar33 + fVar14;
          auVar34._4_4_ = fVar35 + fVar15;
          auVar34._8_4_ = fVar36 + fVar16;
          auVar34._12_4_ = fVar37 + fVar17;
          auVar34 = NEON_rev64(auVar34,4);
          auVar20._4_4_ = fVar18 - fVar30;
          auVar20._0_4_ = fVar13 - fVar29;
          auVar20._8_4_ = fVar21 - fVar31;
          auVar20._12_4_ = fVar22 - fVar32;
          auVar20 = NEON_rev64(auVar20,4);
          *pfVar11 = fVar33 - fVar14;
          pfVar11[1] = fVar29 + fVar13;
          pfVar11[2] = fVar35 - fVar15;
          pfVar11[3] = fVar30 + fVar18;
          pfVar11[4] = fVar36 - fVar16;
          pfVar11[5] = fVar31 + fVar21;
          pfVar11[6] = fVar37 - fVar17;
          pfVar11[7] = fVar32 + fVar22;
          pfVar11 = pfVar11 + 8;
          auVar34 = NEON_ext(auVar34,auVar34,8,1);
          auVar20 = NEON_ext(auVar20,auVar20,8,1);
          *pfVar10 = auVar34._0_4_;
          pfVar10[1] = auVar20._0_4_;
          pfVar10[2] = auVar34._4_4_;
          pfVar10[3] = auVar20._4_4_;
          pfVar10[4] = auVar34._8_4_;
          pfVar10[5] = auVar20._8_4_;
          pfVar10[6] = auVar34._12_4_;
          pfVar10[7] = auVar20._12_4_;
          pfVar10 = pfVar10 + -8;
        } while (pfVar11 < param_2 + uVar9 * 2);
      }
    }
  }
  FUN_001060a0(param_1,param_2,param_3 >> 1);
  return;
}


