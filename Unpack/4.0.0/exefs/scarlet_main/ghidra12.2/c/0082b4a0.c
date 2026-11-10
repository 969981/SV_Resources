/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0082b4a0; name: FUN_0082b4a0
 */


bool FUN_0082b4a0(int *param_1,float *param_2,undefined8 *param_3,byte *param_4,float *param_5)

{
  ushort *puVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ushort uVar15;
  undefined *puVar16;
  bool bVar17;
  bool bVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulong uVar23;
  float *pfVar24;
  ulong uVar25;
  ulong uVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  uint uVar35;
  undefined8 uVar36;
  ulong uVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  undefined8 uVar41;
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  ulong uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined8 uVar62;
  undefined8 uVar63;
  float fVar64;
  float fVar74;
  int iVar76;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  int iVar65;
  int iVar75;
  int iVar78;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined8 uVar77;
  undefined8 uVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar88;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  int iVar101;
  float fVar102;
  float fVar106;
  ulong uVar103;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  float fVar107;
  float fVar108;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined8 uVar115;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  ulong local_170 [7];
  undefined8 uStack_138;
  ulong local_130;
  undefined8 uStack_128;
  ulong local_120;
  undefined8 uStack_118;
  ulong local_110;
  undefined8 uStack_108;
  ulong local_100;
  undefined8 uStack_f8;
  ulong local_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined8 uStack_78;
  
  puVar16 = PTR_DAT_047d19b0;
  auVar54 = *(undefined1 (*) [16])(PTR_DAT_047d19b0 + 0x50);
  bVar4 = *param_4;
  uVar41 = auVar54._0_8_;
  uVar62 = NEON_fmax(param_3[1],uVar41,4);
  fVar39 = (float)uVar62;
  fVar51 = (float)((ulong)uVar62 >> 0x20);
  if (bVar4 - 1 < 2) {
    iVar27 = param_1[2];
    lVar30 = 0;
    if (iVar27 != 0) {
      lVar30 = (long)iVar27 + (long)(param_1 + 2);
    }
    pfVar24 = (float *)(lVar30 + (ulong)param_4[1] * 0x10);
    fVar47 = *pfVar24;
    fVar52 = pfVar24[1];
    fVar43 = pfVar24[2];
    fVar44 = pfVar24[3];
    fVar74 = (float)*(undefined8 *)(param_2 + 2);
    fVar38 = (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
    fVar46 = (float)*(undefined8 *)param_2;
    fVar64 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
    fVar48 = fVar47 * fVar46;
    fVar49 = fVar52 * fVar64;
    fVar45 = fVar43 * fVar74;
    fVar50 = fVar44 * fVar38;
    auVar54._4_4_ = fVar49;
    auVar54._0_4_ = fVar48;
    auVar54._8_4_ = fVar45;
    auVar54._12_4_ = fVar50;
    auVar55._4_4_ = fVar49;
    auVar55._0_4_ = fVar48;
    auVar55._8_4_ = fVar45;
    auVar55._12_4_ = fVar50;
    auVar54 = NEON_ext(auVar54,auVar55,8,1);
    fVar45 = auVar54._0_4_ + fVar44;
    fVar39 = (fVar48 + fVar49 + fVar45) - fVar39;
    fVar51 = (fVar48 + fVar49 + fVar45) - fVar51;
    *(ulong *)(param_5 + 8) = CONCAT44(fVar51,fVar39);
    *(ulong *)(param_5 + 2) = CONCAT44(fVar38 - fVar44 * fVar51,fVar74 - fVar43 * fVar39);
    *(ulong *)param_5 = CONCAT44(fVar64 - fVar52 * fVar51,fVar46 - fVar47 * fVar39);
    param_5[6] = fVar43;
    param_5[7] = fVar44;
    param_5[4] = fVar47;
    param_5[5] = fVar52;
    if (fVar39 < (float)param_3[2]) {
      return true;
    }
LAB_0082b878:
    *param_4 = 4;
    return false;
  }
  if (bVar4 == 3) {
    lVar30 = 0;
    if (*param_1 != 0) {
      lVar30 = (long)*param_1 + (long)param_1;
    }
    puVar21 = (undefined8 *)(lVar30 + (ulong)param_4[1] * 0xc);
    uVar62 = *puVar21;
    fVar44 = (float)uVar62;
    fVar46 = (float)((ulong)uVar62 >> 0x20);
    fVar47 = *(float *)(puVar21 + 1);
    puVar21 = (undefined8 *)(lVar30 + (ulong)param_4[2] * 0xc);
    uVar62 = *puVar21;
    fVar52 = *(float *)(puVar21 + 1);
    fVar43 = (float)uVar62 - fVar44;
    fVar45 = (float)((ulong)uVar62 >> 0x20) - fVar46;
    fVar64 = fVar52 - fVar47;
    fVar74 = (*param_2 - fVar44) * fVar43;
    fVar38 = (param_2[1] - fVar46) * fVar45;
    fVar48 = (param_2[2] - fVar47) * fVar64;
    fVar49 = fVar43 * fVar43 + fVar45 * fVar45 + fVar64 * fVar64;
    fVar50 = fVar43 * fVar43 + fVar45 * fVar45 + fVar64 * fVar64;
    uVar62 = NEON_fmax(uVar41,CONCAT44(fVar74 + fVar38 + fVar48,fVar74 + fVar38 + fVar48),4);
    uVar62 = NEON_fmin(CONCAT44(fVar50,fVar49),uVar62,4);
    fVar74 = (float)((ulong)uVar62 >> 0x20);
    fVar44 = fVar44 + (float)uVar62 * (fVar43 / fVar49);
    fVar46 = fVar46 + fVar74 * (fVar45 / fVar50);
    fVar43 = fVar47 + (float)uVar62 * (fVar64 / fVar49);
    fVar47 = fVar47 + fVar74 * ((fVar52 - fVar47) / fVar50);
    fVar45 = *param_2 - fVar44;
    fVar64 = param_2[1] - fVar46;
    fVar74 = param_2[2] - fVar43;
    fVar52 = fVar45 * fVar45 + fVar64 * fVar64 + fVar74 * fVar74;
    if (fVar52 == 0.0) {
      fVar45 = 0.0;
      fVar64 = 0.0;
      fVar74 = 0.0;
      fVar38 = 0.0;
    }
    else {
      fVar52 = SQRT(fVar52);
      fVar38 = SQRT(fVar45 * fVar45 + fVar64 * fVar64 + fVar74 * fVar74);
      uVar41 = CONCAT44(fVar38,fVar52);
      fVar45 = fVar45 / fVar52;
      fVar64 = fVar64 / fVar38;
      fVar74 = fVar74 / fVar52;
      fVar38 = (param_2[3] - fVar47) / fVar38;
    }
    fVar52 = (float)uVar41 - fVar39;
    *(ulong *)(param_5 + 8) = CONCAT44((float)((ulong)uVar41 >> 0x20) - fVar51,fVar52);
    *(ulong *)(param_5 + 2) = CONCAT44(fVar47 + fVar51 * fVar38,fVar43 + fVar39 * fVar74);
    *(ulong *)param_5 = CONCAT44(fVar46 + fVar51 * fVar64,fVar44 + fVar39 * fVar45);
    *(ulong *)(param_5 + 6) = CONCAT44(fVar38,fVar74);
    *(ulong *)(param_5 + 4) = CONCAT44(fVar64,fVar45);
    fVar39 = (float)param_3[2];
    bVar18 = false;
    bVar17 = true;
    if (!NAN(fVar52) && !NAN(fVar39)) {
      bVar18 = fVar52 == fVar39;
      bVar17 = fVar39 <= fVar52;
    }
LAB_0082b6a4:
    bVar18 = !bVar17 || bVar18;
  }
  else {
    if (bVar4 == 4) {
      iVar27 = param_1[2];
      lVar30 = (long)iVar27 + (long)(param_1 + 2);
      lVar3 = 0;
      if (iVar27 != 0) {
        lVar3 = lVar30;
      }
      pfVar24 = (float *)(lVar3 + (ulong)param_4[1] * 0x10);
      fVar45 = *pfVar24;
      fVar46 = pfVar24[1];
      fVar64 = pfVar24[2];
      fVar74 = pfVar24[3];
      fVar43 = (float)*(undefined8 *)(param_2 + 2);
      fVar44 = (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
      fVar47 = (float)*(undefined8 *)param_2;
      fVar52 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
      fVar48 = fVar45 * fVar47;
      fVar50 = fVar46 * fVar52;
      auVar57._4_4_ = fVar50;
      auVar57._0_4_ = fVar48;
      auVar57._8_4_ = fVar64 * fVar43;
      auVar57._12_4_ = fVar74 * fVar44;
      auVar61._4_4_ = fVar50;
      auVar61._0_4_ = fVar48;
      auVar61._8_4_ = fVar64 * fVar43;
      auVar61._12_4_ = fVar74 * fVar44;
      auVar55 = NEON_ext(auVar57,auVar61,8,1);
      fVar38 = auVar55._0_4_ + fVar74;
      fVar49 = (fVar48 + fVar50 + fVar38) - fVar39;
      fVar38 = (fVar48 + fVar50 + fVar38) - fVar51;
      *(ulong *)(param_5 + 8) = CONCAT44(fVar38,fVar49);
      param_5[2] = fVar43 - fVar64 * fVar49;
      param_5[3] = fVar44 - fVar74 * fVar38;
      *param_5 = fVar47 - fVar45 * fVar49;
      param_5[1] = fVar52 - fVar46 * fVar38;
      param_5[6] = fVar64;
      param_5[7] = fVar74;
      param_5[4] = fVar45;
      param_5[5] = fVar46;
      fVar45 = (float)param_3[2];
      if (fVar45 < fVar49) {
        *(ulong *)(param_5 + 10) =
             CONCAT44(fVar38 - (float)((ulong)param_3[2] >> 0x20),fVar49 - fVar45);
        return false;
      }
    }
    else {
      iVar27 = param_1[2];
      fVar43 = (float)*(undefined8 *)(param_2 + 2);
      fVar44 = (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
      fVar47 = (float)*(undefined8 *)param_2;
      fVar52 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
      lVar30 = (long)iVar27 + (long)(param_1 + 2);
    }
    uVar26 = *(ulong *)(puVar16 + 0x60);
    fVar45 = (float)uVar26;
    fVar46 = (float)(uVar26 >> 0x20);
    iVar101 = param_1[3];
    lVar29 = (long)iVar101;
    lVar28 = lVar29 + -4;
    lVar3 = 0;
    if (iVar27 != 0) {
      lVar3 = lVar30;
    }
    pfVar24 = (float *)(lVar3 + lVar28 * 0x10);
    pfVar7 = (float *)(lVar3 + (lVar29 + -3) * 0x10);
    pfVar8 = (float *)(lVar3 + (lVar29 + -2) * 0x10);
    pfVar9 = (float *)(lVar3 + (lVar29 + -1) * 0x10);
    auVar85._0_4_ = fVar47 * *pfVar7;
    auVar85._4_4_ = fVar52 * pfVar7[1];
    auVar85._8_4_ = fVar43 * pfVar7[2];
    auVar85._12_4_ = fVar45 * pfVar7[3];
    auVar81._0_4_ = *pfVar24 * fVar47;
    auVar81._4_4_ = pfVar24[1] * fVar52;
    auVar81._8_4_ = pfVar24[2] * fVar43;
    auVar81._12_4_ = pfVar24[3] * fVar45;
    auVar117._0_4_ = fVar47 * *pfVar8;
    auVar117._4_4_ = fVar52 * pfVar8[1];
    auVar117._8_4_ = fVar43 * pfVar8[2];
    auVar117._12_4_ = fVar45 * pfVar8[3];
    auVar66._0_4_ = fVar47 * *pfVar9;
    auVar66._4_4_ = fVar52 * pfVar9[1];
    auVar66._8_4_ = fVar43 * pfVar9[2];
    auVar66._12_4_ = fVar45 * pfVar9[3];
    auVar55 = NEON_ext(auVar81,auVar81,8,1);
    auVar57 = NEON_ext(auVar85,auVar85,8,1);
    auVar61 = NEON_ext(auVar117,auVar117,8,1);
    auVar67 = NEON_ext(auVar66,auVar66,8,1);
    auVar69._0_8_ =
         CONCAT44(auVar85._0_4_ + auVar85._4_4_ + auVar57._0_4_ + auVar57._4_4_,
                  auVar81._0_4_ + auVar81._4_4_ + auVar55._0_4_ + auVar55._4_4_);
    uVar62 = CONCAT44(auVar66._0_4_ + auVar66._4_4_ + auVar67._0_4_ + auVar67._4_4_,
                      auVar117._0_4_ + auVar117._4_4_ + auVar61._0_4_ + auVar61._4_4_);
    iVar27 = (int)lVar28;
    auVar69._8_8_ = uVar62;
    auVar55 = *(undefined1 (*) [16])(PTR_DAT_047d19c8 + 0x50);
    auVar67._0_8_ = CONCAT44(auVar55._4_4_ + iVar27,auVar55._0_4_ + iVar27);
    auVar67._8_4_ = auVar55._8_4_ + iVar27;
    auVar67._12_4_ = auVar55._12_4_ + iVar27;
    if (iVar101 < 5) {
      auVar67._8_8_ = auVar67._8_8_;
    }
    else {
      lVar30 = 0;
      do {
        pfVar24 = (float *)(lVar3 + lVar30 * 0x10);
        lVar30 = lVar30 + 4;
        auVar80._0_4_ = fVar47 * pfVar24[4];
        auVar80._4_4_ = fVar52 * pfVar24[5];
        auVar80._8_4_ = fVar43 * pfVar24[6];
        auVar80._12_4_ = fVar45 * pfVar24[7];
        auVar68._0_4_ = fVar47 * *pfVar24;
        auVar68._4_4_ = fVar52 * pfVar24[1];
        auVar68._8_4_ = fVar43 * pfVar24[2];
        auVar68._12_4_ = fVar45 * pfVar24[3];
        auVar84._0_4_ = fVar47 * pfVar24[8];
        auVar84._4_4_ = fVar52 * pfVar24[9];
        auVar84._8_4_ = fVar43 * pfVar24[10];
        auVar84._12_4_ = fVar45 * pfVar24[0xb];
        auVar89._0_4_ = fVar47 * pfVar24[0xc];
        auVar89._4_4_ = fVar52 * pfVar24[0xd];
        auVar89._8_4_ = fVar43 * pfVar24[0xe];
        auVar89._12_4_ = fVar45 * pfVar24[0xf];
        auVar57 = NEON_ext(auVar68,auVar68,8,1);
        auVar61 = NEON_ext(auVar80,auVar80,8,1);
        auVar81 = NEON_ext(auVar84,auVar84,8,1);
        auVar85 = NEON_ext(auVar89,auVar89,8,1);
        auVar86._0_4_ = auVar68._0_4_ + auVar68._4_4_ + auVar57._0_4_ + auVar57._4_4_;
        auVar86._4_4_ = auVar80._0_4_ + auVar80._4_4_ + auVar61._0_4_ + auVar61._4_4_;
        fVar64 = auVar84._0_4_ + auVar84._4_4_ + auVar81._0_4_ + auVar81._4_4_;
        fVar74 = auVar89._0_4_ + auVar89._4_4_ + auVar85._0_4_ + auVar85._4_4_;
        auVar86._12_4_ = fVar74;
        auVar86._8_4_ = fVar64;
        auVar82._0_4_ = -(uint)(auVar69._0_4_ < auVar86._0_4_);
        auVar82._4_4_ = -(uint)(auVar69._4_4_ < auVar86._4_4_);
        auVar82._8_4_ = -(uint)(auVar69._8_4_ < fVar64);
        auVar82._12_4_ = -(uint)(auVar69._12_4_ < fVar74);
        auVar67 = auVar67 ^ (auVar67 ^ auVar55) & auVar82;
        auVar58._0_4_ = auVar55._0_4_ + *(int *)(PTR_DAT_047d19c8 + 0x40);
        auVar58._4_4_ = auVar55._4_4_ + *(int *)(PTR_DAT_047d19c8 + 0x44);
        auVar58._8_4_ = auVar55._8_4_ + *(int *)(PTR_DAT_047d19c8 + 0x48);
        auVar58._12_4_ = auVar55._12_4_ + *(int *)(PTR_DAT_047d19c8 + 0x4c);
        auVar69 = auVar69 ^ (auVar69 ^ auVar86) & auVar82;
        auVar55 = auVar58;
      } while (lVar30 < lVar28);
    }
    auVar55 = NEON_rev64(auVar69,4);
    auVar56._0_4_ = -(uint)(auVar55._0_4_ <= auVar69._0_4_);
    auVar56._4_4_ = -(uint)(auVar55._4_4_ <= auVar69._4_4_);
    auVar56._8_4_ = -(uint)(auVar55._8_4_ <= auVar69._8_4_);
    auVar56._12_4_ = -(uint)(auVar55._12_4_ <= auVar69._12_4_);
    auVar55 = NEON_fmax(auVar69,auVar55,4);
    auVar57 = NEON_rev64(auVar67,4);
    auVar57 = auVar57 ^ (auVar57 ^ auVar67) & auVar56;
    auVar61 = NEON_ext(auVar55,auVar55,8,1);
    auVar81 = NEON_ext(auVar57,auVar57,8,1);
    uVar53 = auVar81._0_8_ ^
             (auVar81._0_8_ ^ auVar57._0_8_) & (ulong)-(uint)(auVar61._0_4_ <= auVar55._0_4_);
    fVar64 = (float)NEON_fmaxnmv(auVar69,4);
    iVar27 = (int)uVar53;
    auVar55 = *(undefined1 (*) [16])(lVar3 + (long)iVar27 * 0x10);
    param_4[1] = (byte)uVar53;
    uVar63 = param_3[2];
    fVar74 = (float)uVar63;
    uVar62 = auVar55._0_8_;
    uVar79 = auVar55._8_8_;
    if (fVar39 + fVar74 < fVar64) {
      *(undefined8 *)(param_5 + 6) = uVar79;
      *(undefined8 *)(param_5 + 4) = uVar62;
      *(ulong *)(param_5 + 10) = CONCAT44(fVar64 - (float)((ulong)uVar63 >> 0x20),fVar64 - fVar74);
      *(ulong *)(param_5 + 8) = CONCAT44(fVar64 - fVar51,fVar64 - fVar39);
      goto LAB_0082b878;
    }
    cVar5 = *(char *)(param_3 + 3);
    fVar38 = auVar55._0_4_;
    fVar48 = auVar55._4_4_;
    fVar49 = auVar55._8_4_;
    fVar50 = auVar55._12_4_;
    if (cVar5 == '\0') {
      pfVar24 = (float *)(lVar3 + lVar28 * 0x10);
      pfVar7 = (float *)(lVar3 + (lVar29 + -3) * 0x10);
      pfVar8 = (float *)(lVar3 + (lVar29 + -2) * 0x10);
      pfVar9 = (float *)(lVar3 + (lVar29 + -1) * 0x10);
      auVar59._0_4_ = fVar38 - *pfVar24;
      auVar59._4_4_ = fVar48 - pfVar24[1];
      auVar59._8_4_ = fVar49 - pfVar24[2];
      auVar59._12_4_ = fVar50 - pfVar24[3];
      auVar70._0_4_ = fVar38 - *pfVar7;
      auVar70._4_4_ = fVar48 - pfVar7[1];
      auVar70._8_4_ = fVar49 - pfVar7[2];
      auVar70._12_4_ = fVar50 - pfVar7[3];
      auVar83._0_4_ = fVar38 - *pfVar8;
      auVar83._4_4_ = fVar48 - pfVar8[1];
      auVar83._8_4_ = fVar49 - pfVar8[2];
      auVar83._12_4_ = fVar50 - pfVar8[3];
      auVar87._0_4_ = fVar38 - *pfVar9;
      auVar87._4_4_ = fVar48 - pfVar9[1];
      auVar87._8_4_ = fVar49 - pfVar9[2];
      auVar87._12_4_ = fVar50 - pfVar9[3];
      auVar57 = NEON_ext(auVar59,auVar59,8,1);
      auVar61 = NEON_ext(auVar70,auVar70,8,1);
      fVar107 = auVar57._0_4_;
      fVar88 = auVar61._0_4_;
      auVar81 = NEON_ext(auVar83,auVar83,8,1);
      auVar69 = NEON_ext(auVar87,auVar87,8,1);
      fVar112 = auVar81._0_4_;
      fVar108 = auVar69._0_4_;
      auVar71._0_4_ =
           fVar107 * fVar107 + auVar59._0_4_ * auVar59._0_4_ + auVar59._4_4_ * auVar59._4_4_;
      auVar71._4_4_ =
           fVar88 * fVar88 + auVar70._0_4_ * auVar70._0_4_ + auVar70._4_4_ * auVar70._4_4_;
      auVar71._8_4_ =
           fVar112 * fVar112 + auVar83._0_4_ * auVar83._0_4_ + auVar83._4_4_ * auVar83._4_4_;
      auVar71._12_4_ =
           fVar108 * fVar108 + auVar87._0_4_ * auVar87._0_4_ + auVar87._4_4_ * auVar87._4_4_;
      auVar60._8_8_ = 0xffffffffffffffff;
      auVar60._0_8_ = 0xffffffffffffffff;
      auVar85 = NEON_sshl(auVar71,auVar60,4);
      iVar65 = -(uint)(auVar71._0_4_ == 0.0);
      iVar75 = -(uint)(auVar71._4_4_ == 0.0);
      iVar76 = -(uint)(auVar71._8_4_ == 0.0);
      iVar78 = -(uint)(auVar71._12_4_ == 0.0);
      auVar72[0] = ~(byte)iVar65;
      auVar72[1] = ~(byte)((uint)iVar65 >> 8);
      auVar72[2] = ~(byte)((uint)iVar65 >> 0x10);
      auVar72[3] = ~(byte)((uint)iVar65 >> 0x18);
      auVar72[4] = ~(byte)iVar75;
      auVar72[5] = ~(byte)((uint)iVar75 >> 8);
      auVar72[6] = ~(byte)((uint)iVar75 >> 0x10);
      auVar72[7] = ~(byte)((uint)iVar75 >> 0x18);
      auVar72[8] = ~(byte)iVar76;
      auVar72[9] = ~(byte)((uint)iVar76 >> 8);
      auVar72[10] = ~(byte)((uint)iVar76 >> 0x10);
      auVar72[0xb] = ~(byte)((uint)iVar76 >> 0x18);
      auVar72[0xc] = ~(byte)iVar78;
      auVar72[0xd] = ~(byte)((uint)iVar78 >> 8);
      auVar72[0xe] = ~(byte)((uint)iVar78 >> 0x10);
      auVar72[0xf] = ~(byte)((uint)iVar78 >> 0x18);
      auVar90._0_4_ =
           (auVar57._4_4_ + fVar107 * fVar43 + auVar59._0_4_ * fVar47 + auVar59._4_4_ * fVar52) *
           (float)(0x5f375a86 - auVar85._0_4_);
      auVar90._4_4_ =
           (auVar61._4_4_ + fVar88 * fVar43 + auVar70._0_4_ * fVar47 + auVar70._4_4_ * fVar52) *
           (float)(0x5f375a86 - auVar85._4_4_);
      auVar90._8_4_ =
           (auVar81._4_4_ + fVar112 * fVar43 + auVar83._0_4_ * fVar47 + auVar83._4_4_ * fVar52) *
           (float)(0x5f375a86 - auVar85._8_4_);
      auVar90._12_4_ =
           (auVar69._4_4_ + fVar108 * fVar43 + auVar87._0_4_ * fVar47 + auVar87._4_4_ * fVar52) *
           (float)(0x5f375a86 - auVar85._12_4_);
      auVar57 = *(undefined1 (*) [16])(puVar16 + 0x240);
      auVar61 = auVar57 ^ (auVar57 ^ auVar90) & auVar72;
      if (4 < iVar101) {
        lVar30 = 0;
        do {
          pfVar24 = (float *)(lVar3 + lVar30 * 0x10);
          lVar30 = lVar30 + 4;
          auVar104._0_4_ = fVar38 - pfVar24[4];
          auVar104._4_4_ = fVar48 - pfVar24[5];
          auVar104._8_4_ = fVar49 - pfVar24[6];
          auVar104._12_4_ = fVar50 - pfVar24[7];
          auVar99._0_4_ = fVar38 - *pfVar24;
          auVar99._4_4_ = fVar48 - pfVar24[1];
          auVar99._8_4_ = fVar49 - pfVar24[2];
          auVar99._12_4_ = fVar50 - pfVar24[3];
          auVar109._0_4_ = fVar38 - pfVar24[8];
          auVar109._4_4_ = fVar48 - pfVar24[9];
          auVar109._8_4_ = fVar49 - pfVar24[10];
          auVar109._12_4_ = fVar50 - pfVar24[0xb];
          auVar116._0_4_ = fVar38 - pfVar24[0xc];
          auVar116._4_4_ = fVar48 - pfVar24[0xd];
          auVar116._8_4_ = fVar49 - pfVar24[0xe];
          auVar116._12_4_ = fVar50 - pfVar24[0xf];
          auVar69 = NEON_ext(auVar99,auVar99,8,1);
          auVar81 = NEON_ext(auVar104,auVar104,8,1);
          auVar85 = NEON_ext(auVar109,auVar109,8,1);
          auVar117 = NEON_ext(auVar116,auVar116,8,1);
          fVar107 = auVar69._0_4_;
          fVar88 = auVar81._0_4_;
          fVar112 = auVar85._0_4_;
          fVar108 = auVar117._0_4_;
          auVar110._0_4_ =
               fVar107 * fVar107 + auVar99._0_4_ * auVar99._0_4_ + auVar99._4_4_ * auVar99._4_4_;
          auVar110._4_4_ =
               fVar88 * fVar88 + auVar104._0_4_ * auVar104._0_4_ + auVar104._4_4_ * auVar104._4_4_;
          auVar110._8_4_ =
               fVar112 * fVar112 + auVar109._0_4_ * auVar109._0_4_ + auVar109._4_4_ * auVar109._4_4_
          ;
          auVar110._12_4_ =
               fVar108 * fVar108 + auVar116._0_4_ * auVar116._0_4_ + auVar116._4_4_ * auVar116._4_4_
          ;
          auVar67 = NEON_sshl(auVar110,auVar60,4);
          iVar101 = -(uint)(auVar110._0_4_ == 0.0);
          iVar65 = -(uint)(auVar110._4_4_ == 0.0);
          iVar75 = -(uint)(auVar110._8_4_ == 0.0);
          iVar76 = -(uint)(auVar110._12_4_ == 0.0);
          auVar105[0] = ~(byte)iVar101;
          auVar105[1] = ~(byte)((uint)iVar101 >> 8);
          auVar105[2] = ~(byte)((uint)iVar101 >> 0x10);
          auVar105[3] = ~(byte)((uint)iVar101 >> 0x18);
          auVar105[4] = ~(byte)iVar65;
          auVar105[5] = ~(byte)((uint)iVar65 >> 8);
          auVar105[6] = ~(byte)((uint)iVar65 >> 0x10);
          auVar105[7] = ~(byte)((uint)iVar65 >> 0x18);
          auVar105[8] = ~(byte)iVar75;
          auVar105[9] = ~(byte)((uint)iVar75 >> 8);
          auVar105[10] = ~(byte)((uint)iVar75 >> 0x10);
          auVar105[0xb] = ~(byte)((uint)iVar75 >> 0x18);
          auVar105[0xc] = ~(byte)iVar76;
          auVar105[0xd] = ~(byte)((uint)iVar76 >> 8);
          auVar105[0xe] = ~(byte)((uint)iVar76 >> 0x10);
          auVar105[0xf] = ~(byte)((uint)iVar76 >> 0x18);
          auVar100._0_4_ =
               (auVar69._4_4_ + fVar43 * fVar107 + fVar47 * auVar99._0_4_ + fVar52 * auVar99._4_4_)
               * (float)(0x5f375a86 - auVar67._0_4_);
          auVar100._4_4_ =
               (auVar81._4_4_ + fVar43 * fVar88 + fVar47 * auVar104._0_4_ + fVar52 * auVar104._4_4_)
               * (float)(0x5f375a86 - auVar67._4_4_);
          auVar100._8_4_ =
               (auVar85._4_4_ + fVar43 * fVar112 + fVar47 * auVar109._0_4_ + fVar52 * auVar109._4_4_
               ) * (float)(0x5f375a86 - auVar67._8_4_);
          auVar100._12_4_ =
               (auVar117._4_4_ +
               fVar43 * fVar108 + fVar47 * auVar116._0_4_ + fVar52 * auVar116._4_4_) *
               (float)(0x5f375a86 - auVar67._12_4_);
          auVar61 = NEON_fmin(auVar57 ^ (auVar57 ^ auVar100) & auVar105,auVar61,4);
        } while (lVar30 < lVar28);
      }
      fVar107 = (float)NEON_fminnmv(auVar61,4);
      auVar69 = ZEXT816(0x3f788b30);
      fVar112 = (float)*param_3;
      uVar63 = CONCAT44(fVar107 * 0.97087383,fVar107 * 0.97087383);
    }
    else {
      fVar112 = (float)*param_3;
      uVar63 = uVar41;
    }
    if (fVar64 < fVar112) {
      fVar39 = fVar64 - fVar39;
      fVar64 = fVar64 - fVar51;
      *(ulong *)(param_5 + 8) = CONCAT44(fVar64,fVar39);
      *(undefined8 *)(param_5 + 10) = uVar63;
      *param_4 = 1;
      param_5[2] = fVar43 - fVar49 * fVar39;
      param_5[3] = fVar44 - fVar50 * fVar64;
      *param_5 = fVar47 - fVar38 * fVar39;
      param_5[1] = fVar52 - fVar48 * fVar64;
      *(undefined8 *)(param_5 + 6) = uVar79;
      *(undefined8 *)(param_5 + 4) = uVar62;
      return true;
    }
    iVar101 = param_1[4];
    auVar57 = *(undefined1 (*) [16])(puVar16 + 0x250);
    iVar65 = param_1[6];
    lVar30 = 0;
    if (*param_1 != 0) {
      lVar30 = (long)*param_1 + (long)param_1;
    }
    lVar28 = (long)iVar101 + (long)(param_1 + 4);
    lVar29 = 0;
    if (iVar101 != 0) {
      lVar29 = lVar28;
    }
    puVar1 = (ushort *)(lVar29 + (long)iVar27 * 4);
    lVar29 = (long)iVar65 + (long)(param_1 + 6);
    uVar36 = *(undefined8 *)(puVar16 + 0x240);
    lVar2 = 0;
    if (iVar65 != 0) {
      lVar2 = lVar29;
    }
    uVar15 = puVar1[1];
    uVar34 = (ulong)(byte)uVar15;
    auVar61 = NEON_ext(auVar57,auVar57,8,1);
    uVar53 = auVar57._0_8_;
    local_170[1] = auVar61._0_8_;
    local_170[2] = uVar53;
    local_170[3] = local_170[1];
    local_170[4] = uVar53;
    local_170[5] = local_170[1];
    local_170[6] = uVar53;
    uStack_138 = local_170[1];
    local_130 = uVar53;
    uStack_128 = local_170[1];
    local_120 = uVar53;
    uStack_118 = local_170[1];
    local_110 = uVar53;
    uStack_108 = local_170[1];
    local_100 = uVar53;
    uStack_f8 = local_170[1];
    local_f0 = uVar53;
    uStack_e8 = local_170[1];
    local_e0 = uVar53;
    uStack_d8 = local_170[1];
    local_d0 = uVar53;
    uStack_c8 = local_170[1];
    local_c0 = uVar53;
    uStack_b8 = local_170[1];
    local_b0 = uVar53;
    uStack_a8 = local_170[1];
    local_a0 = uVar53;
    uStack_98 = local_170[1];
    local_90 = uVar53;
    uStack_88 = local_170[1];
    local_80 = uVar53;
    uStack_78 = local_170[1];
    if (uVar34 != 0) {
      lVar2 = lVar2 + (ulong)*puVar1;
      pfVar24 = (float *)(lVar30 + (ulong)*(byte *)(lVar2 + (uVar34 - 1)) * 0xc);
      auVar55 = NEON_ext(auVar55,auVar55,4,1);
      uVar23 = 0;
      uVar37 = 0xffffffff;
      uVar25 = uVar53;
      uVar20 = uVar53;
      fVar107 = *pfVar24;
      fVar112 = pfVar24[1];
      fVar88 = pfVar24[2];
      local_170[0] = uVar53;
      do {
        pfVar24 = (float *)(lVar30 + (ulong)*(byte *)(lVar2 + uVar23) * 0xc);
        fVar108 = pfVar24[2];
        fVar113 = *pfVar24;
        fVar114 = pfVar24[1];
        fVar91 = fVar113 - fVar107;
        fVar92 = fVar114 - fVar112;
        fVar93 = fVar108 - fVar88;
        fVar94 = fVar108 - fVar88;
        auVar11._4_4_ = fVar92;
        auVar11._0_4_ = fVar91;
        auVar11._8_4_ = fVar93;
        auVar11._12_4_ = fVar94;
        auVar12._4_4_ = fVar92;
        auVar12._0_4_ = fVar91;
        auVar12._8_4_ = fVar93;
        auVar12._12_4_ = fVar94;
        auVar57 = NEON_ext(auVar11,auVar12,4,1);
        fVar102 = fVar91 * fVar91 + fVar92 * fVar92 + fVar93 * fVar93;
        fVar106 = fVar91 * fVar91 + fVar92 * fVar92 + fVar93 * fVar93;
        fVar95 = fVar38 * auVar57._0_4_ - auVar55._0_4_ * fVar91;
        fVar96 = fVar48 * auVar57._4_4_ - auVar55._4_4_ * fVar92;
        fVar97 = fVar49 * fVar91 - fVar38 * fVar93;
        fVar98 = fVar50 * fVar92 - fVar48 * fVar94;
        fVar94 = (float)(0x5f2fed52 - ((int)fVar102 >> 1));
        fVar111 = (float)(0x5f2fed52 - ((int)fVar106 >> 1));
        auVar13._4_4_ = fVar96;
        auVar13._0_4_ = fVar95;
        auVar13._8_4_ = fVar97;
        auVar13._12_4_ = fVar98;
        auVar14._4_4_ = fVar96;
        auVar14._0_4_ = fVar95;
        auVar14._8_4_ = fVar97;
        auVar14._12_4_ = fVar98;
        auVar57 = NEON_ext(auVar13,auVar14,4,1);
        fVar94 = (fVar102 * -0.5557 * fVar94 * fVar94 + 1.55452) * fVar94;
        fVar111 = (fVar106 * -0.5557 * fVar111 * fVar111 + 1.55452) * fVar111;
        fVar96 = (fVar47 - fVar107) * auVar57._0_4_;
        fVar98 = (fVar52 - fVar112) * auVar57._4_4_;
        fVar95 = (fVar43 - fVar88) * fVar95;
        fVar97 = fVar96 + fVar98 + fVar95;
        fVar95 = fVar96 + fVar98 + fVar95;
        if (0.0 <= fVar97) {
          uVar36 = NEON_fmin(uVar36,CONCAT44(fVar95 * fVar111,fVar97 * fVar94),4);
        }
        else {
          fVar91 = (fVar47 - fVar107) * fVar91;
          fVar92 = (fVar52 - fVar112) * fVar92;
          fVar93 = (fVar43 - fVar88) * fVar93;
          fVar107 = fVar94 * (fVar93 + fVar91 + fVar92);
          fVar112 = fVar111 * (fVar93 + fVar91 + fVar92);
          uVar103 = NEON_fmax(CONCAT44(-fVar112,-fVar107),
                              CONCAT44(fVar112 - fVar106 * fVar111,fVar107 - fVar102 * fVar94),4);
          *(float *)((long)local_170 + uVar23 * 4) = (float)uVar103;
          if ((float)uVar103 < (float)uVar20) {
            uVar53 = CONCAT44(fVar111 * fVar112,fVar94 * fVar107);
            uVar25 = CONCAT44(fVar95 * fVar111,fVar97 * fVar94);
            auVar69._4_4_ = fVar106 * fVar111;
            auVar69._0_4_ = fVar102 * fVar94;
            auVar69._8_8_ = 0;
            uVar37 = uVar23 & 0xffffffff;
            uVar20 = uVar103;
          }
        }
        uVar23 = uVar23 + 1;
        fVar107 = fVar113;
        fVar112 = fVar114;
        fVar88 = fVar108;
      } while (uVar34 != uVar23);
      iVar101 = (int)uVar37;
      if (-1 < iVar101) {
        bVar4 = *(byte *)(lVar2 + uVar37);
        uVar23 = (ulong)bVar4;
        iVar65 = (int)(uVar34 - 1);
        if (iVar101 != 0) {
          iVar65 = iVar101 + -1;
        }
        bVar6 = *(byte *)(lVar2 + iVar65);
        uVar20 = (ulong)bVar6;
        puVar22 = (undefined8 *)(lVar30 + uVar23 * 0xc);
        puVar21 = (undefined8 *)(lVar30 + uVar20 * 0xc);
        fVar64 = *(float *)(puVar22 + 1);
        uVar79 = *puVar22;
        fVar38 = *(float *)(puVar21 + 1);
        uVar62 = *puVar21;
        fVar108 = (float)uVar62;
        fVar113 = (float)((ulong)uVar62 >> 0x20);
        param_4[1] = bVar6;
        uVar62 = NEON_fmax(uVar41,uVar26 ^ (uVar26 ^ uVar53) &
                                           CONCAT44(-(uint)((float)(uVar53 >> 0x20) < fVar46),
                                                    -(uint)((float)uVar53 < fVar45)),4);
        param_4[2] = bVar4;
        fVar50 = (float)uVar62;
        fVar112 = (float)((ulong)uVar62 >> 0x20);
        fVar108 = fVar108 + fVar50 * ((float)uVar79 - fVar108);
        fVar113 = fVar113 + fVar112 * ((float)((ulong)uVar79 >> 0x20) - fVar113);
        fVar114 = fVar38 + fVar50 * (fVar64 - fVar38);
        fVar38 = fVar38 + fVar112 * (fVar64 - fVar38);
        fVar64 = fVar47 - fVar108;
        fVar48 = fVar52 - fVar113;
        fVar49 = fVar43 - fVar114;
        fVar107 = SQRT(fVar64 * fVar64 + fVar48 * fVar48 + fVar49 * fVar49);
        fVar88 = SQRT(fVar64 * fVar64 + fVar48 * fVar48 + fVar49 * fVar49);
        uVar115 = CONCAT44(fVar88 - fVar51,fVar107 - fVar39);
        fVar64 = fVar64 / fVar107;
        fVar48 = fVar48 / fVar88;
        uVar36 = CONCAT44(fVar48,fVar64);
        fVar49 = fVar49 / fVar107;
        fVar88 = (fVar44 - fVar38) / fVar88;
        uVar77 = CONCAT44(fVar88,fVar49);
        *param_4 = 3;
        uVar79 = NEON_fmin(uVar63,uVar25 ^ 0x8000000080000000,4);
        if (param_1[9] == 0) {
LAB_0082bd60:
          *(undefined4 *)((long)local_170 + uVar37 * 4) = 0x7f7fffee;
          auVar42._8_8_ = local_170[1];
          auVar42._0_8_ = local_170[0];
          if (4 < (byte)uVar15) {
            uVar26 = 1;
            do {
              lVar30 = uVar26 * 2;
              lVar3 = uVar26 * 2;
              uVar26 = uVar26 + 1;
              auVar10._8_4_ = (int)local_170[lVar3 + 1];
              auVar10._0_8_ = local_170[lVar30];
              auVar10._12_4_ = (int)(local_170[lVar3 + 1] >> 0x20);
              auVar42 = NEON_fmin(auVar42,auVar10,4);
            } while (uVar26 < uVar34 + 3 >> 2);
          }
          uVar40 = NEON_fminnmv(auVar42,4);
          uVar41 = CONCAT44(uVar40,uVar40);
LAB_0082bda4:
          uVar79 = NEON_fmin(uVar79,uVar41,4);
LAB_0082bda8:
          *(undefined8 *)(param_5 + 10) = uVar79;
          param_5[2] = fVar114 + fVar39 * fVar49;
          param_5[3] = fVar38 + fVar51 * fVar88;
          *param_5 = fVar108 + fVar39 * fVar64;
          param_5[1] = fVar113 + fVar51 * fVar48;
          *(undefined8 *)(param_5 + 6) = uVar77;
          *(undefined8 *)(param_5 + 4) = uVar36;
        }
        else {
          if ((float)uVar53 == fVar50) {
            uVar41 = NEON_fmin(uVar62,CONCAT44(fVar46 - fVar112,fVar45 - fVar50),4);
            uVar79 = NEON_fmin(uVar79,CONCAT44(auVar69._4_4_ * (float)((ulong)uVar41 >> 0x20),
                                               auVar69._0_4_ * (float)uVar41),4);
            goto LAB_0082bd60;
          }
          uVar33 = (uint)*(byte *)((long)puVar1 + 3) << 1;
          if (0xfe < uVar33) {
            uVar33 = 0xff;
          }
          pfVar24 = (float *)(lVar3 + (long)iVar27 * 0x10);
          auVar73._0_4_ = fVar64 * *pfVar24;
          auVar73._4_4_ = fVar48 * pfVar24[1];
          auVar73._8_4_ = fVar49 * pfVar24[2];
          auVar73._12_4_ = fVar88 * pfVar24[3];
          auVar55 = NEON_ext(auVar73,auVar73,8,1);
          if (*(float *)(PTR_DAT_047d1a38 + (ulong)uVar33 * 4) <
              auVar73._0_4_ + auVar73._4_4_ + auVar55._0_4_) {
            if (cVar5 == '\0') {
              if (fVar50 <= *(float *)(puVar16 + 0x150)) {
                bVar4 = bVar6;
              }
              uVar41 = FUN_0082b300(param_1,lVar30,bVar4,param_2);
              goto LAB_0082bda4;
            }
            goto LAB_0082bda8;
          }
          if (fVar50 <= *(float *)(puVar16 + 0x150)) {
            bVar4 = bVar6;
          }
          puVar21 = (undefined8 *)(lVar30 + (ulong)(uint)bVar4 * 0xc);
          uVar62 = *puVar21;
          iVar27 = 10;
          fVar64 = *(float *)(puVar21 + 1);
          uVar33 = (uint)bVar4;
          do {
            uVar31 = uVar33;
            uVar19 = *(uint *)((long)(param_1 + 10) + (long)(int)uVar31 * 4 + (long)param_1[10]);
            puVar1 = (ushort *)(lVar28 + (ulong)(ushort)uVar19 * 4);
            bVar4 = (byte)puVar1[1];
            uVar33 = (uVar19 >> 0x10 & 0xff) + 1;
            uVar35 = 0;
            if (bVar4 != 0) {
              uVar35 = uVar33 / bVar4;
            }
            bVar4 = *(byte *)(lVar29 + (ulong)*puVar1 + (ulong)(uVar33 - uVar35 * bVar4));
            puVar21 = (undefined8 *)(lVar30 + (ulong)bVar4 * 0xc);
            uVar79 = *puVar21;
            uVar35 = uVar19 >> 0x10;
            fVar48 = (float)uVar62;
            fVar50 = fVar48 - (float)uVar79;
            fVar49 = (float)((ulong)uVar62 >> 0x20);
            fVar107 = fVar49 - (float)((ulong)uVar79 >> 0x20);
            fVar112 = fVar64 - *(float *)(puVar21 + 1);
            fVar88 = fVar50 * fVar50 + fVar107 * fVar107 + fVar112 * fVar112;
            fVar92 = fVar50 * fVar50 + fVar107 * fVar107 + fVar112 * fVar112;
            fVar95 = (float)uVar36 * fVar50;
            fVar102 = (float)((ulong)uVar36 >> 0x20);
            fVar96 = fVar102 * fVar107;
            fVar111 = (float)uVar77 * fVar112;
            fVar97 = (float)(0x5f2fed52 - ((int)fVar88 >> 1));
            fVar98 = (float)(0x5f2fed52 - ((int)fVar92 >> 1));
            fVar91 = fVar47 - fVar48;
            fVar93 = fVar52 - fVar49;
            fVar94 = fVar43 - fVar64;
            fVar97 = (fVar88 * -0.5557 * fVar97 * fVar97 + 1.55452) * fVar97;
            fVar98 = (fVar92 * -0.5557 * fVar98 * fVar98 + 1.55452) * fVar98;
            uVar53 = NEON_fmin(CONCAT44((fVar95 + fVar96 + fVar111) * fVar98,
                                        (fVar95 + fVar96 + fVar111) * fVar97),uVar41,4);
            uVar62 = CONCAT44((fVar91 * fVar50 + fVar93 * fVar107 + fVar94 * fVar112) * fVar98,
                              (fVar91 * fVar50 + fVar93 * fVar107 + fVar94 * fVar112) * fVar97);
            uVar53 = uVar53 & 0xffffffff;
            uVar32 = (uint)bVar4;
            do {
              puVar1 = (ushort *)(lVar28 + (ulong)(uVar19 & 0xffff) * 4);
              bVar6 = (byte)puVar1[1];
              iVar65 = (uint)bVar6 + (uVar35 & 0xff) + -1;
              iVar101 = 0;
              if (bVar6 != 0) {
                iVar101 = iVar65 / (int)(uint)bVar6;
              }
              lVar3 = (ulong)(iVar65 - iVar101 * (uint)bVar6 & 0xff) + (ulong)*puVar1;
              bVar6 = *(byte *)(lVar29 + lVar3);
              uVar19 = *(uint *)((long)(param_1 + 8) + lVar3 * 4 + (long)param_1[8]);
              puVar21 = (undefined8 *)(lVar30 + (ulong)bVar6 * 0xc);
              uVar79 = *puVar21;
              uVar35 = uVar19 >> 0x10;
              fVar50 = fVar48 - (float)uVar79;
              fVar107 = fVar49 - (float)((ulong)uVar79 >> 0x20);
              fVar112 = fVar64 - *(float *)(puVar21 + 1);
              fVar88 = fVar50 * fVar50 + fVar107 * fVar107 + fVar112 * fVar112;
              fVar95 = fVar50 * fVar50 + fVar107 * fVar107 + fVar112 * fVar112;
              fVar92 = (float)(0x5f2fed52 - ((int)fVar88 >> 1));
              fVar96 = (float)(0x5f2fed52 - ((int)fVar95 >> 1));
              fVar92 = (fVar88 * -0.5557 * fVar92 * fVar92 + 1.55452) * fVar92;
              fVar88 = ((float)uVar36 * fVar50 + fVar102 * fVar107 + (float)uVar77 * fVar112) *
                       fVar92;
              uVar62 = NEON_fmin(uVar62,CONCAT44((fVar91 * fVar50 + fVar93 * fVar107 +
                                                 fVar94 * fVar112) *
                                                 (fVar95 * -0.5557 * fVar96 * fVar96 + 1.55452) *
                                                 fVar96,(fVar91 * fVar50 + fVar93 * fVar107 +
                                                        fVar94 * fVar112) * fVar92),4);
              bVar18 = (float)uVar53 <= fVar88;
              uVar34 = (ulong)(uint)fVar88;
              if (bVar18) {
                uVar34 = uVar53;
              }
              uVar33 = (uint)bVar6;
              if (bVar18) {
                uVar33 = uVar32;
              }
              uVar53 = uVar34;
              uVar32 = uVar33;
            } while ((uint)bVar6 != (uint)bVar4);
            uVar19 = (uint)uVar20;
            uVar35 = (uint)uVar23;
            if (*(float *)(puVar16 + 0x260) <= (float)uVar34) goto LAB_0082c0ec;
            puVar21 = (undefined8 *)(lVar30 + (long)(int)uVar33 * 0xc);
            uVar62 = *puVar21;
            fVar107 = *(float *)(puVar21 + 1);
            uVar77 = 0;
            uVar36 = 0;
            fVar112 = (float)uVar62 - fVar48;
            fVar88 = (float)((ulong)uVar62 >> 0x20) - fVar49;
            fVar114 = fVar107 - fVar64;
            fVar38 = (fVar91 * fVar112 + fVar93 * fVar88 + fVar94 * fVar114) /
                     (fVar112 * fVar112 + fVar88 * fVar88 + fVar114 * fVar114);
            fVar50 = (fVar91 * fVar112 + fVar93 * fVar88 + fVar94 * fVar114) /
                     (fVar112 * fVar112 + fVar88 * fVar88 + fVar114 * fVar114);
            uVar79 = NEON_fmax(uVar41,uVar26 ^ (uVar26 ^ CONCAT44(fVar50,fVar38)) &
                                               CONCAT44(-(uint)(fVar50 < fVar46),
                                                        -(uint)(fVar38 < fVar45)),4);
            fVar91 = (float)uVar79;
            fVar38 = (float)((ulong)uVar79 >> 0x20);
            fVar108 = fVar48 + fVar91 * fVar112;
            fVar113 = fVar49 + fVar38 * fVar88;
            fVar114 = fVar64 + fVar91 * fVar114;
            fVar38 = fVar64 + fVar38 * (fVar107 - fVar64);
            fVar64 = fVar47 - fVar108;
            fVar48 = fVar52 - fVar113;
            fVar49 = fVar43 - fVar114;
            fVar88 = fVar64 * fVar64 + fVar48 * fVar48 + fVar49 * fVar49;
            fVar50 = auVar54._0_4_;
            fVar112 = auVar54._4_4_;
            if (fVar88 != 0.0) {
              fVar50 = SQRT(fVar88);
              fVar112 = SQRT(fVar64 * fVar64 + fVar48 * fVar48 + fVar49 * fVar49);
              uVar36 = CONCAT44(fVar48 / fVar112,fVar64 / fVar50);
              uVar77 = CONCAT44((fVar44 - fVar38) / fVar112,fVar49 / fVar50);
            }
            uVar115 = CONCAT44(fVar112 - fVar51,fVar50 - fVar39);
            bVar18 = iVar27 == 0;
            iVar27 = iVar27 + -1;
            if (bVar18) break;
            uVar20 = (ulong)uVar31;
            uVar23 = (ulong)uVar33;
            fVar64 = fVar107;
          } while (fVar45 <= fVar91);
          uVar62 = 0;
          uVar19 = uVar31;
          uVar35 = uVar33;
LAB_0082c0ec:
          uVar41 = NEON_fmax(uVar41,uVar62,4);
          param_4[1] = (byte)uVar19;
          param_4[2] = (byte)uVar35;
          *(ulong *)(param_5 + 2) =
               CONCAT44(fVar38 + fVar51 * (float)((ulong)uVar77 >> 0x20),
                        fVar114 + fVar39 * (float)uVar77);
          *(ulong *)param_5 =
               CONCAT44(fVar113 + fVar51 * (float)((ulong)uVar36 >> 0x20),
                        fVar108 + fVar39 * (float)uVar36);
          *(undefined8 *)(param_5 + 6) = uVar77;
          *(undefined8 *)(param_5 + 4) = uVar36;
          *(undefined8 *)(param_5 + 10) = uVar41;
        }
        bVar17 = fVar74 <= (float)uVar115;
        bVar18 = (float)uVar115 == fVar74;
        *(undefined8 *)(param_5 + 8) = uVar115;
        goto LAB_0082b6a4;
      }
    }
    fVar39 = fVar64 - fVar39;
    fVar64 = fVar64 - fVar51;
    uVar41 = NEON_fmin(uVar63,uVar36,4);
    *(ulong *)(param_5 + 8) = CONCAT44(fVar64,fVar39);
    *(undefined8 *)(param_5 + 10) = uVar41;
    *param_4 = 2;
    *(ulong *)(param_5 + 2) = CONCAT44(fVar44 - fVar50 * fVar64,fVar43 - fVar49 * fVar39);
    *(ulong *)param_5 = CONCAT44(fVar52 - fVar48 * fVar64,fVar47 - fVar38 * fVar39);
    *(undefined8 *)(param_5 + 6) = uVar79;
    *(undefined8 *)(param_5 + 4) = uVar62;
    *(undefined8 *)(param_5 + 0xc) = uVar36;
    bVar18 = true;
  }
  return bVar18;
}


