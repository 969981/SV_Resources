/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c9d794; name: FUN_00c9d794
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_00c9d794(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
            long param_5,uint param_6,uint param_7)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar28;
  int iVar29;
  undefined8 uVar21;
  undefined1 auVar22 [12];
  int iVar20;
  float fVar30;
  int iVar31;
  float fVar32;
  int iVar33;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar34;
  undefined8 uVar35;
  float fVar52;
  float fVar51;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar44 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  undefined1 auVar48 [16];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar53;
  float fVar62;
  undefined8 uVar54;
  float fVar63;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar64;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined8 uVar65;
  undefined1 auVar66 [16];
  undefined8 uVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar75 [16];
  undefined1 auVar74 [16];
  undefined1 auVar73 [16];
  undefined1 auVar72 [16];
  undefined1 auVar79 [16];
  undefined1 auVar78 [16];
  undefined1 auVar77 [16];
  undefined1 auVar76 [16];
  undefined8 uVar80;
  undefined1 auVar81 [16];
  undefined8 uVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_78;
  float local_74;
  float local_68;
  float local_64;
  
  if ((-1 < (int)param_6) &&
     (lVar5 = *(long *)(param_5 + 0x2a0),
     (int)param_6 < (int)((ulong)(*(long *)(param_5 + 0x2a8) - lVar5) >> 4) * -0x3030303)) {
    uVar6 = (ulong)param_6;
    if (param_4 <= 0.0) {
      bVar3 = false;
    }
    else {
      fVar34 = param_1._0_4_;
      fVar19 = fVar34 * param_2._0_4_;
      fVar51 = param_1._4_4_;
      fVar28 = fVar51 * param_2._4_4_;
      fVar52 = param_1._8_4_;
      fVar30 = fVar52 * param_2._8_4_;
      fVar32 = param_1._12_4_ * param_2._12_4_;
      auVar15._0_4_ = fVar19 + fVar28;
      auVar15._4_4_ = fVar30 + fVar32;
      auVar15._8_4_ = fVar19 + fVar28;
      auVar15._12_4_ = fVar30 + fVar32;
      auVar15 = NEON_ext(auVar15,auVar15,4,1);
      local_64 = auVar15._0_4_ + auVar15._4_4_;
      local_68 = -1.0;
      fVar19 = (param_4 * 3.1415927) / 180.0;
      pfVar1 = &local_64;
      if (local_64 <= -1.0) {
        pfVar1 = &local_68;
      }
      local_74 = 1.0;
      pfVar2 = &local_74;
      if (*pfVar1 <= 1.0) {
        pfVar2 = pfVar1;
      }
      local_64 = *pfVar2;
      fVar28 = acosf(local_64);
      if ((fVar28 <= fVar19) || (fVar28 <= 0.0)) {
        bVar3 = false;
        *(undefined4 *)(lVar5 + uVar6 * 0x550 + 0x420) = 0;
      }
      else {
        lVar4 = lVar5 + uVar6 * 0x550;
        fVar32 = *(float *)(lVar4 + 0x42c);
        fVar30 = *(float *)(lVar4 + 0x428);
        local_74 = -1.0;
        fVar53 = fVar34 * -param_2._0_4_;
        fVar62 = fVar51 * -param_2._4_4_;
        fVar63 = fVar52 * -param_2._8_4_;
        fVar64 = param_1._12_4_ * -param_2._12_4_;
        auVar56._0_4_ = fVar53 + fVar62;
        auVar56._4_4_ = fVar63 + fVar64;
        auVar56._8_4_ = fVar53 + fVar62;
        auVar56._12_4_ = fVar63 + fVar64;
        auVar15 = NEON_ext(auVar56,auVar56,4,1);
        local_68 = auVar15._0_4_ + auVar15._4_4_;
        pfVar1 = &local_68;
        if (local_68 <= -1.0) {
          pfVar1 = &local_74;
        }
        local_78 = 1.0;
        pfVar2 = &local_78;
        if (*pfVar1 <= 1.0) {
          pfVar2 = pfVar1;
        }
        local_68 = *pfVar2;
        fVar53 = acosf(local_68);
        bVar3 = fVar53 < (fVar32 * 3.1415927) / 180.0;
        if (!bVar3) {
          *(undefined4 *)(lVar5 + uVar6 * 0x550 + 0x420) = 0;
        }
        bVar3 = bVar3 && fVar53 < (fVar30 * 3.1415927) / 180.0;
        uVar21 = a64_TBL(ZEXT816(0),param_1,DAT_03cb56c8);
        uVar82 = a64_TBL(ZEXT816(0),param_2,DAT_03cb54c0);
        uVar54 = a64_TBL(ZEXT816(0),param_1,DAT_03cb54d8);
        uVar67 = a64_TBL(ZEXT816(0),param_2,DAT_03cb5488);
        uVar65 = a64_TBL(ZEXT816(0),param_1,DAT_03cb5488);
        uVar80 = a64_TBL(ZEXT816(0),param_1,DAT_03cb54c0);
        uVar14 = a64_TBL(ZEXT816(0),param_2,DAT_03cb56c8);
        uVar35 = a64_TBL(ZEXT816(0),param_2,DAT_03cb54d8);
        fVar30 = (float)uVar21 * (float)uVar67 - (float)uVar65 * (float)uVar14;
        fVar32 = (float)((ulong)uVar21 >> 0x20) * (float)((ulong)uVar67 >> 0x20) -
                 (float)((ulong)uVar65 >> 0x20) * (float)((ulong)uVar14 >> 0x20);
        fVar53 = (float)uVar54 * (float)uVar82 - (float)uVar80 * (float)uVar35;
        fVar62 = (float)((ulong)uVar54 >> 0x20) * (float)((ulong)uVar82 >> 0x20) -
                 (float)((ulong)uVar80 >> 0x20) * (float)((ulong)uVar35 >> 0x20);
        auVar85._0_4_ = fVar30 * fVar30 + fVar32 * fVar32;
        auVar85._4_4_ = fVar53 * fVar53 + fVar62 * fVar62;
        auVar85._8_4_ = fVar30 * fVar30 + fVar32 * fVar32;
        auVar85._12_4_ = fVar53 * fVar53 + fVar62 * fVar62;
        auVar15 = NEON_ext(auVar85,auVar85,4,1);
        auVar86._0_4_ = auVar15._0_4_ + auVar15._4_4_;
        auVar86._4_4_ = auVar15._8_4_ + auVar15._12_4_;
        auVar86._8_4_ = auVar15._0_4_ + auVar15._4_4_;
        auVar86._12_4_ = auVar15._8_4_ + auVar15._12_4_;
        auVar15 = NEON_frsqrte(auVar86,4);
        auVar58._0_4_ = auVar86._0_4_ * auVar15._0_4_;
        auVar58._4_4_ = auVar86._4_4_ * auVar15._4_4_;
        auVar58._8_4_ = auVar86._8_4_ * auVar15._8_4_;
        auVar58._12_4_ = auVar86._12_4_ * auVar15._12_4_;
        auVar56 = NEON_frsqrts(auVar15,auVar58,4);
        auVar37._0_4_ = auVar15._0_4_ * auVar56._0_4_;
        auVar37._4_4_ = auVar15._4_4_ * auVar56._4_4_;
        auVar37._8_4_ = auVar15._8_4_ * auVar56._8_4_;
        auVar37._12_4_ = auVar15._12_4_ * auVar56._12_4_;
        auVar59._0_4_ = auVar86._0_4_ * auVar37._0_4_;
        auVar59._4_4_ = auVar86._4_4_ * auVar37._4_4_;
        auVar59._8_4_ = auVar86._8_4_ * auVar37._8_4_;
        auVar59._12_4_ = auVar86._12_4_ * auVar37._12_4_;
        iVar20 = -(uint)(auVar86._0_4_ == 0.0);
        iVar29 = -(uint)(auVar86._4_4_ == 0.0);
        iVar31 = -(uint)(auVar86._8_4_ == 0.0);
        iVar33 = -(uint)(auVar86._12_4_ == 0.0);
        auVar23[0] = ~(byte)iVar20;
        auVar23[1] = ~(byte)((uint)iVar20 >> 8);
        auVar23[2] = ~(byte)((uint)iVar20 >> 0x10);
        auVar23[3] = ~(byte)((uint)iVar20 >> 0x18);
        auVar23[4] = ~(byte)iVar29;
        auVar23[5] = ~(byte)((uint)iVar29 >> 8);
        auVar23[6] = ~(byte)((uint)iVar29 >> 0x10);
        auVar23[7] = ~(byte)((uint)iVar29 >> 0x18);
        auVar23[8] = ~(byte)iVar31;
        auVar23[9] = ~(byte)((uint)iVar31 >> 8);
        auVar23[10] = ~(byte)((uint)iVar31 >> 0x10);
        auVar23[0xb] = ~(byte)((uint)iVar31 >> 0x18);
        auVar23[0xc] = ~(byte)iVar33;
        auVar23[0xd] = ~(byte)((uint)iVar33 >> 8);
        auVar23[0xe] = ~(byte)((uint)iVar33 >> 0x10);
        auVar23[0xf] = ~(byte)((uint)iVar33 >> 0x18);
        auVar15 = NEON_frsqrts(auVar37,auVar59,4);
        auVar16._0_4_ = fVar30 * auVar37._0_4_ * auVar15._0_4_;
        auVar16._4_4_ = fVar32 * auVar37._4_4_ * auVar15._4_4_;
        auVar16._8_4_ = fVar53 * auVar37._8_4_ * auVar15._8_4_;
        auVar16._12_4_ = fVar62 * auVar37._12_4_ * auVar15._12_4_;
        auVar15 = param_2 ^ (param_2 ^ auVar16) & auVar23;
        fVar19 = (fVar28 - fVar19) * 0.5;
        iVar20 = -(uint)(ABS(fVar19) == INFINITY);
        iVar29 = -(uint)(ABS(fVar19) == INFINITY);
        iVar31 = -(uint)(ABS(fVar19) == INFINITY);
        iVar33 = -(uint)(ABS(fVar19) == INFINITY);
        auVar38[0] = ~(byte)iVar20;
        auVar38[1] = ~(byte)((uint)iVar20 >> 8);
        auVar38[2] = ~(byte)((uint)iVar20 >> 0x10);
        auVar38[3] = ~(byte)((uint)iVar20 >> 0x18);
        auVar38[4] = ~(byte)iVar29;
        auVar38[5] = ~(byte)((uint)iVar29 >> 8);
        auVar38[6] = ~(byte)((uint)iVar29 >> 0x10);
        auVar38[7] = ~(byte)((uint)iVar29 >> 0x18);
        auVar38[8] = ~(byte)iVar31;
        auVar38[9] = ~(byte)((uint)iVar31 >> 8);
        auVar38[10] = ~(byte)((uint)iVar31 >> 0x10);
        auVar38[0xb] = ~(byte)((uint)iVar31 >> 0x18);
        auVar38[0xc] = ~(byte)iVar33;
        auVar38[0xd] = ~(byte)((uint)iVar33 >> 8);
        auVar38[0xe] = ~(byte)((uint)iVar33 >> 0x10);
        auVar38[0xf] = ~(byte)((uint)iVar33 >> 0x18);
        fVar28 = fVar19 + (float)_DAT_03caa8d0;
        fVar30 = fVar19 + (float)((ulong)_DAT_03caa8d0 >> 0x20);
        fVar32 = fVar19 + (float)_UNK_03caa8d8;
        fVar19 = fVar19 + (float)((ulong)_UNK_03caa8d8 >> 0x20);
        auVar60._0_4_ =
             (int)((float)(-(uint)(0.0 <= fVar28) & 0x80000000 ^ 0xbf000000) + fVar28 * 0.15915494);
        auVar60._4_4_ =
             (int)((float)(-(uint)(0.0 <= fVar30) & 0x80000000 ^ 0xbf000000) + fVar30 * 0.15915494);
        auVar60._8_4_ =
             (int)((float)(-(uint)(0.0 <= fVar32) & 0x80000000 ^ 0xbf000000) + fVar32 * 0.15915494);
        auVar60._12_4_ =
             (int)((float)(-(uint)(0.0 <= fVar19) & 0x80000000 ^ 0xbf000000) + fVar19 * 0.15915494);
        auVar56 = NEON_scvtf(auVar60,4);
        fVar28 = fVar28 + auVar56._0_4_ * -6.2831855;
        fVar30 = fVar30 + auVar56._4_4_ * -6.2831855;
        fVar32 = fVar32 + auVar56._8_4_ * -6.2831855;
        fVar19 = fVar19 + auVar56._12_4_ * -6.2831855;
        fVar28 = (float)((uint)fVar28 ^
                        ((uint)fVar28 ^ (uint)(-3.1415927 - fVar28)) & -(uint)(fVar28 < -1.5707964))
        ;
        fVar30 = (float)((uint)fVar30 ^
                        ((uint)fVar30 ^ (uint)(-3.1415927 - fVar30)) & -(uint)(fVar30 < -1.5707964))
        ;
        fVar32 = (float)((uint)fVar32 ^
                        ((uint)fVar32 ^ (uint)(-3.1415927 - fVar32)) & -(uint)(fVar32 < -1.5707964))
        ;
        fVar19 = (float)((uint)fVar19 ^
                        ((uint)fVar19 ^ (uint)(-3.1415927 - fVar19)) & -(uint)(fVar19 < -1.5707964))
        ;
        fVar28 = (float)((uint)fVar28 ^
                        ((uint)fVar28 ^ (uint)(3.1415927 - fVar28)) & -(uint)(1.5707964 < fVar28));
        fVar30 = (float)((uint)fVar30 ^
                        ((uint)fVar30 ^ (uint)(3.1415927 - fVar30)) & -(uint)(1.5707964 < fVar30));
        fVar32 = (float)((uint)fVar32 ^
                        ((uint)fVar32 ^ (uint)(3.1415927 - fVar32)) & -(uint)(1.5707964 < fVar32));
        fVar19 = (float)((uint)fVar19 ^
                        ((uint)fVar19 ^ (uint)(3.1415927 - fVar19)) & -(uint)(1.5707964 < fVar19));
        auVar68._0_12_ = ZEXT812(0);
        auVar68._12_4_ = -(uint)(fVar19 == 1.5707964);
        fVar53 = fVar28 * fVar28;
        fVar62 = fVar30 * fVar30;
        fVar63 = fVar32 * fVar32;
        fVar64 = fVar19 * fVar19;
        auVar56 = NEON_fmov(0x3f800000,4);
        auVar61._0_4_ =
             fVar28 * (auVar56._0_4_ +
                      fVar53 * (fVar53 * (fVar53 * (fVar53 * (fVar53 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar61._4_4_ =
             fVar30 * (auVar56._4_4_ +
                      fVar62 * (fVar62 * (fVar62 * (fVar62 * (fVar62 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar61._8_4_ =
             fVar32 * (auVar56._8_4_ +
                      fVar63 * (fVar63 * (fVar63 * (fVar63 * (fVar63 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar61._12_4_ =
             fVar19 * (auVar56._12_4_ +
                      fVar64 * (fVar64 * (fVar64 * (fVar64 * (fVar64 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar39._8_4_ = 0x7fc00000;
        auVar39._0_8_ = 0x7fc000007fc00000;
        auVar39._12_4_ = 0x7fc00000;
        fVar19 = auVar15._0_4_;
        fVar30 = auVar15._4_4_;
        fVar32 = auVar15._8_4_;
        fVar28 = auVar15._12_4_ * auVar15._12_4_;
        auVar39 = auVar39 ^ (auVar39 ^ auVar61 ^ (auVar61 ^ auVar56) & auVar68) & auVar38;
        auVar10._0_4_ = fVar19 * fVar19 + fVar30 * fVar30;
        auVar10._4_4_ = fVar32 * fVar32 + fVar28;
        auVar10._8_4_ = fVar19 * fVar19 + fVar30 * fVar30;
        auVar10._12_4_ = fVar32 * fVar32 + fVar28;
        auVar15 = NEON_ext(auVar10,auVar10,4,1);
        auVar11._0_4_ = auVar15._0_4_ + auVar15._4_4_;
        auVar11._4_4_ = auVar15._8_4_ + auVar15._12_4_;
        auVar11._8_4_ = auVar15._0_4_ + auVar15._4_4_;
        auVar11._12_4_ = auVar15._8_4_ + auVar15._12_4_;
        auVar15 = NEON_frsqrte(auVar11,4);
        auVar69._0_4_ = auVar11._0_4_ * auVar15._0_4_;
        auVar69._4_4_ = auVar11._4_4_ * auVar15._4_4_;
        auVar69._8_4_ = auVar11._8_4_ * auVar15._8_4_;
        auVar69._12_4_ = auVar11._12_4_ * auVar15._12_4_;
        auVar56 = NEON_frsqrts(auVar15,auVar69,4);
        auVar66._0_4_ = auVar15._0_4_ * auVar56._0_4_;
        auVar66._4_4_ = auVar15._4_4_ * auVar56._4_4_;
        auVar66._8_4_ = auVar15._8_4_ * auVar56._8_4_;
        auVar66._12_4_ = auVar15._12_4_ * auVar56._12_4_;
        auVar70._0_4_ = auVar11._0_4_ * auVar66._0_4_;
        auVar70._4_4_ = auVar11._4_4_ * auVar66._4_4_;
        auVar70._8_4_ = auVar11._8_4_ * auVar66._8_4_;
        auVar70._12_4_ = auVar11._12_4_ * auVar66._12_4_;
        iVar20 = -(uint)(auVar11._0_4_ == 0.0);
        iVar29 = -(uint)(auVar11._4_4_ == 0.0);
        iVar31 = -(uint)(auVar11._8_4_ == 0.0);
        auVar15 = NEON_frsqrts(auVar66,auVar70,4);
        auVar71._4_4_ = fVar52;
        auVar71._0_4_ = fVar52;
        auVar71._8_4_ = fVar52;
        auVar71._12_4_ = fVar52;
        auVar72._4_12_ = auVar71._4_12_;
        auVar72._0_4_ = fVar34;
        auVar74._0_8_ = auVar72._0_8_;
        auVar74._8_4_ = fVar51;
        auVar74._12_4_ = fVar52;
        auVar73._8_8_ = auVar74._8_8_;
        auVar73._4_4_ = fVar52;
        auVar73._0_4_ = fVar34;
        auVar75._0_12_ = auVar73._0_12_;
        auVar75._12_4_ = fVar52;
        fVar19 = fVar19 * auVar66._0_4_ * auVar15._0_4_;
        fVar30 = fVar30 * auVar66._4_4_ * auVar15._4_4_;
        fVar32 = fVar32 * auVar66._8_4_ * auVar15._8_4_;
        auVar86 = NEON_ext(auVar75,auVar75,8,1);
        fVar28 = (float)CONCAT13((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                                 CONCAT12((byte)((uint)fVar19 >> 0x10) &
                                          ~(byte)((uint)iVar20 >> 0x10),
                                          CONCAT11((byte)((uint)fVar19 >> 8) &
                                                   ~(byte)((uint)iVar20 >> 8),
                                                   SUB41(fVar19,0) & ~(byte)iVar20)));
        auVar22._0_8_ =
             CONCAT17((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                      CONCAT16((byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10),
                               CONCAT15((byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar29 >> 8),
                                        CONCAT14(SUB41(fVar30,0) & ~(byte)iVar29,fVar28))));
        auVar22[8] = SUB41(fVar32,0) & ~(byte)iVar31;
        auVar22[9] = (byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar31 >> 8);
        auVar22[10] = (byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
        auVar22[0xb] = (byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
        fVar19 = auVar86._0_4_;
        auVar76._4_12_ = auVar75._4_12_;
        auVar76._0_4_ = fVar19;
        auVar78._0_8_ = auVar76._0_8_;
        auVar78._8_4_ = auVar86._8_4_;
        auVar78._12_4_ = fVar52;
        auVar77._8_8_ = auVar78._8_8_;
        auVar77._4_4_ = fVar34;
        auVar77._0_4_ = fVar19;
        auVar79._0_12_ = auVar77._0_12_;
        auVar79._12_4_ = fVar51;
        auVar15 = NEON_ext(auVar79,auVar86,8,1);
        auVar15 = NEON_ext(auVar15,auVar15,0xc,1);
        auVar24._0_4_ = auVar39._0_4_ * fVar28;
        auVar24._4_4_ = auVar39._4_4_ * (float)((ulong)auVar22._0_8_ >> 0x20);
        auVar24._8_4_ = auVar39._8_4_ * auVar22._8_4_;
        auVar24._12_4_ = auVar39._12_4_ * 1.0;
        auVar41._0_4_ = -auVar24._0_4_;
        fVar28 = -auVar24._4_4_;
        auVar40._8_4_ = -auVar24._8_4_;
        auVar83._4_4_ = auVar24._8_4_;
        auVar83._0_4_ = auVar24._8_4_;
        auVar83._8_4_ = auVar24._8_4_;
        auVar83._12_4_ = auVar24._8_4_;
        auVar56 = NEON_ext(auVar83,auVar24,0xc,1);
        auVar84._4_4_ = auVar24._4_4_;
        auVar84._0_4_ = auVar24._4_4_;
        auVar84._8_4_ = auVar24._4_4_;
        auVar84._12_4_ = auVar24._4_4_;
        fVar30 = (float)_DAT_03cab640;
        fVar32 = (float)((ulong)_DAT_03cab640 >> 0x20);
        fVar53 = (float)_UNK_03cab648;
        fVar62 = (float)((ulong)_UNK_03cab648 >> 0x20);
        auVar85 = NEON_ext(auVar84,auVar56,0xc,1);
        auVar81._0_4_ =
             (fVar34 * auVar24._12_4_ + auVar24._0_4_ * fVar30 * 0.0 +
             auVar15._0_4_ * auVar85._0_4_ * fVar30) - auVar56._0_4_ * fVar19;
        auVar81._4_4_ =
             (fVar51 * auVar24._12_4_ + auVar24._4_4_ * fVar32 * 0.0 +
             auVar15._4_4_ * auVar85._4_4_ * fVar32) - auVar56._4_4_ * auVar86._4_4_;
        auVar81._8_4_ =
             (fVar52 * auVar24._12_4_ + auVar24._8_4_ * fVar53 * 0.0 +
             auVar15._8_4_ * auVar85._8_4_ * fVar53) - auVar56._8_4_ * auVar86._8_4_;
        auVar81._12_4_ =
             (auVar24._12_4_ * 0.0 + fVar34 * auVar24._0_4_ * fVar62 +
             auVar15._12_4_ * auVar85._12_4_ * fVar62) - auVar56._12_4_ * auVar86._12_4_;
        auVar40._4_4_ = auVar40._8_4_;
        auVar40._0_4_ = auVar40._8_4_;
        auVar40._12_4_ = auVar40._8_4_;
        auVar17._4_4_ = auVar81._8_4_;
        auVar17._0_4_ = auVar81._8_4_;
        auVar17._8_4_ = auVar81._8_4_;
        auVar17._12_4_ = auVar81._8_4_;
        auVar15 = NEON_ext(auVar17,auVar81,0xc,1);
        auVar25._4_4_ = auVar81._4_4_;
        auVar25._0_4_ = auVar81._4_4_;
        auVar25._8_4_ = auVar81._4_4_;
        auVar25._12_4_ = auVar81._4_4_;
        auVar41._4_12_ = auVar40._4_12_;
        auVar43._0_8_ = auVar41._0_8_;
        auVar43._8_4_ = fVar28;
        auVar43._12_4_ = auVar40._8_4_;
        auVar42._8_8_ = auVar43._8_8_;
        auVar42._4_4_ = auVar40._8_4_;
        auVar42._0_4_ = auVar41._0_4_;
        auVar44._0_12_ = auVar42._0_12_;
        auVar44._12_4_ = auVar40._8_4_;
        auVar86 = NEON_ext(auVar44,auVar44,8,1);
        fVar34 = auVar86._0_4_;
        auVar45._4_12_ = auVar44._4_12_;
        auVar45._0_4_ = fVar34;
        auVar47._0_8_ = auVar45._0_8_;
        auVar47._8_4_ = auVar86._8_4_;
        auVar47._12_4_ = auVar40._8_4_;
        auVar46._8_8_ = auVar47._8_8_;
        auVar46._4_4_ = auVar41._0_4_;
        auVar46._0_4_ = fVar34;
        auVar48._0_12_ = auVar46._0_12_;
        auVar48._12_4_ = fVar28;
        auVar56 = NEON_ext(auVar25,auVar15,0xc,1);
        auVar85 = NEON_ext(auVar48,auVar86,8,1);
        auVar85 = NEON_ext(auVar85,auVar85,0xc,1);
        fVar34 = (auVar41._0_4_ * auVar81._12_4_ + auVar24._12_4_ * auVar81._0_4_ * fVar30 +
                 auVar85._0_4_ * auVar56._0_4_ * fVar30) - auVar15._0_4_ * fVar34;
        fVar51 = (fVar28 * auVar81._12_4_ + auVar24._12_4_ * auVar81._4_4_ * fVar32 +
                 auVar85._4_4_ * auVar56._4_4_ * fVar32) - auVar15._4_4_ * auVar86._4_4_;
        fVar52 = (auVar40._8_4_ * auVar81._12_4_ + auVar24._12_4_ * auVar81._8_4_ * fVar53 +
                 auVar85._8_4_ * auVar56._8_4_ * fVar53) - auVar15._8_4_ * auVar86._8_4_;
        auVar12._0_4_ = fVar34 * fVar34 + fVar51 * fVar51;
        auVar12._4_4_ = fVar52 * fVar52 + 0.0;
        auVar12._8_4_ = fVar34 * fVar34 + fVar51 * fVar51;
        auVar12._12_4_ = fVar52 * fVar52 + 0.0;
        auVar15 = NEON_ext(auVar12,auVar12,4,1);
        auVar13._0_4_ = auVar15._0_4_ + auVar15._4_4_;
        auVar13._4_4_ = auVar15._8_4_ + auVar15._12_4_;
        auVar13._8_4_ = auVar15._0_4_ + auVar15._4_4_;
        auVar13._12_4_ = auVar15._8_4_ + auVar15._12_4_;
        auVar15 = NEON_frsqrte(auVar13,4);
        auVar49._0_4_ = auVar13._0_4_ * auVar15._0_4_;
        auVar49._4_4_ = auVar13._4_4_ * auVar15._4_4_;
        auVar49._8_4_ = auVar13._8_4_ * auVar15._8_4_;
        auVar49._12_4_ = auVar13._12_4_ * auVar15._12_4_;
        auVar56 = NEON_frsqrts(auVar15,auVar49,4);
        auVar26._0_4_ = auVar15._0_4_ * auVar56._0_4_;
        auVar26._4_4_ = auVar15._4_4_ * auVar56._4_4_;
        auVar26._8_4_ = auVar15._8_4_ * auVar56._8_4_;
        auVar26._12_4_ = auVar15._12_4_ * auVar56._12_4_;
        auVar50._0_4_ = auVar13._0_4_ * auVar26._0_4_;
        auVar50._4_4_ = auVar13._4_4_ * auVar26._4_4_;
        auVar50._8_4_ = auVar13._8_4_ * auVar26._8_4_;
        auVar50._12_4_ = auVar13._12_4_ * auVar26._12_4_;
        iVar20 = -(uint)(auVar13._0_4_ == 0.0);
        iVar29 = -(uint)(auVar13._4_4_ == 0.0);
        iVar31 = -(uint)(auVar13._8_4_ == 0.0);
        iVar33 = -(uint)(auVar13._12_4_ == 0.0);
        auVar18[0] = ~(byte)iVar20;
        auVar18[1] = ~(byte)((uint)iVar20 >> 8);
        auVar18[2] = ~(byte)((uint)iVar20 >> 0x10);
        auVar18[3] = ~(byte)((uint)iVar20 >> 0x18);
        auVar18[4] = ~(byte)iVar29;
        auVar18[5] = ~(byte)((uint)iVar29 >> 8);
        auVar18[6] = ~(byte)((uint)iVar29 >> 0x10);
        auVar18[7] = ~(byte)((uint)iVar29 >> 0x18);
        auVar18[8] = ~(byte)iVar31;
        auVar18[9] = ~(byte)((uint)iVar31 >> 8);
        auVar18[10] = ~(byte)((uint)iVar31 >> 0x10);
        auVar18[0xb] = ~(byte)((uint)iVar31 >> 0x18);
        auVar18[0xc] = ~(byte)iVar33;
        auVar18[0xd] = ~(byte)((uint)iVar33 >> 8);
        auVar18[0xe] = ~(byte)((uint)iVar33 >> 0x10);
        auVar18[0xf] = ~(byte)((uint)iVar33 >> 0x18);
        auVar15 = NEON_frsqrts(auVar26,auVar50,4);
        auVar27._0_4_ = auVar26._0_4_ * auVar15._0_4_ * fVar34;
        auVar27._4_4_ = auVar26._4_4_ * auVar15._4_4_ * fVar51;
        auVar27._8_4_ = auVar26._8_4_ * auVar15._8_4_ * fVar52;
        auVar27._12_4_ = auVar26._12_4_ * auVar15._12_4_ * 0.0;
        param_1 = param_2 ^ (param_2 ^ auVar27) & auVar18;
      }
    }
    if (*(float *)(lVar5 + uVar6 * 0x550 + 0x420) == 0.0) {
      local_a0 = param_3._0_4_;
      fStack_9c = param_3._4_4_;
      fStack_98 = param_3._8_4_;
      fStack_94 = param_3._12_4_;
      fVar34 = local_a0 * param_1._0_4_;
      fVar51 = fStack_9c * param_1._4_4_;
      fVar52 = fStack_98 * param_1._8_4_;
      fVar19 = fStack_94 * param_1._12_4_;
      auVar7._0_4_ = fVar34 + fVar51;
      auVar7._4_4_ = fVar52 + fVar19;
      auVar7._8_4_ = fVar34 + fVar51;
      auVar7._12_4_ = fVar52 + fVar19;
      auVar15 = NEON_ext(auVar7,auVar7,4,1);
      lVar4 = lVar5 + uVar6 * 0x550;
      fVar34 = param_1._0_4_ - local_a0 * (auVar15._0_4_ + auVar15._4_4_);
      fVar51 = param_1._4_4_ - fStack_9c * (auVar15._8_4_ + auVar15._12_4_);
      fVar52 = param_1._8_4_ - fStack_98 * (auVar15._0_4_ + auVar15._4_4_);
      fVar19 = param_1._12_4_ - fStack_94 * (auVar15._8_4_ + auVar15._12_4_);
      auVar8._0_4_ = fVar34 * fVar34 + fVar51 * fVar51;
      auVar8._4_4_ = fVar52 * fVar52 + fVar19 * fVar19;
      auVar8._8_4_ = fVar34 * fVar34 + fVar51 * fVar51;
      auVar8._12_4_ = fVar52 * fVar52 + fVar19 * fVar19;
      auVar15 = NEON_ext(auVar8,auVar8,4,1);
      auVar9._0_4_ = auVar15._0_4_ + auVar15._4_4_;
      auVar9._4_4_ = auVar15._8_4_ + auVar15._12_4_;
      auVar9._8_4_ = auVar15._0_4_ + auVar15._4_4_;
      auVar9._12_4_ = auVar15._8_4_ + auVar15._12_4_;
      auVar15 = NEON_frsqrte(auVar9,4);
      auVar55._0_4_ = auVar9._0_4_ * auVar15._0_4_;
      auVar55._4_4_ = auVar9._4_4_ * auVar15._4_4_;
      auVar55._8_4_ = auVar9._8_4_ * auVar15._8_4_;
      auVar55._12_4_ = auVar9._12_4_ * auVar15._12_4_;
      auVar56 = NEON_frsqrts(auVar15,auVar55,4);
      auVar36._0_4_ = auVar15._0_4_ * auVar56._0_4_;
      auVar36._4_4_ = auVar15._4_4_ * auVar56._4_4_;
      auVar36._8_4_ = auVar15._8_4_ * auVar56._8_4_;
      auVar36._12_4_ = auVar15._12_4_ * auVar56._12_4_;
      auVar57._0_4_ = auVar9._0_4_ * auVar36._0_4_;
      auVar57._4_4_ = auVar9._4_4_ * auVar36._4_4_;
      auVar57._8_4_ = auVar9._8_4_ * auVar36._8_4_;
      auVar57._12_4_ = auVar9._12_4_ * auVar36._12_4_;
      iVar20 = -(uint)(auVar9._0_4_ == 0.0);
      iVar29 = -(uint)(auVar9._4_4_ == 0.0);
      iVar31 = -(uint)(auVar9._8_4_ == 0.0);
      iVar33 = -(uint)(auVar9._12_4_ == 0.0);
      auVar15 = NEON_frsqrts(auVar36,auVar57,4);
      fVar34 = fVar34 * auVar36._0_4_ * auVar15._0_4_;
      fVar51 = fVar51 * auVar36._4_4_ * auVar15._4_4_;
      fVar52 = fVar52 * auVar36._8_4_ * auVar15._8_4_;
      fVar19 = fVar19 * auVar36._12_4_ * auVar15._12_4_;
      param_1._0_8_ =
           CONCAT17((byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                    CONCAT16((byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10),
                             CONCAT15((byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar29 >> 8),
                                      CONCAT14(SUB41(fVar51,0) & ~(byte)iVar29,
                                               CONCAT13((byte)((uint)fVar34 >> 0x18) &
                                                        ~(byte)((uint)iVar20 >> 0x18),
                                                        CONCAT12((byte)((uint)fVar34 >> 0x10) &
                                                                 ~(byte)((uint)iVar20 >> 0x10),
                                                                 CONCAT11((byte)((uint)fVar34 >> 8)
                                                                          & ~(byte)((uint)iVar20 >>
                                                                                   8),
                                                                          SUB41(fVar34,0) &
                                                                          ~(byte)iVar20)))))));
      param_1[8] = SUB41(fVar52,0) & ~(byte)iVar31;
      param_1[9] = (byte)((uint)fVar52 >> 8) & ~(byte)((uint)iVar31 >> 8);
      param_1[10] = (byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
      param_1[0xb] = (byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
      param_1[0xc] = SUB41(fVar19,0) & ~(byte)iVar33;
      param_1[0xd] = (byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar33 >> 8);
      param_1[0xe] = (byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10);
      param_1[0xf] = (byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18);
      if ((param_7 & 1) == 0) {
        *(long *)(lVar4 + 0x448) = param_1._8_8_;
        *(undefined8 *)(lVar4 + 0x440) = param_1._0_8_;
      }
      else {
        *(long *)(lVar4 + 0x438) = param_1._8_8_;
        *(undefined8 *)(lVar4 + 0x430) = param_1._0_8_;
      }
    }
    else {
      lVar4 = lVar5 + uVar6 * 0x550;
      if ((param_7 & 1) == 0) {
        param_1 = *(undefined1 (*) [16])(lVar4 + 0x440);
      }
      else {
        param_1 = *(undefined1 (*) [16])(lVar4 + 0x430);
      }
    }
    if ((bVar3) && (*(int *)(param_5 + 0x70) == 1)) {
      *(undefined1 *)(lVar5 + uVar6 * 0x550 + 0x424) = 1;
    }
  }
  return param_1;
}


