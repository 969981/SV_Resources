/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c83e18; name: FUN_00c83e18
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c83e18(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [16];
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar20;
  bool bVar21;
  long lVar22;
  long *plVar23;
  short sVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar34;
  float fVar37;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar38;
  undefined1 auVar31 [16];
  float fVar35;
  undefined1 auVar32 [16];
  float fVar36;
  undefined1 auVar33 [16];
  float fVar39;
  float fVar40;
  float fVar45;
  float fVar46;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar47;
  undefined1 auVar44 [16];
  byte bVar48;
  byte bVar49;
  byte bVar50;
  undefined1 uVar51;
  byte bVar52;
  undefined1 uVar53;
  byte bVar54;
  undefined1 uVar55;
  byte bVar56;
  undefined1 uVar57;
  byte bVar58;
  undefined1 uVar59;
  byte bVar60;
  undefined1 uVar61;
  byte bVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar72 [16];
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  int iVar77;
  int iVar78;
  int iVar79;
  
  if (((*(char *)(param_1 + 0xe0) != '\0') && (lVar22 = *(long *)(param_1 + 0x40), lVar22 != 0)) &&
     (*(short *)(lVar22 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar22 + 0x1a);
    sVar24 = *(short *)(lVar22 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar24) {
        cVar3 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar21) {
          *psVar1 = sVar24 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_00c83e90;
        bVar21 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00c83e90:
        bVar21 = false;
      }
      if (bVar21) {
        lVar22 = *(long *)(lVar22 + 0x10);
        plVar23 = (long *)(lVar22 + -0x28);
        if (lVar22 == 0) {
          return;
        }
        auVar28._0_4_ = *(float *)(param_1 + 0xa0) * *(float *)(param_1 + 0xb0);
        auVar28._4_4_ = *(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0xb4);
        auVar28._8_4_ = *(float *)(param_1 + 0xa8) * *(float *)(param_1 + 0xb8);
        auVar28._12_4_ = *(float *)(param_1 + 0xac) * *(float *)(param_1 + 0xbc);
        uVar57 = (undefined1)((uint)auVar28._8_4_ >> 8);
        uVar59 = (undefined1)((uint)auVar28._8_4_ >> 0x10);
        uVar61 = (undefined1)((uint)auVar28._8_4_ >> 0x18);
        uVar51 = (undefined1)((uint)auVar28._4_4_ >> 8);
        uVar53 = (undefined1)((uint)auVar28._4_4_ >> 0x10);
        uVar55 = (undefined1)((uint)auVar28._4_4_ >> 0x18);
        auVar29[4] = SUB41(auVar28._4_4_,0);
        auVar29._0_4_ = auVar28._0_4_;
        auVar29[5] = uVar51;
        auVar29[6] = uVar53;
        auVar29[7] = uVar55;
        auVar29[8] = SUB41(auVar28._8_4_,0);
        auVar29[9] = uVar57;
        auVar29[10] = uVar59;
        auVar29[0xb] = uVar61;
        auVar29._12_4_ = 0;
        auVar29 = NEON_ext(auVar29,auVar28,0xc,1);
        auVar41[4] = SUB41(auVar28._4_4_,0);
        auVar41._0_4_ = auVar28._0_4_;
        auVar41[5] = uVar51;
        auVar41[6] = uVar53;
        auVar41[7] = uVar55;
        auVar41[8] = SUB41(auVar28._8_4_,0);
        auVar41[9] = uVar57;
        auVar41[10] = uVar59;
        auVar41[0xb] = uVar61;
        auVar41._12_4_ = 0;
        auVar41 = NEON_ext(auVar29,auVar41,4,1);
        auVar29 = NEON_ext(auVar29,auVar29,8,1);
        auVar29 = NEON_ext(auVar41,auVar29,0xc,1);
        *(long *)(lVar22 + 0xa0) = auVar29._8_8_;
        *(long *)(lVar22 + 0x98) = auVar29._0_8_;
        if (*(char *)(lVar22 + 0xcc) == '\0') {
          *(undefined1 *)(lVar22 + 0xcc) = 1;
          (**(code **)(*plVar23 + 0x78))(plVar23);
        }
        fVar26 = *(float *)(param_1 + 0xc4);
        fVar39 = *(float *)(param_1 + 200);
        fVar36 = *(float *)(param_1 + 0xd4);
        fVar35 = *(float *)(param_1 + 0xd8);
        fVar25 = fmodf(*(float *)(param_1 + 0xd0) + *(float *)(param_1 + 0xc0),360.0);
        fVar27 = fVar25 + 360.0;
        if (0.0 <= fVar25) {
          fVar27 = fVar25;
        }
        fVar26 = fmodf(fVar36 + fVar26,360.0);
        fVar36 = fVar26 + 360.0;
        if (0.0 <= fVar26) {
          fVar36 = fVar26;
        }
        fVar26 = fmodf(fVar35 + fVar39,360.0);
        fVar39 = *(float *)PTR_FloatPi_047d23a0 / *(float *)PTR_FloatDegree180_047d2390;
        fVar35 = fVar26 + 360.0;
        if (0.0 <= fVar26) {
          fVar35 = fVar26;
        }
        fVar35 = fVar35 * fVar39 * 0.5;
        fVar27 = fVar27 * fVar39 * 0.5;
        fVar36 = fVar36 * fVar39 * 0.5;
        fVar26 = fVar35 + 1.5707964;
        fVar25 = fVar27 + 1.5707964;
        fVar13 = fVar36 + 1.5707964;
        iVar77 = -(uint)(fVar35 == 0.0);
        iVar78 = -(uint)(fVar27 == 0.0);
        iVar79 = -(uint)(fVar36 == 0.0);
        auVar72._0_4_ =
             (int)((float)(-(uint)(0.0 <= fVar35) & 0x80000000 ^ 0xbf000000) + fVar35 * 0.15915494);
        auVar72._4_4_ =
             (int)((float)(-(uint)(0.0 <= fVar27) & 0x80000000 ^ 0xbf000000) + fVar27 * 0.15915494);
        auVar72._8_4_ =
             (int)((float)(-(uint)(0.0 <= fVar36) & 0x80000000 ^ 0xbf000000) + fVar36 * 0.15915494);
        auVar72._12_4_ = 0;
        auVar42._0_4_ =
             (int)((float)(~-(uint)(0.0 <= fVar26) & 0x80000000 ^ 0x3f000000) + fVar26 * 0.15915494)
        ;
        auVar42._4_4_ =
             (int)((float)(~-(uint)(0.0 <= fVar25) & 0x80000000 ^ 0x3f000000) + fVar25 * 0.15915494)
        ;
        auVar42._8_4_ =
             (int)((float)(~-(uint)(0.0 <= fVar13) & 0x80000000 ^ 0x3f000000) + fVar13 * 0.15915494)
        ;
        auVar42._12_4_ = 0;
        auVar41 = NEON_scvtf(auVar72,4);
        auVar29 = NEON_scvtf(auVar42,4);
        auVar64._0_4_ = fVar35 - auVar41._0_4_ * 6.2831855;
        auVar64._4_4_ =
             (float)(CONCAT17((char)((uint)fVar27 >> 0x18),
                              CONCAT16((char)((uint)fVar27 >> 0x10),
                                       CONCAT15((char)((uint)fVar27 >> 8),
                                                CONCAT14(SUB41(fVar27,0),fVar35)))) >> 0x20) -
             auVar41._4_4_ * 6.2831855;
        auVar64._8_4_ = fVar36 - auVar41._8_4_ * 6.2831855;
        auVar64._12_4_ = 0.0 - auVar41._12_4_ * 6.2831855;
        fVar39 = fVar26 - auVar29._0_4_ * 6.2831855;
        fVar34 = fVar25 - auVar29._4_4_ * 6.2831855;
        fVar37 = fVar13 - auVar29._8_4_ * 6.2831855;
        fVar38 = 1.5707964 - auVar29._12_4_ * 6.2831855;
        auVar63._0_4_ = -(uint)(auVar64._0_4_ < -1.5707964);
        auVar63._4_4_ = -(uint)(auVar64._4_4_ < -1.5707964);
        auVar63._8_4_ = -(uint)(auVar64._8_4_ < -1.5707964);
        auVar63._12_4_ = -(uint)(auVar64._12_4_ < -1.5707964);
        auVar43._0_4_ = -3.1415927 - fVar39;
        auVar43._4_4_ = -3.1415927 - fVar34;
        auVar43._8_4_ = -3.1415927 - fVar37;
        auVar43._12_4_ = -3.1415927 - fVar38;
        auVar66._0_4_ = -(uint)(fVar39 < -1.5707964);
        auVar66._4_4_ = -(uint)(fVar34 < -1.5707964);
        auVar66._8_4_ = -(uint)(fVar37 < -1.5707964);
        auVar66._12_4_ = -(uint)(fVar38 < -1.5707964);
        auVar18._4_4_ = -3.1415927 - auVar64._4_4_;
        auVar18._0_4_ = -3.1415927 - auVar64._0_4_;
        auVar18._8_4_ = -3.1415927 - auVar64._8_4_;
        auVar18._12_4_ = -3.1415927 - auVar64._12_4_;
        auVar64 = auVar64 ^ (auVar64 ^ auVar18) & auVar63;
        auVar9[4] = SUB41(fVar34,0);
        auVar9._0_4_ = fVar39;
        auVar9[5] = (char)((uint)fVar34 >> 8);
        auVar9[6] = (char)((uint)fVar34 >> 0x10);
        auVar9[7] = (char)((uint)fVar34 >> 0x18);
        auVar9[8] = SUB41(fVar37,0);
        auVar9[9] = (char)((uint)fVar37 >> 8);
        auVar9[10] = (char)((uint)fVar37 >> 0x10);
        auVar9[0xb] = (char)((uint)fVar37 >> 0x18);
        auVar9[0xc] = SUB41(fVar38,0);
        auVar9[0xd] = (char)((uint)fVar38 >> 8);
        auVar9[0xe] = (char)((uint)fVar38 >> 0x10);
        auVar9[0xf] = (char)((uint)fVar38 >> 0x18);
        auVar43 = auVar43 ^ (auVar43 ^ auVar9) & ~auVar66;
        fVar39 = 3.1415927 - auVar64._4_4_;
        fVar34 = 3.1415927 - auVar64._8_4_;
        fVar37 = 3.1415927 - auVar64._12_4_;
        auVar67._0_4_ = -(uint)(1.5707964 < auVar43._0_4_);
        auVar67._4_4_ = -(uint)(1.5707964 < auVar43._4_4_);
        auVar67._8_4_ = -(uint)(1.5707964 < auVar43._8_4_);
        auVar67._12_4_ = -(uint)(1.5707964 < auVar43._12_4_);
        fVar38 = 3.1415927 - auVar43._4_4_;
        fVar40 = 3.1415927 - auVar43._8_4_;
        fVar45 = 3.1415927 - auVar43._12_4_;
        auVar30._0_4_ = -(uint)(1.5707964 < auVar64._0_4_);
        auVar30._4_4_ = -(uint)(1.5707964 < auVar64._4_4_);
        auVar30._8_4_ = -(uint)(1.5707964 < auVar64._8_4_);
        auVar30._12_4_ = -(uint)(1.5707964 < auVar64._12_4_);
        auVar14[4] = SUB41(fVar38,0);
        auVar14._0_4_ = 3.1415927 - auVar43._0_4_;
        auVar14[5] = (char)((uint)fVar38 >> 8);
        auVar14[6] = (char)((uint)fVar38 >> 0x10);
        auVar14[7] = (char)((uint)fVar38 >> 0x18);
        auVar14[8] = SUB41(fVar40,0);
        auVar14[9] = (char)((uint)fVar40 >> 8);
        auVar14[10] = (char)((uint)fVar40 >> 0x10);
        auVar14[0xb] = (char)((uint)fVar40 >> 0x18);
        auVar14[0xc] = SUB41(fVar45,0);
        auVar14[0xd] = (char)((uint)fVar45 >> 8);
        auVar14[0xe] = (char)((uint)fVar45 >> 0x10);
        auVar14[0xf] = (char)((uint)fVar45 >> 0x18);
        auVar43 = auVar43 ^ (auVar43 ^ auVar14) & auVar67;
        auVar10[4] = SUB41(fVar39,0);
        auVar10._0_4_ = 3.1415927 - auVar64._0_4_;
        auVar10[5] = (char)((uint)fVar39 >> 8);
        auVar10[6] = (char)((uint)fVar39 >> 0x10);
        auVar10[7] = (char)((uint)fVar39 >> 0x18);
        auVar10[8] = SUB41(fVar34,0);
        auVar10[9] = (char)((uint)fVar34 >> 8);
        auVar10[10] = (char)((uint)fVar34 >> 0x10);
        auVar10[0xb] = (char)((uint)fVar34 >> 0x18);
        auVar10[0xc] = SUB41(fVar37,0);
        auVar10[0xd] = (char)((uint)fVar37 >> 8);
        auVar10[0xe] = (char)((uint)fVar37 >> 0x10);
        auVar10[0xf] = (char)((uint)fVar37 >> 0x18);
        auVar64 = auVar64 ^ (auVar64 ^ auVar10) & auVar30;
        auVar29 = NEON_fmov(0x3f800000,4);
        fVar40 = auVar43._0_4_;
        fVar73 = fVar40 * fVar40;
        fVar45 = auVar43._4_4_;
        fVar74 = fVar45 * fVar45;
        fVar46 = auVar43._8_4_;
        fVar75 = fVar46 * fVar46;
        fVar47 = auVar43._12_4_;
        fVar76 = fVar47 * fVar47;
        fVar39 = auVar64._0_4_;
        fVar68 = fVar39 * fVar39;
        fVar34 = auVar64._4_4_;
        fVar69 = fVar34 * fVar34;
        fVar37 = auVar64._8_4_;
        fVar70 = fVar37 * fVar37;
        fVar38 = auVar64._12_4_;
        fVar71 = fVar38 * fVar38;
        auVar65._8_4_ = 0x7fc00000;
        auVar65._0_8_ = 0x7fc000007fc00000;
        auVar65._12_4_ = 0x7fc00000;
        iVar15 = -(uint)(ABS(fVar26) == INFINITY);
        iVar16 = -(uint)(ABS(fVar25) == INFINITY);
        iVar17 = -(uint)(ABS(fVar13) == INFINITY);
        iVar6 = -(uint)(ABS(fVar35) == INFINITY);
        iVar7 = -(uint)(ABS(fVar27) == INFINITY);
        iVar8 = -(uint)(ABS(fVar36) == INFINITY);
        bVar48 = ~(byte)((uint)iVar6 >> 8);
        bVar49 = ~(byte)((uint)iVar6 >> 0x10);
        bVar50 = ~(byte)((uint)iVar6 >> 0x18);
        bVar52 = ~(byte)((uint)iVar7 >> 8);
        bVar54 = ~(byte)((uint)iVar7 >> 0x10);
        bVar56 = ~(byte)((uint)iVar7 >> 0x18);
        bVar58 = ~(byte)((uint)iVar8 >> 8);
        bVar60 = ~(byte)((uint)iVar8 >> 0x10);
        bVar62 = ~(byte)((uint)iVar8 >> 0x18);
        auVar44._0_4_ =
             fVar40 * (auVar29._0_4_ +
                      fVar73 * (fVar73 * (fVar73 * (fVar73 * (fVar73 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar44._4_4_ =
             fVar45 * (auVar29._4_4_ +
                      fVar74 * (fVar74 * (fVar74 * (fVar74 * (fVar74 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar44._8_4_ =
             fVar46 * (auVar29._8_4_ +
                      fVar75 * (fVar75 * (fVar75 * (fVar75 * (fVar75 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar44._12_4_ =
             fVar47 * (auVar29._12_4_ +
                      fVar76 * (fVar76 * (fVar76 * (fVar76 * (fVar76 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar11[1] = ~(byte)((uint)iVar15 >> 8);
        auVar11[0] = ~(byte)iVar15;
        auVar11[2] = ~(byte)((uint)iVar15 >> 0x10);
        auVar11[3] = ~(byte)((uint)iVar15 >> 0x18);
        auVar11[4] = ~(byte)iVar16;
        auVar11[5] = ~(byte)((uint)iVar16 >> 8);
        auVar11[6] = ~(byte)((uint)iVar16 >> 0x10);
        auVar11[7] = ~(byte)((uint)iVar16 >> 0x18);
        auVar11[8] = ~(byte)iVar17;
        auVar11[9] = ~(byte)((uint)iVar17 >> 8);
        auVar11[10] = ~(byte)((uint)iVar17 >> 0x10);
        auVar11[0xb] = ~(byte)((uint)iVar17 >> 0x18);
        auVar11[0xc] = 0xff;
        auVar11[0xd] = 0xff;
        auVar11[0xe] = 0xff;
        auVar11[0xf] = 0xff;
        auVar44 = auVar44 ^ (auVar44 ^ auVar65) & ~auVar11;
        auVar12[1] = ~(byte)((uint)iVar77 >> 8);
        auVar12[0] = ~(byte)iVar77;
        auVar12[2] = ~(byte)((uint)iVar77 >> 0x10);
        auVar12[3] = ~(byte)((uint)iVar77 >> 0x18);
        auVar12[4] = ~(byte)iVar78;
        auVar12[5] = ~(byte)((uint)iVar78 >> 8);
        auVar12[6] = ~(byte)((uint)iVar78 >> 0x10);
        auVar12[7] = ~(byte)((uint)iVar78 >> 0x18);
        auVar12[8] = ~(byte)iVar79;
        auVar12[9] = ~(byte)((uint)iVar79 >> 8);
        auVar12[10] = ~(byte)((uint)iVar79 >> 0x10);
        auVar12[0xb] = ~(byte)((uint)iVar79 >> 0x18);
        auVar12._12_4_ = 0;
        auVar44 = auVar44 ^ (auVar44 ^ auVar29) & ~auVar12;
        auVar4[1] = bVar48;
        auVar4[0] = ~(byte)iVar6;
        auVar4[2] = bVar49;
        auVar4[3] = bVar50;
        auVar4[4] = ~(byte)iVar7;
        auVar4[5] = bVar52;
        auVar4[6] = bVar54;
        auVar4[7] = bVar56;
        auVar4[8] = ~(byte)iVar8;
        auVar4[9] = bVar58;
        auVar4[10] = bVar60;
        auVar4[0xb] = bVar62;
        auVar4[0xc] = 0xff;
        auVar4[0xd] = 0xff;
        auVar4[0xe] = 0xff;
        auVar4[0xf] = 0xff;
        auVar44 = auVar44 ^ (auVar44 ^ auVar65) & ~auVar4;
        auVar31._0_4_ =
             fVar39 * (auVar29._0_4_ +
                      fVar68 * (fVar68 * (fVar68 * (fVar68 * (fVar68 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar31._4_4_ =
             fVar34 * (auVar29._4_4_ +
                      fVar69 * (fVar69 * (fVar69 * (fVar69 * (fVar69 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar31._8_4_ =
             fVar37 * (auVar29._8_4_ +
                      fVar70 * (fVar70 * (fVar70 * (fVar70 * (fVar70 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar31._12_4_ =
             fVar38 * (auVar29._12_4_ +
                      fVar71 * (fVar71 * (fVar71 * (fVar71 * (fVar71 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar5[1] = bVar48;
        auVar5[0] = ~(byte)iVar6;
        auVar5[2] = bVar49;
        auVar5[3] = bVar50;
        auVar5[4] = ~(byte)iVar7;
        auVar5[5] = bVar52;
        auVar5[6] = bVar54;
        auVar5[7] = bVar56;
        auVar5[8] = ~(byte)iVar8;
        auVar5[9] = bVar58;
        auVar5[10] = bVar60;
        auVar5[0xb] = bVar62;
        auVar5[0xc] = 0xff;
        auVar5[0xd] = 0xff;
        auVar5[0xe] = 0xff;
        auVar5[0xf] = 0xff;
        auVar31 = auVar31 ^ (auVar31 ^ auVar65) & ~auVar5;
        fVar39 = auVar44._4_4_;
        fVar35 = auVar31._4_4_;
        fVar25 = auVar44._8_4_;
        fVar26 = auVar31._8_4_;
        fVar27 = auVar31._0_4_;
        fVar36 = auVar44._0_4_;
        auVar32._0_8_ =
             CONCAT44(fVar26 * fVar36 * fVar39 +
                      fVar25 * fVar35 * fVar27 * (float)((ulong)_DAT_03cab3a0 >> 0x20),
                      fVar25 * fVar36 * fVar35 + fVar26 * fVar39 * fVar27 * (float)_DAT_03cab3a0);
        auVar32._8_4_ = fVar25 * fVar27 * fVar39 + fVar26 * fVar35 * fVar36 * (float)_UNK_03cab3a8;
        auVar32._12_4_ =
             fVar25 * fVar36 * fVar39 +
             fVar26 * fVar35 * fVar27 * (float)((ulong)_UNK_03cab3a8 >> 0x20);
        *(long *)(lVar22 + 0xb0) = auVar32._8_8_;
        *(undefined8 *)(lVar22 + 0xa8) = auVar32._0_8_;
        if (*(char *)(lVar22 + 0xcc) == '\0') {
          *(undefined1 *)(lVar22 + 0xcc) = 1;
          (**(code **)(*plVar23 + 0x78))(plVar23);
          bVar21 = *(char *)(lVar22 + 0xcc) == '\0';
        }
        else {
          bVar21 = false;
        }
        auVar29 = *(undefined1 (*) [16])(param_1 + 0x80);
        fVar27 = (float)*(undefined8 *)(param_1 + 0x90) +
                 auVar29._0_4_ + *(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x50);
        fVar36 = (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20) +
                 auVar29._4_4_ + *(float *)(param_1 + 100) + *(float *)(param_1 + 0x54);
        auVar33._0_8_ = CONCAT44(fVar36,fVar27);
        auVar33._8_4_ =
             (float)*(undefined8 *)(param_1 + 0x98) +
             auVar29._8_4_ + *(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x58);
        auVar33._12_4_ =
             (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) +
             auVar29._12_4_ + *(float *)(param_1 + 0x6c) + *(float *)(param_1 + 0x5c);
        *(long *)(lVar22 + 0xc0) = auVar33._8_8_;
        *(undefined8 *)(lVar22 + 0xb8) = auVar33._0_8_;
        if (bVar21) {
          *(undefined1 *)(lVar22 + 0xcc) = 1;
          (**(code **)(*plVar23 + 0x78))(plVar23);
        }
        uVar20 = CONCAT44(fVar36,fVar27);
        auVar19._8_4_ = auVar33._8_4_;
        auVar19._0_8_ = uVar20;
        auVar19._12_4_ = auVar33._12_4_;
        *(long *)(param_1 + 0x78) = auVar19._8_8_;
        *(undefined8 *)(param_1 + 0x70) = uVar20;
                    /* WARNING: Could not recover jumptable at 0x00c84214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar23 + 0x60))(plVar23);
        return;
      }
      sVar24 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


