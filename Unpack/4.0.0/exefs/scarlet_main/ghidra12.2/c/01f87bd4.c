/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f87bd4; name: FUN_01f87bd4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f87bd4(float param_1,float param_2,long param_3,uint param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float extraout_s0;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  float fVar6;
  undefined1 auVar5 [16];
  float fVar7;
  int iVar8;
  undefined8 uVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar19;
  undefined1 auVar20 [12];
  float fVar32;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  undefined1 auVar25 [16];
  undefined1 auVar24 [16];
  undefined1 auVar31 [16];
  undefined1 auVar30 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  float fVar33;
  undefined8 uVar34;
  float fVar41;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar40;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar42 [12];
  float fVar43;
  float fVar44;
  undefined8 uVar45;
  float fVar48;
  float fVar49;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined8 uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar56 [16];
  undefined1 auVar55 [16];
  undefined1 auVar54 [16];
  undefined1 auVar53 [16];
  undefined8 uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar62 [16];
  undefined1 auVar61 [16];
  undefined1 auVar60 [16];
  undefined1 auVar59 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  int iVar66;
  float fVar67;
  undefined8 uVar68;
  int iVar71;
  float fVar72;
  int iVar73;
  float fVar74;
  int iVar75;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar81;
  float fVar82;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar83;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar89 [16];
  undefined1 auVar88 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar97 [16];
  undefined1 auVar96 [16];
  undefined1 auVar95 [16];
  undefined1 auVar94 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  float fVar103;
  float fVar104;
  float fVar106;
  float fVar107;
  undefined1 auVar105 [16];
  float fVar108;
  
  FUN_00c9f8a8();
  auVar86._8_8_ = _UNK_03cabe68;
  auVar86._0_8_ = _DAT_03cabe60;
  auVar70._8_8_ = _UNK_03caa5b8;
  auVar70._0_8_ = _DAT_03caa5b0;
  if ((-1 < (int)param_4) &&
     ((int)param_4 <
      (int)((ulong)(*(long *)(param_3 + 0x2a8) - *(long *)(param_3 + 0x2a0)) >> 4) * -0x3030303)) {
    lVar1 = *(long *)(param_3 + 0x2a0) + (ulong)param_4 * 0x550;
    auVar70 = *(undefined1 (*) [16])(lVar1 + 0x480);
    auVar86 = *(undefined1 (*) [16])(lVar1 + 0x490);
  }
  uVar15 = a64_TBL(ZEXT816(0),auVar86,DAT_03cb56c8);
  uVar9 = a64_TBL(ZEXT816(0),auVar70,DAT_03cb56c8);
  uVar34 = a64_TBL(ZEXT816(0),auVar86,DAT_03cb54d8);
  uVar19 = a64_TBL(ZEXT816(0),auVar70,DAT_03cb54d8);
  uVar50 = a64_TBL(ZEXT816(0),auVar70,DAT_03cb5488);
  uVar45 = a64_TBL(ZEXT816(0),auVar86,DAT_03cb5488);
  uVar68 = a64_TBL(ZEXT816(0),auVar70,DAT_03cb54c0);
  uVar57 = a64_TBL(ZEXT816(0),auVar86,DAT_03cb54c0);
  fVar43 = 0.0;
  fVar7 = (float)uVar15 * (float)uVar50 - (float)uVar45 * (float)uVar9;
  fVar10 = (float)((ulong)uVar15 >> 0x20) * (float)((ulong)uVar50 >> 0x20) -
           (float)((ulong)uVar45 >> 0x20) * (float)((ulong)uVar9 >> 0x20);
  fVar14 = (float)uVar34 * (float)uVar68 - (float)uVar57 * (float)uVar19;
  fVar18 = (float)((ulong)uVar34 >> 0x20) * (float)((ulong)uVar68 >> 0x20) -
           (float)((ulong)uVar57 >> 0x20) * (float)((ulong)uVar19 >> 0x20);
  auVar16._0_4_ = fVar7 * fVar7 + fVar10 * fVar10;
  auVar16._4_4_ = fVar14 * fVar14 + fVar18 * fVar18;
  auVar16._8_4_ = fVar7 * fVar7 + fVar10 * fVar10;
  auVar16._12_4_ = fVar14 * fVar14 + fVar18 * fVar18;
  auVar16 = NEON_ext(auVar16,auVar16,4,1);
  auVar77._0_4_ = auVar16._0_4_ + auVar16._4_4_;
  auVar77._4_4_ = auVar16._8_4_ + auVar16._12_4_;
  auVar77._8_4_ = auVar16._0_4_ + auVar16._4_4_;
  auVar77._12_4_ = auVar16._8_4_ + auVar16._12_4_;
  auVar16 = NEON_frsqrte(auVar77,4);
  auVar35._0_4_ = auVar77._0_4_ * auVar16._0_4_;
  auVar35._4_4_ = auVar77._4_4_ * auVar16._4_4_;
  auVar35._8_4_ = auVar77._8_4_ * auVar16._8_4_;
  auVar35._12_4_ = auVar77._12_4_ * auVar16._12_4_;
  auVar35 = NEON_frsqrts(auVar16,auVar35,4);
  auVar90._0_4_ = auVar16._0_4_ * auVar35._0_4_;
  auVar90._4_4_ = auVar16._4_4_ * auVar35._4_4_;
  auVar90._8_4_ = auVar16._8_4_ * auVar35._8_4_;
  auVar90._12_4_ = auVar16._12_4_ * auVar35._12_4_;
  auVar101._0_4_ = auVar77._0_4_ * auVar90._0_4_;
  auVar101._4_4_ = auVar77._4_4_ * auVar90._4_4_;
  auVar101._8_4_ = auVar77._8_4_ * auVar90._8_4_;
  auVar101._12_4_ = auVar77._12_4_ * auVar90._12_4_;
  auVar16 = NEON_frsqrts(auVar90,auVar101,4);
  fVar7 = fVar7 * auVar90._0_4_ * auVar16._0_4_;
  fVar10 = fVar10 * auVar90._4_4_ * auVar16._4_4_;
  fVar14 = fVar14 * auVar90._8_4_ * auVar16._8_4_;
  fVar18 = fVar18 * auVar90._12_4_ * auVar16._12_4_;
  iVar8 = -(uint)(auVar77._0_4_ == 0.0);
  iVar11 = -(uint)(auVar77._4_4_ == 0.0);
  iVar12 = -(uint)(auVar77._8_4_ == 0.0);
  iVar13 = -(uint)(auVar77._12_4_ == 0.0);
  auVar16 = NEON_fmov(0x3f800000,4);
  if (param_1 < 0.0) {
    if (((int)param_4 < 0) ||
       ((int)((ulong)(*(long *)(param_3 + 0x2a8) - *(long *)(param_3 + 0x2a0)) >> 4) * -0x3030303 <=
        (int)param_4)) goto LAB_01f87d38;
    fVar43 = *(float *)(*(long *)(param_3 + 0x2a0) + (ulong)param_4 * 0x550 + 0x40);
  }
  else {
    if (((int)param_4 < 0) ||
       ((int)((ulong)(*(long *)(param_3 + 0x2a8) - *(long *)(param_3 + 0x2a0)) >> 4) * -0x3030303 <=
        (int)param_4)) goto LAB_01f87d38;
    fVar43 = *(float *)(*(long *)(param_3 + 0x2a0) + (ulong)param_4 * 0x550 + 0x44);
  }
  fVar43 = fVar43 * 3.1415927;
LAB_01f87d38:
  fVar43 = (fVar43 / 180.0) * -2.0 * param_1 * 0.5;
  iVar66 = -(uint)(ABS(fVar43) == INFINITY);
  iVar71 = -(uint)(ABS(fVar43) == INFINITY);
  iVar73 = -(uint)(ABS(fVar43) == INFINITY);
  iVar75 = -(uint)(ABS(fVar43) == INFINITY);
  fVar44 = fVar43 + (float)_DAT_03caa8d0;
  fVar32 = (float)((ulong)_DAT_03caa8d0 >> 0x20);
  fVar48 = fVar43 + fVar32;
  fVar49 = fVar43 + (float)_UNK_03caa8d8;
  fVar104 = (float)((ulong)_UNK_03caa8d8 >> 0x20);
  fVar43 = fVar43 + fVar104;
  auVar69[0] = ~(byte)iVar66;
  auVar69[1] = ~(byte)((uint)iVar66 >> 8);
  auVar69[2] = ~(byte)((uint)iVar66 >> 0x10);
  auVar69[3] = ~(byte)((uint)iVar66 >> 0x18);
  auVar69[4] = ~(byte)iVar71;
  auVar69[5] = ~(byte)((uint)iVar71 >> 8);
  auVar69[6] = ~(byte)((uint)iVar71 >> 0x10);
  auVar69[7] = ~(byte)((uint)iVar71 >> 0x18);
  auVar69[8] = ~(byte)iVar73;
  auVar69[9] = ~(byte)((uint)iVar73 >> 8);
  auVar69[10] = ~(byte)((uint)iVar73 >> 0x10);
  auVar69[0xb] = ~(byte)((uint)iVar73 >> 0x18);
  auVar69[0xc] = ~(byte)iVar75;
  auVar69[0xd] = ~(byte)((uint)iVar75 >> 8);
  auVar69[0xe] = ~(byte)((uint)iVar75 >> 0x10);
  auVar69[0xf] = ~(byte)((uint)iVar75 >> 0x18);
  fVar33 = (float)CONCAT13((byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                           CONCAT12((byte)((uint)fVar7 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                                    CONCAT11((byte)((uint)fVar7 >> 8) & ~(byte)((uint)iVar8 >> 8),
                                             SUB41(fVar7,0) & ~(byte)iVar8)));
  fVar40 = (float)CONCAT13((byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                           CONCAT12((byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                                    CONCAT11((byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar11 >> 8),
                                             SUB41(fVar10,0) & ~(byte)iVar11)));
  fVar41 = (float)CONCAT13((byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                           CONCAT12((byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10),
                                    CONCAT11((byte)((uint)fVar14 >> 8) & ~(byte)((uint)iVar12 >> 8),
                                             SUB41(fVar14,0) & ~(byte)iVar12)));
  auVar76._0_4_ =
       (int)((float)(-(uint)(0.0 <= fVar44) & 0x80000000 ^ 0xbf000000) + fVar44 * 0.15915494);
  auVar76._4_4_ =
       (int)((float)(-(uint)(0.0 <= fVar48) & 0x80000000 ^ 0xbf000000) + fVar48 * 0.15915494);
  auVar76._8_4_ =
       (int)((float)(-(uint)(0.0 <= fVar49) & 0x80000000 ^ 0xbf000000) + fVar49 * 0.15915494);
  auVar76._12_4_ =
       (int)((float)(-(uint)(0.0 <= fVar43) & 0x80000000 ^ 0xbf000000) + fVar43 * 0.15915494);
  fVar6 = auVar70._8_4_;
  auVar58._4_4_ = fVar6;
  auVar58._0_4_ = fVar6;
  auVar58._8_4_ = fVar6;
  auVar58._12_4_ = fVar6;
  auVar77 = NEON_scvtf(auVar76,4);
  fVar44 = fVar44 + auVar77._0_4_ * -6.2831855;
  fVar48 = fVar48 + auVar77._4_4_ * -6.2831855;
  fVar49 = fVar49 + auVar77._8_4_ * -6.2831855;
  fVar43 = fVar43 + auVar77._12_4_ * -6.2831855;
  fVar103 = 0.0;
  fVar7 = auVar70._0_4_;
  auVar59._4_12_ = auVar58._4_12_;
  auVar59._0_4_ = fVar7;
  fVar14 = auVar70._4_4_;
  auVar61._0_8_ = auVar59._0_8_;
  auVar61._8_4_ = fVar14;
  auVar61._12_4_ = fVar6;
  auVar60._8_8_ = auVar61._8_8_;
  auVar60._4_4_ = fVar6;
  auVar60._0_4_ = fVar7;
  auVar62._0_12_ = auVar60._0_12_;
  auVar62._12_4_ = fVar6;
  fVar44 = (float)((uint)fVar44 ^
                  ((uint)fVar44 ^ (uint)(-3.1415927 - fVar44)) & -(uint)(fVar44 < -1.5707964));
  fVar48 = (float)((uint)fVar48 ^
                  ((uint)fVar48 ^ (uint)(-3.1415927 - fVar48)) & -(uint)(fVar48 < -1.5707964));
  fVar49 = (float)((uint)fVar49 ^
                  ((uint)fVar49 ^ (uint)(-3.1415927 - fVar49)) & -(uint)(fVar49 < -1.5707964));
  fVar43 = (float)((uint)fVar43 ^
                  ((uint)fVar43 ^ (uint)(-3.1415927 - fVar43)) & -(uint)(fVar43 < -1.5707964));
  fVar44 = (float)((uint)fVar44 ^
                  ((uint)fVar44 ^ (uint)(3.1415927 - fVar44)) & -(uint)(1.5707964 < fVar44));
  fVar48 = (float)((uint)fVar48 ^
                  ((uint)fVar48 ^ (uint)(3.1415927 - fVar48)) & -(uint)(1.5707964 < fVar48));
  fVar49 = (float)((uint)fVar49 ^
                  ((uint)fVar49 ^ (uint)(3.1415927 - fVar49)) & -(uint)(1.5707964 < fVar49));
  fVar43 = (float)((uint)fVar43 ^
                  ((uint)fVar43 ^ (uint)(3.1415927 - fVar43)) & -(uint)(1.5707964 < fVar43));
  auVar84._0_12_ = ZEXT812(0);
  auVar84._12_4_ = -(uint)(fVar43 == 1.5707964);
  fVar10 = fVar44 * fVar44;
  fVar81 = fVar48 * fVar48;
  fVar82 = fVar49 * fVar49;
  fVar83 = fVar43 * fVar43;
  auVar78._8_4_ = 0x7fc00000;
  auVar78._0_8_ = 0x7fc000007fc00000;
  auVar78._12_4_ = 0x7fc00000;
  auVar46._0_4_ =
       fVar44 * (auVar16._0_4_ +
                fVar10 * (fVar10 * (fVar10 * (fVar10 * (fVar10 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar46._4_4_ =
       fVar48 * (auVar16._4_4_ +
                fVar81 * (fVar81 * (fVar81 * (fVar81 * (fVar81 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar46._8_4_ =
       fVar49 * (auVar16._8_4_ +
                fVar82 * (fVar82 * (fVar82 * (fVar82 * (fVar82 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar46._12_4_ =
       fVar43 * (auVar16._12_4_ +
                fVar83 * (fVar83 * (fVar83 * (fVar83 * (fVar83 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar46 = auVar46 ^ (auVar46 ^ auVar16) & auVar84;
  fVar10 = auVar86._0_4_;
  fVar43 = auVar86._4_4_;
  fVar48 = auVar86._8_4_;
  fVar44 = auVar86._12_4_ * auVar86._12_4_;
  auVar46 = auVar46 ^ (auVar46 ^ auVar78) & ~auVar69;
  auVar91._0_4_ = fVar10 * fVar10 + fVar43 * fVar43;
  auVar91._4_4_ = fVar48 * fVar48 + fVar44;
  auVar91._8_4_ = fVar10 * fVar10 + fVar43 * fVar43;
  auVar91._12_4_ = fVar48 * fVar48 + fVar44;
  auVar70 = NEON_ext(auVar91,auVar91,4,1);
  auVar2._0_4_ = auVar70._0_4_ + auVar70._4_4_;
  auVar2._4_4_ = auVar70._8_4_ + auVar70._12_4_;
  auVar2._8_4_ = auVar70._0_4_ + auVar70._4_4_;
  auVar2._12_4_ = auVar70._8_4_ + auVar70._12_4_;
  auVar70 = NEON_frsqrte(auVar2,4);
  auVar85._0_4_ = auVar2._0_4_ * auVar70._0_4_;
  auVar85._4_4_ = auVar2._4_4_ * auVar70._4_4_;
  auVar85._8_4_ = auVar2._8_4_ * auVar70._8_4_;
  auVar85._12_4_ = auVar2._12_4_ * auVar70._12_4_;
  auVar86 = NEON_frsqrts(auVar70,auVar85,4);
  auVar79._0_4_ = auVar70._0_4_ * auVar86._0_4_;
  auVar79._4_4_ = auVar70._4_4_ * auVar86._4_4_;
  auVar79._8_4_ = auVar70._8_4_ * auVar86._8_4_;
  auVar79._12_4_ = auVar70._12_4_ * auVar86._12_4_;
  auVar87._0_4_ = auVar2._0_4_ * auVar79._0_4_;
  auVar87._4_4_ = auVar2._4_4_ * auVar79._4_4_;
  auVar87._8_4_ = auVar2._8_4_ * auVar79._8_4_;
  auVar87._12_4_ = auVar2._12_4_ * auVar79._12_4_;
  iVar8 = -(uint)(auVar2._0_4_ == 0.0);
  iVar11 = -(uint)(auVar2._4_4_ == 0.0);
  iVar12 = -(uint)(auVar2._8_4_ == 0.0);
  auVar70 = NEON_frsqrts(auVar79,auVar87,4);
  auVar77 = NEON_ext(auVar62,auVar62,8,1);
  fVar10 = fVar10 * auVar79._0_4_ * auVar70._0_4_;
  fVar43 = fVar43 * auVar79._4_4_ * auVar70._4_4_;
  fVar48 = fVar48 * auVar79._8_4_ * auVar70._8_4_;
  fVar44 = (float)CONCAT13((byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                           CONCAT12((byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                                    CONCAT11((byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar8 >> 8),
                                             SUB41(fVar10,0) & ~(byte)iVar8)));
  auVar42._0_8_ =
       CONCAT17((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                CONCAT16((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                         CONCAT15((byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar11 >> 8),
                                  CONCAT14(SUB41(fVar43,0) & ~(byte)iVar11,fVar44))));
  auVar42[8] = SUB41(fVar48,0) & ~(byte)iVar12;
  auVar42[9] = (byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar12 >> 8);
  auVar42[10] = (byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10);
  auVar42[0xb] = (byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18);
  fVar44 = fVar44 * auVar46._0_4_;
  fVar48 = (float)((ulong)auVar42._0_8_ >> 0x20) * auVar46._4_4_;
  auVar47._0_8_ = CONCAT44(fVar48,fVar44);
  auVar47._8_4_ = auVar42._8_4_ * auVar46._8_4_;
  auVar47._12_4_ = auVar46._12_4_ * 1.0;
  auVar51._4_4_ = auVar47._8_4_;
  auVar51._0_4_ = auVar47._8_4_;
  auVar51._8_4_ = auVar47._8_4_;
  auVar51._12_4_ = auVar47._8_4_;
  auVar86 = NEON_ext(auVar51,auVar47,0xc,1);
  auVar52._4_4_ = fVar48;
  auVar52._0_4_ = fVar48;
  auVar52._8_4_ = fVar48;
  auVar52._12_4_ = fVar48;
  auVar92._8_8_ = auVar47._8_8_;
  auVar92._0_8_ = auVar47._0_8_;
  auVar93._0_12_ = auVar92._0_12_;
  auVar93._12_4_ = fVar44;
  auVar35 = NEON_ext(auVar52,auVar86,0xc,1);
  fVar10 = auVar77._0_4_;
  auVar53._4_12_ = auVar52._4_12_;
  auVar53._0_4_ = fVar10;
  fVar43 = auVar77._8_4_;
  auVar55._0_8_ = auVar53._0_8_;
  auVar55._8_4_ = fVar43;
  auVar55._12_4_ = fVar48;
  auVar54._8_8_ = auVar55._8_8_;
  auVar54._4_4_ = fVar7;
  auVar54._0_4_ = fVar10;
  auVar56._0_12_ = auVar54._0_12_;
  auVar56._12_4_ = fVar14;
  auVar70 = NEON_ext(auVar56,auVar77,8,1);
  auVar90 = NEON_ext(auVar70,auVar70,0xc,1);
  fVar49 = (float)_DAT_03cab640;
  fVar81 = (float)((ulong)_DAT_03cab640 >> 0x20);
  fVar82 = (float)_UNK_03cab648;
  fVar83 = (float)((ulong)_UNK_03cab648 >> 0x20);
  fVar67 = -fVar44;
  fVar72 = -fVar48;
  fVar74 = -auVar47._8_4_;
  auVar63._0_4_ =
       (fVar7 * auVar47._12_4_ + fVar44 * fVar49 * 0.0 + auVar90._0_4_ * auVar35._0_4_ * fVar49) -
       auVar86._0_4_ * fVar10;
  auVar63._4_4_ =
       (fVar14 * auVar47._12_4_ + fVar48 * fVar81 * 0.0 + auVar90._4_4_ * auVar35._4_4_ * fVar81) -
       auVar86._4_4_ * auVar77._4_4_;
  auVar63._8_4_ =
       (fVar6 * auVar47._12_4_ + auVar47._8_4_ * fVar82 * 0.0 +
       auVar90._8_4_ * auVar35._8_4_ * fVar82) - auVar86._8_4_ * fVar43;
  auVar63._12_4_ =
       (auVar47._12_4_ * 0.0 + fVar7 * fVar44 * fVar83 + auVar90._12_4_ * auVar35._12_4_ * fVar83) -
       auVar86._12_4_ * auVar77._12_4_;
  auVar94._4_12_ = auVar93._4_12_;
  auVar94._0_4_ = fVar67;
  auVar96._0_8_ = auVar94._0_8_;
  auVar96._8_4_ = fVar72;
  auVar96._12_4_ = fVar44;
  auVar95._8_8_ = auVar96._8_8_;
  auVar95._4_4_ = fVar74;
  auVar95._0_4_ = fVar67;
  auVar97._0_12_ = auVar95._0_12_;
  auVar97._12_4_ = fVar74;
  auVar80._4_4_ = auVar63._8_4_;
  auVar80._0_4_ = auVar63._8_4_;
  auVar80._8_4_ = auVar63._8_4_;
  auVar80._12_4_ = auVar63._8_4_;
  auVar70 = NEON_ext(auVar80,auVar63,0xc,1);
  auVar86 = NEON_ext(auVar97,auVar97,8,1);
  if (param_2 < 0.0) {
    fVar103 = 0.0;
    if ((-1 < (int)param_4) &&
       ((int)param_4 <
        (int)((ulong)(*(long *)(param_3 + 0x2a8) - *(long *)(param_3 + 0x2a0)) >> 4) * -0x3030303))
    {
      fVar103 = *(float *)(*(long *)(param_3 + 0x2a0) + (ulong)param_4 * 0x550 + 0x4c) * 3.1415927;
    }
  }
  else if ((-1 < (int)param_4) &&
          ((int)param_4 <
           (int)((ulong)(*(long *)(param_3 + 0x2a8) - *(long *)(param_3 + 0x2a0)) >> 4) * -0x3030303
          )) {
    fVar103 = *(float *)(*(long *)(param_3 + 0x2a0) + (ulong)param_4 * 0x550 + 0x48) * 3.1415927;
  }
  fVar44 = (fVar103 / 180.0) * -2.0 * param_2 * 0.5;
  iVar8 = -(uint)(ABS(fVar44) == INFINITY);
  iVar11 = -(uint)(ABS(fVar44) == INFINITY);
  iVar12 = -(uint)(ABS(fVar44) == INFINITY);
  iVar66 = -(uint)(ABS(fVar44) == INFINITY);
  auVar36[0] = ~(byte)iVar8;
  auVar36[1] = ~(byte)((uint)iVar8 >> 8);
  auVar36[2] = ~(byte)((uint)iVar8 >> 0x10);
  auVar36[3] = ~(byte)((uint)iVar8 >> 0x18);
  auVar36[4] = ~(byte)iVar11;
  auVar36[5] = ~(byte)((uint)iVar11 >> 8);
  auVar36[6] = ~(byte)((uint)iVar11 >> 0x10);
  auVar36[7] = ~(byte)((uint)iVar11 >> 0x18);
  auVar36[8] = ~(byte)iVar12;
  auVar36[9] = ~(byte)((uint)iVar12 >> 8);
  auVar36[10] = ~(byte)((uint)iVar12 >> 0x10);
  auVar36[0xb] = ~(byte)((uint)iVar12 >> 0x18);
  auVar36[0xc] = ~(byte)iVar66;
  auVar36[0xd] = ~(byte)((uint)iVar66 >> 8);
  auVar36[0xe] = ~(byte)((uint)iVar66 >> 0x10);
  auVar36[0xf] = ~(byte)((uint)iVar66 >> 0x18);
  fVar48 = fVar44 + (float)_DAT_03caa8d0;
  fVar32 = fVar44 + fVar32;
  fVar103 = fVar44 + (float)_UNK_03caa8d8;
  fVar44 = fVar44 + fVar104;
  auVar105._0_4_ =
       (int)((float)(-(uint)(0.0 <= fVar48) & 0x80000000 ^ 0xbf000000) + fVar48 * 0.15915494);
  auVar105._4_4_ =
       (int)((float)(-(uint)(0.0 <= fVar32) & 0x80000000 ^ 0xbf000000) + fVar32 * 0.15915494);
  auVar105._8_4_ =
       (int)((float)(-(uint)(0.0 <= fVar103) & 0x80000000 ^ 0xbf000000) + fVar103 * 0.15915494);
  auVar105._12_4_ =
       (int)((float)(-(uint)(0.0 <= fVar44) & 0x80000000 ^ 0xbf000000) + fVar44 * 0.15915494);
  auVar35 = NEON_scvtf(auVar105,4);
  fVar48 = fVar48 + auVar35._0_4_ * -6.2831855;
  fVar32 = fVar32 + auVar35._4_4_ * -6.2831855;
  fVar103 = fVar103 + auVar35._8_4_ * -6.2831855;
  fVar44 = fVar44 + auVar35._12_4_ * -6.2831855;
  fVar48 = (float)((uint)fVar48 ^
                  ((uint)fVar48 ^ (uint)(-3.1415927 - fVar48)) & -(uint)(fVar48 < -1.5707964));
  fVar32 = (float)((uint)fVar32 ^
                  ((uint)fVar32 ^ (uint)(-3.1415927 - fVar32)) & -(uint)(fVar32 < -1.5707964));
  fVar103 = (float)((uint)fVar103 ^
                   ((uint)fVar103 ^ (uint)(-3.1415927 - fVar103)) & -(uint)(fVar103 < -1.5707964));
  fVar44 = (float)((uint)fVar44 ^
                  ((uint)fVar44 ^ (uint)(-3.1415927 - fVar44)) & -(uint)(fVar44 < -1.5707964));
  fVar48 = (float)((uint)fVar48 ^
                  ((uint)fVar48 ^ (uint)(3.1415927 - fVar48)) & -(uint)(1.5707964 < fVar48));
  fVar32 = (float)((uint)fVar32 ^
                  ((uint)fVar32 ^ (uint)(3.1415927 - fVar32)) & -(uint)(1.5707964 < fVar32));
  fVar103 = (float)((uint)fVar103 ^
                   ((uint)fVar103 ^ (uint)(3.1415927 - fVar103)) & -(uint)(1.5707964 < fVar103));
  fVar44 = (float)((uint)fVar44 ^
                  ((uint)fVar44 ^ (uint)(3.1415927 - fVar44)) & -(uint)(1.5707964 < fVar44));
  auVar99._12_4_ = -(uint)(fVar44 == 1.5707964);
  auVar99._0_12_ = ZEXT812(0);
  fVar104 = fVar48 * fVar48;
  fVar106 = fVar32 * fVar32;
  fVar107 = fVar103 * fVar103;
  fVar108 = fVar44 * fVar44;
  auVar21._0_4_ =
       fVar48 * (auVar16._0_4_ +
                fVar104 * (fVar104 * (fVar104 * (fVar104 * (fVar104 * -2.5052108e-08 + 2.7557319e-06
                                                           ) + -0.0001984127) + 0.008333334) +
                          -0.16666667));
  auVar21._4_4_ =
       fVar32 * (auVar16._4_4_ +
                fVar106 * (fVar106 * (fVar106 * (fVar106 * (fVar106 * -2.5052108e-08 + 2.7557319e-06
                                                           ) + -0.0001984127) + 0.008333334) +
                          -0.16666667));
  auVar21._8_4_ =
       fVar103 * (auVar16._8_4_ +
                 fVar107 * (fVar107 * (fVar107 * (fVar107 * (fVar107 * -2.5052108e-08 +
                                                            2.7557319e-06) + -0.0001984127) +
                                      0.008333334) + -0.16666667));
  auVar21._12_4_ =
       fVar44 * (auVar16._12_4_ +
                fVar108 * (fVar108 * (fVar108 * (fVar108 * (fVar108 * -2.5052108e-08 + 2.7557319e-06
                                                           ) + -0.0001984127) + 0.008333334) +
                          -0.16666667));
  auVar16 = auVar16 ^ (auVar16 ^ auVar21) & ~auVar99;
  fVar18 = (float)(CONCAT17((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                            CONCAT16((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10),
                                     CONCAT15((byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar13 >> 8)
                                              ,CONCAT14(SUB41(fVar18,0) & ~(byte)iVar13,fVar41))))
                  >> 0x20);
  fVar18 = fVar18 * fVar18;
  auVar22._8_4_ = 0x7fc00000;
  auVar22._0_8_ = 0x7fc000007fc00000;
  auVar22._12_4_ = 0x7fc00000;
  auVar3._0_4_ = fVar33 * fVar33 + fVar40 * fVar40;
  auVar3._4_4_ = fVar41 * fVar41 + fVar18;
  auVar3._8_4_ = fVar33 * fVar33 + fVar40 * fVar40;
  auVar3._12_4_ = fVar41 * fVar41 + fVar18;
  auVar16 = auVar16 ^ (auVar16 ^ auVar22) & ~auVar36;
  lVar1 = param_3 + (long)*(int *)(*(long *)(param_3 + 0x2a0) + (long)(int)param_4 * 0x550 + 0x4ec)
                    * 0xd0;
  auVar35 = NEON_ext(auVar3,auVar3,4,1);
  auVar4._0_4_ = auVar35._0_4_ + auVar35._4_4_;
  auVar4._4_4_ = auVar35._8_4_ + auVar35._12_4_;
  auVar4._8_4_ = auVar35._0_4_ + auVar35._4_4_;
  auVar4._12_4_ = auVar35._8_4_ + auVar35._12_4_;
  auVar35 = NEON_frsqrte(auVar4,4);
  auVar100._0_4_ = auVar4._0_4_ * auVar35._0_4_;
  auVar100._4_4_ = auVar4._4_4_ * auVar35._4_4_;
  auVar100._8_4_ = auVar4._8_4_ * auVar35._8_4_;
  auVar100._12_4_ = auVar4._12_4_ * auVar35._12_4_;
  auVar101 = NEON_frsqrts(auVar35,auVar100,4);
  auVar37._0_4_ = auVar35._0_4_ * auVar101._0_4_;
  auVar37._4_4_ = auVar35._4_4_ * auVar101._4_4_;
  auVar37._8_4_ = auVar35._8_4_ * auVar101._8_4_;
  auVar37._12_4_ = auVar35._12_4_ * auVar101._12_4_;
  auVar102._0_4_ = auVar4._0_4_ * auVar37._0_4_;
  auVar102._4_4_ = auVar4._4_4_ * auVar37._4_4_;
  auVar102._8_4_ = auVar4._8_4_ * auVar37._8_4_;
  auVar102._12_4_ = auVar4._12_4_ * auVar37._12_4_;
  iVar8 = -(uint)(auVar4._0_4_ == 0.0);
  iVar11 = -(uint)(auVar4._4_4_ == 0.0);
  iVar12 = -(uint)(auVar4._8_4_ == 0.0);
  auVar35 = NEON_frsqrts(auVar37,auVar102,4);
  fVar33 = fVar33 * auVar37._0_4_ * auVar35._0_4_;
  fVar40 = fVar40 * auVar37._4_4_ * auVar35._4_4_;
  fVar41 = fVar41 * auVar37._8_4_ * auVar35._8_4_;
  fVar18 = (float)CONCAT13((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                           CONCAT12((byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                                    CONCAT11((byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar8 >> 8),
                                             SUB41(fVar33,0) & ~(byte)iVar8)));
  auVar20._0_8_ =
       CONCAT17((byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                CONCAT16((byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                         CONCAT15((byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar11 >> 8),
                                  CONCAT14(SUB41(fVar40,0) & ~(byte)iVar11,fVar18))));
  auVar20[8] = SUB41(fVar41,0) & ~(byte)iVar12;
  auVar20[9] = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar12 >> 8);
  auVar20[10] = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10);
  auVar20[0xb] = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18);
  auVar17._0_4_ = fVar18 * auVar16._0_4_;
  auVar17._4_4_ = (float)((ulong)auVar20._0_8_ >> 0x20) * auVar16._4_4_;
  auVar17._8_4_ = auVar20._8_4_ * auVar16._8_4_;
  auVar17._12_4_ = auVar16._12_4_ * 1.0;
  auVar24._0_4_ = -auVar17._0_4_;
  fVar32 = -auVar17._4_4_;
  auVar23._8_4_ = -auVar17._8_4_;
  auVar23._4_4_ = auVar23._8_4_;
  auVar23._0_4_ = auVar23._8_4_;
  auVar23._12_4_ = auVar23._8_4_;
  auVar38._4_4_ = auVar17._8_4_;
  auVar38._0_4_ = auVar17._8_4_;
  auVar38._8_4_ = auVar17._8_4_;
  auVar38._12_4_ = auVar17._8_4_;
  auVar88._12_4_ = fVar7;
  auVar88._8_4_ = auVar86._8_4_;
  auVar88._4_4_ = fVar67;
  auVar88._0_4_ = auVar86._0_4_;
  auVar89._0_12_ = auVar88._0_12_;
  auVar89._12_4_ = fVar72;
  auVar98._4_4_ = auVar17._4_4_;
  auVar98._0_4_ = auVar17._4_4_;
  auVar98._8_4_ = auVar17._4_4_;
  auVar98._12_4_ = auVar17._4_4_;
  auVar24._4_12_ = auVar23._4_12_;
  auVar26._0_8_ = auVar24._0_8_;
  auVar26._8_4_ = fVar32;
  auVar26._12_4_ = auVar23._8_4_;
  auVar25._8_8_ = auVar26._8_8_;
  auVar25._4_4_ = auVar23._8_4_;
  auVar25._0_4_ = auVar24._0_4_;
  auVar27._0_12_ = auVar25._0_12_;
  auVar27._12_4_ = auVar23._8_4_;
  auVar16 = NEON_ext(auVar38,auVar17,0xc,1);
  auVar35 = NEON_ext(auVar98,auVar16,0xc,1);
  auVar101 = NEON_ext(auVar89,auVar86,8,1);
  auVar91 = NEON_ext(auVar27,auVar27,8,1);
  fVar18 = auVar91._0_4_;
  auVar28._4_12_ = auVar27._4_12_;
  auVar28._0_4_ = fVar18;
  auVar30._0_8_ = auVar28._0_8_;
  auVar30._8_4_ = auVar91._8_4_;
  auVar30._12_4_ = auVar23._8_4_;
  auVar29._8_8_ = auVar30._8_8_;
  auVar29._4_4_ = auVar24._0_4_;
  auVar29._0_4_ = fVar18;
  auVar31._0_12_ = auVar29._0_12_;
  auVar31._12_4_ = fVar32;
  auVar5._0_4_ = (fVar7 * auVar17._12_4_ + auVar17._0_4_ * fVar49 * 0.0 +
                 auVar90._0_4_ * auVar35._0_4_ * fVar49) - auVar16._0_4_ * fVar10;
  auVar5._4_4_ = (fVar14 * auVar17._12_4_ + auVar17._4_4_ * fVar81 * 0.0 +
                 auVar90._4_4_ * auVar35._4_4_ * fVar81) - auVar16._4_4_ * auVar77._4_4_;
  auVar5._8_4_ = (fVar6 * auVar17._12_4_ + auVar17._8_4_ * fVar82 * 0.0 +
                 auVar90._8_4_ * auVar35._8_4_ * fVar82) - auVar16._8_4_ * fVar43;
  auVar5._12_4_ =
       (auVar17._12_4_ * 0.0 + fVar7 * auVar17._0_4_ * fVar83 +
       auVar90._12_4_ * auVar35._12_4_ * fVar83) - auVar16._12_4_ * auVar77._12_4_;
  auVar64._4_4_ = auVar63._4_4_;
  auVar64._0_4_ = auVar63._4_4_;
  auVar64._8_4_ = auVar63._4_4_;
  auVar64._12_4_ = auVar63._4_4_;
  auVar90 = NEON_ext(auVar64,auVar70,0xc,1);
  auVar65._4_4_ = auVar5._8_4_;
  auVar65._0_4_ = auVar5._8_4_;
  auVar65._8_4_ = auVar5._8_4_;
  auVar65._12_4_ = auVar5._8_4_;
  auVar35 = NEON_ext(auVar65,auVar5,0xc,1);
  auVar39._4_4_ = auVar5._4_4_;
  auVar39._0_4_ = auVar5._4_4_;
  auVar39._8_4_ = auVar5._4_4_;
  auVar39._12_4_ = auVar5._4_4_;
  auVar101 = NEON_ext(auVar101,auVar101,0xc,1);
  auVar16 = NEON_ext(auVar31,auVar91,8,1);
  auVar77 = NEON_ext(auVar39,auVar35,0xc,1);
  auVar16 = NEON_ext(auVar16,auVar16,0xc,1);
  *(ulong *)(lVar1 + 0x108) =
       CONCAT44(extraout_var_01 + 0.0 + 0.0,
                extraout_var_00 +
                ((fVar74 * auVar63._12_4_ + auVar47._12_4_ * auVar63._8_4_ * fVar82 +
                 auVar101._8_4_ * auVar90._8_4_ * fVar82) - auVar70._8_4_ * auVar86._8_4_) +
                ((auVar23._8_4_ * auVar5._12_4_ + auVar17._12_4_ * auVar5._8_4_ * fVar82 +
                 auVar16._8_4_ * auVar77._8_4_ * fVar82) - auVar35._8_4_ * auVar91._8_4_));
  *(ulong *)(lVar1 + 0x100) =
       CONCAT44(extraout_var +
                ((fVar72 * auVar63._12_4_ + auVar47._12_4_ * auVar63._4_4_ * fVar81 +
                 auVar101._4_4_ * auVar90._4_4_ * fVar81) - auVar70._4_4_ * auVar86._4_4_) +
                ((fVar32 * auVar5._12_4_ + auVar17._12_4_ * auVar5._4_4_ * fVar81 +
                 auVar16._4_4_ * auVar77._4_4_ * fVar81) - auVar35._4_4_ * auVar91._4_4_),
                extraout_s0 +
                ((fVar67 * auVar63._12_4_ + auVar47._12_4_ * auVar63._0_4_ * fVar49 +
                 auVar101._0_4_ * auVar90._0_4_ * fVar49) - auVar70._0_4_ * auVar86._0_4_) +
                ((auVar24._0_4_ * auVar5._12_4_ + auVar17._12_4_ * auVar5._0_4_ * fVar49 +
                 auVar16._0_4_ * auVar77._0_4_ * fVar49) - auVar35._0_4_ * fVar18));
  *(undefined4 *)(param_3 + 0x6c) = 2;
  return;
}


