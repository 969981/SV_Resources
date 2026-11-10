/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ee49cc; name: FUN_02ee49cc
 */


void FUN_02ee49cc(long param_1,undefined8 *param_2,undefined8 *param_3,float *param_4,
                 undefined4 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  iVar4 = *(int *)(param_1 + 0x40);
  puVar1 = (undefined8 *)0x0;
  if (iVar4 != 0) {
    puVar1 = (undefined8 *)((long)iVar4 + param_1 + 0x40);
  }
  iVar4 = *(int *)(param_1 + 0x48);
  uVar10 = *param_2;
  fVar13 = (float)uVar10;
  fVar14 = (float)*param_3 - fVar13;
  fVar11 = (float)((ulong)uVar10 >> 0x20);
  fVar16 = (float)((ulong)*param_3 >> 0x20) - fVar11;
  fVar12 = (float)param_2[1];
  fVar18 = (float)param_3[1] - fVar12;
  fVar15 = (float)((ulong)param_2[1] >> 0x20);
  fVar19 = (float)((ulong)param_3[1] >> 0x20) - fVar15;
  auVar22._4_4_ = fVar16;
  auVar22._0_4_ = fVar14;
  auVar22._8_4_ = fVar18;
  auVar22._12_4_ = fVar19;
  auVar23._4_4_ = fVar16;
  auVar23._0_4_ = fVar14;
  auVar23._8_4_ = fVar18;
  auVar23._12_4_ = fVar19;
  auVar22 = NEON_ext(auVar22,auVar23,4,1);
  auVar20._0_4_ = *param_4 - fVar13;
  auVar20._4_4_ = param_4[1] - fVar11;
  auVar20._8_4_ = param_4[2] - fVar12;
  auVar20._12_4_ = param_4[3] - fVar15;
  auVar23 = NEON_ext(auVar20,auVar20,4,1);
  puVar2 = (undefined8 *)0x0;
  if (iVar4 != 0) {
    puVar2 = (undefined8 *)((long)iVar4 + param_1 + 0x48);
  }
  fVar15 = fVar14 * auVar23._0_4_ - auVar20._0_4_ * auVar22._0_4_;
  fVar17 = fVar16 * auVar23._4_4_ - auVar20._4_4_ * auVar22._4_4_;
  fVar14 = fVar18 * auVar20._0_4_ - auVar20._8_4_ * fVar14;
  fVar16 = fVar19 * auVar20._4_4_ - auVar20._12_4_ * fVar16;
  auVar5._4_4_ = fVar17;
  auVar5._0_4_ = fVar15;
  auVar5._8_4_ = fVar14;
  auVar5._12_4_ = fVar16;
  auVar6._4_4_ = fVar17;
  auVar6._0_4_ = fVar15;
  auVar6._8_4_ = fVar14;
  auVar6._12_4_ = fVar16;
  auVar22 = NEON_ext(auVar5,auVar6,4,1);
  fVar14 = auVar22._0_4_;
  fVar18 = auVar22._4_4_;
  fVar16 = fVar14 * fVar14 + fVar18 * fVar18 + fVar15 * fVar15;
  if (fVar16 == 0.0) {
    fVar16 = 0.0;
    fVar19 = 0.0;
  }
  else {
    uVar21 = NEON_fmov(0x3f800000,4);
    fVar16 = (float)uVar21 / SQRT(fVar16);
    fVar19 = (float)((ulong)uVar21 >> 0x20) /
             SQRT(fVar14 * fVar14 + fVar18 * fVar18 + fVar15 * fVar15);
  }
  *puVar1 = uVar10;
  *(float *)(puVar1 + 1) = fVar12;
  uVar10 = param_3[1];
  *(undefined8 *)((long)puVar1 + 0xc) = *param_3;
  *(int *)((long)puVar1 + 0x14) = (int)uVar10;
  fVar17 = param_4[1];
  fVar7 = param_4[2];
  *(float *)(puVar1 + 3) = *param_4;
  *(float *)((long)puVar1 + 0x1c) = fVar17;
  *(float *)(puVar1 + 4) = fVar7;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  *(undefined4 *)((long)puVar1 + 0x24) = *param_5;
  *(undefined4 *)(puVar1 + 5) = uVar8;
  *(undefined4 *)((long)puVar1 + 0x2c) = uVar9;
  iVar4 = *(int *)(param_1 + 0x58);
  uVar10 = CONCAT44(fVar19 * fVar18,fVar16 * fVar14);
  fVar13 = fVar19 * -(fVar12 * fVar15 + fVar13 * fVar14 + fVar11 * fVar18);
  uVar21 = CONCAT44(fVar13,fVar16 * fVar15);
  lVar3 = 0;
  if (iVar4 != 0) {
    lVar3 = (long)iVar4 + param_1 + 0x58;
  }
  *(undefined4 *)(param_1 + 0x44) = 4;
  *(undefined1 *)(lVar3 + 3) = 3;
  *(undefined1 *)(lVar3 + 7) = 3;
  puVar2[1] = uVar21;
  *puVar2 = uVar10;
  puVar2[3] = CONCAT44(-fVar13,-(fVar16 * fVar15));
  puVar2[2] = CONCAT44(-(fVar19 * fVar18),-(fVar16 * fVar14));
  puVar2[5] = uVar21;
  puVar2[4] = uVar10;
  puVar2[7] = uVar21;
  puVar2[6] = uVar10;
  return;
}


