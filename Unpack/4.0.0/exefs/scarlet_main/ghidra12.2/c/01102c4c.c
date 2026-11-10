/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01102c4c; name: FUN_01102c4c
 */


void FUN_01102c4c(long param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  uVar5 = param_2[7];
  *(undefined8 *)(param_1 + 0x88) = param_2[5];
  *(undefined8 *)(param_1 + 0x98) = uVar5;
  uVar5 = param_2[3];
  *(undefined8 *)(param_1 + 0x68) = param_2[1];
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  uVar5 = *param_2;
  *(undefined8 *)(param_1 + 0x70) = param_2[2];
  *(undefined8 *)(param_1 + 0x60) = uVar5;
  uVar5 = param_2[4];
  *(undefined8 *)(param_1 + 0x90) = param_2[6];
  *(undefined8 *)(param_1 + 0x80) = uVar5;
  fVar16 = (float)param_2[5];
  fVar17 = (float)((ulong)param_2[5] >> 0x20);
  fVar14 = (float)param_2[4];
  fVar15 = (float)((ulong)param_2[4] >> 0x20);
  fVar8 = (float)param_2[1];
  fVar9 = (float)((ulong)param_2[1] >> 0x20);
  fVar6 = (float)*param_2;
  fVar7 = (float)((ulong)*param_2 >> 0x20);
  fVar12 = (float)param_2[3];
  fVar13 = (float)((ulong)param_2[3] >> 0x20);
  fVar10 = (float)param_2[2];
  fVar11 = (float)((ulong)param_2[2] >> 0x20);
  fVar10 = fVar10 * fVar10;
  fVar11 = fVar11 * fVar11;
  fVar12 = fVar12 * fVar12;
  fVar13 = fVar13 * fVar13;
  auVar19._4_4_ = fVar11;
  auVar19._0_4_ = fVar10;
  auVar19._8_4_ = fVar12;
  auVar19._12_4_ = fVar13;
  auVar1._4_4_ = fVar11;
  auVar1._0_4_ = fVar10;
  auVar1._8_4_ = fVar12;
  auVar1._12_4_ = fVar13;
  auVar19 = NEON_ext(auVar19,auVar1,8,1);
  fVar6 = fVar6 * fVar6;
  fVar7 = fVar7 * fVar7;
  fVar8 = fVar8 * fVar8;
  fVar9 = fVar9 * fVar9;
  auVar18._4_4_ = fVar7;
  auVar18._0_4_ = fVar6;
  auVar18._8_4_ = fVar8;
  auVar18._12_4_ = fVar9;
  auVar20._4_4_ = fVar7;
  auVar20._0_4_ = fVar6;
  auVar20._8_4_ = fVar8;
  auVar20._12_4_ = fVar9;
  auVar18 = NEON_ext(auVar18,auVar20,8,1);
  fVar14 = fVar14 * fVar14;
  fVar15 = fVar15 * fVar15;
  fVar16 = fVar16 * fVar16;
  fVar17 = fVar17 * fVar17;
  auVar2._4_4_ = fVar15;
  auVar2._0_4_ = fVar14;
  auVar2._8_4_ = fVar16;
  auVar2._12_4_ = fVar17;
  auVar3._4_4_ = fVar15;
  auVar3._0_4_ = fVar14;
  auVar3._8_4_ = fVar16;
  auVar3._12_4_ = fVar17;
  auVar20 = NEON_ext(auVar2,auVar3,8,1);
  fVar11 = SQRT(auVar19._0_4_ + fVar10 + auVar19._4_4_ + fVar11);
  fVar12 = SQRT(auVar18._0_4_ + fVar6 + auVar18._4_4_ + fVar7);
  fVar8 = 0.0;
  fVar9 = 0.0;
  fVar10 = 0.0;
  fVar7 = 0.0;
  fVar6 = SQRT(auVar20._0_4_ + fVar14 + auVar20._4_4_ + fVar15);
  *(ulong *)(param_1 + 0xf8) = (ulong)(uint)fVar6;
  *(ulong *)(param_1 + 0xf0) = CONCAT44(fVar11,fVar12);
  if (0.0 < fVar12) {
    fVar13 = 1.0 / fVar12;
    uVar5 = *param_2;
    *(ulong *)(param_1 + 0xa8) =
         CONCAT44((float)((ulong)param_2[1] >> 0x20) * fVar13,(float)param_2[1] * fVar13);
    *(ulong *)(param_1 + 0xa0) =
         CONCAT44((float)((ulong)uVar5 >> 0x20) * fVar13,(float)uVar5 * fVar13);
  }
  else {
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  if (0.0 < fVar11) {
    fVar16 = 1.0 / fVar11;
    fVar13 = *(float *)(param_2 + 2);
    fVar14 = *(float *)((long)param_2 + 0x14);
    fVar15 = *(float *)((long)param_2 + 0x1c);
    *(float *)(param_1 + 0xb8) = *(float *)(param_2 + 3) * fVar16;
    *(float *)(param_1 + 0xbc) = fVar15 * fVar16;
    *(float *)(param_1 + 0xb0) = fVar13 * fVar16;
    *(float *)(param_1 + 0xb4) = fVar14 * fVar16;
  }
  else {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  if (0.0 < fVar6) {
    fVar7 = 1.0 / fVar6;
    fVar8 = (float)param_2[4] * fVar7;
    fVar9 = (float)((ulong)param_2[4] >> 0x20) * fVar7;
    fVar10 = (float)param_2[5] * fVar7;
    fVar7 = (float)((ulong)param_2[5] >> 0x20) * fVar7;
  }
  *(ulong *)(param_1 + 200) = CONCAT44(fVar7,fVar10);
  *(ulong *)(param_1 + 0xc0) = CONCAT44(fVar9,fVar8);
  uVar4 = param_2[7];
  uVar5 = param_2[6];
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0xd8) = uVar4;
  *(undefined8 *)(param_1 + 0xd0) = uVar5;
  *(ulong *)(param_1 + 0x148) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x128) >> 0x20) * 0.0,
                (float)*(undefined8 *)(param_1 + 0x128) * fVar6);
  *(ulong *)(param_1 + 0x140) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x120) >> 0x20) * fVar11,
                (float)*(undefined8 *)(param_1 + 0x120) * fVar12);
  return;
}


