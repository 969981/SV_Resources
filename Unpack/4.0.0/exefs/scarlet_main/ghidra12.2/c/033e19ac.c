/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033e19ac; name: FUN_033e19ac
 */


void FUN_033e19ac(uint *param_1,float *param_2,uint param_3,long *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
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
  undefined1 auVar32 [16];
  undefined1 auVar31 [16];
  undefined1 auVar36 [16];
  undefined1 auVar35 [16];
  undefined1 auVar34 [16];
  undefined1 auVar33 [16];
  undefined1 auVar37 [16];
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  undefined1 auVar39 [16];
  undefined1 auVar38 [16];
  undefined1 auVar42 [16];
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar43 [16];
  undefined1 auVar50 [16];
  undefined1 auVar49 [16];
  undefined1 auVar48 [16];
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  undefined1 auVar55 [16];
  undefined1 auVar54 [16];
  undefined1 auVar53 [16];
  undefined1 auVar52 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar61 [16];
  undefined1 auVar60 [16];
  undefined1 auVar59 [16];
  undefined1 auVar58 [16];
  float fVar62;
  float fVar63;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 in_q17 [16];
  undefined1 auVar67 [16];
  undefined1 auVar66 [16];
  undefined1 auVar65 [16];
  undefined1 auVar64 [16];
  float fVar72;
  float fVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  
  fVar22 = (float)param_1[0x18];
  fVar17 = (float)param_1[0x19];
  fVar23 = (float)param_1[0x1b];
  fVar24 = (float)param_1[0x1e];
  fVar21 = -(float)param_1[0x1a];
  fVar28 = -(float)param_1[0x1d];
  fVar26 = (float)param_1[0x21];
  fVar18 = (float)param_1[0x1c];
  fVar30 = -(float)param_1[0x20];
  fVar29 = -(float)param_1[0x23];
  uVar9 = *param_1;
  fVar19 = (float)param_1[0x1f];
  fVar20 = (float)param_1[0x22];
  uVar11 = param_1[4];
  uVar14 = param_1[6];
  uVar12 = param_1[10];
  uVar15 = param_1[0xc];
  uVar13 = param_1[0x10];
  uVar16 = param_1[0x12];
  uVar6 = param_1[0x16];
  do {
    uVar1 = param_3;
    if (uVar9 - uVar11 <= param_3) {
      uVar1 = uVar9 - uVar11;
    }
    if (uVar14 - uVar12 <= uVar1) {
      uVar1 = uVar14 - uVar12;
    }
    if (uVar15 - uVar13 <= uVar1) {
      uVar1 = uVar15 - uVar13;
    }
    if (uVar16 - uVar6 <= uVar1) {
      uVar1 = uVar16 - uVar6;
    }
    uVar9 = uVar1 >> 2;
    if (uVar9 != 0) {
      pfVar8 = param_2;
      while( true ) {
        uVar9 = uVar9 - 1;
        param_2 = pfVar8 + 4;
        auVar56 = *(undefined1 (*) [16])(*(long *)(param_1 + 2) + (ulong)uVar11 * 4);
        auVar34 = *(undefined1 (*) [16])(*(long *)(param_1 + 8) + (ulong)uVar12 * 4);
        auVar36 = *(undefined1 (*) [16])(*(long *)(param_1 + 0xe) + (ulong)uVar13 * 4);
        fVar70 = auVar56._0_4_;
        auVar64._4_12_ = in_q17._4_12_;
        auVar64._0_4_ = fVar70;
        auVar66._12_4_ = in_q17._12_4_;
        auVar66._0_8_ = auVar64._0_8_;
        auVar66._8_4_ = auVar56._8_4_;
        auVar65._8_8_ = auVar66._8_8_;
        auVar65._4_4_ = auVar34._0_4_;
        auVar65._0_4_ = fVar70;
        auVar67._0_12_ = auVar65._0_12_;
        auVar67._12_4_ = auVar34._8_4_;
        fVar25 = auVar56._4_4_;
        auVar57._4_12_ = auVar56._4_12_;
        auVar57._0_4_ = fVar25;
        auVar31._0_8_ = auVar57._0_8_;
        auVar31._8_4_ = auVar56._12_4_;
        auVar31._12_4_ = auVar56._12_4_;
        auVar56._8_8_ = auVar31._8_8_;
        auVar56._4_4_ = auVar34._4_4_;
        auVar56._0_4_ = fVar25;
        auVar32._0_12_ = auVar56._0_12_;
        auVar32._12_4_ = auVar34._12_4_;
        pfVar3 = (float *)(*(long *)(param_1 + 0x14) + (ulong)uVar6 * 4);
        pfVar7 = (float *)*param_4;
        uVar75 = *(undefined8 *)(pfVar7 + 2);
        uVar74 = *(undefined8 *)pfVar7;
        fVar72 = auVar36._0_4_;
        auVar38._4_12_ = auVar34._4_12_;
        auVar38._0_4_ = fVar72;
        auVar40._0_8_ = auVar38._0_8_;
        auVar40._8_4_ = auVar36._8_4_;
        auVar40._12_4_ = auVar34._12_4_;
        auVar39._8_8_ = auVar40._8_8_;
        auVar39._4_4_ = *pfVar3;
        auVar39._0_4_ = fVar72;
        auVar41._0_12_ = auVar39._0_12_;
        auVar41._12_4_ = pfVar3[2];
        fVar27 = auVar36._4_4_;
        auVar47._4_12_ = auVar36._4_12_;
        auVar47._0_4_ = fVar27;
        auVar49._0_8_ = auVar47._0_8_;
        auVar49._8_4_ = auVar36._12_4_;
        auVar49._12_4_ = auVar36._12_4_;
        auVar48._8_8_ = auVar49._8_8_;
        auVar48._4_4_ = pfVar3[1];
        auVar48._0_4_ = fVar27;
        auVar50._0_12_ = auVar48._0_12_;
        auVar50._12_4_ = pfVar3[3];
        auVar56 = NEON_ext(auVar41,auVar67,8,1);
        auVar57 = NEON_ext(auVar67,auVar56,8,1);
        auVar56 = NEON_ext(auVar50,auVar32,8,1);
        auVar56 = NEON_ext(auVar32,auVar56,8,1);
        auVar60._12_4_ = auVar57._12_4_;
        fVar62 = fVar70 * fVar17 + fVar21 * fVar22;
        fVar68 = auVar34._0_4_ * fVar18 + fVar28 * fVar23;
        fVar70 = fVar72 * fVar19 + fVar30 * fVar24;
        fVar72 = *pfVar3 * fVar20 + fVar29 * fVar26;
        auVar42._0_4_ = fVar25 * fVar17 + fVar21 * fVar62;
        auVar42._4_4_ = auVar34._4_4_ * fVar18 + fVar28 * fVar68;
        auVar42._8_4_ = fVar27 * fVar19 + fVar30 * fVar70;
        auVar42._12_4_ = pfVar3[1] * fVar20 + fVar29 * fVar72;
        auVar35._12_4_ = auVar56._12_4_;
        auVar51._0_4_ = auVar57._0_4_ * fVar17 + fVar21 * auVar42._0_4_;
        auVar51._4_4_ = auVar57._4_4_ * fVar18 + fVar28 * auVar42._4_4_;
        auVar51._8_4_ = auVar57._8_4_ * fVar19 + fVar30 * auVar42._8_4_;
        auVar51._12_4_ = auVar60._12_4_ * fVar20 + fVar29 * auVar42._12_4_;
        fVar22 = auVar56._0_4_ * fVar17 + fVar21 * auVar51._0_4_;
        fVar23 = auVar56._4_4_ * fVar18 + fVar28 * auVar51._4_4_;
        fVar24 = auVar56._8_4_ * fVar19 + fVar30 * auVar51._8_4_;
        fVar26 = auVar35._12_4_ * fVar20 + fVar29 * auVar51._12_4_;
        auVar33._4_12_ = auVar56._4_12_;
        auVar33._0_4_ = fVar62;
        auVar35._0_8_ = auVar33._0_8_;
        auVar35._8_4_ = fVar70;
        auVar34._8_8_ = auVar35._8_8_;
        auVar34._4_4_ = auVar42._0_4_;
        auVar34._0_4_ = fVar62;
        auVar36._0_12_ = auVar34._0_12_;
        auVar36._12_4_ = auVar42._8_4_;
        auVar43._4_12_ = auVar42._4_12_;
        auVar43._0_4_ = fVar68;
        auVar45._0_8_ = auVar43._0_8_;
        auVar45._8_4_ = fVar72;
        auVar45._12_4_ = auVar42._12_4_;
        auVar44._8_8_ = auVar45._8_8_;
        auVar44._4_4_ = auVar42._4_4_;
        auVar44._0_4_ = fVar68;
        auVar46._0_12_ = auVar44._0_12_;
        auVar46._12_4_ = auVar42._12_4_;
        auVar58._4_12_ = auVar57._4_12_;
        auVar58._0_4_ = auVar51._0_4_;
        auVar60._0_8_ = auVar58._0_8_;
        auVar60._8_4_ = auVar51._8_4_;
        auVar59._8_8_ = auVar60._8_8_;
        auVar59._4_4_ = fVar22;
        auVar59._0_4_ = auVar51._0_4_;
        auVar61._0_12_ = auVar59._0_12_;
        auVar61._12_4_ = fVar24;
        auVar52._4_12_ = auVar51._4_12_;
        auVar52._0_4_ = auVar51._4_4_;
        auVar54._0_8_ = auVar52._0_8_;
        auVar54._8_4_ = auVar51._12_4_;
        auVar54._12_4_ = auVar51._12_4_;
        auVar53._8_8_ = auVar54._8_8_;
        auVar53._4_4_ = fVar23;
        auVar53._0_4_ = auVar51._4_4_;
        auVar55._0_12_ = auVar53._0_12_;
        auVar55._12_4_ = fVar26;
        auVar56 = NEON_ext(auVar61,auVar36,8,1);
        in_q17 = NEON_ext(auVar36,auVar56,8,1);
        auVar56 = NEON_ext(auVar55,auVar46,8,1);
        fVar63 = in_q17._0_4_;
        fVar69 = in_q17._4_4_;
        fVar71 = in_q17._8_4_;
        fVar73 = in_q17._12_4_;
        auVar56 = NEON_ext(auVar46,auVar56,8,1);
        fVar70 = auVar56._0_4_;
        fVar72 = auVar56._4_4_;
        fVar25 = auVar56._8_4_;
        fVar27 = auVar56._12_4_;
        pfVar7[2] = (auVar51._0_4_ + (float)uVar75 + fVar71) - (auVar51._4_4_ + fVar25);
        pfVar7[3] = (fVar22 + (float)((ulong)uVar75 >> 0x20) + fVar73) - (fVar23 + fVar27);
        *pfVar7 = (fVar62 + (float)uVar74 + fVar63) - (fVar68 + fVar70);
        pfVar7[1] = (auVar42._0_4_ + (float)((ulong)uVar74 >> 0x20) + fVar69) -
                    (auVar42._4_4_ + fVar72);
        puVar2 = (undefined8 *)param_4[1];
        *param_4 = *param_4 + 0x10;
        puVar2[1] = CONCAT44(((float)((ulong)puVar2[1] >> 0x20) - (fVar73 + fVar27)) +
                             fVar23 + fVar22,
                             ((float)puVar2[1] - (fVar71 + fVar25)) + auVar51._4_4_ + auVar51._0_4_)
        ;
        *puVar2 = CONCAT44(((float)((ulong)*puVar2 >> 0x20) - (fVar69 + fVar72)) +
                           auVar42._4_4_ + auVar42._0_4_,
                           ((float)*puVar2 - (fVar63 + fVar70)) + fVar68 + fVar62);
        puVar2 = (undefined8 *)param_4[2];
        param_4[1] = param_4[1] + 0x10;
        puVar2[1] = CONCAT44(((fVar27 + fVar22) - (fVar23 + fVar73)) +
                             (float)((ulong)puVar2[1] >> 0x20),
                             ((fVar25 + auVar51._0_4_) - (auVar51._4_4_ + fVar71)) +
                             (float)puVar2[1]);
        *puVar2 = CONCAT44(((fVar72 + auVar42._0_4_) - (auVar42._4_4_ + fVar69)) +
                           (float)((ulong)*puVar2 >> 0x20),
                           ((fVar70 + fVar62) - (fVar68 + fVar63)) + (float)*puVar2);
        param_4[2] = param_4[2] + 0x10;
        fVar76 = (float)*(undefined8 *)pfVar8 + (fVar63 + fVar70 + fVar68 + fVar62) * -0.5;
        fVar77 = (float)((ulong)*(undefined8 *)pfVar8 >> 0x20) +
                 (fVar69 + fVar72 + auVar42._4_4_ + auVar42._0_4_) * -0.5;
        fVar78 = (float)*(undefined8 *)(pfVar8 + 2) +
                 (fVar71 + fVar25 + auVar51._4_4_ + auVar51._0_4_) * -0.5;
        fVar79 = (float)((ulong)*(undefined8 *)(pfVar8 + 2) >> 0x20) +
                 (fVar73 + fVar27 + fVar23 + fVar22) * -0.5;
        pfVar8 = (float *)(*(long *)(param_1 + 2) + (ulong)param_1[4] * 4);
        pfVar8[2] = fVar78 + auVar51._4_4_;
        pfVar8[3] = fVar79 + fVar23;
        *pfVar8 = fVar76 + fVar68;
        pfVar8[1] = fVar77 + auVar42._4_4_;
        param_1[4] = param_1[4] + 4;
        pfVar8 = (float *)(*(long *)(param_1 + 8) + (ulong)param_1[10] * 4);
        pfVar8[2] = fVar78 + fVar71;
        pfVar8[3] = fVar79 + fVar73;
        *pfVar8 = fVar76 + fVar63;
        pfVar8[1] = fVar77 + fVar69;
        param_1[10] = param_1[10] + 4;
        pfVar8 = (float *)(*(long *)(param_1 + 0xe) + (ulong)param_1[0x10] * 4);
        pfVar8[2] = fVar78 + fVar25;
        pfVar8[3] = fVar79 + fVar27;
        *pfVar8 = fVar76 + fVar70;
        pfVar8[1] = fVar77 + fVar72;
        param_1[0x10] = param_1[0x10] + 4;
        pfVar8 = (float *)(*(long *)(param_1 + 0x14) + (ulong)param_1[0x16] * 4);
        pfVar8[2] = fVar78 + auVar51._0_4_;
        pfVar8[3] = fVar79 + fVar22;
        *pfVar8 = fVar76 + fVar62;
        pfVar8[1] = fVar77 + auVar42._0_4_;
        uVar6 = param_1[0x16] + 4;
        param_1[0x16] = uVar6;
        if (uVar9 == 0) break;
        uVar11 = param_1[4];
        uVar12 = param_1[10];
        uVar13 = param_1[0x10];
        pfVar8 = param_2;
      }
    }
    if ((uVar1 & 0xfffffffc) < uVar1) {
      iVar10 = uVar1 - (uVar1 & 0xfffffffc);
      do {
        iVar10 = iVar10 + -1;
        fVar70 = *(float *)(*(long *)(param_1 + 2) + (ulong)param_1[4] * 4);
        fVar72 = *(float *)(*(long *)(param_1 + 8) + (ulong)param_1[10] * 4);
        fVar25 = *(float *)(*(long *)(param_1 + 0xe) + (ulong)param_1[0x10] * 4);
        fVar27 = *(float *)(*(long *)(param_1 + 0x14) + (ulong)uVar6 * 4);
        pfVar8 = (float *)*param_4;
        *param_4 = (long)(pfVar8 + 1);
        fVar22 = fVar70 * fVar17 + fVar21 * fVar22;
        fVar23 = fVar72 * fVar18 + fVar28 * fVar23;
        fVar24 = fVar25 * fVar19 + fVar30 * fVar24;
        fVar26 = fVar27 * fVar20 + fVar29 * fVar26;
        auVar4._4_4_ = fVar23;
        auVar4._0_4_ = fVar22;
        auVar4._8_4_ = fVar24;
        auVar4._12_4_ = fVar26;
        auVar5._4_4_ = fVar23;
        auVar5._0_4_ = fVar22;
        auVar5._8_4_ = fVar24;
        auVar5._12_4_ = fVar26;
        auVar56 = NEON_ext(auVar4,auVar5,8,1);
        fVar25 = auVar56._0_4_ + fVar22;
        fVar27 = auVar56._4_4_ + fVar23;
        fVar70 = fVar22 - auVar56._0_4_;
        fVar72 = fVar23 - auVar56._4_4_;
        *pfVar8 = (*pfVar8 - fVar27) + fVar25;
        pfVar8 = (float *)param_4[1];
        param_4[1] = (long)(pfVar8 + 1);
        in_q17 = ZEXT416((uint)*pfVar8);
        *pfVar8 = fVar70 + fVar72 + *pfVar8;
        pfVar8 = (float *)param_4[2];
        param_4[2] = (long)(pfVar8 + 1);
        *pfVar8 = (fVar70 - fVar72) + *pfVar8;
        fVar72 = (fVar25 + fVar27) * -0.5;
        fVar70 = *param_2;
        param_2 = param_2 + 1;
        auVar37._0_4_ = fVar72 + fVar22;
        auVar37._4_4_ = fVar72 + fVar23;
        auVar37._8_4_ = fVar72 + fVar24;
        auVar37._12_4_ = fVar72 + fVar26;
        auVar56 = NEON_ext(auVar37,auVar37,4,1);
        *(float *)(*(long *)(param_1 + 2) + (ulong)param_1[4] * 4) = fVar70 + auVar56._0_4_;
        param_1[4] = param_1[4] + 1;
        *(float *)(*(long *)(param_1 + 8) + (ulong)param_1[10] * 4) = fVar70 + auVar56._4_4_;
        param_1[10] = param_1[10] + 1;
        *(float *)(*(long *)(param_1 + 0xe) + (ulong)param_1[0x10] * 4) = fVar70 + auVar56._8_4_;
        param_1[0x10] = param_1[0x10] + 1;
        *(float *)(*(long *)(param_1 + 0x14) + (ulong)param_1[0x16] * 4) = fVar70 + auVar56._12_4_;
        uVar6 = param_1[0x16] + 1;
        param_1[0x16] = uVar6;
      } while (iVar10 != 0);
    }
    uVar11 = param_1[4];
    uVar9 = *param_1;
    if (uVar11 == uVar9) {
      uVar11 = 0;
      param_1[4] = 0;
    }
    uVar12 = param_1[10];
    uVar14 = param_1[6];
    if (uVar12 == uVar14) {
      uVar12 = 0;
      param_1[10] = 0;
    }
    uVar13 = param_1[0x10];
    uVar15 = param_1[0xc];
    if (uVar13 == uVar15) {
      uVar13 = 0;
      param_1[0x10] = 0;
    }
    uVar16 = param_1[0x12];
    if (uVar6 == uVar16) {
      uVar6 = 0;
      param_1[0x16] = 0;
    }
    param_3 = param_3 - uVar1;
  } while (param_3 != 0);
  param_1[0x18] = (uint)fVar22;
  param_1[0x1b] = (uint)fVar23;
  param_1[0x1e] = (uint)fVar24;
  param_1[0x21] = (uint)fVar26;
  return;
}


