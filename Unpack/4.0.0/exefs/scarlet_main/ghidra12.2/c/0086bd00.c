/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0086bd00; name: FUN_0086bd00
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0086bd00(undefined8 *param_1)

{
  double *pdVar1;
  short *psVar2;
  float *pfVar3;
  float *pfVar4;
  short sVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  bool bVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar32;
  float fVar33;
  double dVar23;
  float fVar34;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar35;
  double dVar36;
  float fVar42;
  float fVar43;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  float fVar69;
  undefined1 in_q16 [16];
  float fVar70;
  float fVar71;
  undefined8 in_d17;
  undefined8 extraout_d17;
  float fVar72;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
  iVar11 = *(int *)(param_1 + 0x10);
  if (iVar11 < 1) {
    iVar8 = *(int *)(param_1 + 0x18);
  }
  else {
    pfVar3 = (float *)param_1[0xe];
    pfVar4 = (float *)param_1[0xf];
    fVar72 = *pfVar3;
    fVar69 = pfVar3[1];
    fVar58 = pfVar3[2];
    fVar35 = pfVar3[3];
    fVar21 = *pfVar4;
    fVar22 = pfVar4[1];
    fVar32 = pfVar4[2];
    fVar33 = pfVar4[3];
    auVar53 = *(undefined1 (*) [16])(param_1 + 0x12);
    iVar8 = *(int *)(param_1 + 0x18);
    auVar38._0_8_ = CONCAT44((fVar69 - fVar22) + auVar53._4_4_,(fVar72 - fVar21) + auVar53._0_4_);
    auVar38._8_4_ = (fVar58 - fVar32) + auVar53._8_4_;
    auVar38._12_4_ = (fVar35 - fVar33) + auVar53._12_4_;
    param_1[(long)iVar8 * 2 + 0x11b] = auVar38._8_8_;
    param_1[(long)iVar8 * 2 + 0x11a] = auVar38._0_8_;
    iVar8 = *(int *)(param_1 + 0x18);
    *(float *)(param_1 + (long)iVar8 * 2 + 0x1b) = fVar58;
    *(float *)((long)param_1 + (long)iVar8 * 0x10 + 0xdc) = fVar35;
    *(float *)(param_1 + (long)iVar8 * 2 + 0x1a) = fVar72;
    *(float *)((long)param_1 + (long)iVar8 * 0x10 + 0xd4) = fVar69;
    iVar8 = *(int *)(param_1 + 0x18);
    *(float *)(param_1 + (long)iVar8 * 2 + 0x9b) = fVar32;
    *(float *)((long)param_1 + (long)iVar8 * 0x10 + 0x4dc) = fVar33;
    *(float *)(param_1 + (long)iVar8 * 2 + 0x9a) = fVar21;
    *(float *)((long)param_1 + (long)iVar8 * 0x10 + 0x4d4) = fVar22;
    iVar8 = *(int *)(param_1 + 0x18) + 1;
    *(int *)(param_1 + 0x18) = iVar8;
  }
  uVar6 = iVar11 >= 1;
  uVar14 = (ulong)(byte)uVar6;
  if (iVar8 < 1) {
    fStack_98 = (float)_UNK_03cab808;
    fStack_94 = (float)((ulong)_UNK_03cab808 >> 0x20);
    local_a0 = (float)_DAT_03cab800;
    fStack_9c = (float)((ulong)_DAT_03cab800 >> 0x20);
    fVar72 = *(float *)(param_1 + 0x12);
    fVar69 = *(float *)((long)param_1 + 0x94);
    fVar58 = *(float *)(param_1 + 0x13);
    fVar35 = *(float *)((long)param_1 + 0x9c);
    (*(code *)**(undefined8 **)*param_1)
              ((undefined8 *)*param_1,param_1[1],&local_a0,param_1[2],param_1 + 4,&local_90);
    auVar53 = *(undefined1 (*) [16])(param_1 + 4);
    auVar38 = *(undefined1 (*) [16])(param_1 + 6);
    auVar24 = *(undefined1 (*) [16])(param_1 + 8);
    fVar21 = local_80 - *(float *)(param_1 + 10);
    fVar32 = fStack_7c - *(float *)((long)param_1 + 0x54);
    fVar34 = fStack_78 - *(float *)(param_1 + 0xb);
    auVar49 = NEON_ext(auVar53,auVar53,8,1);
    auVar51 = NEON_ext(auVar38,auVar38,8,1);
    auVar45 = NEON_ext(auVar24,auVar24,8,1);
    fVar22 = auVar49._0_4_ * fVar34 + auVar53._0_4_ * fVar21 + auVar53._4_4_ * fVar32;
    fVar33 = auVar51._0_4_ * fVar34 + auVar38._0_4_ * fVar21 + auVar38._4_4_ * fVar32;
    fVar21 = auVar45._0_4_ * fVar34 + auVar24._0_4_ * fVar21 + auVar24._4_4_ * fVar32;
    fVar65 = local_a0 * local_a0 + fStack_9c * fStack_9c + fStack_98 * fStack_98;
    fVar32 = (float)local_90 - fVar22;
    fVar34 = (float)((ulong)local_90 >> 0x20) - fVar33;
    fVar42 = (float)uStack_88 - fVar21;
    fVar43 = (float)((ulong)uStack_88 >> 0x20) - fStack_74;
    fVar59 = SQRT(fVar65);
    fVar61 = SQRT(local_a0 * local_a0 + fStack_9c * fStack_9c + fStack_98 * fStack_98);
    iVar11 = *(int *)(param_1 + 0x9bd);
    fVar50 = (float)*(undefined8 *)(PTR_DAT_047d19b0 + 0x60) / fVar59;
    auVar53._0_4_ = local_a0 * (fVar32 - (0.0 - fVar72));
    auVar53._4_4_ = fStack_9c * (fVar34 - (0.0 - fVar69));
    auVar53._8_4_ = fStack_98 * (fVar42 - (0.0 - fVar58));
    auVar53._12_4_ = fStack_94 * (fVar43 - (0.0 - fVar35));
    in_q16 = NEON_ext(auVar53,auVar53,8,1);
    fVar72 = in_q16._0_4_;
    if (iVar11 == 8) {
      fVar69 = fStack_98 * fVar42;
      in_d17 = CONCAT44(fVar69,fVar69);
      in_q16._0_4_ = fVar50 * -(fVar69 + local_a0 * fVar32 + fStack_9c * fVar34);
      in_q16._4_4_ = ((float)((ulong)*(undefined8 *)(PTR_DAT_047d19b0 + 0x60) >> 0x20) / fVar61) *
                     -(fVar69 + local_a0 * fVar32 + fStack_9c * fVar34);
      in_q16._8_8_ = 0;
      fVar69 = (float)param_1[0xc];
      if (fVar69 < in_q16._0_4_) {
        uVar67 = 0;
        uVar68 = 0;
        if (fVar65 != 0.0) {
          uVar67 = CONCAT44(fStack_9c / fVar61,local_a0 / fVar59);
          uVar68 = CONCAT44(fStack_94 / fVar61,fStack_98 / fVar59);
        }
        fVar58 = -(fVar32 * (float)uVar67 + fVar34 * (float)((ulong)uVar67 >> 0x20) +
                  fVar42 * (float)uVar68);
        if (fVar69 < fVar58) {
          iVar11 = 0;
          *(undefined4 *)(param_1 + 0x9bd) = 0;
          param_1[0x9c1] = uVar68;
          param_1[0x9c0] = uVar67;
          *(float *)(param_1 + 0x9c2) = fVar58;
          goto joined_r0x0086bf0c;
        }
      }
      iVar11 = 8;
    }
    else {
      fVar69 = (float)param_1[0xc];
      in_d17 = extraout_d17;
    }
joined_r0x0086bf0c:
    if (fVar69 <= fVar50 * (auVar53._0_4_ + auVar53._4_4_ + fVar72)) {
      iVar11 = *(int *)(param_1 + 0x18);
      param_1[(long)iVar11 * 2 + 0x1b] = uStack_88;
      param_1[(long)iVar11 * 2 + 0x1a] = local_90;
      iVar11 = *(int *)(param_1 + 0x18);
      *(float *)(param_1 + (long)iVar11 * 2 + 0x9b) = fVar21;
      *(float *)((long)param_1 + (long)iVar11 * 0x10 + 0x4dc) = fStack_74;
      *(float *)(param_1 + (long)iVar11 * 2 + 0x9a) = fVar22;
      *(float *)((long)param_1 + (long)iVar11 * 0x10 + 0x4d4) = fVar33;
      fVar72 = *(float *)(param_1 + 0x12);
      fVar69 = *(float *)((long)param_1 + 0x94);
      fVar58 = *(float *)((long)param_1 + 0x9c);
      iVar11 = *(int *)(param_1 + 0x18);
      *(float *)(param_1 + (long)iVar11 * 2 + 0x11b) = fVar42 + *(float *)(param_1 + 0x13);
      *(float *)((long)param_1 + (long)iVar11 * 0x10 + 0x8dc) = fVar43 + fVar58;
      *(float *)(param_1 + (long)iVar11 * 2 + 0x11a) = fVar32 + fVar72;
      *(float *)((long)param_1 + (long)iVar11 * 0x10 + 0x8d4) = fVar34 + fVar69;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      iVar11 = *(int *)(param_1 + 0x9bd);
    }
    if (iVar11 == 0) goto LAB_0086c9dc;
  }
  auVar53 = *(undefined1 (*) [16])(param_1 + 0x11a);
  auVar38 = *(undefined1 (*) [16])(param_1 + 0x12);
  fVar72 = auVar38._0_4_;
  fVar69 = auVar38._4_4_;
  fVar58 = auVar38._8_4_;
  fVar35 = auVar38._12_4_;
  if ((int)(uint)(byte)uVar6 < *(int *)(param_1 + 0x10)) {
    iVar11 = *(int *)(param_1 + 0x18);
    while( true ) {
      pfVar3 = (float *)(param_1[0xe] + uVar14 * 0x10);
      fVar21 = *pfVar3;
      fVar22 = pfVar3[1];
      fVar32 = pfVar3[2];
      fVar33 = pfVar3[3];
      auVar24 = *(undefined1 (*) [16])(param_1[0xf] + uVar14 * 0x10);
      pfVar3 = (float *)(param_1 + (long)iVar11 * 2 + 0x11a);
      pfVar3[2] = (fVar32 - auVar24._8_4_) + auVar38._8_4_;
      pfVar3[3] = (fVar33 - auVar24._12_4_) + auVar38._12_4_;
      *pfVar3 = (fVar21 - auVar24._0_4_) + auVar38._0_4_;
      pfVar3[1] = (fVar22 - auVar24._4_4_) + auVar38._4_4_;
      iVar11 = *(int *)(param_1 + 0x18);
      *(float *)(param_1 + (long)iVar11 * 2 + 0x1b) = fVar32;
      *(float *)((long)param_1 + (long)iVar11 * 0x10 + 0xdc) = fVar33;
      *(float *)(param_1 + (long)iVar11 * 2 + 0x1a) = fVar21;
      *(float *)((long)param_1 + (long)iVar11 * 0x10 + 0xd4) = fVar22;
      iVar11 = *(int *)(param_1 + 0x18);
      param_1[(long)iVar11 * 2 + 0x9b] = auVar24._8_8_;
      param_1[(long)iVar11 * 2 + 0x9a] = auVar24._0_8_;
      iVar11 = *(int *)(param_1 + 0x18);
      iVar8 = iVar11 + 1;
      in_q16._0_4_ = *(float *)(param_1 + 0x11c) - *(float *)(param_1 + 0x11a);
      in_q16._4_4_ = *(float *)((long)param_1 + 0x8e4) - *(float *)((long)param_1 + 0x8d4);
      in_q16._8_4_ = *(float *)(param_1 + 0x11d) - *(float *)(param_1 + 0x11b);
      in_q16._12_4_ = *(float *)((long)param_1 + 0x8ec) - *(float *)((long)param_1 + 0x8dc);
      fVar21 = in_q16._0_4_ * in_q16._0_4_ + in_q16._4_4_ * in_q16._4_4_ +
               in_q16._8_4_ * in_q16._8_4_;
      in_d17 = CONCAT44(in_q16._0_4_ * in_q16._0_4_ + in_q16._4_4_ * in_q16._4_4_ +
                        in_q16._8_4_ * in_q16._8_4_,fVar21);
      *(int *)(param_1 + 0x18) = iVar8;
      if ((float)param_1[0xd] < fVar21) break;
      *(int *)(param_1 + 0x18) = iVar11;
      iVar8 = iVar11;
      if (*(int *)(param_1 + 0x10) <= (int)uVar14 + 1) break;
      auVar38 = *(undefined1 (*) [16])(param_1 + 0x12);
      uVar14 = uVar14 + 1;
    }
    uVar14 = (ulong)((int)uVar14 + 1);
    if (iVar8 < 2) goto LAB_0086c37c;
LAB_0086c008:
    iVar11 = (int)uVar14;
    if (*(int *)(param_1 + 0x10) <= iVar11) goto LAB_0086c57c;
LAB_0086c014:
    iVar7 = *(int *)(param_1 + 0x18);
    lVar9 = (long)iVar11;
    do {
      iVar11 = iVar11 + 1;
      pfVar3 = (float *)(param_1[0xe] + lVar9 * 0x10);
      fVar21 = *pfVar3;
      fVar22 = pfVar3[1];
      fVar32 = pfVar3[2];
      fVar33 = pfVar3[3];
      auVar38 = *(undefined1 (*) [16])(param_1 + 0x12);
      pfVar3 = (float *)(param_1[0xf] + lVar9 * 0x10);
      fVar34 = *pfVar3;
      fVar42 = pfVar3[1];
      fVar43 = pfVar3[2];
      fVar50 = pfVar3[3];
      pfVar3 = (float *)(param_1 + (long)iVar7 * 2 + 0x11a);
      pfVar3[2] = (fVar32 - fVar43) + auVar38._8_4_;
      pfVar3[3] = (fVar33 - fVar50) + auVar38._12_4_;
      *pfVar3 = (fVar21 - fVar34) + auVar38._0_4_;
      pfVar3[1] = (fVar22 - fVar42) + auVar38._4_4_;
      iVar8 = *(int *)(param_1 + 0x18);
      *(float *)(param_1 + (long)iVar8 * 2 + 0x1b) = fVar32;
      *(float *)((long)param_1 + (long)iVar8 * 0x10 + 0xdc) = fVar33;
      *(float *)(param_1 + (long)iVar8 * 2 + 0x1a) = fVar21;
      *(float *)((long)param_1 + (long)iVar8 * 0x10 + 0xd4) = fVar22;
      iVar8 = *(int *)(param_1 + 0x18);
      *(float *)(param_1 + (long)iVar8 * 2 + 0x9b) = fVar43;
      *(float *)((long)param_1 + (long)iVar8 * 0x10 + 0x4dc) = fVar50;
      *(float *)(param_1 + (long)iVar8 * 2 + 0x9a) = fVar34;
      *(float *)((long)param_1 + (long)iVar8 * 0x10 + 0x4d4) = fVar42;
      iVar7 = *(int *)(param_1 + 0x18);
      fVar21 = *(float *)(param_1 + 0x11e) - *(float *)(param_1 + 0x11a);
      fVar22 = *(float *)((long)param_1 + 0x8f4) - *(float *)((long)param_1 + 0x8d4);
      fVar32 = *(float *)(param_1 + 0x11f) - *(float *)(param_1 + 0x11b);
      fVar33 = *(float *)((long)param_1 + 0x8fc) - *(float *)((long)param_1 + 0x8dc);
      auVar37._0_4_ = fVar21 * fVar21;
      auVar37._4_4_ = fVar22 * fVar22;
      auVar37._8_4_ = fVar32 * fVar32;
      auVar37._12_4_ = fVar33 * fVar33;
      auVar38 = NEON_ext(auVar37,auVar37,8,1);
      fVar21 = in_q16._0_4_ * fVar21 + in_q16._4_4_ * fVar22 + in_q16._8_4_ * fVar32;
      *(int *)(param_1 + 0x18) = iVar7 + 1;
      iVar8 = iVar7 + 1;
      if (fVar21 * fVar21 < (float)in_d17 * (auVar37._0_4_ + auVar37._4_4_ + auVar38._0_4_)) break;
      lVar9 = lVar9 + 1;
      *(int *)(param_1 + 0x18) = iVar7;
      iVar8 = iVar7;
    } while (lVar9 < *(int *)(param_1 + 0x10));
  }
  else {
    if (1 < *(int *)(param_1 + 0x18)) goto LAB_0086c008;
LAB_0086c37c:
    fVar33 = auVar53._12_4_ - fVar35;
    fVar32 = auVar53._8_4_ - fVar58;
    fVar22 = auVar53._4_4_ - fVar69;
    fVar21 = auVar53._0_4_ - fVar72;
    iVar11 = (int)uVar14;
    local_a0 = 0.0 - fVar21;
    fStack_9c = 0.0 - fVar22;
    fStack_98 = 0.0 - fVar32;
    fStack_94 = 0.0 - fVar33;
    auVar24._0_4_ = fVar21 * fVar21;
    auVar24._4_4_ = fVar22 * fVar22;
    auVar24._8_4_ = fVar32 * fVar32;
    auVar24._12_4_ = fVar33 * fVar33;
    auVar38 = NEON_ext(auVar24,auVar24,8,1);
    if (auVar38._0_4_ + auVar24._0_4_ + auVar24._4_4_ < (float)param_1[0xd]) {
      fStack_98 = (float)_UNK_03cabd08;
      fStack_94 = (float)((ulong)_UNK_03cabd08 >> 0x20);
      local_a0 = (float)_DAT_03cabd00;
      fStack_9c = (float)((ulong)_DAT_03cabd00 >> 0x20);
    }
    (*(code *)**(undefined8 **)*param_1)
              ((undefined8 *)*param_1,param_1[1],&local_a0,param_1[2],param_1 + 4,&local_90);
    auVar38 = *(undefined1 (*) [16])(param_1 + 4);
    auVar24 = *(undefined1 (*) [16])(param_1 + 6);
    auVar45 = *(undefined1 (*) [16])(param_1 + 8);
    fVar34 = local_80 - *(float *)(param_1 + 10);
    fVar42 = fStack_7c - *(float *)((long)param_1 + 0x54);
    fVar43 = fStack_78 - *(float *)(param_1 + 0xb);
    auVar51 = NEON_ext(auVar38,auVar38,8,1);
    auVar52 = NEON_ext(auVar24,auVar24,8,1);
    auVar49 = NEON_ext(auVar45,auVar45,8,1);
    fVar50 = auVar51._0_4_ * fVar43 + auVar38._0_4_ * fVar34 + auVar38._4_4_ * fVar42;
    fVar59 = auVar52._0_4_ * fVar43 + auVar24._0_4_ * fVar34 + auVar24._4_4_ * fVar42;
    auVar51._0_8_ = CONCAT44(fVar59,fVar50);
    auVar51._8_4_ = auVar49._0_4_ * fVar43 + auVar45._0_4_ * fVar34 + auVar45._4_4_ * fVar42;
    auVar51._12_4_ = fStack_74;
    fVar50 = (float)local_90 - fVar50;
    fVar59 = (float)((ulong)local_90 >> 0x20) - fVar59;
    fVar61 = (float)uStack_88 - auVar51._8_4_;
    fVar65 = (float)((ulong)uStack_88 >> 0x20) - fStack_74;
    iVar8 = *(int *)(param_1 + 0x9bd);
    fVar43 = local_a0 * local_a0 + fStack_9c * fStack_9c + fStack_98 * fStack_98;
    fVar34 = SQRT(fVar43);
    fVar42 = SQRT(local_a0 * local_a0 + fStack_9c * fStack_9c + fStack_98 * fStack_98);
    fVar66 = (float)*(undefined8 *)(PTR_DAT_047d19b0 + 0x60) / fVar34;
    fVar60 = local_a0 * (fVar50 - fVar21);
    fVar62 = fStack_9c * (fVar59 - fVar22);
    fVar63 = fStack_98 * (fVar61 - fVar32);
    fVar64 = fStack_94 * (fVar65 - fVar33);
    auVar45._4_4_ = fVar62;
    auVar45._0_4_ = fVar60;
    auVar45._8_4_ = fVar63;
    auVar45._12_4_ = fVar64;
    auVar49._4_4_ = fVar62;
    auVar49._0_4_ = fVar60;
    auVar49._8_4_ = fVar63;
    auVar49._12_4_ = fVar64;
    auVar38 = NEON_ext(auVar45,auVar49,8,1);
    fVar60 = fVar66 * (fVar60 + fVar62 + auVar38._0_4_);
    if (iVar8 == 8) {
      fVar62 = (float)param_1[0xc];
      if (fVar62 < fVar66 * -(fStack_98 * fVar61 + local_a0 * fVar50 + fStack_9c * fVar59)) {
        if (fVar43 == 0.0) {
          fVar63 = 0.0;
          fVar64 = 0.0;
          fVar66 = 0.0;
          fVar70 = 0.0;
        }
        else {
          fVar63 = local_a0 / fVar34;
          fVar64 = fStack_9c / fVar42;
          fVar66 = fStack_98 / fVar34;
          fVar70 = fStack_94 / fVar42;
        }
        fVar71 = -(fVar50 * fVar63 + fVar59 * fVar64 + fVar61 * fVar66);
        if (fVar62 < fVar71) {
          iVar8 = 0;
          *(undefined4 *)(param_1 + 0x9bd) = 0;
          *(float *)(param_1 + 0x9c1) = fVar66;
          *(float *)((long)param_1 + 0x4e0c) = fVar70;
          *(float *)(param_1 + 0x9c0) = fVar63;
          *(float *)((long)param_1 + 0x4e04) = fVar64;
          *(float *)(param_1 + 0x9c2) = fVar71;
          goto joined_r0x0086c4f0;
        }
      }
      iVar8 = 8;
      if (fVar62 <= fVar60) goto LAB_0086c50c;
LAB_0086c4f4:
      bVar10 = false;
    }
    else {
      fVar62 = (float)param_1[0xc];
joined_r0x0086c4f0:
      if (fVar60 < fVar62) goto LAB_0086c4f4;
LAB_0086c50c:
      iVar8 = *(int *)(param_1 + 0x18);
      bVar10 = true;
      param_1[(long)iVar8 * 2 + 0x1b] = uStack_88;
      param_1[(long)iVar8 * 2 + 0x1a] = local_90;
      iVar8 = *(int *)(param_1 + 0x18);
      param_1[(long)iVar8 * 2 + 0x9b] = auVar51._8_8_;
      param_1[(long)iVar8 * 2 + 0x9a] = auVar51._0_8_;
      iVar8 = *(int *)(param_1 + 0x18);
      auVar52._0_8_ =
           CONCAT44(fVar59 + *(float *)((long)param_1 + 0x94),fVar50 + *(float *)(param_1 + 0x12));
      auVar52._8_4_ = fVar61 + *(float *)(param_1 + 0x13);
      auVar52._12_4_ = fVar65 + *(float *)((long)param_1 + 0x9c);
      param_1[(long)iVar8 * 2 + 0x11b] = auVar52._8_8_;
      param_1[(long)iVar8 * 2 + 0x11a] = auVar52._0_8_;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      iVar8 = *(int *)(param_1 + 0x9bd);
    }
    if (iVar8 == 0) goto LAB_0086c9dc;
    if (!bVar10) {
      fVar72 = 0.0;
      fVar69 = 0.0;
      fVar58 = 0.0;
      fVar35 = 0.0;
      param_1[0x9bd] = 0x100000001;
      *(undefined4 *)(param_1 + 0x9be) = 0;
      *(float *)(param_1 + 0x9c1) = fStack_98;
      *(float *)((long)param_1 + 0x4e0c) = fStack_94;
      *(float *)(param_1 + 0x9c0) = local_a0;
      *(float *)((long)param_1 + 0x4e04) = fStack_9c;
      if (fVar43 != 0.0) {
        fVar72 = local_a0 / fVar34;
        fVar69 = fStack_9c / fVar42;
        fVar58 = fStack_98 / fVar34;
        fVar35 = fStack_94 / fVar42;
      }
      auVar30._0_4_ = fVar21 * fVar72;
      auVar30._4_4_ = fVar22 * fVar69;
      auVar30._8_4_ = fVar32 * fVar58;
      auVar30._12_4_ = fVar33 * fVar35;
      *(float *)(param_1 + 0x9c1) = fVar58;
      *(float *)((long)param_1 + 0x4e0c) = fVar35;
      *(float *)(param_1 + 0x9c0) = fVar72;
      *(float *)((long)param_1 + 0x4e04) = fVar69;
      auVar53 = NEON_ext(auVar30,auVar30,8,1);
      *(float *)(param_1 + 0x9c2) = -(auVar30._0_4_ + auVar30._4_4_ + auVar53._0_4_);
      return 0;
    }
    in_q16._0_4_ = *(float *)(param_1 + 0x11c) - *(float *)(param_1 + 0x11a);
    in_q16._4_4_ = *(float *)((long)param_1 + 0x8e4) - *(float *)((long)param_1 + 0x8d4);
    in_q16._8_4_ = *(float *)(param_1 + 0x11d) - *(float *)(param_1 + 0x11b);
    in_q16._12_4_ = *(float *)((long)param_1 + 0x8ec) - *(float *)((long)param_1 + 0x8dc);
    in_d17 = CONCAT44(in_q16._0_4_ * in_q16._0_4_ + in_q16._4_4_ * in_q16._4_4_ +
                      in_q16._8_4_ * in_q16._8_4_,
                      in_q16._0_4_ * in_q16._0_4_ + in_q16._4_4_ * in_q16._4_4_ +
                      in_q16._8_4_ * in_q16._8_4_);
    if (iVar11 < *(int *)(param_1 + 0x10)) goto LAB_0086c014;
LAB_0086c57c:
    iVar8 = *(int *)(param_1 + 0x18);
  }
  if (iVar8 == 3) {
    FUN_0086cdbc(param_1);
    lVar9 = (long)iVar11;
    do {
      while( true ) {
        if (*(int *)(param_1 + 0x10) <= lVar9) {
          return 1;
        }
        auVar53 = *(undefined1 (*) [16])(param_1[0xe] + lVar9 * 0x10);
        auVar38 = *(undefined1 (*) [16])(param_1 + 0x12);
        auVar24 = *(undefined1 (*) [16])(param_1[0xf] + lVar9 * 0x10);
        iVar11 = *(int *)(param_1 + 0x18);
        auVar46._0_8_ =
             CONCAT44((auVar53._4_4_ - auVar24._4_4_) + auVar38._4_4_,
                      (auVar53._0_4_ - auVar24._0_4_) + auVar38._0_4_);
        auVar46._8_4_ = (auVar53._8_4_ - auVar24._8_4_) + auVar38._8_4_;
        auVar46._12_4_ = (auVar53._12_4_ - auVar24._12_4_) + auVar38._12_4_;
        lVar9 = lVar9 + 1;
        param_1[(long)iVar11 * 2 + 0x11b] = auVar46._8_8_;
        param_1[(long)iVar11 * 2 + 0x11a] = auVar46._0_8_;
        iVar11 = *(int *)(param_1 + 0x18);
        param_1[(long)iVar11 * 2 + 0x1b] = auVar53._8_8_;
        param_1[(long)iVar11 * 2 + 0x1a] = auVar53._0_8_;
        iVar11 = *(int *)(param_1 + 0x18);
        param_1[(long)iVar11 * 2 + 0x9b] = auVar24._8_8_;
        param_1[(long)iVar11 * 2 + 0x9a] = auVar24._0_8_;
        iVar8 = *(int *)(param_1 + 0x18);
        uVar13 = *(uint *)(param_1 + 0x1ab);
        uVar14 = (ulong)uVar13;
        iVar11 = iVar8 + 1;
        *(int *)(param_1 + 0x18) = iVar11;
        if (0 < (int)uVar13) break;
        *(undefined4 *)((long)param_1 + 0x4de4) = 0;
        *(uint *)(param_1 + 0x97c) = uVar13;
LAB_0086c2d8:
        *(int *)(param_1 + 0x18) = iVar11 + -1;
      }
      lVar17 = uVar14 * 0x10 + 0x1550;
      lVar18 = uVar14 * 4 + 0x4be0;
      lVar20 = uVar14 * 4 + 0x275c;
      lVar19 = uVar14 * 0x20 + 0x2bc0;
      iVar11 = 0;
      lVar16 = uVar14 + 1;
      lVar12 = uVar14 + 0x2b5f;
      do {
        uVar13 = uVar13 - 1;
        pfVar3 = (float *)((long)param_1 + lVar17);
        fVar72 = *(float *)(param_1 + (long)iVar8 * 2 + 0x11a);
        fVar69 = *(float *)(param_1 + (long)iVar8 * 2 + 0x11b);
        fVar58 = *pfVar3;
        fVar35 = pfVar3[2];
        fVar22 = *(float *)((long)param_1 + (long)iVar8 * 0x10 + 0x8d4) - pfVar3[1];
        fVar21 = pfVar3[0x200] * (fVar72 - fVar58) + pfVar3[0x201] * fVar22 +
                 pfVar3[0x202] * (fVar69 - fVar35);
        if ((float)param_1[0x17] < ABS(fVar21)) {
          if (fVar21 <= 0.0) goto LAB_0086c1bc;
LAB_0086c2b4:
          iVar11 = iVar11 + 1;
          *(int *)((long)param_1 + lVar18) = (int)uVar14;
          uVar14 = (ulong)uVar13;
        }
        else {
          if (-3.40282e+38 < *(float *)((long)param_1 + lVar20)) {
            if (*(char *)((long)param_1 + lVar12) == '\0') {
              FUN_0086d3b0(param_1,uVar13);
            }
            pdVar1 = (double *)((long)param_1 + lVar19);
            dVar36 = (double)(fVar72 - fVar58);
            dVar23 = (double)fVar22;
            dVar44 = (double)(fVar69 - fVar35);
            if (0.0 < *pdVar1 * dVar36 + pdVar1[1] * dVar23 + pdVar1[2] * dVar44 +
                      pdVar1[0x200] * dVar36 + pdVar1[0x201] * dVar23 + pdVar1[0x202] * dVar44)
            goto LAB_0086c2b4;
          }
LAB_0086c1bc:
          *(undefined4 *)((long)param_1 + lVar18) = 0;
        }
        uVar15 = (uint)uVar14;
        lVar16 = lVar16 + -1;
        lVar17 = lVar17 + -0x10;
        lVar18 = lVar18 + -4;
        lVar20 = lVar20 + -4;
        lVar12 = lVar12 + -1;
        lVar19 = lVar19 + -0x20;
      } while (1 < lVar16);
      *(int *)((long)param_1 + 0x4de4) = iVar11;
      *(uint *)(param_1 + 0x97c) = uVar15;
      if (iVar11 == 0) {
        iVar11 = *(int *)(param_1 + 0x18);
        goto LAB_0086c2d8;
      }
      if (0 < iVar11) {
        *(undefined4 *)((long)param_1 + 0xd54) = 3;
        psVar2 = (short *)((long)param_1 +
                          (-(ulong)((uVar15 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                          (ulong)(uVar15 << 2) << 2) + 0xd60);
        sVar5 = *psVar2;
        *(short *)((long)param_1 + (ulong)*(byte *)(psVar2 + 1) * 2 + 0xcd4) = sVar5;
        uVar14 = (ulong)(long)(int)(uVar15 << 2) >> 2;
        *(int *)(param_1 + 0x19a) = (int)sVar5;
        psVar2 = (short *)((long)param_1 + (uVar14 << 4 | 4) + 0xd60);
        sVar5 = *psVar2;
        *(short *)((long)param_1 + (ulong)*(byte *)(psVar2 + 1) * 2 + 0xcd4) = sVar5;
        *(int *)(param_1 + 0x19a) = (int)sVar5;
        psVar2 = (short *)((long)param_1 + (uVar14 << 4 | 8) + 0xd60);
        sVar5 = *psVar2;
        *(short *)((long)param_1 + (ulong)*(byte *)(psVar2 + 1) * 2 + 0xcd4) = sVar5;
        *(int *)(param_1 + 0x19a) = (int)sVar5;
        FUN_0086cfcc();
        return 1;
      }
    } while( true );
  }
  fVar35 = auVar53._12_4_ - fVar35;
  fVar58 = auVar53._8_4_ - fVar58;
  fVar69 = auVar53._4_4_ - fVar69;
  fVar72 = auVar53._0_4_ - fVar72;
  auVar39._0_12_ = in_q16._0_12_;
  auVar39._12_4_ = 0;
  auVar25._8_8_ = _UNK_03cabbb8;
  auVar25._0_8_ = _DAT_03cabbb0;
  fVar32 = in_q16._0_4_;
  fVar33 = in_q16._4_4_;
  auVar38 = a64_TBL(ZEXT816(0),auVar39,auVar25);
  fVar22 = auVar38._0_4_;
  auVar26._0_4_ = fVar22 * fVar22;
  auVar26._4_4_ = auVar38._4_4_ * auVar38._4_4_;
  auVar26._8_4_ = auVar38._8_4_ * auVar38._8_4_;
  auVar26._12_4_ = auVar38._12_4_ * auVar38._12_4_;
  auVar53 = NEON_ext(auVar26,auVar26,8,1);
  fVar21 = auVar53._0_4_ + auVar53._4_4_;
  auVar54._8_8_ = _UNK_03caaa68;
  auVar54._0_8_ = _DAT_03caaa60;
  auVar53 = a64_TBL(ZEXT816(0),auVar39,auVar54);
  auVar27._0_8_ =
       CONCAT44(-(uint)(fVar32 * fVar32 + fVar33 * fVar33 < auVar26._0_4_ + auVar26._4_4_ + fVar21),
                -(uint)(fVar32 * fVar32 + fVar33 * fVar33 < auVar26._0_4_ + auVar26._4_4_ + fVar21))
  ;
  auVar28._4_12_ = auVar53._4_12_;
  auVar28._0_4_ = -auVar53._0_4_;
  auVar27._8_8_ = auVar27._0_8_;
  auVar47._4_12_ = auVar38._4_12_;
  auVar47._0_4_ = -fVar22;
  auVar28 = auVar28 ^ (auVar28 ^ auVar47) & auVar27;
  fStack_98 = auVar28._8_4_;
  fStack_94 = auVar28._12_4_;
  local_a0 = auVar28._0_4_;
  fStack_9c = auVar28._4_4_;
  if (0x3f < iVar8) {
    iVar11 = *(int *)(param_1 + 0x9bd);
    if (iVar11 == 0) {
LAB_0086c9dc:
      *(undefined8 *)((long)param_1 + 0x4dec) = 1;
      return 0;
    }
    auVar29._0_4_ = 0.0 - local_a0;
    auVar29._4_4_ = 0.0 - fStack_9c;
    auVar29._8_4_ = 0.0 - fStack_98;
    auVar29._12_4_ = 0.0 - fStack_94;
    goto LAB_0086c978;
  }
  (*(code *)**(undefined8 **)*param_1)
            ((undefined8 *)*param_1,param_1[1],&local_a0,param_1[2],param_1 + 4,&local_90);
  auVar53 = *(undefined1 (*) [16])(param_1 + 4);
  auVar38 = *(undefined1 (*) [16])(param_1 + 6);
  auVar49 = NEON_ext(auVar53,auVar53,8,1);
  auVar24 = *(undefined1 (*) [16])(param_1 + 8);
  auVar51 = NEON_ext(auVar38,auVar38,8,1);
  auVar45 = NEON_ext(auVar24,auVar24,8,1);
  fVar21 = local_80 - *(float *)(param_1 + 10);
  fVar34 = fStack_7c - *(float *)((long)param_1 + 0x54);
  fVar43 = fStack_78 - *(float *)(param_1 + 0xb);
  fVar22 = auVar49._0_4_ * fVar43 + auVar53._0_4_ * fVar21 + auVar53._4_4_ * fVar34;
  fVar42 = auVar51._0_4_ * fVar43 + auVar38._0_4_ * fVar21 + auVar38._4_4_ * fVar34;
  fVar21 = auVar45._0_4_ * fVar43 + auVar24._0_4_ * fVar21 + auVar24._4_4_ * fVar34;
  fVar34 = (float)local_90 - fVar22;
  fVar43 = (float)((ulong)local_90 >> 0x20) - fVar42;
  fVar50 = (float)uStack_88 - fVar21;
  fVar59 = (float)((ulong)uStack_88 >> 0x20) - fStack_74;
  fVar62 = local_a0 * local_a0 + fStack_9c * fStack_9c + fStack_98 * fStack_98;
  fVar65 = SQRT(fVar62);
  fVar60 = SQRT(local_a0 * local_a0 + fStack_9c * fStack_9c + fStack_98 * fStack_98);
  uVar67 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x60);
  fVar61 = (float)uVar67 / fVar65;
  auVar55._0_4_ = local_a0 * (fVar34 - fVar72);
  auVar55._4_4_ = fStack_9c * (fVar43 - fVar69);
  auVar55._8_4_ = fStack_98 * (fVar50 - fVar58);
  auVar55._12_4_ = fStack_94 * (fVar59 - fVar35);
  auVar53 = NEON_ext(auVar55,auVar55,8,1);
  iVar11 = *(int *)(param_1 + 0x9bd);
  if (iVar11 == 8) {
    fVar63 = (float)param_1[0xc];
    if (fVar61 * -(fStack_98 * fVar50 + local_a0 * fVar34 + fStack_9c * fVar43) <= fVar63) {
      iVar11 = 8;
    }
    else {
      if (fVar62 == 0.0) {
        fVar62 = 0.0;
        fVar64 = 0.0;
        fVar65 = 0.0;
        fVar60 = 0.0;
      }
      else {
        fVar62 = local_a0 / fVar65;
        fVar64 = fStack_9c / fVar60;
        fVar65 = fStack_98 / fVar65;
        fVar60 = fStack_94 / fVar60;
      }
      fVar66 = -(fVar34 * fVar62 + fVar43 * fVar64 + fVar50 * fVar65);
      if (fVar66 <= fVar63) {
        iVar11 = 8;
      }
      else {
        iVar11 = 0;
        *(undefined4 *)(param_1 + 0x9bd) = 0;
        param_1[0x9c1] = CONCAT44(fVar60,fVar65);
        param_1[0x9c0] = CONCAT44(fVar64,fVar62);
        *(float *)(param_1 + 0x9c2) = fVar66;
      }
    }
  }
  else {
    fVar63 = (float)param_1[0xc];
  }
  if (fVar63 <= fVar61 * (auVar55._0_4_ + auVar55._4_4_ + auVar53._0_4_)) {
    iVar11 = *(int *)(param_1 + 0x18);
    param_1[(long)iVar11 * 2 + 0x1b] = uStack_88;
    param_1[(long)iVar11 * 2 + 0x1a] = local_90;
    iVar11 = *(int *)(param_1 + 0x18);
    *(float *)(param_1 + (long)iVar11 * 2 + 0x9b) = fVar21;
    *(float *)((long)param_1 + (long)iVar11 * 0x10 + 0x4dc) = fStack_74;
    *(float *)(param_1 + (long)iVar11 * 2 + 0x9a) = fVar22;
    *(float *)((long)param_1 + (long)iVar11 * 0x10 + 0x4d4) = fVar42;
    auVar31._0_4_ = fVar34 + *(float *)(param_1 + 0x12);
    auVar31._4_4_ = fVar43 + *(float *)((long)param_1 + 0x94);
    auVar31._8_4_ = fVar50 + *(float *)(param_1 + 0x13);
    auVar31._12_4_ = fVar59 + *(float *)((long)param_1 + 0x9c);
    goto LAB_0086cd2c;
  }
  if (iVar11 == 0) goto LAB_0086c9dc;
  auVar29._0_4_ = 0.0 - local_a0;
  auVar29._4_4_ = 0.0 - fStack_9c;
  auVar29._8_4_ = 0.0 - fStack_98;
  auVar29._12_4_ = 0.0 - fStack_94;
  if (*(int *)(param_1 + 0x18) < 0x40) {
    local_a0 = auVar29._0_4_;
    fStack_9c = auVar29._4_4_;
    fStack_98 = auVar29._8_4_;
    fStack_94 = auVar29._12_4_;
    (*(code *)**(undefined8 **)*param_1)
              ((undefined8 *)*param_1,param_1[1],&local_a0,param_1[2],param_1 + 4,&local_90);
    iVar11 = *(int *)(param_1 + 0x9bd);
    auVar53 = *(undefined1 (*) [16])(param_1 + 4);
    auVar38 = *(undefined1 (*) [16])(param_1 + 6);
    auVar49 = NEON_ext(auVar53,auVar53,8,1);
    auVar24 = *(undefined1 (*) [16])(param_1 + 8);
    auVar51 = NEON_ext(auVar38,auVar38,8,1);
    auVar45 = NEON_ext(auVar24,auVar24,8,1);
    fVar21 = local_80 - *(float *)(param_1 + 10);
    fVar34 = fStack_7c - *(float *)((long)param_1 + 0x54);
    fVar43 = fStack_78 - *(float *)(param_1 + 0xb);
    fVar22 = auVar49._0_4_ * fVar43 + auVar53._0_4_ * fVar21 + auVar53._4_4_ * fVar34;
    fVar42 = auVar51._0_4_ * fVar43 + auVar38._0_4_ * fVar21 + auVar38._4_4_ * fVar34;
    auVar40._0_8_ = CONCAT44(fVar42,fVar22);
    auVar40._8_4_ = auVar45._0_4_ * fVar43 + auVar24._0_4_ * fVar21 + auVar24._4_4_ * fVar34;
    auVar40._12_4_ = fStack_74;
    auVar29._4_4_ = fStack_9c;
    auVar29._0_4_ = local_a0;
    auVar29._8_4_ = fStack_98;
    auVar29._12_4_ = fStack_94;
    fVar50 = local_a0 * local_a0 + fStack_9c * fStack_9c + fStack_98 * fStack_98;
    fVar34 = SQRT(fVar50);
    fVar43 = SQRT(local_a0 * local_a0 + fStack_9c * fStack_9c + fStack_98 * fStack_98);
    auVar48._0_4_ = (float)local_90 - fVar22;
    auVar48._4_4_ = (float)((ulong)local_90 >> 0x20) - fVar42;
    auVar48._8_4_ = (float)uStack_88 - auVar40._8_4_;
    auVar48._12_4_ = (float)((ulong)uStack_88 >> 0x20) - fStack_74;
    fVar21 = (float)uVar67 / fVar34;
    auVar56._0_4_ = local_a0 * (auVar48._0_4_ - fVar72);
    auVar56._4_4_ = fStack_9c * (auVar48._4_4_ - fVar69);
    auVar56._8_4_ = fStack_98 * (auVar48._8_4_ - fVar58);
    auVar56._12_4_ = fStack_94 * (auVar48._12_4_ - fVar35);
    auVar53 = NEON_ext(auVar56,auVar56,8,1);
    if (iVar11 == 8) {
      fVar72 = (float)param_1[0xc];
      if (fVar21 * -(fStack_98 * auVar48._8_4_ +
                    local_a0 * auVar48._0_4_ + fStack_9c * auVar48._4_4_) <= fVar72) {
        iVar11 = 8;
      }
      else {
        uVar67 = 0;
        uVar68 = 0;
        if (fVar50 != 0.0) {
          uVar67 = CONCAT44(fStack_9c / fVar43,local_a0 / fVar34);
          uVar68 = CONCAT44(fStack_94 / fVar43,fStack_98 / fVar34);
        }
        fVar69 = -(auVar48._0_4_ * (float)uVar67 + auVar48._4_4_ * (float)((ulong)uVar67 >> 0x20) +
                  auVar48._8_4_ * (float)uVar68);
        if (fVar72 < fVar69) {
          iVar11 = 0;
          *(undefined4 *)(param_1 + 0x9bd) = 0;
          param_1[0x9c1] = uVar68;
          param_1[0x9c0] = uVar67;
          *(float *)(param_1 + 0x9c2) = fVar69;
        }
        else {
          iVar11 = 8;
        }
      }
    }
    else {
      fVar72 = (float)param_1[0xc];
    }
    if (fVar21 * (auVar56._0_4_ + auVar56._4_4_ + auVar53._0_4_) < fVar72) {
      if (iVar11 == 0) goto LAB_0086c9dc;
      goto LAB_0086c978;
    }
    iVar11 = *(int *)(param_1 + 0x18);
    param_1[(long)iVar11 * 2 + 0x1b] = uStack_88;
    param_1[(long)iVar11 * 2 + 0x1a] = local_90;
    iVar11 = *(int *)(param_1 + 0x18);
    param_1[(long)iVar11 * 2 + 0x9b] = auVar40._8_8_;
    param_1[(long)iVar11 * 2 + 0x9a] = auVar40._0_8_;
LAB_0086cd24:
    auVar31._0_4_ = auVar48._0_4_ + *(float *)(param_1 + 0x12);
    auVar31._4_4_ = auVar48._4_4_ + *(float *)((long)param_1 + 0x94);
    auVar31._8_4_ = auVar48._8_4_ + *(float *)(param_1 + 0x13);
    auVar31._12_4_ = auVar48._12_4_ + *(float *)((long)param_1 + 0x9c);
LAB_0086cd2c:
    iVar11 = *(int *)(param_1 + 0x18);
    param_1[(long)iVar11 * 2 + 0x11b] = auVar31._8_8_;
    param_1[(long)iVar11 * 2 + 0x11a] = auVar31._0_8_;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    iVar11 = *(int *)(param_1 + 0x9bd);
    if (iVar11 == 0) {
      *(undefined8 *)((long)param_1 + 0x4dec) = 0x200000001;
    }
    else {
      FUN_0086cdbc(param_1);
    }
    return iVar11 != 0;
  }
LAB_0086c978:
  fVar22 = *(float *)(param_1 + 0x11c) - *(float *)(param_1 + 0x12);
  fVar34 = *(float *)((long)param_1 + 0x8e4) - *(float *)((long)param_1 + 0x94);
  fVar42 = *(float *)(param_1 + 0x11d) - *(float *)(param_1 + 0x13);
  fVar43 = *(float *)((long)param_1 + 0x8ec) - *(float *)((long)param_1 + 0x9c);
  fVar69 = in_q16._8_4_;
  fVar72 = fVar69 * fVar42 + fVar32 * fVar22 + fVar33 * fVar34;
  fVar58 = (float)in_d17;
  fVar21 = fVar72 / fVar58;
  fVar35 = (float)((ulong)in_d17 >> 0x20);
  fVar72 = fVar72 / fVar35;
  if (fVar21 < 0.0) {
    fVar50 = (float)param_1[0xd];
    if (fVar58 * fVar21 * fVar21 <= fVar50) goto LAB_0086ca24;
    fVar59 = 0.0;
    fVar61 = 0.0;
    fVar65 = 0.0;
    fVar72 = 0.0;
  }
  else {
    fVar50 = (float)param_1[0xd];
LAB_0086ca24:
    fVar59 = fVar32 * fVar21;
    fVar61 = fVar33 * fVar72;
    fVar65 = fVar69 * fVar21;
    fVar72 = in_q16._12_4_ * fVar72;
  }
  auVar41._0_4_ = fVar59 - fVar22;
  auVar41._4_4_ = fVar61 - fVar34;
  auVar41._8_4_ = fVar65 - fVar42;
  auVar41._12_4_ = fVar72 - fVar43;
  fVar72 = auVar41._0_4_ * auVar41._0_4_ + auVar41._4_4_ * auVar41._4_4_ +
           auVar41._8_4_ * auVar41._8_4_;
  if (fVar72 < fVar50) {
    fVar72 = auVar29._0_4_;
    fVar69 = auVar29._4_4_;
    fVar58 = auVar29._8_4_;
    param_1[0x9bd] = 0x200000001;
    *(undefined4 *)(param_1 + 0x9be) = 0;
    *(undefined1 *)((long)param_1 + 0xd62) = 1;
    *(undefined1 *)((long)param_1 + 0xd66) = 0;
    fVar35 = fVar58 * fVar58 + fVar72 * fVar72 + fVar69 * fVar69;
    param_1[0x9c1] = auVar29._8_8_;
    param_1[0x9c0] = auVar29._0_8_;
    if (fVar35 == 0.0) {
      fVar72 = 0.0;
      fVar69 = 0.0;
      fVar58 = 0.0;
      fVar22 = 0.0;
    }
    else {
      fVar35 = SQRT(fVar35);
      fVar22 = SQRT(fVar58 * fVar58 + fVar72 * fVar72 + fVar69 * fVar69);
      fVar72 = fVar72 / fVar35;
      fVar69 = fVar69 / fVar22;
      fVar58 = fVar58 / fVar35;
      fVar22 = auVar29._12_4_ / fVar22;
    }
    *(float *)(param_1 + 0x9c1) = fVar58;
    *(float *)((long)param_1 + 0x4e0c) = fVar22;
    *(float *)(param_1 + 0x9c0) = fVar72;
    *(float *)((long)param_1 + 0x4e04) = fVar69;
    *(float *)(param_1 + 0x9c2) = (float)param_1[0xc] * 0.1;
    goto LAB_0086ccd8;
  }
  local_a0 = auVar41._0_4_;
  fStack_9c = auVar41._4_4_;
  fStack_98 = auVar41._8_4_;
  fStack_94 = auVar41._12_4_;
  if (fVar50 * fVar72 < *(float *)(param_1 + 0x16) * *(float *)(param_1 + 0x16) * 4.0 * fVar58) {
    fVar72 = fVar69 * auVar41._8_4_ + fVar32 * auVar41._0_4_ + fVar33 * auVar41._4_4_;
    auVar41._0_4_ = auVar41._0_4_ - (fVar32 * fVar72) / fVar58;
    auVar41._4_4_ = auVar41._4_4_ - (fVar33 * fVar72) / fVar35;
    auVar41._8_4_ = auVar41._8_4_ - (fVar69 * fVar72) / fVar58;
    auVar41._12_4_ = auVar41._12_4_ - (in_q16._12_4_ * fVar72) / fVar35;
    local_a0 = auVar41._0_4_;
    fStack_9c = auVar41._4_4_;
    fStack_98 = auVar41._8_4_;
    fStack_94 = auVar41._12_4_;
  }
  if (*(int *)(param_1 + 0x18) < 0x40) {
    (*(code *)**(undefined8 **)*param_1)
              ((undefined8 *)*param_1,param_1[1],&local_a0,param_1[2],param_1 + 4,&local_90);
    auVar53 = *(undefined1 (*) [16])(param_1 + 4);
    auVar38 = *(undefined1 (*) [16])(param_1 + 6);
    auVar24 = *(undefined1 (*) [16])(param_1 + 8);
    local_80 = local_80 - *(float *)(param_1 + 10);
    fStack_7c = fStack_7c - *(float *)((long)param_1 + 0x54);
    fStack_78 = fStack_78 - *(float *)(param_1 + 0xb);
    auVar49 = NEON_ext(auVar53,auVar53,8,1);
    auVar51 = NEON_ext(auVar38,auVar38,8,1);
    auVar45 = NEON_ext(auVar24,auVar24,8,1);
    fVar72 = auVar49._0_4_ * fStack_78 + auVar53._0_4_ * local_80 + auVar53._4_4_ * fStack_7c;
    fVar69 = auVar51._0_4_ * fStack_78 + auVar38._0_4_ * local_80 + auVar38._4_4_ * fStack_7c;
    fVar58 = auVar45._0_4_ * fStack_78 + auVar24._0_4_ * local_80 + auVar24._4_4_ * fStack_7c;
    auVar41._4_4_ = fStack_9c;
    auVar41._0_4_ = local_a0;
    auVar41._8_4_ = fStack_98;
    auVar41._12_4_ = fStack_94;
    auVar48._0_4_ = (float)local_90 - fVar72;
    auVar48._4_4_ = (float)((ulong)local_90 >> 0x20) - fVar69;
    auVar48._8_4_ = (float)uStack_88 - fVar58;
    auVar48._12_4_ = (float)((ulong)uStack_88 >> 0x20) - fStack_74;
    fVar50 = local_a0 * local_a0 + fStack_9c * fStack_9c + fStack_98 * fStack_98;
    iVar11 = *(int *)(param_1 + 0x9bd);
    fVar32 = SQRT(fVar50);
    fVar33 = SQRT(local_a0 * local_a0 + fStack_9c * fStack_9c + fStack_98 * fStack_98);
    fVar35 = (float)*(undefined8 *)(PTR_DAT_047d19b0 + 0x60) / fVar32;
    auVar57._0_4_ = local_a0 * (auVar48._0_4_ - fVar22);
    auVar57._4_4_ = fStack_9c * (auVar48._4_4_ - fVar34);
    auVar57._8_4_ = fStack_98 * (auVar48._8_4_ - fVar42);
    auVar57._12_4_ = fStack_94 * (auVar48._12_4_ - fVar43);
    auVar53 = NEON_ext(auVar57,auVar57,8,1);
    if (iVar11 == 8) {
      fVar22 = (float)param_1[0xc];
      if (fVar22 < fVar35 * -(fStack_98 * auVar48._8_4_ +
                             local_a0 * auVar48._0_4_ + fStack_9c * auVar48._4_4_)) {
        if (fVar50 == 0.0) {
          fVar34 = 0.0;
          fVar42 = 0.0;
          fVar32 = 0.0;
          fVar33 = 0.0;
        }
        else {
          fVar34 = local_a0 / fVar32;
          fVar42 = fStack_9c / fVar33;
          fVar32 = fStack_98 / fVar32;
          fVar33 = fStack_94 / fVar33;
        }
        fVar43 = -(auVar48._0_4_ * fVar34 + auVar48._4_4_ * fVar42 + auVar48._8_4_ * fVar32);
        if (fVar22 < fVar43) {
          iVar11 = 0;
          *(undefined4 *)(param_1 + 0x9bd) = 0;
          param_1[0x9c1] = CONCAT44(fVar33,fVar32);
          param_1[0x9c0] = CONCAT44(fVar42,fVar34);
          *(float *)(param_1 + 0x9c2) = fVar43;
          goto LAB_0086cc78;
        }
      }
      iVar11 = 8;
    }
    else {
      fVar22 = (float)param_1[0xc];
    }
LAB_0086cc78:
    if (fVar22 <= fVar35 * (auVar57._0_4_ + auVar57._4_4_ + auVar53._0_4_)) {
      iVar11 = *(int *)(param_1 + 0x18);
      param_1[(long)iVar11 * 2 + 0x1b] = uStack_88;
      param_1[(long)iVar11 * 2 + 0x1a] = local_90;
      iVar11 = *(int *)(param_1 + 0x18);
      *(float *)(param_1 + (long)iVar11 * 2 + 0x9b) = fVar58;
      *(float *)((long)param_1 + (long)iVar11 * 0x10 + 0x4dc) = fStack_74;
      *(float *)(param_1 + (long)iVar11 * 2 + 0x9a) = fVar72;
      *(float *)((long)param_1 + (long)iVar11 * 0x10 + 0x4d4) = fVar69;
      goto LAB_0086cd24;
    }
  }
  *(undefined8 *)((long)param_1 + 0x4dec) = 2;
  *(undefined1 *)((long)param_1 + 0xd62) = 1;
  *(undefined1 *)((long)param_1 + 0xd66) = 0;
  if (iVar11 == 0) {
    return 0;
  }
  fVar69 = auVar41._0_4_;
  fVar58 = auVar41._4_4_;
  fVar35 = auVar41._8_4_;
  *(int *)(param_1 + 0x9bd) = 1;
  param_1[0x9c1] = auVar41._8_8_;
  param_1[0x9c0] = auVar41._0_8_;
  fVar72 = fVar69 * fVar69 + fVar58 * fVar58 + fVar35 * fVar35;
  if (fVar72 == 0.0) {
    param_1[0x9c1] = 0;
    param_1[0x9c0] = 0;
    fVar72 = (float)*(undefined8 *)(PTR_DAT_047d19b0 + 0x50);
  }
  else {
    fVar72 = SQRT(fVar72);
    fVar22 = SQRT(fVar69 * fVar69 + fVar58 * fVar58 + fVar35 * fVar35);
    *(float *)(param_1 + 0x9c1) = fVar35 / fVar72;
    *(float *)((long)param_1 + 0x4e0c) = auVar41._12_4_ / fVar22;
    *(float *)(param_1 + 0x9c0) = fVar69 / fVar72;
    *(float *)((long)param_1 + 0x4e04) = fVar58 / fVar22;
  }
  *(float *)(param_1 + 0x9c2) = fVar72;
LAB_0086ccd8:
  *(float *)(param_1 + 0x9c6) = fVar21;
  return 0;
}


