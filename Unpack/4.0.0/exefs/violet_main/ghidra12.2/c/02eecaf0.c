/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02eecaf0; name: FUN_02eecaf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_02eecaf0(float *param_1,int param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  fVar6 = *param_3;
  fVar7 = param_3[1];
  fVar8 = param_3[2];
  pfVar3 = param_1 + ((long)param_2 + -4) * 4;
  auVar18._0_4_ = fVar6 * *pfVar3 + fVar7 * pfVar3[1] + fVar8 * pfVar3[2] + pfVar3[3] * 1.0;
  auVar18._4_4_ =
       fVar6 * param_1[(long)param_2 * 4 + -0xc] + fVar7 * param_1[(long)param_2 * 4 + -0xb] +
       fVar8 * param_1[(long)param_2 * 4 + -10] + param_1[(long)param_2 * 4 + -9] * 1.0;
  auVar18._8_4_ =
       fVar6 * param_1[(long)param_2 * 4 + -8] + fVar7 * param_1[(long)param_2 * 4 + -7] +
       fVar8 * param_1[(long)param_2 * 4 + -6] + param_1[(long)param_2 * 4 + -5] * 1.0;
  auVar18._12_4_ =
       fVar6 * (float)*(undefined8 *)(param_1 + (long)param_2 * 4 + -4) +
       fVar7 * (float)((ulong)*(undefined8 *)(param_1 + (long)param_2 * 4 + -4) >> 0x20) +
       fVar8 * (float)*(undefined8 *)(param_1 + (long)param_2 * 4 + -2) +
       (float)((ulong)*(undefined8 *)(param_1 + (long)param_2 * 4 + -2) >> 0x20) * 1.0;
  iVar16 = (int)((long)param_2 + -4);
  auVar17._8_8_ = _UNK_03cab988;
  auVar17._0_8_ = _DAT_03cab980;
  auVar19._0_4_ = iVar16 + (int)_DAT_03cab980;
  auVar19._4_4_ = iVar16 + (int)((ulong)_DAT_03cab980 >> 0x20);
  auVar19._8_4_ = iVar16 + (int)_UNK_03cab988;
  auVar19._12_4_ = iVar16 + (int)((ulong)_UNK_03cab988 >> 0x20);
  while( true ) {
    if (param_2 < 5) break;
    fVar9 = *param_1;
    pfVar10 = param_1 + 1;
    pfVar11 = param_1 + 2;
    pfVar12 = param_1 + 3;
    pfVar1 = param_1 + 4;
    pfVar13 = param_1 + 5;
    pfVar14 = param_1 + 6;
    pfVar15 = param_1 + 7;
    param_2 = param_2 + -4;
    pfVar3 = param_1 + 8;
    pfVar4 = param_1 + 10;
    pfVar2 = param_1 + 0xc;
    pfVar5 = param_1 + 0xe;
    param_1 = param_1 + 0x10;
    auVar22._0_4_ = fVar6 * fVar9 + fVar7 * *pfVar10 + fVar8 * *pfVar11 + *pfVar12 * 1.0;
    auVar22._4_4_ = fVar6 * *pfVar1 + fVar7 * *pfVar13 + fVar8 * *pfVar14 + *pfVar15 * 1.0;
    auVar22._8_4_ =
         fVar6 * (float)*(undefined8 *)pfVar3 +
         fVar7 * (float)((ulong)*(undefined8 *)pfVar3 >> 0x20) +
         fVar8 * (float)*(undefined8 *)pfVar4 + (float)((ulong)*(undefined8 *)pfVar4 >> 0x20) * 1.0;
    auVar22._12_4_ =
         fVar6 * (float)*(undefined8 *)pfVar2 +
         fVar7 * (float)((ulong)*(undefined8 *)pfVar2 >> 0x20) +
         fVar8 * (float)*(undefined8 *)pfVar5 + (float)((ulong)*(undefined8 *)pfVar5 >> 0x20) * 1.0;
    auVar23._0_4_ = -(uint)(auVar18._0_4_ < auVar22._0_4_);
    auVar23._4_4_ = -(uint)(auVar18._4_4_ < auVar22._4_4_);
    auVar23._8_4_ = -(uint)(auVar18._8_4_ < auVar22._8_4_);
    auVar23._12_4_ = -(uint)(auVar18._12_4_ < auVar22._12_4_);
    auVar18 = auVar18 ^ (auVar18 ^ auVar22) & auVar23;
    auVar19 = auVar19 ^ (auVar19 ^ auVar17) & auVar23;
    auVar20._0_4_ = auVar17._0_4_ + 4;
    auVar20._4_4_ = auVar17._4_4_ + 4;
    auVar20._8_4_ = auVar17._8_4_ + 4;
    auVar20._12_4_ = auVar17._12_4_ + 4;
    auVar17 = auVar20;
  }
  auVar17 = NEON_rev64(auVar18,4);
  auVar21._0_4_ = -(uint)(auVar17._0_4_ < auVar18._0_4_);
  auVar21._4_4_ = -(uint)(auVar17._4_4_ < auVar18._4_4_);
  auVar21._8_4_ = -(uint)(auVar17._8_4_ < auVar18._8_4_);
  auVar21._12_4_ = -(uint)(auVar17._12_4_ < auVar18._12_4_);
  auVar18 = NEON_fmax(auVar18,auVar17,4);
  auVar17 = NEON_rev64(auVar19,4);
  auVar17 = auVar17 ^ (auVar17 ^ auVar19) & auVar21;
  auVar19 = NEON_ext(auVar18,auVar18,8,1);
  auVar22 = NEON_ext(auVar17,auVar17,8,1);
  return (auVar22._0_8_ ^
         (auVar22._0_8_ ^ auVar17._0_8_) & (ulong)-(uint)(auVar19._0_4_ < auVar18._0_4_)) &
         0xffffffff;
}


