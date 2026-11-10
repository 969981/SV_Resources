/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02200564; name: FUN_02200564
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02200564(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar41;
  float fVar42;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar57;
  float fVar58;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  float fVar64;
  float fVar65;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar66 [16];
  float fVar72;
  float fVar73;
  uint uVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  undefined1 auVar79 [16];
  float fVar80;
  long *local_50;
  long *local_48;
  
  if (*(char *)(param_1 + 0x168) != '\0') {
    FUN_00c9e664(&local_50,param_1 + 0xe8);
    lVar11 = 0x184;
    if (*(int *)(param_1 + 0x16c) != 0) {
      lVar11 = 0x188;
    }
    fVar73 = (*(float *)(param_1 + lVar11) * 3.1415927) / 180.0;
    fVar71 = (float)((ulong)_UNK_03caa8d8 >> 0x20);
    fVar67 = (float)((ulong)_DAT_03caa8d0 >> 0x20);
    fVar59 = (*(float *)(param_1 + 0x18c) * 3.1415927) / 180.0;
    fVar23 = fVar73 + (float)_DAT_03caa8d0;
    fVar24 = fVar73 + fVar67;
    fVar25 = fVar73 + (float)_UNK_03caa8d8;
    fVar26 = fVar73 + fVar71;
    fVar64 = fVar59 + (float)_DAT_03caa8d0;
    fVar67 = fVar59 + fVar67;
    fVar69 = fVar59 + (float)_UNK_03caa8d8;
    fVar71 = fVar59 + fVar71;
    uVar74 = *(uint *)(param_1 + 0x174);
    auVar38 = ZEXT816(0);
    iVar60 = -(uint)(ABS(fVar59) == INFINITY);
    iVar61 = -(uint)(ABS(fVar59) == INFINITY);
    iVar62 = -(uint)(ABS(fVar59) == INFINITY);
    iVar63 = -(uint)(ABS(fVar59) == INFINITY);
    iVar4 = -(uint)(ABS(fVar73) == INFINITY);
    iVar5 = -(uint)(ABS(fVar73) == INFINITY);
    iVar6 = -(uint)(ABS(fVar73) == INFINITY);
    iVar7 = -(uint)(ABS(fVar73) == INFINITY);
    auVar20._8_4_ = 0x7fc00000;
    auVar20._0_8_ = 0x7fc000007fc00000;
    auVar20._12_4_ = 0x7fc00000;
    auVar79._0_4_ =
         (int)((float)(-(uint)(0.0 <= fVar23) & 0x80000000 ^ 0xbf000000) + fVar23 * 0.15915494);
    auVar79._4_4_ =
         (int)((float)(-(uint)(0.0 <= fVar24) & 0x80000000 ^ 0xbf000000) + fVar24 * 0.15915494);
    auVar79._8_4_ =
         (int)((float)(-(uint)(0.0 <= fVar25) & 0x80000000 ^ 0xbf000000) + fVar25 * 0.15915494);
    auVar79._12_4_ =
         (int)((float)(-(uint)(0.0 <= fVar26) & 0x80000000 ^ 0xbf000000) + fVar26 * 0.15915494);
    auVar31._4_4_ = uVar74;
    auVar31._0_4_ = uVar74;
    auVar31._8_4_ = uVar74;
    auVar31._12_4_ = uVar74;
    auVar31 = NEON_ext(auVar31,auVar38,0xc,1);
    auVar55._0_4_ =
         (int)((float)(-(uint)(0.0 <= fVar64) & 0x80000000 ^ 0xbf000000) + fVar64 * 0.15915494);
    auVar55._4_4_ =
         (int)((float)(-(uint)(0.0 <= fVar67) & 0x80000000 ^ 0xbf000000) + fVar67 * 0.15915494);
    auVar55._8_4_ =
         (int)((float)(-(uint)(0.0 <= fVar69) & 0x80000000 ^ 0xbf000000) + fVar69 * 0.15915494);
    auVar55._12_4_ =
         (int)((float)(-(uint)(0.0 <= fVar71) & 0x80000000 ^ 0xbf000000) + fVar71 * 0.15915494);
    auVar32._4_12_ = auVar31._4_12_;
    auVar32._0_4_ = uVar74;
    auVar50._12_4_ = auVar31._12_4_;
    auVar50._0_8_ = auVar32._0_8_;
    auVar50._8_4_ = uVar74;
    auVar56._8_8_ = auVar50._8_8_;
    auVar56._4_4_ = auVar31._0_4_;
    auVar56._0_4_ = uVar74;
    auVar66._0_12_ = auVar56._0_12_;
    auVar66._12_4_ = auVar31._4_4_;
    auVar31 = NEON_scvtf(auVar79,4);
    fVar23 = fVar23 - auVar31._0_4_ * 6.2831855;
    fVar24 = fVar24 - auVar31._4_4_ * 6.2831855;
    fVar25 = fVar25 - auVar31._8_4_ * 6.2831855;
    fVar26 = fVar26 - auVar31._12_4_ * 6.2831855;
    auVar31 = NEON_scvtf(auVar55,4);
    fVar64 = fVar64 - auVar31._0_4_ * 6.2831855;
    fVar67 = fVar67 - auVar31._4_4_ * 6.2831855;
    fVar69 = fVar69 - auVar31._8_4_ * 6.2831855;
    fVar71 = fVar71 - auVar31._12_4_ * 6.2831855;
    fVar23 = (float)((uint)fVar23 ^
                    ((uint)fVar23 ^ (uint)(-3.1415927 - fVar23)) & -(uint)(fVar23 < -1.5707964));
    fVar24 = (float)((uint)fVar24 ^
                    ((uint)fVar24 ^ (uint)(-3.1415927 - fVar24)) & -(uint)(fVar24 < -1.5707964));
    fVar25 = (float)((uint)fVar25 ^
                    ((uint)fVar25 ^ (uint)(-3.1415927 - fVar25)) & -(uint)(fVar25 < -1.5707964));
    fVar26 = (float)((uint)fVar26 ^
                    ((uint)fVar26 ^ (uint)(-3.1415927 - fVar26)) & -(uint)(fVar26 < -1.5707964));
    fVar52 = (float)_UNK_03cabe58;
    fVar53 = (float)((ulong)_UNK_03cabe58 >> 0x20);
    fVar59 = (float)_DAT_03cabe50;
    fVar73 = (float)((ulong)_DAT_03cabe50 >> 0x20);
    lVar11 = 0x17c;
    if (*(int *)(param_1 + 0x170) != 0) {
      lVar11 = 0x180;
    }
    fVar23 = (float)((uint)fVar23 ^
                    ((uint)fVar23 ^ (uint)(3.1415927 - fVar23)) & -(uint)(1.5707964 < fVar23));
    fVar24 = (float)((uint)fVar24 ^
                    ((uint)fVar24 ^ (uint)(3.1415927 - fVar24)) & -(uint)(1.5707964 < fVar24));
    fVar25 = (float)((uint)fVar25 ^
                    ((uint)fVar25 ^ (uint)(3.1415927 - fVar25)) & -(uint)(1.5707964 < fVar25));
    fVar26 = (float)((uint)fVar26 ^
                    ((uint)fVar26 ^ (uint)(3.1415927 - fVar26)) & -(uint)(1.5707964 < fVar26));
    auVar31 = NEON_ext(auVar66,auVar38,8,1);
    fVar64 = (float)((uint)fVar64 ^
                    ((uint)fVar64 ^ (uint)(-3.1415927 - fVar64)) & -(uint)(fVar64 < -1.5707964));
    fVar67 = (float)((uint)fVar67 ^
                    ((uint)fVar67 ^ (uint)(-3.1415927 - fVar67)) & -(uint)(fVar67 < -1.5707964));
    fVar69 = (float)((uint)fVar69 ^
                    ((uint)fVar69 ^ (uint)(-3.1415927 - fVar69)) & -(uint)(fVar69 < -1.5707964));
    fVar71 = (float)((uint)fVar71 ^
                    ((uint)fVar71 ^ (uint)(-3.1415927 - fVar71)) & -(uint)(fVar71 < -1.5707964));
    auVar50 = NEON_fmov(0x3f800000,4);
    auVar31 = NEON_ext(auVar66,auVar31,0xc,1);
    fVar33 = fVar23 * fVar23;
    fVar34 = fVar24 * fVar24;
    fVar35 = fVar25 * fVar25;
    fVar36 = fVar26 * fVar26;
    fVar12 = (float)((uint)(3.1415927 - fVar64) ^
                    ((uint)(3.1415927 - fVar64) ^ (uint)fVar64) & ~-(uint)(1.5707964 < fVar64));
    fVar67 = (float)((uint)(3.1415927 - fVar67) ^
                    ((uint)(3.1415927 - fVar67) ^ (uint)fVar67) & ~-(uint)(1.5707964 < fVar67));
    fVar69 = (float)((uint)(3.1415927 - fVar69) ^
                    ((uint)(3.1415927 - fVar69) ^ (uint)fVar69) & ~-(uint)(1.5707964 < fVar69));
    fVar71 = (float)((uint)(3.1415927 - fVar71) ^
                    ((uint)(3.1415927 - fVar71) ^ (uint)fVar71) & ~-(uint)(1.5707964 < fVar71));
    auVar66 = NEON_ext(auVar38,ZEXT416(uVar74),4,1);
    fVar49 = *(float *)(param_1 + 0x178);
    auVar56 = NEON_ext(auVar66,ZEXT816(0),0xc,1);
    auVar9._4_4_ = 0;
    auVar9._0_4_ = uVar74;
    auVar9._8_4_ = uVar74;
    auVar9._12_4_ = 0;
    auVar66 = NEON_ext(ZEXT816(0),auVar9,8,1);
    auVar40._0_4_ =
         fVar23 * (auVar50._0_4_ +
                  fVar33 * (fVar33 * (fVar33 * (fVar33 * (fVar33 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar40._4_4_ =
         fVar24 * (auVar50._4_4_ +
                  fVar34 * (fVar34 * (fVar34 * (fVar34 * (fVar34 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar40._8_4_ =
         fVar25 * (auVar50._8_4_ +
                  fVar35 * (fVar35 * (fVar35 * (fVar35 * (fVar35 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar40._12_4_ =
         fVar26 * (auVar50._12_4_ +
                  fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    fVar23 = fVar12 * fVar12;
    fVar24 = fVar67 * fVar67;
    fVar25 = fVar69 * fVar69;
    fVar64 = fVar71 * fVar71;
    fVar45 = auVar56._0_4_;
    fVar46 = auVar56._4_4_;
    fVar47 = auVar56._8_4_;
    fVar48 = auVar56._12_4_;
    fVar33 = auVar31._0_4_;
    fVar34 = auVar31._4_4_;
    fVar22 = auVar31._8_4_;
    fVar43 = auVar31._12_4_;
    fVar54 = auVar66._0_4_;
    fVar57 = auVar66._4_4_;
    fVar58 = auVar66._8_4_;
    fVar44 = auVar66._12_4_;
    fVar75 = fVar33 + fVar45 * 0.0 + fVar54 * 0.0 + fVar59 * 0.0;
    fVar76 = fVar34 + fVar46 * 0.0 + fVar57 * 0.0 + fVar73 * 0.0;
    fVar77 = fVar22 + fVar47 * 0.0 + fVar58 * 0.0 + fVar52 * 0.0;
    fVar78 = fVar43 + fVar48 * 0.0 + fVar44 * 0.0 + fVar53 * 0.0;
    auVar39._0_12_ = ZEXT812(0);
    auVar39._12_4_ = -(uint)(fVar26 == 1.5707964);
    auVar40 = auVar40 ^ (auVar40 ^ auVar50) & auVar39;
    auVar38[1] = ~(byte)((uint)iVar4 >> 8);
    auVar38[0] = ~(byte)iVar4;
    auVar38[2] = ~(byte)((uint)iVar4 >> 0x10);
    auVar38[3] = ~(byte)((uint)iVar4 >> 0x18);
    auVar38[4] = ~(byte)iVar5;
    auVar38[5] = ~(byte)((uint)iVar5 >> 8);
    auVar38[6] = ~(byte)((uint)iVar5 >> 0x10);
    auVar38[7] = ~(byte)((uint)iVar5 >> 0x18);
    auVar38[8] = ~(byte)iVar6;
    auVar38[9] = ~(byte)((uint)iVar6 >> 8);
    auVar38[10] = ~(byte)((uint)iVar6 >> 0x10);
    auVar38[0xb] = ~(byte)((uint)iVar6 >> 0x18);
    auVar38[0xc] = ~(byte)iVar7;
    auVar38[0xd] = ~(byte)((uint)iVar7 >> 8);
    auVar38[0xe] = ~(byte)((uint)iVar7 >> 0x10);
    auVar38[0xf] = ~(byte)((uint)iVar7 >> 0x18);
    auVar40 = auVar40 ^ (auVar40 ^ auVar20) & ~auVar38;
    fVar65 = fVar45 * 0.0 + fVar33 * 0.0 + fVar54 * 0.0 + fVar59;
    fVar68 = fVar46 * 0.0 + fVar34 * 0.0 + fVar57 * 0.0 + fVar73;
    fVar70 = fVar47 * 0.0 + fVar22 * 0.0 + fVar58 * 0.0 + fVar52;
    fVar72 = fVar48 * 0.0 + fVar43 * 0.0 + fVar44 * 0.0 + fVar53;
    auVar18._0_4_ =
         fVar12 * (auVar50._0_4_ +
                  fVar23 * (fVar23 * (fVar23 * (fVar23 * (fVar23 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar18._4_4_ =
         fVar67 * (auVar50._4_4_ +
                  fVar24 * (fVar24 * (fVar24 * (fVar24 * (fVar24 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar18._8_4_ =
         fVar69 * (auVar50._8_4_ +
                  fVar25 * (fVar25 * (fVar25 * (fVar25 * (fVar25 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar18._12_4_ =
         fVar71 * (auVar50._12_4_ +
                  fVar64 * (fVar64 * (fVar64 * (fVar64 * (fVar64 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    fVar64 = auVar40._0_4_ * _DAT_03cab290;
    fVar67 = auVar40._4_4_ * _UNK_03cab294;
    fVar69 = auVar40._8_4_ * _UNK_03cab298;
    fVar80 = auVar40._12_4_ * _UNK_03cab29c;
    auVar10._12_4_ = -(uint)(fVar71 == 1.5707964);
    auVar10._0_12_ = ZEXT812(0);
    fVar23 = (float)DAT_03cab620;
    fVar24 = (float)((ulong)DAT_03cab620 >> 0x20);
    fVar25 = (float)DAT_03cab628;
    fVar26 = (float)((ulong)DAT_03cab628 >> 0x20);
    auVar8[1] = ~(byte)((uint)iVar60 >> 8);
    auVar8[0] = ~(byte)iVar60;
    auVar8[2] = ~(byte)((uint)iVar60 >> 0x10);
    auVar8[3] = ~(byte)((uint)iVar60 >> 0x18);
    auVar8[4] = ~(byte)iVar61;
    auVar8[5] = ~(byte)((uint)iVar61 >> 8);
    auVar8[6] = ~(byte)((uint)iVar61 >> 0x10);
    auVar8[7] = ~(byte)((uint)iVar61 >> 0x18);
    auVar8[8] = ~(byte)iVar62;
    auVar8[9] = ~(byte)((uint)iVar62 >> 8);
    auVar8[10] = ~(byte)((uint)iVar62 >> 0x10);
    auVar8[0xb] = ~(byte)((uint)iVar62 >> 0x18);
    auVar8[0xc] = ~(byte)iVar63;
    auVar8[0xd] = ~(byte)((uint)iVar63 >> 8);
    auVar8[0xe] = ~(byte)((uint)iVar63 >> 0x10);
    auVar8[0xf] = ~(byte)((uint)iVar63 >> 0x18);
    auVar20 = auVar20 ^ (auVar20 ^ auVar18 ^ (auVar18 ^ auVar50) & auVar10) & auVar8;
    fVar35 = (float)_DAT_03cabe60;
    fVar36 = (float)((ulong)_DAT_03cabe60 >> 0x20);
    fVar12 = (float)_UNK_03cabe68;
    fVar13 = (float)((ulong)_UNK_03cabe68 >> 0x20);
    fVar27 = auVar40._0_4_ * (float)_DAT_03cac000;
    fVar28 = auVar40._4_4_ * (float)((ulong)_DAT_03cac000 >> 0x20);
    fVar29 = auVar40._8_4_ * (float)_UNK_03cac008;
    fVar30 = auVar40._12_4_ * (float)((ulong)_UNK_03cac008 >> 0x20);
    fVar14 = (float)_DAT_03caa5b0;
    fVar15 = (float)((ulong)_DAT_03caa5b0 >> 0x20);
    fVar16 = (float)_UNK_03caa5b8;
    fVar17 = (float)((ulong)_UNK_03caa5b8 >> 0x20);
    fVar19 = *(float *)(param_1 + lVar11);
    auVar51._0_4_ = auVar20._0_4_ * (float)_DAT_03cac0f0;
    auVar51._4_4_ = auVar20._4_4_ * (float)((ulong)_DAT_03cac0f0 >> 0x20);
    auVar51._8_4_ = auVar20._8_4_ * (float)_UNK_03cac0f8;
    auVar51._12_4_ = auVar20._12_4_ * (float)((ulong)_UNK_03cac0f8 >> 0x20);
    auVar21._0_4_ = auVar20._0_4_ * (float)_DAT_03cab2a0;
    auVar21._4_4_ = auVar20._4_4_ * (float)((ulong)_DAT_03cab2a0 >> 0x20);
    auVar21._8_4_ = auVar20._8_4_ * (float)_UNK_03cab2a8;
    auVar21._12_4_ = auVar20._12_4_ * (float)((ulong)_UNK_03cab2a8 >> 0x20);
    auVar20 = NEON_ext(auVar51,auVar51,8,1);
    fVar37 = fVar45 * fVar80 + fVar33 * fVar64 + fVar54 * fVar67 + fVar59 * fVar69;
    fVar41 = fVar46 * fVar80 + fVar34 * fVar64 + fVar57 * fVar67 + fVar73 * fVar69;
    fVar42 = fVar47 * fVar80 + fVar22 * fVar64 + fVar58 * fVar67 + fVar52 * fVar69;
    fVar80 = fVar48 * fVar80 + fVar43 * fVar64 + fVar44 * fVar67 + fVar53 * fVar69;
    auVar31 = NEON_ext(auVar21,auVar21,4,1);
    fVar64 = fVar23 * fVar75 + fVar35 * fVar76 + fVar14 * fVar77 + fVar78 * 0.0;
    fVar67 = fVar24 * fVar75 + fVar36 * fVar76 + fVar15 * fVar77 + fVar49 * fVar78;
    fVar69 = fVar25 * fVar75 + fVar12 * fVar76 + fVar16 * fVar77 + fVar78 * 0.0;
    fVar71 = fVar26 * fVar75 + fVar13 * fVar76 + fVar17 * fVar77 + fVar78 * 1.0;
    fVar33 = fVar45 * fVar28 + fVar33 * fVar29 + fVar54 * fVar30 + fVar59 * fVar27;
    fVar34 = fVar46 * fVar28 + fVar34 * fVar29 + fVar57 * fVar30 + fVar73 * fVar27;
    fVar22 = fVar47 * fVar28 + fVar22 * fVar29 + fVar58 * fVar30 + fVar52 * fVar27;
    fVar27 = fVar48 * fVar28 + fVar43 * fVar29 + fVar44 * fVar30 + fVar53 * fVar27;
    fVar54 = auVar20._0_4_;
    fVar57 = auVar20._4_4_;
    fVar58 = auVar20._8_4_;
    fVar44 = auVar20._12_4_;
    fVar75 = fVar23 * fVar33 + fVar35 * fVar34 + fVar14 * fVar22 + fVar27 * 0.0;
    fVar76 = fVar24 * fVar33 + fVar36 * fVar34 + fVar15 * fVar22 + fVar49 * fVar27;
    fVar77 = fVar25 * fVar33 + fVar12 * fVar34 + fVar16 * fVar22 + fVar27 * 0.0;
    fVar78 = fVar26 * fVar33 + fVar13 * fVar34 + fVar17 * fVar22 + fVar27 * 1.0;
    fVar33 = auVar31._0_4_;
    fVar34 = auVar31._4_4_;
    fVar22 = auVar31._8_4_;
    fVar27 = auVar31._12_4_;
    fVar45 = fVar23 * fVar64 + fVar54 * fVar67 + fVar33 * fVar69 + fVar59 * fVar71;
    fVar46 = fVar24 * fVar64 + fVar57 * fVar67 + fVar34 * fVar69 + fVar73 * fVar71;
    fVar47 = fVar25 * fVar64 + fVar58 * fVar67 + fVar22 * fVar69 + fVar52 * fVar71;
    fVar48 = fVar26 * fVar64 + fVar44 * fVar67 + fVar27 * fVar69 + fVar53 * fVar71;
    fVar64 = fVar23 * fVar65 + fVar35 * fVar68 + fVar14 * fVar70 + fVar72 * 0.0;
    fVar67 = fVar24 * fVar65 + fVar36 * fVar68 + fVar15 * fVar70 + fVar49 * fVar72;
    fVar69 = fVar25 * fVar65 + fVar12 * fVar68 + fVar16 * fVar70 + fVar72 * 0.0;
    fVar71 = fVar26 * fVar65 + fVar13 * fVar68 + fVar17 * fVar70 + fVar72 * 1.0;
    fVar65 = fVar23 * fVar37 + fVar35 * fVar41 + fVar14 * fVar42 + fVar80 * 0.0;
    fVar68 = fVar24 * fVar37 + fVar36 * fVar41 + fVar15 * fVar42 + fVar49 * fVar80;
    fVar70 = fVar25 * fVar37 + fVar12 * fVar41 + fVar16 * fVar42 + fVar80 * 0.0;
    fVar37 = fVar26 * fVar37 + fVar13 * fVar41 + fVar17 * fVar42 + fVar80 * 1.0;
    lVar11 = local_48[9];
    auVar31 = *(undefined1 (*) [16])(lVar11 + 0xe0);
    fVar28 = fVar23 * fVar64 + fVar54 * fVar67 + fVar33 * fVar69 + fVar59 * fVar71;
    fVar43 = fVar24 * fVar64 + fVar57 * fVar67 + fVar34 * fVar69 + fVar73 * fVar71;
    fVar49 = fVar25 * fVar64 + fVar58 * fVar67 + fVar22 * fVar69 + fVar52 * fVar71;
    fVar71 = fVar26 * fVar64 + fVar44 * fVar67 + fVar27 * fVar69 + fVar53 * fVar71;
    fVar29 = fVar23 * fVar65 + fVar54 * fVar68 + fVar33 * fVar70 + fVar59 * fVar37;
    fVar30 = fVar24 * fVar65 + fVar57 * fVar68 + fVar34 * fVar70 + fVar73 * fVar37;
    fVar42 = fVar25 * fVar65 + fVar58 * fVar68 + fVar22 * fVar70 + fVar52 * fVar37;
    fVar80 = fVar26 * fVar65 + fVar44 * fVar68 + fVar27 * fVar70 + fVar53 * fVar37;
    fVar64 = fVar23 * fVar75 + fVar54 * fVar76 + fVar33 * fVar77 + fVar59 * fVar78;
    fVar67 = fVar24 * fVar75 + fVar57 * fVar76 + fVar34 * fVar77 + fVar73 * fVar78;
    fVar37 = fVar25 * fVar75 + fVar58 * fVar76 + fVar22 * fVar77 + fVar52 * fVar78;
    fVar41 = fVar26 * fVar75 + fVar44 * fVar76 + fVar27 * fVar77 + fVar53 * fVar78;
    fVar69 = fVar23 * fVar45 + fVar35 * fVar46 + fVar14 * fVar47 + fVar48 * 0.0;
    fVar59 = fVar24 * fVar45 + fVar36 * fVar46 + fVar15 * fVar47 + fVar19 * fVar48;
    fVar52 = fVar25 * fVar45 + fVar12 * fVar46 + fVar16 * fVar47 + fVar48 * 0.0;
    fVar33 = fVar26 * fVar45 + fVar13 * fVar46 + fVar17 * fVar47 + fVar48 * 1.0;
    fVar54 = fVar23 * fVar28 + fVar35 * fVar43 + fVar14 * fVar49 + fVar71 * 0.0;
    fVar57 = fVar24 * fVar28 + fVar36 * fVar43 + fVar15 * fVar49 + fVar19 * fVar71;
    fVar58 = fVar25 * fVar28 + fVar12 * fVar43 + fVar16 * fVar49 + fVar71 * 0.0;
    fVar43 = fVar26 * fVar28 + fVar13 * fVar43 + fVar17 * fVar49 + fVar71 * 1.0;
    fVar22 = auVar31._0_4_;
    fVar27 = auVar31._4_4_;
    fVar28 = auVar31._8_4_;
    fVar71 = fVar23 * fVar29 + fVar35 * fVar30 + fVar14 * fVar42 + fVar80 * 0.0;
    fVar73 = fVar24 * fVar29 + fVar36 * fVar30 + fVar15 * fVar42 + fVar19 * fVar80;
    fVar53 = fVar25 * fVar29 + fVar12 * fVar30 + fVar16 * fVar42 + fVar80 * 0.0;
    fVar34 = fVar26 * fVar29 + fVar13 * fVar30 + fVar17 * fVar42 + fVar80 * 1.0;
    fVar29 = fVar23 * fVar64 + fVar35 * fVar67 + fVar14 * fVar37 + fVar41 * 0.0;
    fVar19 = fVar24 * fVar64 + fVar36 * fVar67 + fVar15 * fVar37 + fVar19 * fVar41;
    fVar30 = fVar25 * fVar64 + fVar12 * fVar67 + fVar16 * fVar37 + fVar41 * 0.0;
    fVar37 = fVar26 * fVar64 + fVar13 * fVar67 + fVar17 * fVar37 + fVar41 * 1.0;
    fVar64 = fVar24 * fVar29 + fVar36 * fVar19 + fVar15 * fVar30 + fVar27 * fVar37;
    fVar67 = fVar26 * fVar29 + fVar13 * fVar19 + fVar17 * fVar30 + fVar37 * 1.0;
    *(undefined1 *)(lVar11 + 0xf4) = 0;
    *(int *)(lVar11 + 0xf0) = *(int *)(lVar11 + 0xf0) + 1;
    *(float *)(lVar11 + 0x48) =
         fVar25 * fVar71 + fVar12 * fVar73 + fVar16 * fVar53 + fVar28 * fVar34;
    *(float *)(lVar11 + 0x4c) = fVar26 * fVar71 + fVar13 * fVar73 + fVar17 * fVar53 + fVar34 * 1.0;
    *(float *)(lVar11 + 0x40) =
         fVar23 * fVar71 + fVar35 * fVar73 + fVar14 * fVar53 + fVar22 * fVar34;
    *(float *)(lVar11 + 0x44) =
         fVar24 * fVar71 + fVar36 * fVar73 + fVar15 * fVar53 + fVar27 * fVar34;
    *(float *)(lVar11 + 0x58) =
         fVar25 * fVar69 + fVar12 * fVar59 + fVar16 * fVar52 + fVar28 * fVar33;
    *(float *)(lVar11 + 0x5c) = fVar26 * fVar69 + fVar13 * fVar59 + fVar17 * fVar52 + fVar33 * 1.0;
    *(float *)(lVar11 + 0x50) =
         fVar23 * fVar69 + fVar35 * fVar59 + fVar14 * fVar52 + fVar22 * fVar33;
    *(float *)(lVar11 + 0x54) =
         fVar24 * fVar69 + fVar36 * fVar59 + fVar15 * fVar52 + fVar27 * fVar33;
    *(ulong *)(lVar11 + 0x68) =
         CONCAT17((char)((uint)fVar67 >> 0x18),
                  CONCAT16((char)((uint)fVar67 >> 0x10),
                           CONCAT15((char)((uint)fVar67 >> 8),
                                    CONCAT14(SUB41(fVar67,0),
                                             fVar25 * fVar29 + fVar12 * fVar19 + fVar16 * fVar30 +
                                             fVar28 * fVar37))));
    *(ulong *)(lVar11 + 0x60) =
         CONCAT17((char)((uint)fVar64 >> 0x18),
                  CONCAT16((char)((uint)fVar64 >> 0x10),
                           CONCAT15((char)((uint)fVar64 >> 8),
                                    CONCAT14(SUB41(fVar64,0),
                                             fVar23 * fVar29 + fVar35 * fVar19 + fVar14 * fVar30 +
                                             fVar22 * fVar37))));
    *(float *)(lVar11 + 0x78) =
         fVar25 * fVar54 + fVar12 * fVar57 + fVar16 * fVar58 + fVar28 * fVar43;
    *(float *)(lVar11 + 0x7c) = fVar26 * fVar54 + fVar13 * fVar57 + fVar17 * fVar58 + fVar43 * 1.0;
    *(float *)(lVar11 + 0x70) =
         fVar23 * fVar54 + fVar35 * fVar57 + fVar14 * fVar58 + fVar22 * fVar43;
    *(float *)(lVar11 + 0x74) =
         fVar24 * fVar54 + fVar36 * fVar57 + fVar15 * fVar58 + fVar27 * fVar43;
    if (local_48 != (long *)0x0) {
      plVar1 = local_48 + 5;
      do {
        lVar11 = *plVar1;
        iVar4 = (int)lVar11 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
      else if ((int)lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x60))();
    }
  }
  return;
}


