/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033e11e8; name: FUN_033e11e8
 */


void FUN_033e11e8(uint *param_1,float *param_2,uint param_3,float *param_4)

{
  uint uVar1;
  undefined1 (*pauVar2) [12];
  float *pfVar3;
  float *pfVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar35 [16];
  undefined1 auVar34 [16];
  undefined1 auVar33 [16];
  undefined1 auVar32 [16];
  undefined1 auVar36 [16];
  undefined1 auVar40 [16];
  undefined1 auVar39 [16];
  undefined1 auVar38 [16];
  undefined1 auVar37 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar49 [16];
  undefined1 auVar48 [16];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  float fVar50;
  float fVar56;
  undefined1 auVar51 [16];
  undefined1 auVar55 [16];
  undefined1 auVar54 [16];
  undefined1 auVar53 [16];
  undefined1 auVar52 [16];
  undefined1 in_q17 [16];
  undefined1 auVar60 [16];
  undefined1 auVar59 [16];
  undefined1 auVar58 [16];
  undefined1 auVar57 [16];
  float fVar61;
  float fVar64;
  float fVar65;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar66;
  
  fVar25 = (float)param_1[0x18];
  fVar20 = (float)param_1[0x19];
  fVar26 = (float)param_1[0x1b];
  fVar27 = (float)param_1[0x1e];
  fVar24 = -(float)param_1[0x1a];
  fVar29 = -(float)param_1[0x1d];
  fVar28 = (float)param_1[0x21];
  fVar21 = (float)param_1[0x1c];
  fVar31 = -(float)param_1[0x20];
  fVar30 = -(float)param_1[0x23];
  uVar14 = *param_1;
  fVar22 = (float)param_1[0x1f];
  fVar23 = (float)param_1[0x22];
  uVar12 = param_1[4];
  uVar17 = param_1[6];
  uVar15 = param_1[10];
  uVar18 = param_1[0xc];
  uVar16 = param_1[0x10];
  uVar19 = param_1[0x12];
  uVar11 = param_1[0x16];
  do {
    uVar1 = param_3;
    if (uVar14 - uVar12 <= param_3) {
      uVar1 = uVar14 - uVar12;
    }
    if (uVar17 - uVar15 <= uVar1) {
      uVar1 = uVar17 - uVar15;
    }
    if (uVar18 - uVar16 <= uVar1) {
      uVar1 = uVar18 - uVar16;
    }
    if (uVar19 - uVar11 <= uVar1) {
      uVar1 = uVar19 - uVar11;
    }
    uVar14 = uVar1 >> 2;
    if (uVar14 != 0) {
      pfVar10 = param_2;
      pfVar9 = param_4;
      while( true ) {
        uVar14 = uVar14 - 1;
        param_4 = pfVar9 + 4;
        param_2 = pfVar10 + 4;
        auVar62 = *(undefined1 (*) [16])(*(long *)(param_1 + 2) + (ulong)uVar12 * 4);
        pauVar2 = (undefined1 (*) [12])(*(long *)(param_1 + 8) + (ulong)uVar15 * 4);
        fVar56 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
        pfVar3 = (float *)(*(long *)(param_1 + 0xe) + (ulong)uVar16 * 4);
        fVar42 = auVar62._0_4_;
        auVar57._4_12_ = in_q17._4_12_;
        auVar57._0_4_ = fVar42;
        auVar59._12_4_ = in_q17._12_4_;
        auVar59._0_8_ = auVar57._0_8_;
        auVar59._8_4_ = auVar62._8_4_;
        fVar43 = SUB124(*pauVar2,0);
        auVar58._8_8_ = auVar59._8_8_;
        auVar58._4_4_ = fVar43;
        auVar58._0_4_ = fVar42;
        auVar60._0_12_ = auVar58._0_12_;
        auVar60._12_4_ = SUB124(*pauVar2,8);
        fVar50 = auVar62._4_4_;
        auVar32._4_12_ = auVar62._4_12_;
        auVar32._0_4_ = fVar50;
        auVar34._0_8_ = auVar32._0_8_;
        auVar34._8_4_ = auVar62._12_4_;
        auVar34._12_4_ = auVar62._12_4_;
        auVar33._8_8_ = auVar34._8_8_;
        auVar33._4_4_ = fVar56;
        auVar33._0_4_ = fVar50;
        auVar35._0_12_ = auVar33._0_12_;
        auVar35._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar2 + 8) >> 0x20);
        pfVar4 = (float *)(*(long *)(param_1 + 0x14) + (ulong)uVar11 * 4);
        auVar62._4_4_ = *pfVar4;
        auVar62._0_4_ = *pfVar3;
        auVar62._8_4_ = pfVar3[2];
        auVar62._12_4_ = pfVar4[2];
        auVar62 = NEON_ext(auVar62,auVar60,8,1);
        auVar63 = NEON_ext(auVar60,auVar62,8,1);
        auVar8._4_4_ = pfVar4[1];
        auVar8._0_4_ = pfVar3[1];
        auVar8._8_4_ = pfVar3[3];
        auVar8._12_4_ = pfVar4[3];
        auVar62 = NEON_ext(auVar8,auVar35,8,1);
        auVar62 = NEON_ext(auVar35,auVar62,8,1);
        fVar42 = fVar42 * fVar20 + fVar24 * fVar25;
        fVar43 = fVar43 * fVar21 + fVar29 * fVar26;
        fVar44 = *pfVar3 * fVar22 + fVar31 * fVar27;
        fVar45 = *pfVar4 * fVar23 + fVar30 * fVar28;
        auVar36._0_4_ = fVar50 * fVar20 + fVar24 * fVar42;
        auVar36._4_4_ = fVar56 * fVar21 + fVar29 * fVar43;
        auVar36._8_4_ = pfVar3[1] * fVar22 + fVar31 * fVar44;
        auVar36._12_4_ = pfVar4[1] * fVar23 + fVar30 * fVar45;
        auVar48._12_4_ = auVar62._12_4_;
        auVar51._0_4_ = auVar63._0_4_ * fVar20 + fVar24 * auVar36._0_4_;
        auVar51._4_4_ = auVar63._4_4_ * fVar21 + fVar29 * auVar36._4_4_;
        auVar51._8_4_ = auVar63._8_4_ * fVar22 + fVar31 * auVar36._8_4_;
        auVar51._12_4_ = auVar63._12_4_ * fVar23 + fVar30 * auVar36._12_4_;
        fVar25 = auVar62._0_4_ * fVar20 + fVar24 * auVar51._0_4_;
        fVar26 = auVar62._4_4_ * fVar21 + fVar29 * auVar51._4_4_;
        fVar27 = auVar62._8_4_ * fVar22 + fVar31 * auVar51._8_4_;
        fVar28 = auVar48._12_4_ * fVar23 + fVar30 * auVar51._12_4_;
        auVar46._4_12_ = auVar62._4_12_;
        auVar46._0_4_ = fVar42;
        auVar48._0_8_ = auVar46._0_8_;
        auVar48._8_4_ = fVar44;
        auVar47._8_8_ = auVar48._8_8_;
        auVar47._4_4_ = auVar36._0_4_;
        auVar47._0_4_ = fVar42;
        auVar49._0_12_ = auVar47._0_12_;
        auVar49._12_4_ = auVar36._8_4_;
        auVar37._4_12_ = auVar36._4_12_;
        auVar37._0_4_ = fVar43;
        auVar39._0_8_ = auVar37._0_8_;
        auVar39._8_4_ = fVar45;
        auVar39._12_4_ = auVar36._12_4_;
        auVar38._8_8_ = auVar39._8_8_;
        auVar38._4_4_ = auVar36._4_4_;
        auVar38._0_4_ = fVar43;
        auVar40._0_12_ = auVar38._0_12_;
        auVar40._12_4_ = auVar36._12_4_;
        auVar52._4_12_ = auVar51._4_12_;
        auVar52._0_4_ = auVar51._4_4_;
        auVar54._0_8_ = auVar52._0_8_;
        auVar54._8_4_ = auVar51._12_4_;
        auVar54._12_4_ = auVar51._12_4_;
        auVar53._8_8_ = auVar54._8_8_;
        auVar53._4_4_ = fVar26;
        auVar53._0_4_ = auVar51._4_4_;
        auVar55._0_12_ = auVar53._0_12_;
        auVar55._12_4_ = fVar28;
        auVar63._4_4_ = fVar25;
        auVar63._0_4_ = auVar51._0_4_;
        auVar63._8_4_ = auVar51._8_4_;
        auVar63._12_4_ = fVar27;
        auVar62 = NEON_ext(auVar63,auVar49,8,1);
        in_q17 = NEON_ext(auVar49,auVar62,8,1);
        auVar62 = NEON_ext(auVar55,auVar40,8,1);
        auVar62 = NEON_ext(auVar40,auVar62,8,1);
        fVar61 = in_q17._0_4_ + fVar42;
        fVar64 = in_q17._4_4_ + auVar36._0_4_;
        fVar65 = in_q17._8_4_ + auVar51._0_4_;
        fVar66 = in_q17._12_4_ + fVar25;
        fVar50 = fVar43 + auVar62._0_4_;
        fVar56 = auVar36._4_4_ + auVar62._4_4_;
        fVar44 = auVar51._4_4_ + auVar62._8_4_;
        fVar45 = fVar26 + auVar62._12_4_;
        *(ulong *)(pfVar9 + 2) =
             CONCAT44(((float)((ulong)*(undefined8 *)(pfVar9 + 2) >> 0x20) - fVar45) + fVar66,
                      ((float)*(undefined8 *)(pfVar9 + 2) - fVar44) + fVar65);
        *(ulong *)pfVar9 =
             CONCAT44(((float)((ulong)*(undefined8 *)pfVar9 >> 0x20) - fVar56) + fVar64,
                      ((float)*(undefined8 *)pfVar9 - fVar50) + fVar61);
        fVar50 = (float)*(undefined8 *)pfVar10 + (fVar50 + fVar61) * -0.5;
        fVar56 = (float)((ulong)*(undefined8 *)pfVar10 >> 0x20) + (fVar56 + fVar64) * -0.5;
        fVar44 = (float)*(undefined8 *)(pfVar10 + 2) + (fVar44 + fVar65) * -0.5;
        fVar45 = (float)((ulong)*(undefined8 *)(pfVar10 + 2) >> 0x20) + (fVar45 + fVar66) * -0.5;
        puVar5 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)param_1[4] * 4);
        puVar5[1] = CONCAT44(fVar45 + fVar26,fVar44 + auVar51._4_4_);
        *puVar5 = CONCAT44(fVar56 + auVar36._4_4_,fVar50 + fVar43);
        param_1[4] = param_1[4] + 4;
        pfVar10 = (float *)(*(long *)(param_1 + 8) + (ulong)param_1[10] * 4);
        pfVar10[2] = fVar44 + in_q17._8_4_;
        pfVar10[3] = fVar45 + in_q17._12_4_;
        *pfVar10 = fVar50 + in_q17._0_4_;
        pfVar10[1] = fVar56 + in_q17._4_4_;
        param_1[10] = param_1[10] + 4;
        pfVar10 = (float *)(*(long *)(param_1 + 0xe) + (ulong)param_1[0x10] * 4);
        pfVar10[2] = fVar44 + auVar62._8_4_;
        pfVar10[3] = fVar45 + auVar62._12_4_;
        *pfVar10 = fVar50 + auVar62._0_4_;
        pfVar10[1] = fVar56 + auVar62._4_4_;
        param_1[0x10] = param_1[0x10] + 4;
        pfVar10 = (float *)(*(long *)(param_1 + 0x14) + (ulong)param_1[0x16] * 4);
        pfVar10[2] = fVar44 + auVar51._0_4_;
        pfVar10[3] = fVar45 + fVar25;
        *pfVar10 = fVar50 + fVar42;
        pfVar10[1] = fVar56 + auVar36._0_4_;
        uVar11 = param_1[0x16] + 4;
        param_1[0x16] = uVar11;
        if (uVar14 == 0) break;
        uVar12 = param_1[4];
        uVar15 = param_1[10];
        uVar16 = param_1[0x10];
        pfVar10 = param_2;
        pfVar9 = param_4;
      }
    }
    if ((uVar1 & 0xfffffffc) < uVar1) {
      iVar13 = uVar1 - (uVar1 & 0xfffffffc);
      pfVar10 = param_4;
      do {
        iVar13 = iVar13 + -1;
        fVar25 = *(float *)(*(long *)(param_1 + 2) + (ulong)param_1[4] * 4) * fVar20 +
                 fVar24 * fVar25;
        fVar26 = *(float *)(*(long *)(param_1 + 8) + (ulong)param_1[10] * 4) * fVar21 +
                 fVar29 * fVar26;
        fVar27 = *(float *)(*(long *)(param_1 + 0xe) + (ulong)param_1[0x10] * 4) * fVar22 +
                 fVar31 * fVar27;
        fVar28 = *(float *)(*(long *)(param_1 + 0x14) + (ulong)uVar11 * 4) * fVar23 +
                 fVar30 * fVar28;
        auVar6._4_4_ = fVar26;
        auVar6._0_4_ = fVar25;
        auVar6._8_4_ = fVar27;
        auVar6._12_4_ = fVar28;
        auVar7._4_4_ = fVar26;
        auVar7._0_4_ = fVar25;
        auVar7._8_4_ = fVar27;
        auVar7._12_4_ = fVar28;
        auVar62 = NEON_ext(auVar6,auVar7,8,1);
        fVar42 = auVar62._0_4_ + fVar25;
        fVar43 = auVar62._4_4_ + fVar26;
        fVar50 = (fVar42 + fVar43) * -0.5;
        param_4 = pfVar10 + 1;
        *pfVar10 = (*pfVar10 - fVar43) + fVar42;
        fVar42 = *param_2;
        param_2 = param_2 + 1;
        auVar41._0_4_ = fVar50 + fVar25;
        auVar41._4_4_ = fVar50 + fVar26;
        auVar41._8_4_ = fVar50 + fVar27;
        auVar41._12_4_ = fVar50 + fVar28;
        auVar62 = NEON_ext(auVar41,auVar41,4,1);
        *(float *)(*(long *)(param_1 + 2) + (ulong)param_1[4] * 4) = auVar62._0_4_ + fVar42;
        param_1[4] = param_1[4] + 1;
        *(float *)(*(long *)(param_1 + 8) + (ulong)param_1[10] * 4) = auVar62._4_4_ + fVar42;
        param_1[10] = param_1[10] + 1;
        *(float *)(*(long *)(param_1 + 0xe) + (ulong)param_1[0x10] * 4) = auVar62._8_4_ + fVar42;
        param_1[0x10] = param_1[0x10] + 1;
        *(float *)(*(long *)(param_1 + 0x14) + (ulong)param_1[0x16] * 4) = auVar62._12_4_ + fVar42;
        uVar11 = param_1[0x16] + 1;
        param_1[0x16] = uVar11;
        pfVar10 = param_4;
      } while (iVar13 != 0);
    }
    uVar12 = param_1[4];
    uVar14 = *param_1;
    if (uVar12 == uVar14) {
      uVar12 = 0;
      param_1[4] = 0;
    }
    uVar15 = param_1[10];
    uVar17 = param_1[6];
    if (uVar15 == uVar17) {
      uVar15 = 0;
      param_1[10] = 0;
    }
    uVar16 = param_1[0x10];
    uVar18 = param_1[0xc];
    if (uVar16 == uVar18) {
      uVar16 = 0;
      param_1[0x10] = 0;
    }
    uVar19 = param_1[0x12];
    if (uVar11 == uVar19) {
      uVar11 = 0;
      param_1[0x16] = 0;
    }
    param_3 = param_3 - uVar1;
  } while (param_3 != 0);
  param_1[0x18] = (uint)fVar25;
  param_1[0x1b] = (uint)fVar26;
  param_1[0x1e] = (uint)fVar27;
  param_1[0x21] = (uint)fVar28;
  return;
}


