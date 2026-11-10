/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02eebba8; name: FUN_02eebba8
 */


void FUN_02eebba8(int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar18;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar24;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar30;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  uVar3 = param_1[1];
  uVar4 = (ulong)uVar3;
  if ((int)uVar3 < 4) {
    if ((int)uVar3 < 1) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      pfVar5 = (float *)((long)param_1 + (long)*param_1 + 8);
      do {
        fVar24 = *pfVar5;
        uVar4 = uVar4 - 1;
        pfVar1 = pfVar5 + -2;
        pfVar5 = pfVar5 + 3;
        fVar27 = (float)*(undefined8 *)pfVar1 - (float)*param_2;
        fVar28 = (float)((ulong)*(undefined8 *)pfVar1 >> 0x20) - (float)((ulong)*param_2 >> 0x20);
        fVar24 = fVar24 - (float)param_2[1];
        fVar27 = fVar27 * fVar27;
        fVar28 = fVar28 * fVar28;
        fVar24 = fVar24 * fVar24;
        uVar10 = NEON_fmax(uVar10,CONCAT44(fVar27 + fVar28 + fVar24,fVar27 + fVar28 + fVar24),4);
      } while (uVar4 != 0);
    }
    uVar10 = CONCAT44(SQRT((float)((ulong)uVar10 >> 0x20)),SQRT((float)uVar10));
  }
  else {
    auVar11 = ZEXT816(0);
    iVar7 = uVar3 - 4;
    iVar6 = 0;
    do {
      puVar8 = (undefined8 *)((long)param_1 + (long)iVar7 * 0xc + (long)*param_1);
      fVar24 = (float)*param_2;
      fVar12 = (float)*(undefined8 *)((long)puVar8 + 0xc) - fVar24;
      fVar27 = (float)((ulong)*param_2 >> 0x20);
      fVar15 = (float)((ulong)*(undefined8 *)((long)puVar8 + 0xc) >> 0x20) - fVar27;
      fVar28 = (float)param_2[1];
      fVar16 = *(float *)((long)puVar8 + 0x14) - fVar28;
      fVar29 = (float)((ulong)param_2[1] >> 0x20);
      fVar17 = *(float *)((long)puVar8 + 0x14) - fVar29;
      iVar2 = iVar6 + 4;
      fVar30 = (float)*puVar8 - fVar24;
      fVar33 = (float)((ulong)*puVar8 >> 0x20) - fVar27;
      fVar34 = *(float *)(puVar8 + 1) - fVar28;
      fVar35 = *(float *)(puVar8 + 1) - fVar29;
      fVar18 = (float)puVar8[3] - fVar24;
      fVar21 = (float)((ulong)puVar8[3] >> 0x20) - fVar27;
      fVar22 = *(float *)(puVar8 + 4) - fVar28;
      fVar23 = *(float *)(puVar8 + 4) - fVar29;
      auVar31._0_4_ = fVar30 * fVar30;
      auVar31._4_4_ = fVar33 * fVar33;
      auVar31._8_4_ = fVar34 * fVar34;
      auVar31._12_4_ = fVar35 * fVar35;
      auVar13._0_4_ = fVar12 * fVar12;
      auVar13._4_4_ = fVar15 * fVar15;
      auVar13._8_4_ = fVar16 * fVar16;
      auVar13._12_4_ = fVar17 * fVar17;
      fVar24 = (float)*(undefined8 *)((long)puVar8 + 0x24) - fVar24;
      fVar27 = (float)((ulong)*(undefined8 *)((long)puVar8 + 0x24) >> 0x20) - fVar27;
      fVar28 = *(float *)((long)puVar8 + 0x2c) - fVar28;
      fVar29 = *(float *)((long)puVar8 + 0x2c) - fVar29;
      auVar19._0_4_ = fVar18 * fVar18;
      auVar19._4_4_ = fVar21 * fVar21;
      auVar19._8_4_ = fVar22 * fVar22;
      auVar19._12_4_ = fVar23 * fVar23;
      auVar32 = NEON_ext(auVar31,auVar31,8,1);
      auVar25._0_4_ = fVar24 * fVar24;
      auVar25._4_4_ = fVar27 * fVar27;
      auVar25._8_4_ = fVar28 * fVar28;
      auVar25._12_4_ = fVar29 * fVar29;
      auVar14 = NEON_ext(auVar13,auVar13,8,1);
      auVar20 = NEON_ext(auVar19,auVar19,8,1);
      auVar26 = NEON_ext(auVar25,auVar25,8,1);
      auVar32._0_4_ = auVar32._0_4_ + auVar31._0_4_ + auVar31._4_4_;
      auVar32._4_4_ = auVar14._0_4_ + auVar13._0_4_ + auVar13._4_4_;
      auVar32._12_4_ = auVar26._0_4_ + auVar25._0_4_ + auVar25._4_4_;
      auVar32._8_4_ = auVar20._0_4_ + auVar19._0_4_ + auVar19._4_4_;
      auVar11 = NEON_fmax(auVar11,auVar32,4);
      iVar7 = iVar6;
      iVar6 = iVar2;
    } while (iVar2 < (int)uVar3);
    auVar14._0_4_ = SQRT(auVar11._0_4_);
    auVar14._4_4_ = SQRT(auVar11._4_4_);
    auVar14._8_4_ = SQRT(auVar11._8_4_);
    auVar14._12_4_ = SQRT(auVar11._12_4_);
    uVar9 = NEON_fmaxnmv(auVar14,4);
    uVar10 = CONCAT44(uVar9,uVar9);
  }
  *param_3 = uVar10;
  return;
}


