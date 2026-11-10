/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033e15bc; name: FUN_033e15bc
 */


void FUN_033e15bc(uint *param_1,float *param_2,uint param_3,float *param_4,float *param_5)

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
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
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
  float fVar32;
  undefined1 auVar36 [16];
  undefined1 auVar35 [16];
  undefined1 auVar34 [16];
  undefined1 auVar33 [16];
  undefined1 auVar37 [16];
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  undefined1 auVar39 [16];
  undefined1 auVar38 [16];
  float fVar43;
  undefined1 auVar42 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar52 [16];
  undefined1 auVar51 [16];
  undefined1 auVar50 [16];
  undefined1 auVar49 [16];
  undefined1 auVar53 [16];
  undefined1 auVar57 [16];
  undefined1 auVar56 [16];
  undefined1 auVar55 [16];
  undefined1 auVar54 [16];
  float fVar58;
  float fVar63;
  float fVar64;
  undefined1 in_q17 [16];
  undefined1 auVar62 [16];
  undefined1 auVar61 [16];
  undefined1 auVar60 [16];
  undefined1 auVar59 [16];
  float fVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  
  fVar21 = (float)param_1[0x18];
  fVar25 = (float)param_1[0x19];
  fVar22 = (float)param_1[0x1b];
  fVar23 = (float)param_1[0x1e];
  fVar29 = -(float)param_1[0x1a];
  fVar30 = -(float)param_1[0x1d];
  fVar24 = (float)param_1[0x21];
  fVar26 = (float)param_1[0x1c];
  fVar32 = -(float)param_1[0x20];
  fVar31 = -(float)param_1[0x23];
  uVar13 = *param_1;
  fVar27 = (float)param_1[0x1f];
  fVar28 = (float)param_1[0x22];
  uVar15 = param_1[4];
  uVar18 = param_1[6];
  uVar16 = param_1[10];
  uVar19 = param_1[0xc];
  uVar17 = param_1[0x10];
  uVar20 = param_1[0x12];
  uVar12 = param_1[0x16];
  do {
    uVar1 = param_3;
    if (uVar13 - uVar15 <= param_3) {
      uVar1 = uVar13 - uVar15;
    }
    if (uVar18 - uVar16 <= uVar1) {
      uVar1 = uVar18 - uVar16;
    }
    if (uVar19 - uVar17 <= uVar1) {
      uVar1 = uVar19 - uVar17;
    }
    if (uVar20 - uVar12 <= uVar1) {
      uVar1 = uVar20 - uVar12;
    }
    uVar13 = uVar1 >> 2;
    if (uVar13 != 0) {
      pfVar10 = param_4;
      pfVar11 = param_5;
      pfVar9 = param_2;
      while( true ) {
        uVar13 = uVar13 - 1;
        param_2 = pfVar9 + 4;
        auVar66 = *(undefined1 (*) [16])(*(long *)(param_1 + 2) + (ulong)uVar15 * 4);
        pauVar2 = (undefined1 (*) [12])(*(long *)(param_1 + 8) + (ulong)uVar16 * 4);
        fVar43 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
        pfVar3 = (float *)(*(long *)(param_1 + 0xe) + (ulong)uVar17 * 4);
        fVar47 = auVar66._0_4_;
        auVar59._4_12_ = in_q17._4_12_;
        auVar59._0_4_ = fVar47;
        auVar61._12_4_ = in_q17._12_4_;
        auVar61._0_8_ = auVar59._0_8_;
        auVar61._8_4_ = auVar66._8_4_;
        fVar48 = SUB124(*pauVar2,0);
        auVar60._8_8_ = auVar61._8_8_;
        auVar60._4_4_ = fVar48;
        auVar60._0_4_ = fVar47;
        auVar62._0_12_ = auVar60._0_12_;
        auVar62._12_4_ = SUB124(*pauVar2,8);
        fVar46 = auVar66._4_4_;
        auVar33._4_12_ = auVar66._4_12_;
        auVar33._0_4_ = fVar46;
        auVar35._0_8_ = auVar33._0_8_;
        auVar35._8_4_ = auVar66._12_4_;
        auVar35._12_4_ = auVar66._12_4_;
        auVar34._8_8_ = auVar35._8_8_;
        auVar34._4_4_ = fVar43;
        auVar34._0_4_ = fVar46;
        auVar36._0_12_ = auVar34._0_12_;
        auVar36._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar2 + 8) >> 0x20);
        pfVar4 = (float *)(*(long *)(param_1 + 0x14) + (ulong)uVar12 * 4);
        auVar66._4_4_ = *pfVar4;
        auVar66._0_4_ = *pfVar3;
        auVar66._8_4_ = pfVar3[2];
        auVar66._12_4_ = pfVar4[2];
        auVar66 = NEON_ext(auVar66,auVar62,8,1);
        auVar67 = NEON_ext(auVar62,auVar66,8,1);
        auVar8._4_4_ = pfVar4[1];
        auVar8._0_4_ = pfVar3[1];
        auVar8._8_4_ = pfVar3[3];
        auVar8._12_4_ = pfVar4[3];
        auVar66 = NEON_ext(auVar8,auVar36,8,1);
        auVar66 = NEON_ext(auVar36,auVar66,8,1);
        fVar44 = fVar47 * fVar25 + fVar29 * fVar21;
        fVar45 = fVar48 * fVar26 + fVar30 * fVar22;
        fVar47 = *pfVar3 * fVar27 + fVar32 * fVar23;
        fVar48 = *pfVar4 * fVar28 + fVar31 * fVar24;
        auVar37._0_4_ = fVar46 * fVar25 + fVar29 * fVar44;
        auVar37._4_4_ = fVar43 * fVar26 + fVar30 * fVar45;
        auVar37._8_4_ = pfVar3[1] * fVar27 + fVar32 * fVar47;
        auVar37._12_4_ = pfVar4[1] * fVar28 + fVar31 * fVar48;
        auVar51._12_4_ = auVar66._12_4_;
        auVar53._0_4_ = auVar67._0_4_ * fVar25 + fVar29 * auVar37._0_4_;
        auVar53._4_4_ = auVar67._4_4_ * fVar26 + fVar30 * auVar37._4_4_;
        auVar53._8_4_ = auVar67._8_4_ * fVar27 + fVar32 * auVar37._8_4_;
        auVar53._12_4_ = auVar67._12_4_ * fVar28 + fVar31 * auVar37._12_4_;
        fVar21 = auVar66._0_4_ * fVar25 + fVar29 * auVar53._0_4_;
        fVar22 = auVar66._4_4_ * fVar26 + fVar30 * auVar53._4_4_;
        fVar23 = auVar66._8_4_ * fVar27 + fVar32 * auVar53._8_4_;
        fVar24 = auVar51._12_4_ * fVar28 + fVar31 * auVar53._12_4_;
        auVar49._4_12_ = auVar66._4_12_;
        auVar49._0_4_ = fVar44;
        auVar51._0_8_ = auVar49._0_8_;
        auVar51._8_4_ = fVar47;
        auVar50._8_8_ = auVar51._8_8_;
        auVar50._4_4_ = auVar37._0_4_;
        auVar50._0_4_ = fVar44;
        auVar52._0_12_ = auVar50._0_12_;
        auVar52._12_4_ = auVar37._8_4_;
        auVar38._4_12_ = auVar37._4_12_;
        auVar38._0_4_ = fVar45;
        auVar40._0_8_ = auVar38._0_8_;
        auVar40._8_4_ = fVar48;
        auVar40._12_4_ = auVar37._12_4_;
        auVar39._8_8_ = auVar40._8_8_;
        auVar39._4_4_ = auVar37._4_4_;
        auVar39._0_4_ = fVar45;
        auVar41._0_12_ = auVar39._0_12_;
        auVar41._12_4_ = auVar37._12_4_;
        auVar54._4_12_ = auVar53._4_12_;
        auVar54._0_4_ = auVar53._4_4_;
        auVar56._0_8_ = auVar54._0_8_;
        auVar56._8_4_ = auVar53._12_4_;
        auVar56._12_4_ = auVar53._12_4_;
        auVar55._8_8_ = auVar56._8_8_;
        auVar55._4_4_ = fVar22;
        auVar55._0_4_ = auVar53._4_4_;
        auVar57._0_12_ = auVar55._0_12_;
        auVar57._12_4_ = fVar24;
        auVar67._4_4_ = fVar21;
        auVar67._0_4_ = auVar53._0_4_;
        auVar67._8_4_ = auVar53._8_4_;
        auVar67._12_4_ = fVar23;
        auVar66 = NEON_ext(auVar67,auVar52,8,1);
        in_q17 = NEON_ext(auVar52,auVar66,8,1);
        auVar66 = NEON_ext(auVar57,auVar41,8,1);
        fVar58 = in_q17._0_4_;
        fVar63 = in_q17._4_4_;
        fVar64 = in_q17._8_4_;
        fVar65 = in_q17._12_4_;
        auVar66 = NEON_ext(auVar41,auVar66,8,1);
        fVar47 = auVar66._0_4_;
        fVar46 = auVar66._4_4_;
        fVar48 = auVar66._8_4_;
        fVar43 = auVar66._12_4_;
        param_4 = pfVar10 + 4;
        pfVar10[2] = (auVar53._0_4_ + pfVar10[2] + fVar64) - (auVar53._4_4_ + fVar48);
        pfVar10[3] = (fVar21 + pfVar10[3] + fVar65) - (fVar22 + fVar43);
        *pfVar10 = (fVar44 + *pfVar10 + fVar58) - (fVar45 + fVar47);
        pfVar10[1] = (auVar37._0_4_ + pfVar10[1] + fVar63) - (auVar37._4_4_ + fVar46);
        param_5 = pfVar11 + 4;
        *(ulong *)(pfVar11 + 2) =
             CONCAT44(((float)((ulong)*(undefined8 *)(pfVar11 + 2) >> 0x20) - (fVar65 + fVar43)) +
                      fVar22 + fVar21,
                      ((float)*(undefined8 *)(pfVar11 + 2) - (fVar64 + fVar48)) +
                      auVar53._4_4_ + auVar53._0_4_);
        *(ulong *)pfVar11 =
             CONCAT44(((float)((ulong)*(undefined8 *)pfVar11 >> 0x20) - (fVar63 + fVar46)) +
                      auVar37._4_4_ + auVar37._0_4_,
                      ((float)*(undefined8 *)pfVar11 - (fVar58 + fVar47)) + fVar45 + fVar44);
        fVar68 = (float)*(undefined8 *)pfVar9 + (fVar58 + fVar47 + fVar45 + fVar44) * -0.5;
        fVar69 = (float)((ulong)*(undefined8 *)pfVar9 >> 0x20) +
                 (fVar63 + fVar46 + auVar37._4_4_ + auVar37._0_4_) * -0.5;
        fVar70 = (float)*(undefined8 *)(pfVar9 + 2) +
                 (fVar64 + fVar48 + auVar53._4_4_ + auVar53._0_4_) * -0.5;
        fVar71 = (float)((ulong)*(undefined8 *)(pfVar9 + 2) >> 0x20) +
                 (fVar65 + fVar43 + fVar22 + fVar21) * -0.5;
        puVar5 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)param_1[4] * 4);
        puVar5[1] = CONCAT44(fVar71 + fVar22,fVar70 + auVar53._4_4_);
        *puVar5 = CONCAT44(fVar69 + auVar37._4_4_,fVar68 + fVar45);
        param_1[4] = param_1[4] + 4;
        pfVar10 = (float *)(*(long *)(param_1 + 8) + (ulong)param_1[10] * 4);
        pfVar10[2] = fVar70 + fVar64;
        pfVar10[3] = fVar71 + fVar65;
        *pfVar10 = fVar68 + fVar58;
        pfVar10[1] = fVar69 + fVar63;
        param_1[10] = param_1[10] + 4;
        pfVar10 = (float *)(*(long *)(param_1 + 0xe) + (ulong)param_1[0x10] * 4);
        pfVar10[2] = fVar70 + fVar48;
        pfVar10[3] = fVar71 + fVar43;
        *pfVar10 = fVar68 + fVar47;
        pfVar10[1] = fVar69 + fVar46;
        param_1[0x10] = param_1[0x10] + 4;
        pfVar10 = (float *)(*(long *)(param_1 + 0x14) + (ulong)param_1[0x16] * 4);
        pfVar10[2] = fVar70 + auVar53._0_4_;
        pfVar10[3] = fVar71 + fVar21;
        *pfVar10 = fVar68 + fVar44;
        pfVar10[1] = fVar69 + auVar37._0_4_;
        uVar12 = param_1[0x16] + 4;
        param_1[0x16] = uVar12;
        if (uVar13 == 0) break;
        uVar15 = param_1[4];
        uVar16 = param_1[10];
        uVar17 = param_1[0x10];
        pfVar10 = param_4;
        pfVar11 = param_5;
        pfVar9 = param_2;
      }
    }
    if ((uVar1 & 0xfffffffc) < uVar1) {
      iVar14 = uVar1 - (uVar1 & 0xfffffffc);
      pfVar10 = param_4;
      pfVar11 = param_5;
      do {
        iVar14 = iVar14 + -1;
        fVar21 = *(float *)(*(long *)(param_1 + 2) + (ulong)param_1[4] * 4) * fVar25 +
                 fVar29 * fVar21;
        fVar22 = *(float *)(*(long *)(param_1 + 8) + (ulong)param_1[10] * 4) * fVar26 +
                 fVar30 * fVar22;
        fVar23 = *(float *)(*(long *)(param_1 + 0xe) + (ulong)param_1[0x10] * 4) * fVar27 +
                 fVar32 * fVar23;
        fVar24 = *(float *)(*(long *)(param_1 + 0x14) + (ulong)uVar12 * 4) * fVar28 +
                 fVar31 * fVar24;
        auVar6._4_4_ = fVar22;
        auVar6._0_4_ = fVar21;
        auVar6._8_4_ = fVar23;
        auVar6._12_4_ = fVar24;
        auVar7._4_4_ = fVar22;
        auVar7._0_4_ = fVar21;
        auVar7._8_4_ = fVar23;
        auVar7._12_4_ = fVar24;
        auVar66 = NEON_ext(auVar6,auVar7,8,1);
        fVar47 = auVar66._0_4_ + fVar21;
        fVar46 = auVar66._4_4_ + fVar22;
        param_4 = pfVar10 + 1;
        *pfVar10 = (*pfVar10 - fVar46) + fVar47;
        param_5 = pfVar11 + 1;
        *pfVar11 = (fVar21 - auVar66._0_4_) + *pfVar11 + (fVar22 - auVar66._4_4_);
        fVar46 = (fVar47 + fVar46) * -0.5;
        fVar47 = *param_2;
        param_2 = param_2 + 1;
        auVar42._0_4_ = fVar46 + fVar21;
        auVar42._4_4_ = fVar46 + fVar22;
        auVar42._8_4_ = fVar46 + fVar23;
        auVar42._12_4_ = fVar46 + fVar24;
        auVar66 = NEON_ext(auVar42,auVar42,4,1);
        *(float *)(*(long *)(param_1 + 2) + (ulong)param_1[4] * 4) = auVar66._0_4_ + fVar47;
        param_1[4] = param_1[4] + 1;
        *(float *)(*(long *)(param_1 + 8) + (ulong)param_1[10] * 4) = auVar66._4_4_ + fVar47;
        param_1[10] = param_1[10] + 1;
        *(float *)(*(long *)(param_1 + 0xe) + (ulong)param_1[0x10] * 4) = auVar66._8_4_ + fVar47;
        param_1[0x10] = param_1[0x10] + 1;
        *(float *)(*(long *)(param_1 + 0x14) + (ulong)param_1[0x16] * 4) = auVar66._12_4_ + fVar47;
        uVar12 = param_1[0x16] + 1;
        param_1[0x16] = uVar12;
        pfVar10 = param_4;
        pfVar11 = param_5;
      } while (iVar14 != 0);
    }
    uVar15 = param_1[4];
    uVar13 = *param_1;
    if (uVar15 == uVar13) {
      uVar15 = 0;
      param_1[4] = 0;
    }
    uVar16 = param_1[10];
    uVar18 = param_1[6];
    if (uVar16 == uVar18) {
      uVar16 = 0;
      param_1[10] = 0;
    }
    uVar17 = param_1[0x10];
    uVar19 = param_1[0xc];
    if (uVar17 == uVar19) {
      uVar17 = 0;
      param_1[0x10] = 0;
    }
    uVar20 = param_1[0x12];
    if (uVar12 == uVar20) {
      uVar12 = 0;
      param_1[0x16] = 0;
    }
    param_3 = param_3 - uVar1;
  } while (param_3 != 0);
  param_1[0x18] = (uint)fVar21;
  param_1[0x1b] = (uint)fVar22;
  param_1[0x1e] = (uint)fVar23;
  param_1[0x21] = (uint)fVar24;
  return;
}


