/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01901d10; name: FUN_01901d10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01901d10(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
                 undefined1 param_4 [16],long param_5,uint param_6,long param_7,undefined8 param_8,
                 long *param_9,long param_10,ulong param_11,undefined4 param_12,undefined4 param_13,
                 byte param_14,byte param_15)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined4 uVar13;
  undefined8 *puVar14;
  ushort uVar15;
  long lVar16;
  float *pfVar17;
  undefined8 uVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long *plVar24;
  ulong uVar25;
  bool bVar26;
  short sVar27;
  ulong uVar28;
  long *plVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar42;
  float fVar43;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar44;
  float fVar50;
  float fVar51;
  float fVar53;
  undefined1 auVar45 [16];
  float fVar52;
  float fVar54;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  int iVar55;
  int iVar60;
  undefined1 auVar56 [16];
  float fVar61;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined4 uVar62;
  int iVar63;
  undefined6 uVar64;
  undefined7 uVar65;
  int iVar80;
  byte bVar81;
  byte bVar82;
  int iVar84;
  undefined1 auVar66 [12];
  int iVar79;
  int iVar83;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  int iVar85;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar74 [16];
  undefined1 auVar73 [16];
  undefined1 auVar72 [16];
  undefined1 auVar71 [16];
  undefined1 auVar78 [16];
  undefined1 auVar77 [16];
  undefined1 auVar76 [16];
  undefined1 auVar75 [16];
  float fVar86;
  float fVar95;
  float fVar96;
  undefined1 auVar87 [16];
  float fVar97;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  float fVar102;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar103 [16];
  float fVar104;
  float fVar105;
  undefined1 auVar106 [12];
  float fVar112;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 uVar115;
  undefined1 uVar116;
  undefined1 uVar117;
  undefined1 uVar118;
  undefined1 uVar119;
  undefined1 uVar120;
  undefined1 uVar121;
  undefined1 uVar122;
  undefined1 uVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  undefined1 auVar129 [16];
  undefined1 *local_200;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined2 local_1bc;
  undefined1 local_1ba;
  undefined1 local_1b9;
  undefined1 uStack_1b8;
  undefined2 uStack_1b7;
  undefined8 *local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  char *pcStack_190;
  undefined8 local_188;
  long *local_180;
  undefined8 *local_178;
  undefined8 uStack_170;
  undefined8 *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  char *pcStack_148;
  undefined8 local_140;
  long *local_138;
  undefined8 *local_130;
  undefined8 uStack_128;
  undefined1 *local_120;
  undefined4 uStack_118;
  undefined2 uStack_114;
  undefined1 uStack_112;
  undefined1 uStack_111;
  undefined1 uStack_110;
  undefined2 uStack_10f;
  undefined5 uStack_10d;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_88;
  undefined4 uStack_84;
  byte local_78 [4];
  uint local_74 [5];
  
  local_78[0] = param_15 & 1;
  uVar22 = *(ulong *)(param_5 + 0x50);
  if (uVar22 == 0) {
    return;
  }
  uVar19 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
  uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
  uVar28 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  uVar19 = (ulong)param_6;
  if (uVar28 < 2) {
    uVar25 = (ulong)((int)uVar22 - 1U & param_6);
  }
  else {
    uVar25 = uVar19;
    if (uVar22 <= uVar19) {
      uVar25 = 0;
      if (uVar22 != 0) {
        uVar25 = uVar19 / uVar22;
      }
      uVar25 = uVar19 - uVar25 * uVar22;
    }
  }
  plVar20 = *(long **)(*(long *)(param_5 + 0x48) + uVar25 * 8);
  if (plVar20 == (long *)0x0) {
    return;
  }
  plVar20 = (long *)*plVar20;
  if (plVar20 == (long *)0x0) {
    return;
  }
  if (1 < uVar28) {
    do {
      uVar28 = plVar20[1];
      if (uVar28 == uVar19) {
        if (*(uint *)(plVar20 + 2) == param_6) goto LAB_01901dc8;
      }
      else {
        if (uVar22 <= uVar28) {
          uVar5 = 0;
          if (uVar22 != 0) {
            uVar5 = uVar28 / uVar22;
          }
          uVar28 = uVar28 - uVar5 * uVar22;
        }
        if (uVar28 != uVar25) {
          return;
        }
      }
      plVar20 = (long *)*plVar20;
      if (plVar20 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    if (plVar20[1] == uVar19) {
      if (*(uint *)(plVar20 + 2) == param_6) goto LAB_01901dc8;
    }
    else if ((plVar20[1] & uVar22 - 1) != uVar25) {
      return;
    }
    plVar20 = (long *)*plVar20;
    if (plVar20 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_01901f40:
  sVar3 = *psVar1;
  if (sVar3 == sVar27) {
    cVar4 = '\x01';
    bVar26 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar26) {
      *psVar1 = sVar27 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_01901f64;
    bVar26 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_01901f64:
    bVar26 = false;
  }
  if (bVar26) {
    lVar21 = *(long *)(lVar21 + 0x10);
    plVar24 = (long *)(lVar21 + -0x28);
    if (lVar21 != 0) {
      if ((param_14 & 1) != 0) {
        uStack_10f = 0;
        uStack_110 = 0x31;
        uStack_111 = 0x38;
        uStack_112 = 0x43;
        uStack_114 = 0x4143;
        uStack_118 = 0x37383637;
        local_120 = &DAT_3041423130373453;
        uVar15 = FUN_0210de14(plVar29,&local_120,plVar20 + 3,local_74,param_8,local_78);
        if (((uVar15 & 0xff) != 0) && (0xff < uVar15)) {
          local_1e0._0_4_ = param_1._0_4_;
          local_1e0 = CONCAT44(param_1._4_4_,1.0 - (float)local_1e0);
          local_1f0._0_4_ = param_2._0_4_;
          local_1f0._4_4_ = param_2._4_4_;
          local_1f0 = CONCAT44(-local_1f0._4_4_,(float)local_1f0);
        }
      }
      lVar16 = (**(code **)(*plVar24 + 0x68))(plVar24);
      uVar13 = SUB164(*(undefined1 (*) [16])(lVar16 + 0x30),8);
      local_200 = SUB168(*(undefined1 (*) [16])(lVar16 + 0x30),0);
      if ((**(char **)(param_10 + 8) != '\0') &&
         (lVar21 = FUN_01104bd8(lVar21 + 0xe0,&local_120), lVar21 != 0)) {
        (**(code **)(*(long *)(lVar21 + 0x128) + 0x50))(lVar21 + 0x128,param_10);
        uVar13 = param_4._8_4_;
        local_200 = param_4._0_8_;
      }
      auVar129 = NEON_fmov(0x3f800000,4);
      fVar50 = (((float)local_1f0 * 3.1415927) / 180.0) * 0.5;
      fVar51 = ((local_1f0._4_4_ * 3.1415927) / 180.0) * 0.5;
      iVar55 = -(uint)(fVar50 == 0.0);
      iVar60 = -(uint)(fVar51 == 0.0);
      fVar124 = fVar50 + 1.5707964;
      fVar125 = fVar51 + 1.5707964;
      iVar79 = -(uint)(ABS(fVar50) == INFINITY);
      iVar83 = -(uint)(ABS(fVar51) == INFINITY);
      auVar113._4_4_ =
           (int)((float)(-(uint)(0.0 <= fVar51) & 0x80000000 ^ 0xbf000000) + fVar51 * 0.15915494);
      auVar113._0_4_ =
           (int)((float)(-(uint)(0.0 <= fVar50) & 0x80000000 ^ 0xbf000000) + fVar50 * 0.15915494);
      auVar113._8_8_ = 0;
      auVar87 = NEON_scvtf(auVar113 << 0x20,4);
      fVar44 = 0.0 - auVar87._0_4_ * 6.2831855;
      fVar50 = fVar50 - auVar87._4_4_ * 6.2831855;
      fVar51 = fVar51 - auVar87._8_4_ * 6.2831855;
      fVar53 = 0.0 - auVar87._12_4_ * 6.2831855;
      auVar67[4] = ~(byte)iVar79;
      auVar67._0_4_ = 0xffffffff;
      auVar67[5] = ~(byte)((uint)iVar79 >> 8);
      auVar67[6] = ~(byte)((uint)iVar79 >> 0x10);
      auVar67[7] = ~(byte)((uint)iVar79 >> 0x18);
      auVar67[8] = ~(byte)iVar83;
      auVar67[9] = ~(byte)((uint)iVar83 >> 8);
      auVar67[10] = ~(byte)((uint)iVar83 >> 0x10);
      auVar67[0xb] = ~(byte)((uint)iVar83 >> 0x18);
      auVar67[0xc] = 0xff;
      auVar67[0xd] = 0xff;
      auVar67[0xe] = 0xff;
      auVar67[0xf] = 0xff;
      fVar44 = (float)((uint)fVar44 ^
                      ((uint)fVar44 ^ (uint)(-3.1415927 - fVar44)) & -(uint)(fVar44 < -1.5707964));
      fVar50 = (float)((uint)fVar50 ^
                      ((uint)fVar50 ^ (uint)(-3.1415927 - fVar50)) & -(uint)(fVar50 < -1.5707964));
      fVar51 = (float)((uint)fVar51 ^
                      ((uint)fVar51 ^ (uint)(-3.1415927 - fVar51)) & -(uint)(fVar51 < -1.5707964));
      fVar53 = (float)((uint)fVar53 ^
                      ((uint)fVar53 ^ (uint)(-3.1415927 - fVar53)) & -(uint)(fVar53 < -1.5707964));
      fVar44 = (float)((uint)fVar44 ^
                      ((uint)fVar44 ^ (uint)(3.1415927 - fVar44)) & -(uint)(1.5707964 < fVar44));
      fVar50 = (float)((uint)fVar50 ^
                      ((uint)fVar50 ^ (uint)(3.1415927 - fVar50)) & -(uint)(1.5707964 < fVar50));
      fVar51 = (float)((uint)fVar51 ^
                      ((uint)fVar51 ^ (uint)(3.1415927 - fVar51)) & -(uint)(1.5707964 < fVar51));
      fVar53 = (float)((uint)fVar53 ^
                      ((uint)fVar53 ^ (uint)(3.1415927 - fVar53)) & -(uint)(1.5707964 < fVar53));
      fVar86 = fVar44 * fVar44;
      fVar95 = fVar50 * fVar50;
      fVar96 = fVar51 * fVar51;
      fVar97 = fVar53 * fVar53;
      fVar127 = auVar129._8_4_;
      fVar128 = auVar129._12_4_;
      fVar112 = auVar129._0_4_;
      fVar126 = auVar129._4_4_;
      auVar88._8_4_ = 0x7fc00000;
      auVar88._0_8_ = 0x7fc000007fc00000;
      auVar88._12_4_ = 0x7fc00000;
      auVar45._0_4_ =
           fVar44 * (fVar112 +
                    fVar86 * (fVar86 * (fVar86 * (fVar86 * (fVar86 * -2.5052108e-08 + 2.7557319e-06)
                                                 + -0.0001984127) + 0.008333334) + -0.16666667));
      auVar45._4_4_ =
           fVar50 * (fVar126 +
                    fVar95 * (fVar95 * (fVar95 * (fVar95 * (fVar95 * -2.5052108e-08 + 2.7557319e-06)
                                                 + -0.0001984127) + 0.008333334) + -0.16666667));
      auVar45._8_4_ =
           fVar51 * (fVar127 +
                    fVar96 * (fVar96 * (fVar96 * (fVar96 * (fVar96 * -2.5052108e-08 + 2.7557319e-06)
                                                 + -0.0001984127) + 0.008333334) + -0.16666667));
      auVar45._12_4_ =
           fVar53 * (fVar128 +
                    fVar97 * (fVar97 * (fVar97 * (fVar97 * (fVar97 * -2.5052108e-08 + 2.7557319e-06)
                                                 + -0.0001984127) + 0.008333334) + -0.16666667));
      iVar79 = -(uint)(ABS(fVar124) == INFINITY);
      iVar83 = -(uint)(ABS(fVar125) == INFINITY);
      auVar56[4] = ~(byte)iVar79;
      auVar56._0_4_ = 0xffffffff;
      auVar56[5] = ~(byte)((uint)iVar79 >> 8);
      auVar56[6] = ~(byte)((uint)iVar79 >> 0x10);
      auVar56[7] = ~(byte)((uint)iVar79 >> 0x18);
      auVar56[8] = ~(byte)iVar83;
      auVar56[9] = ~(byte)((uint)iVar83 >> 8);
      auVar56[10] = ~(byte)((uint)iVar83 >> 0x10);
      auVar56[0xb] = ~(byte)((uint)iVar83 >> 0x18);
      auVar56[0xc] = 0xff;
      auVar56[0xd] = 0xff;
      auVar56[0xe] = 0xff;
      auVar56[0xf] = 0xff;
      auVar45 = auVar45 ^ (auVar45 ^ auVar88) & ~auVar67;
      auVar90._4_4_ =
           (int)((float)(-(uint)(0.0 <= fVar125) & 0x80000000 ^ 0xbf000000) + fVar125 * 0.15915494);
      auVar90._0_4_ =
           (int)((float)(-(uint)(0.0 <= fVar124) & 0x80000000 ^ 0xbf000000) + fVar124 * 0.15915494);
      auVar90._8_8_ = 0;
      auVar87 = NEON_scvtf(auVar90 << 0x20,4);
      fVar44 = 1.5707964 - auVar87._0_4_ * 6.2831855;
      fVar124 = fVar124 - auVar87._4_4_ * 6.2831855;
      fVar125 = fVar125 - auVar87._8_4_ * 6.2831855;
      fVar53 = 1.5707964 - auVar87._12_4_ * 6.2831855;
      fVar44 = (float)((uint)fVar44 ^
                      ((uint)fVar44 ^ (uint)(-3.1415927 - fVar44)) & -(uint)(fVar44 < -1.5707964));
      fVar124 = (float)((uint)fVar124 ^
                       ((uint)fVar124 ^ (uint)(-3.1415927 - fVar124)) &
                       -(uint)(fVar124 < -1.5707964));
      fVar125 = (float)((uint)fVar125 ^
                       ((uint)fVar125 ^ (uint)(-3.1415927 - fVar125)) &
                       -(uint)(fVar125 < -1.5707964));
      fVar53 = (float)((uint)fVar53 ^
                      ((uint)fVar53 ^ (uint)(-3.1415927 - fVar53)) & -(uint)(fVar53 < -1.5707964));
      fVar44 = (float)((uint)(3.1415927 - fVar44) ^
                      ((uint)(3.1415927 - fVar44) ^ (uint)fVar44) & ~-(uint)(1.5707964 < fVar44));
      fVar50 = (float)((uint)(3.1415927 - fVar124) ^
                      ((uint)(3.1415927 - fVar124) ^ (uint)fVar124) & ~-(uint)(1.5707964 < fVar124))
      ;
      fVar51 = (float)((uint)(3.1415927 - fVar125) ^
                      ((uint)(3.1415927 - fVar125) ^ (uint)fVar125) & ~-(uint)(1.5707964 < fVar125))
      ;
      fVar53 = (float)((uint)(3.1415927 - fVar53) ^
                      ((uint)(3.1415927 - fVar53) ^ (uint)fVar53) & ~-(uint)(1.5707964 < fVar53));
      fVar86 = fVar44 * fVar44;
      fVar96 = fVar50 * fVar50;
      fVar97 = fVar51 * fVar51;
      fVar124 = fVar53 * fVar53;
      fVar95 = auVar45._0_4_;
      auVar39._0_4_ =
           fVar44 * (fVar112 +
                    fVar86 * (fVar86 * (fVar86 * (fVar86 * (fVar86 * -2.5052108e-08 + 2.7557319e-06)
                                                 + -0.0001984127) + 0.008333334) + -0.16666667));
      auVar39._4_4_ =
           fVar50 * (fVar126 +
                    fVar96 * (fVar96 * (fVar96 * (fVar96 * (fVar96 * -2.5052108e-08 + 2.7557319e-06)
                                                 + -0.0001984127) + 0.008333334) + -0.16666667));
      auVar39._8_4_ =
           fVar51 * (fVar127 +
                    fVar97 * (fVar97 * (fVar97 * (fVar97 * (fVar97 * -2.5052108e-08 + 2.7557319e-06)
                                                 + -0.0001984127) + 0.008333334) + -0.16666667));
      auVar39._12_4_ =
           fVar53 * (fVar128 +
                    fVar124 * (fVar124 * (fVar124 * (fVar124 * (fVar124 * -2.5052108e-08 +
                                                               2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
      fVar96 = auVar45._4_4_;
      auVar39 = auVar39 ^ (auVar39 ^ auVar88) & ~auVar56;
      auVar87[1] = ~(byte)((uint)iVar55 >> 8);
      auVar87[0] = ~(byte)iVar55;
      auVar87[2] = ~(byte)((uint)iVar55 >> 0x10);
      auVar87[3] = ~(byte)((uint)iVar55 >> 0x18);
      auVar87[4] = ~(byte)iVar60;
      auVar87[5] = ~(byte)((uint)iVar60 >> 8);
      auVar87[6] = ~(byte)((uint)iVar60 >> 0x10);
      auVar87[7] = ~(byte)((uint)iVar60 >> 0x18);
      auVar87._8_8_ = 0;
      auVar39 = auVar39 ^ (auVar39 ^ auVar129) & ~(auVar87 << 0x20);
      auVar39 = auVar39 ^ (auVar39 ^ auVar88) & ~auVar67;
      fVar44 = auVar39._0_4_;
      fVar51 = auVar39._4_4_;
      fVar86 = auVar39._8_4_;
      fVar97 = auVar45._8_4_;
      fVar124 = (float)_DAT_03cab3a0;
      fVar125 = (float)((ulong)_DAT_03cab3a0 >> 0x20);
      fVar105 = (float)_UNK_03cab3a8;
      fVar61 = (float)((ulong)_UNK_03cab3a8 >> 0x20);
      fVar50 = fVar86 * fVar44 * fVar96 + fVar97 * fVar51 * fVar95 * fVar124;
      fVar53 = fVar97 * fVar44 * fVar51 + fVar86 * fVar96 * fVar95 * fVar125;
      auVar129._0_8_ = CONCAT44(fVar53,fVar50);
      auVar129._8_4_ = fVar86 * fVar95 * fVar51 + fVar97 * fVar96 * fVar44 * fVar105;
      auVar129._12_4_ = fVar86 * fVar44 * fVar51 + fVar97 * fVar96 * fVar95 * fVar61;
      uStack_1e8 = auVar129._8_8_;
      local_1f0 = auVar129._0_8_;
      if ((param_11 & 1) != 0) {
        pfVar17 = (float *)(**(code **)(*plVar24 + 0x68))(plVar24);
        fVar44 = *pfVar17;
        fVar51 = pfVar17[1];
        fVar86 = pfVar17[2];
        fVar95 = pfVar17[3];
        fVar96 = pfVar17[4];
        fVar97 = pfVar17[5];
        fVar52 = pfVar17[6];
        fVar54 = pfVar17[7];
        auVar30._0_4_ = fVar44 * fVar44 + fVar51 * fVar51;
        auVar30._4_4_ = fVar86 * fVar86 + fVar95 * fVar95;
        auVar30._8_4_ = fVar44 * fVar44 + fVar51 * fVar51;
        auVar30._12_4_ = fVar86 * fVar86 + fVar95 * fVar95;
        auVar87 = NEON_ext(auVar30,auVar30,4,1);
        auVar31._0_4_ = auVar87._0_4_ + auVar87._4_4_;
        auVar31._4_4_ = auVar87._8_4_ + auVar87._12_4_;
        auVar31._8_4_ = auVar87._0_4_ + auVar87._4_4_;
        auVar31._12_4_ = auVar87._8_4_ + auVar87._12_4_;
        auVar87 = NEON_frsqrte(auVar31,4);
        auVar89._0_4_ = auVar31._0_4_ * auVar87._0_4_;
        auVar89._4_4_ = auVar31._4_4_ * auVar87._4_4_;
        auVar89._8_4_ = auVar31._8_4_ * auVar87._8_4_;
        auVar89._12_4_ = auVar31._12_4_ * auVar87._12_4_;
        auVar90 = NEON_frsqrts(auVar87,auVar89,4);
        auVar68._0_4_ = auVar87._0_4_ * auVar90._0_4_;
        auVar68._4_4_ = auVar87._4_4_ * auVar90._4_4_;
        auVar68._8_4_ = auVar87._8_4_ * auVar90._8_4_;
        auVar68._12_4_ = auVar87._12_4_ * auVar90._12_4_;
        auVar91._0_4_ = auVar31._0_4_ * auVar68._0_4_;
        auVar91._4_4_ = auVar31._4_4_ * auVar68._4_4_;
        auVar91._8_4_ = auVar31._8_4_ * auVar68._8_4_;
        auVar91._12_4_ = auVar31._12_4_ * auVar68._12_4_;
        iVar55 = -(uint)(auVar31._0_4_ == 0.0);
        iVar60 = -(uint)(auVar31._4_4_ == 0.0);
        iVar79 = -(uint)(auVar31._8_4_ == 0.0);
        iVar83 = -(uint)(auVar31._12_4_ == 0.0);
        auVar87 = NEON_frsqrts(auVar68,auVar91,4);
        fVar44 = fVar44 * auVar68._0_4_ * auVar87._0_4_;
        fVar51 = fVar51 * auVar68._4_4_ * auVar87._4_4_;
        fVar86 = fVar86 * auVar68._8_4_ * auVar87._8_4_;
        fVar95 = fVar95 * auVar68._12_4_ * auVar87._12_4_;
        auVar32._0_4_ = fVar96 * fVar96 + fVar97 * fVar97;
        auVar32._4_4_ = fVar52 * fVar52 + fVar54 * fVar54;
        auVar32._8_4_ = fVar96 * fVar96 + fVar97 * fVar97;
        auVar32._12_4_ = fVar52 * fVar52 + fVar54 * fVar54;
        auVar87 = NEON_ext(auVar32,auVar32,4,1);
        auVar33._0_4_ = auVar87._0_4_ + auVar87._4_4_;
        auVar33._4_4_ = auVar87._8_4_ + auVar87._12_4_;
        auVar33._8_4_ = auVar87._0_4_ + auVar87._4_4_;
        auVar33._12_4_ = auVar87._8_4_ + auVar87._12_4_;
        auVar87 = NEON_frsqrte(auVar33,4);
        auVar98._0_4_ = auVar33._0_4_ * auVar87._0_4_;
        auVar98._4_4_ = auVar33._4_4_ * auVar87._4_4_;
        auVar98._8_4_ = auVar33._8_4_ * auVar87._8_4_;
        auVar98._12_4_ = auVar33._12_4_ * auVar87._12_4_;
        auVar90 = NEON_frsqrts(auVar87,auVar98,4);
        auVar92._0_4_ = auVar87._0_4_ * auVar90._0_4_;
        auVar92._4_4_ = auVar87._4_4_ * auVar90._4_4_;
        auVar92._8_4_ = auVar87._8_4_ * auVar90._8_4_;
        auVar92._12_4_ = auVar87._12_4_ * auVar90._12_4_;
        auVar99._0_4_ = auVar33._0_4_ * auVar92._0_4_;
        auVar99._4_4_ = auVar33._4_4_ * auVar92._4_4_;
        auVar99._8_4_ = auVar33._8_4_ * auVar92._8_4_;
        auVar99._12_4_ = auVar33._12_4_ * auVar92._12_4_;
        iVar63 = -(uint)(auVar33._0_4_ == 0.0);
        iVar80 = -(uint)(auVar33._4_4_ == 0.0);
        iVar84 = -(uint)(auVar33._8_4_ == 0.0);
        iVar85 = -(uint)(auVar33._12_4_ == 0.0);
        auVar87 = NEON_frsqrts(auVar92,auVar99,4);
        fVar96 = fVar96 * auVar92._0_4_ * auVar87._0_4_;
        fVar97 = fVar97 * auVar92._4_4_ * auVar87._4_4_;
        fVar52 = fVar52 * auVar92._8_4_ * auVar87._8_4_;
        fVar54 = fVar54 * auVar92._12_4_ * auVar87._12_4_;
        fVar38 = pfVar17[8];
        fVar42 = pfVar17[9];
        fVar43 = pfVar17[10];
        fVar102 = pfVar17[0xb] * pfVar17[0xb];
        auVar34._0_4_ = fVar38 * fVar38 + fVar42 * fVar42;
        auVar34._4_4_ = fVar43 * fVar43 + fVar102;
        auVar34._8_4_ = fVar38 * fVar38 + fVar42 * fVar42;
        auVar34._12_4_ = fVar43 * fVar43 + fVar102;
        auVar87 = NEON_ext(auVar34,auVar34,4,1);
        auVar35._0_4_ = auVar87._0_4_ + auVar87._4_4_;
        auVar35._4_4_ = auVar87._8_4_ + auVar87._12_4_;
        auVar35._8_4_ = auVar87._0_4_ + auVar87._4_4_;
        auVar35._12_4_ = auVar87._8_4_ + auVar87._12_4_;
        auVar87 = NEON_frsqrte(auVar35,4);
        auVar107._0_4_ = auVar35._0_4_ * auVar87._0_4_;
        auVar107._4_4_ = auVar35._4_4_ * auVar87._4_4_;
        auVar107._8_4_ = auVar35._8_4_ * auVar87._8_4_;
        auVar107._12_4_ = auVar35._12_4_ * auVar87._12_4_;
        auVar90 = NEON_frsqrts(auVar87,auVar107,4);
        auVar103._0_4_ = auVar87._0_4_ * auVar90._0_4_;
        auVar103._4_4_ = auVar87._4_4_ * auVar90._4_4_;
        auVar103._8_4_ = auVar87._8_4_ * auVar90._8_4_;
        auVar103._12_4_ = auVar87._12_4_ * auVar90._12_4_;
        auVar108._0_4_ = auVar35._0_4_ * auVar103._0_4_;
        auVar108._4_4_ = auVar35._4_4_ * auVar103._4_4_;
        auVar108._8_4_ = auVar35._8_4_ * auVar103._8_4_;
        auVar108._12_4_ = auVar35._12_4_ * auVar103._12_4_;
        auVar87 = NEON_frsqrts(auVar103,auVar108,4);
        fVar104 = (float)CONCAT13((byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18),
                                  CONCAT12((byte)((uint)fVar44 >> 0x10) &
                                           ~(byte)((uint)iVar55 >> 0x10),
                                           CONCAT11((byte)((uint)fVar44 >> 8) &
                                                    ~(byte)((uint)iVar55 >> 8),
                                                    SUB41(fVar44,0) & ~(byte)iVar55)));
        auVar106._0_8_ =
             CONCAT17((byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar60 >> 0x18),
                      CONCAT16((byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar60 >> 0x10),
                               CONCAT15((byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar60 >> 8),
                                        CONCAT14(SUB41(fVar51,0) & ~(byte)iVar60,fVar104))));
        auVar106[8] = SUB41(fVar86,0) & ~(byte)iVar79;
        auVar106[9] = (byte)((uint)fVar86 >> 8) & ~(byte)((uint)iVar79 >> 8);
        auVar106[10] = (byte)((uint)fVar86 >> 0x10) & ~(byte)((uint)iVar79 >> 0x10);
        auVar106[0xb] = (byte)((uint)fVar86 >> 0x18) & ~(byte)((uint)iVar79 >> 0x18);
        auVar109[0xc] = SUB41(fVar95,0) & ~(byte)iVar83;
        auVar109._0_12_ = auVar106;
        auVar109[0xd] = (byte)((uint)fVar95 >> 8) & ~(byte)((uint)iVar83 >> 8);
        auVar109[0xe] = (byte)((uint)fVar95 >> 0x10) & ~(byte)((uint)iVar83 >> 0x10);
        auVar109[0xf] = (byte)((uint)fVar95 >> 0x18) & ~(byte)((uint)iVar83 >> 0x18);
        iVar55 = -(uint)(auVar35._0_4_ == 0.0);
        iVar60 = -(uint)(auVar35._4_4_ == 0.0);
        iVar79 = -(uint)(auVar35._8_4_ == 0.0);
        fVar102 = (float)CONCAT13((byte)((uint)fVar96 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18),
                                  CONCAT12((byte)((uint)fVar96 >> 0x10) &
                                           ~(byte)((uint)iVar63 >> 0x10),
                                           CONCAT11((byte)((uint)fVar96 >> 8) &
                                                    ~(byte)((uint)iVar63 >> 8),
                                                    SUB41(fVar96,0) & ~(byte)iVar63)));
        auVar46._0_8_ =
             CONCAT17((byte)((uint)fVar97 >> 0x18) & ~(byte)((uint)iVar80 >> 0x18),
                      CONCAT16((byte)((uint)fVar97 >> 0x10) & ~(byte)((uint)iVar80 >> 0x10),
                               CONCAT15((byte)((uint)fVar97 >> 8) & ~(byte)((uint)iVar80 >> 8),
                                        CONCAT14(SUB41(fVar97,0) & ~(byte)iVar80,fVar102))));
        auVar46[8] = SUB41(fVar52,0) & ~(byte)iVar84;
        auVar46[9] = (byte)((uint)fVar52 >> 8) & ~(byte)((uint)iVar84 >> 8);
        auVar46[10] = (byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar84 >> 0x10);
        auVar46[0xb] = (byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar84 >> 0x18);
        auVar46[0xc] = SUB41(fVar54,0) & ~(byte)iVar85;
        auVar46[0xd] = (byte)((uint)fVar54 >> 8) & ~(byte)((uint)iVar85 >> 8);
        auVar46[0xe] = (byte)((uint)fVar54 >> 0x10) & ~(byte)((uint)iVar85 >> 0x10);
        auVar46[0xf] = (byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar85 >> 0x18);
        fVar38 = fVar38 * auVar103._0_4_ * auVar87._0_4_;
        fVar42 = fVar42 * auVar103._4_4_ * auVar87._4_4_;
        fVar43 = fVar43 * auVar103._8_4_ * auVar87._8_4_;
        auVar90 = NEON_ext(auVar46,auVar46,8,1);
        fVar52 = (float)CONCAT13((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18),
                                 CONCAT12((byte)((uint)fVar38 >> 0x10) &
                                          ~(byte)((uint)iVar55 >> 0x10),
                                          CONCAT11((byte)((uint)fVar38 >> 8) &
                                                   ~(byte)((uint)iVar55 >> 8),
                                                   SUB41(fVar38,0) & ~(byte)iVar55)));
        uVar64 = CONCAT15((byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar60 >> 8),
                          CONCAT14(SUB41(fVar42,0) & ~(byte)iVar60,fVar52));
        bVar81 = (byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar60 >> 0x10);
        uVar65 = CONCAT16(bVar81,uVar64);
        bVar82 = (byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar60 >> 0x18);
        auVar66._0_8_ = CONCAT17(bVar82,uVar65);
        auVar66[8] = SUB41(fVar43,0) & ~(byte)iVar79;
        auVar66[9] = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar79 >> 8);
        auVar66[10] = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar79 >> 0x10);
        auVar66[0xb] = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar79 >> 0x18);
        fVar54 = (float)((ulong)auVar66._0_8_ >> 0x20);
        fVar44 = (float)((ulong)auVar46._0_8_ >> 0x20);
        fVar51 = auVar66._8_4_;
        fVar38 = fVar112 + fVar124 * fVar104 + (float)_DAT_03cac210 * fVar44 +
                 (float)_DAT_03cabb00 * fVar51;
        fVar126 = fVar126 + fVar125 * fVar104 + (float)((ulong)_DAT_03cac210 >> 0x20) * fVar44 +
                  (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar51;
        fVar127 = fVar127 + fVar105 * fVar104 + (float)_UNK_03cac218 * fVar44 +
                  (float)_UNK_03cabb08 * fVar51;
        fVar128 = fVar128 + fVar61 * fVar104 + (float)((ulong)_UNK_03cac218 >> 0x20) * fVar44 +
                  (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar51;
        fVar96 = SQRT(fVar126) * 0.5;
        auVar87 = NEON_fmov(0x40800000,4);
        auVar113 = NEON_ext(auVar109,auVar109,8,1);
        auVar57._0_4_ = SQRT(fVar38) * 0.5 * auVar87._0_4_;
        auVar57._4_4_ = fVar96 * auVar87._4_4_;
        auVar57._8_4_ = SQRT(fVar127) * 0.5 * auVar87._8_4_;
        auVar57._12_4_ = SQRT(fVar128) * 0.5 * auVar87._12_4_;
        auVar87 = NEON_frecpe(auVar57,4);
        fVar95 = auVar90._0_4_;
        auVar90 = NEON_frecps(auVar87,auVar57,4);
        auVar93._0_4_ = auVar87._0_4_ * auVar90._0_4_;
        auVar93._4_4_ = auVar87._4_4_ * auVar90._4_4_;
        auVar93._8_4_ = auVar87._8_4_ * auVar90._8_4_;
        auVar93._12_4_ = auVar87._12_4_ * auVar90._12_4_;
        auVar87 = NEON_frecps(auVar93,auVar57,4);
        fVar61 = (float)((ulong)auVar106._0_8_ >> 0x20);
        fVar86 = auVar93._0_4_ * auVar87._0_4_;
        fVar97 = auVar93._4_4_ * auVar87._4_4_;
        fVar124 = auVar93._8_4_ * auVar87._8_4_;
        fVar125 = auVar93._12_4_ * auVar87._12_4_;
        fVar44 = fVar95 + (float)CONCAT13(bVar82,(int3)((uint7)uVar65 >> 0x20));
        fVar51 = fVar52 + -auVar106._8_4_;
        fVar105 = auVar113._0_4_ + fVar52;
        fVar112 = fVar95 + -(float)CONCAT13(bVar82,CONCAT12(bVar81,(short)((uint6)uVar64 >> 0x20)));
        auVar12._8_4_ = fVar112;
        auVar12._4_4_ = fVar105;
        auVar110._4_4_ = fVar38;
        auVar110._0_4_ = fVar38;
        auVar110._8_4_ = fVar38;
        auVar110._12_4_ = fVar38;
        auVar114._4_4_ = fVar127;
        auVar114._0_4_ = fVar127;
        auVar114._8_4_ = fVar127;
        auVar114._12_4_ = fVar127;
        auVar9._4_4_ = fVar126;
        auVar9._0_4_ = fVar126;
        auVar9._8_4_ = fVar126;
        auVar9._12_4_ = fVar126;
        auVar10._4_4_ = -(uint)(fVar38 <= fVar126);
        auVar10._0_4_ = -(uint)(fVar38 <= fVar126);
        auVar10._8_4_ = -(uint)(fVar38 <= fVar126);
        auVar10._12_4_ = -(uint)(fVar38 <= fVar126);
        auVar110 = auVar110 ^ (auVar110 ^ auVar9) & auVar10;
        auVar12._0_4_ = (fVar61 + fVar102) * fVar86;
        auVar100._0_8_ = auVar12._0_8_ << 0x20;
        auVar100._8_4_ = fVar105 * fVar86;
        auVar100._12_4_ = fVar112 * fVar86;
        fVar86 = fVar44 * fVar97;
        fVar44 = (float)(CONCAT17((char)((uint)fVar51 >> 0x18),
                                  CONCAT16((char)((uint)fVar51 >> 0x10),
                                           CONCAT15((char)((uint)fVar51 >> 8),
                                                    CONCAT14(SUB41(fVar51,0),fVar44)))) >> 0x20) *
                 fVar97;
        auVar101._4_12_ = auVar100._4_12_;
        auVar101._0_4_ = SQRT(fVar38) * 0.5;
        auVar69._0_4_ = (auVar113._0_4_ + fVar52) * fVar124;
        auVar69._4_4_ = (fVar95 + fVar54) * fVar124;
        auVar69._12_4_ = (fVar61 - fVar102) * fVar124;
        auVar69._8_4_ = SQRT(fVar127) * 0.5;
        auVar6[4] = SUB41(fVar96,0);
        auVar6._0_4_ = (fVar61 + fVar102) * fVar97;
        auVar6[5] = (char)((uint)fVar96 >> 8);
        auVar6[6] = (char)((uint)fVar96 >> 0x10);
        auVar6[7] = (char)((uint)fVar96 >> 0x18);
        auVar6[8] = SUB41(fVar86,0);
        auVar6[9] = (char)((uint)fVar86 >> 8);
        auVar6[10] = (char)((uint)fVar86 >> 0x10);
        auVar6[0xb] = (char)((uint)fVar86 >> 0x18);
        auVar6[0xc] = SUB41(fVar44,0);
        auVar6[0xd] = (char)((uint)fVar44 >> 8);
        auVar6[0xe] = (char)((uint)fVar44 >> 0x10);
        auVar6[0xf] = (char)((uint)fVar44 >> 0x18);
        auVar11._4_4_ = -(uint)(fVar38 <= fVar126);
        auVar11._0_4_ = -(uint)(fVar38 <= fVar126);
        auVar11._8_4_ = -(uint)(fVar38 <= fVar126);
        auVar11._12_4_ = -(uint)(fVar38 <= fVar126);
        iVar55 = -(uint)(auVar110._0_4_ <= fVar127);
        iVar60 = -(uint)(auVar110._4_4_ <= fVar127);
        uVar115 = (undefined1)((uint)iVar60 >> 8);
        uVar116 = (undefined1)((uint)iVar60 >> 0x10);
        uVar117 = (undefined1)((uint)iVar60 >> 0x18);
        iVar79 = -(uint)(auVar110._8_4_ <= fVar127);
        uVar118 = (undefined1)((uint)iVar79 >> 8);
        uVar119 = (undefined1)((uint)iVar79 >> 0x10);
        uVar120 = (undefined1)((uint)iVar79 >> 0x18);
        iVar83 = -(uint)(auVar110._12_4_ <= fVar127);
        uVar121 = (undefined1)((uint)iVar83 >> 8);
        uVar122 = (undefined1)((uint)iVar83 >> 0x10);
        uVar123 = (undefined1)((uint)iVar83 >> 0x18);
        auVar7[4] = (char)iVar60;
        auVar7._0_4_ = iVar55;
        auVar7[5] = uVar115;
        auVar7[6] = uVar116;
        auVar7[7] = uVar117;
        auVar7[8] = (char)iVar79;
        auVar7[9] = uVar118;
        auVar7[10] = uVar119;
        auVar7[0xb] = uVar120;
        auVar7[0xc] = (char)iVar83;
        auVar7[0xd] = uVar121;
        auVar7[0xe] = uVar122;
        auVar7[0xf] = uVar123;
        auVar69 = auVar69 ^ (auVar69 ^ auVar101 ^ (auVar101 ^ auVar6) & auVar11) & ~auVar7;
        auVar8[4] = (char)iVar60;
        auVar8._0_4_ = iVar55;
        auVar8[5] = uVar115;
        auVar8[6] = uVar116;
        auVar8[7] = uVar117;
        auVar8[8] = (char)iVar79;
        auVar8[9] = uVar118;
        auVar8[10] = uVar119;
        auVar8[0xb] = uVar120;
        auVar8[0xc] = (char)iVar83;
        auVar8[0xd] = uVar121;
        auVar8[0xe] = uVar122;
        auVar8[0xf] = uVar123;
        auVar110 = auVar110 ^ (auVar110 ^ auVar114) & auVar8;
        auVar94._0_4_ = -(uint)(auVar110._0_4_ <= fVar128);
        auVar94._4_4_ = -(uint)(auVar110._4_4_ <= fVar128);
        auVar94._8_4_ = -(uint)(auVar110._8_4_ <= fVar128);
        auVar94._12_4_ = -(uint)(auVar110._12_4_ <= fVar128);
        auVar47._0_4_ = (fVar95 - fVar54) * fVar125;
        auVar47._4_4_ = (fVar52 - auVar106._8_4_) * fVar125;
        auVar47._8_4_ = (fVar61 - fVar102) * fVar125;
        auVar47._12_4_ = SQRT(fVar128) * 0.5;
        auVar69 = auVar69 ^ (auVar69 ^ auVar47) & auVar94;
        auVar70._4_4_ = auVar129._8_4_;
        auVar70._0_4_ = auVar129._8_4_;
        auVar70._8_4_ = auVar129._8_4_;
        auVar70._12_4_ = auVar129._8_4_;
        fVar51 = auVar69._8_4_;
        auVar48._4_4_ = fVar51;
        auVar48._0_4_ = fVar51;
        auVar48._8_4_ = fVar51;
        auVar48._12_4_ = fVar51;
        auVar90 = NEON_ext(auVar48,auVar69,0xc,1);
        auVar71._4_12_ = auVar70._4_12_;
        auVar71._0_4_ = fVar50;
        auVar73._0_8_ = auVar71._0_8_;
        auVar73._8_4_ = fVar53;
        auVar73._12_4_ = auVar129._8_4_;
        auVar72._8_8_ = auVar73._8_8_;
        auVar72._4_4_ = auVar129._8_4_;
        auVar72._0_4_ = fVar50;
        auVar74._0_12_ = auVar72._0_12_;
        auVar74._12_4_ = auVar129._8_4_;
        auVar39 = NEON_ext(auVar74,auVar74,8,1);
        fVar86 = auVar69._12_4_;
        auVar40._4_4_ = auVar69._4_4_;
        auVar40._0_4_ = auVar40._4_4_;
        auVar40._8_4_ = auVar40._4_4_;
        auVar40._12_4_ = auVar40._4_4_;
        fVar95 = (float)((ulong)_DAT_03cab640 >> 0x20);
        fVar96 = (float)((ulong)_UNK_03cab648 >> 0x20);
        fVar44 = auVar39._0_4_;
        auVar75._4_12_ = auVar74._4_12_;
        auVar75._0_4_ = fVar44;
        auVar77._0_8_ = auVar75._0_8_;
        auVar77._8_4_ = auVar39._8_4_;
        auVar77._12_4_ = auVar129._8_4_;
        auVar76._8_8_ = auVar77._8_8_;
        auVar76._4_4_ = fVar50;
        auVar76._0_4_ = fVar44;
        auVar78._0_12_ = auVar76._0_12_;
        auVar78._12_4_ = fVar53;
        auVar87 = NEON_ext(auVar40,auVar90,0xc,1);
        auVar113 = NEON_ext(auVar78,auVar39,8,1);
        auVar113 = NEON_ext(auVar113,auVar113,0xc,1);
        auVar111._0_8_ =
             CONCAT44((fVar53 * fVar86 + auVar129._12_4_ * auVar40._4_4_ * fVar95 +
                      auVar113._4_4_ * auVar87._4_4_ * fVar95) - auVar90._4_4_ * auVar39._4_4_,
                      (fVar50 * fVar86 + auVar129._12_4_ * auVar69._0_4_ * (float)_DAT_03cab640 +
                      auVar113._0_4_ * auVar87._0_4_ * (float)_DAT_03cab640) -
                      auVar90._0_4_ * fVar44);
        auVar111._8_4_ =
             (auVar129._8_4_ * fVar86 + auVar129._12_4_ * fVar51 * (float)_UNK_03cab648 +
             auVar113._8_4_ * auVar87._8_4_ * (float)_UNK_03cab648) - auVar90._8_4_ * auVar39._8_4_;
        auVar111._12_4_ =
             (auVar129._12_4_ * fVar86 + fVar50 * auVar69._0_4_ * fVar96 +
             auVar113._12_4_ * auVar87._12_4_ * fVar96) - auVar90._12_4_ * auVar39._12_4_;
        uStack_1e8 = auVar111._8_8_;
        local_1f0 = auVar111._0_8_;
      }
      auVar36._0_4_ = (float)local_1f0 * (float)local_1f0 + local_1f0._4_4_ * local_1f0._4_4_;
      auVar36._4_4_ = (float)uStack_1e8 * (float)uStack_1e8 + uStack_1e8._4_4_ * uStack_1e8._4_4_;
      auVar36._8_4_ = (float)local_1f0 * (float)local_1f0 + local_1f0._4_4_ * local_1f0._4_4_;
      auVar36._12_4_ = (float)uStack_1e8 * (float)uStack_1e8 + uStack_1e8._4_4_ * uStack_1e8._4_4_;
      auVar87 = NEON_ext(auVar36,auVar36,4,1);
      local_c0 = 0;
      uStack_b8 = 0;
      auVar37._0_4_ = auVar87._0_4_ + auVar87._4_4_;
      auVar37._4_4_ = auVar87._8_4_ + auVar87._12_4_;
      auVar37._8_4_ = auVar87._0_4_ + auVar87._4_4_;
      auVar37._12_4_ = auVar87._8_4_ + auVar87._12_4_;
      auVar87 = NEON_frsqrte(auVar37,4);
      auVar58._0_4_ = auVar37._0_4_ * auVar87._0_4_;
      auVar58._4_4_ = auVar37._4_4_ * auVar87._4_4_;
      auVar58._8_4_ = auVar37._8_4_ * auVar87._8_4_;
      auVar58._12_4_ = auVar37._12_4_ * auVar87._12_4_;
      local_150 = 0xdeda0913e9ef23dd;
      pcStack_148 = "CAM_POS";
      local_140 = 7;
      local_138 = (long *)0x0;
      auVar90 = NEON_frsqrts(auVar87,auVar58,4);
      local_d0 = 0;
      uStack_c8 = 0;
      auVar49._0_4_ = auVar87._0_4_ * auVar90._0_4_;
      auVar49._4_4_ = auVar87._4_4_ * auVar90._4_4_;
      auVar49._8_4_ = auVar87._8_4_ * auVar90._8_4_;
      auVar49._12_4_ = auVar87._12_4_ * auVar90._12_4_;
      auVar59._0_4_ = auVar37._0_4_ * auVar49._0_4_;
      auVar59._4_4_ = auVar37._4_4_ * auVar49._4_4_;
      auVar59._8_4_ = auVar37._8_4_ * auVar49._8_4_;
      auVar59._12_4_ = auVar37._12_4_ * auVar49._12_4_;
      iVar55 = -(uint)(auVar37._0_4_ == 0.0);
      iVar60 = -(uint)(auVar37._4_4_ == 0.0);
      iVar79 = -(uint)(auVar37._8_4_ == 0.0);
      iVar83 = -(uint)(auVar37._12_4_ == 0.0);
      auVar87 = NEON_frsqrts(auVar49,auVar59,4);
      local_1f0._0_4_ = (float)local_1f0 * auVar49._0_4_ * auVar87._0_4_;
      local_1f0._4_4_ = local_1f0._4_4_ * auVar49._4_4_ * auVar87._4_4_;
      uStack_1e8._0_4_ = (float)uStack_1e8 * auVar49._8_4_ * auVar87._8_4_;
      uStack_1e8._4_4_ = uStack_1e8._4_4_ * auVar49._12_4_ * auVar87._12_4_;
      uStack_114 = 0;
      uStack_112 = 0;
      uStack_111 = 0;
      local_120 = local_200;
      uStack_110 = (undefined1)local_1e0;
      uStack_10f = (undefined2)((ulong)local_1e0 >> 8);
      uStack_10d = (undefined5)((ulong)local_1e0 >> 0x18);
      auVar41._0_8_ =
           CONCAT17((byte)((uint)local_1f0._4_4_ >> 0x18) & ~(byte)((uint)iVar60 >> 0x18),
                    CONCAT16((byte)((uint)local_1f0._4_4_ >> 0x10) & ~(byte)((uint)iVar60 >> 0x10),
                             CONCAT15((byte)((uint)local_1f0._4_4_ >> 8) &
                                      ~(byte)((uint)iVar60 >> 8),
                                      CONCAT14(SUB41(local_1f0._4_4_,0) & ~(byte)iVar60,
                                               CONCAT13((byte)((uint)(float)local_1f0 >> 0x18) &
                                                        ~(byte)((uint)iVar55 >> 0x18),
                                                        CONCAT12((byte)((uint)(float)local_1f0 >>
                                                                       0x10) &
                                                                 ~(byte)((uint)iVar55 >> 0x10),
                                                                 CONCAT11((byte)((uint)(float)
                                                  local_1f0 >> 8) & ~(byte)((uint)iVar55 >> 8),
                                                  SUB41((float)local_1f0,0) & ~(byte)iVar55)))))));
      auVar41[8] = SUB41((float)uStack_1e8,0) & ~(byte)iVar79;
      auVar41[9] = (byte)((uint)(float)uStack_1e8 >> 8) & ~(byte)((uint)iVar79 >> 8);
      auVar41[10] = (byte)((uint)(float)uStack_1e8 >> 0x10) & ~(byte)((uint)iVar79 >> 0x10);
      auVar41[0xb] = (byte)((uint)(float)uStack_1e8 >> 0x18) & ~(byte)((uint)iVar79 >> 0x18);
      auVar41[0xc] = SUB41(uStack_1e8._4_4_,0) & ~(byte)iVar83;
      auVar41[0xd] = (byte)((uint)uStack_1e8._4_4_ >> 8) & ~(byte)((uint)iVar83 >> 8);
      auVar41[0xe] = (byte)((uint)uStack_1e8._4_4_ >> 0x10) & ~(byte)((uint)iVar83 >> 0x10);
      auVar41[0xf] = (byte)((uint)uStack_1e8._4_4_ >> 0x18) & ~(byte)((uint)iVar83 >> 0x18);
      uStack_e8 = auVar41._8_8_;
      uStack_84 = param_13;
      uStack_118 = uVar13;
      uStack_108 = param_1._8_8_;
      local_100 = uVar62;
      uStack_fc = param_3;
      local_f0 = auVar41._0_8_;
      local_88 = param_12;
      if (*(code **)(param_7 + 0x10) == (code *)0x0) {
        local_130 = (undefined8 *)0x0;
        uStack_128 = 0;
      }
      else {
        (**(code **)(param_7 + 0x10))(&local_130,param_7 + 0x30,&local_150);
        if (local_138 != (long *)0x0) {
          (**(code **)(*local_138 + 0x20))();
        }
      }
      local_168 = (undefined8 *)0x0;
      uStack_160 = 0;
      FUN_00d0a71c(&local_168,&local_130);
      uVar18 = FUN_01180e7c(param_7,&local_168);
      puVar14 = local_168;
      if (local_168 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_168 + 3);
        do {
          sVar27 = *psVar1;
          cVar4 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar26) {
            *psVar1 = sVar27 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar27 == 1) {
          piVar2 = (int *)((long)local_168 + 0x1c);
          do {
            iVar55 = *piVar2;
            cVar4 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar26) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar55 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar55 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar55 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar21 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar21;
            local_1c8 = *puVar14;
            FUN_00c44438(lVar21 + 0x8040,&local_1c8);
          }
        }
        else if (sVar27 == 0) goto LAB_01902758;
      }
      local_198 = 0x37a5913ff3d5f98;
      pcStack_190 = "CAM_TRG";
      local_188 = 7;
      local_180 = (long *)0x0;
      local_158 = uVar18;
      if (*(code **)(param_7 + 0x10) == (code *)0x0) {
        local_178 = (undefined8 *)0x0;
        uStack_170 = 0;
      }
      else {
        (**(code **)(param_7 + 0x10))(&local_178,param_7 + 0x30,&local_198);
        if (local_180 != (long *)0x0) {
          (**(code **)(*local_180 + 0x20))();
        }
      }
      local_1b0 = (undefined8 *)0x0;
      uStack_1a8 = 0;
      FUN_00d0a71c(&local_1b0,&local_178);
      uVar18 = FUN_01180e7c(param_7,&local_1b0);
      puVar14 = local_1b0;
      if (local_1b0 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_1b0 + 3);
        do {
          sVar27 = *psVar1;
          cVar4 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar26) {
            *psVar1 = sVar27 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar27 == 1) {
          piVar2 = (int *)((long)local_1b0 + 0x1c);
          do {
            iVar55 = *piVar2;
            cVar4 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar26) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar55 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar55 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar55 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar21 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar21;
            local_1c8 = *puVar14;
            FUN_00c44438(lVar21 + 0x8040,&local_1c8);
          }
        }
        else if (sVar27 == 0) goto LAB_01902758;
      }
      uStack_1b7 = 0;
      uStack_1b8 = 0x32;
      local_1b9 = 0x33;
      local_1ba = 0x39;
      local_1bc = 0x3537;
      local_1c0 = 0x33333443;
      local_1c8 = 0x3636394141303053;
      local_1a0 = uVar18;
      FUN_014af7b8(plVar29,&local_1c8,plVar20 + 3,&local_120,&local_158,&local_1a0);
      puVar14 = local_178;
      if (local_178 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_178 + 3);
        do {
          sVar27 = *psVar1;
          cVar4 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar26) {
            *psVar1 = sVar27 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar27 == 1) {
          piVar2 = (int *)((long)local_178 + 0x1c);
          do {
            iVar55 = *piVar2;
            cVar4 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar26) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar55 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar55 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar55 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar21 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar21;
            local_1c8 = *puVar14;
            FUN_00c44438(lVar21 + 0x8040,&local_1c8);
          }
        }
        else if (sVar27 == 0) goto LAB_01902758;
      }
      puVar14 = local_130;
      if (local_130 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_130 + 3);
        do {
          sVar27 = *psVar1;
          cVar4 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar26) {
            *psVar1 = sVar27 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar27 == 1) {
          piVar2 = (int *)((long)local_130 + 0x1c);
          do {
            iVar55 = *piVar2;
            cVar4 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar26) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar55 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar55 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar55 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar21 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar21;
            local_1c8 = *puVar14;
            FUN_00c44438(lVar21 + 0x8040,&local_1c8);
          }
        }
        else if (sVar27 == 0) {
LAB_01902758:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      (**(code **)(*plVar24 + 0x60))(plVar24);
    }
    goto LAB_01901ecc;
  }
  sVar27 = sVar3;
  if (sVar3 == 0) {
LAB_01901ecc:
    lVar23 = *(long *)(lVar23 + 8);
    psVar1 = (short *)(lVar23 + 0x1a);
    do {
      sVar27 = *psVar1;
      cVar4 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar26) {
        *psVar1 = sVar27 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar27 == 1) {
      *(undefined8 *)(lVar23 + 0x10) = 0;
      (**(code **)(*plVar29 + 0x50))(plVar29);
      return;
    }
    if (sVar27 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    return;
  }
  goto LAB_01901f40;
LAB_01901dc8:
  if ((((plVar20[5] != 0) && (*(short *)(plVar20[5] + 0x1a) != 0)) &&
      (lVar23 = plVar20[5], lVar23 != 0)) && (*(short *)(lVar23 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar23 + 0x1a);
    uVar62 = param_4._0_4_;
    local_1f0 = param_2._0_8_;
    local_1e0 = param_1._0_8_;
    sVar27 = *(short *)(lVar23 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar27) {
        cVar4 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar26) {
          *psVar1 = sVar27 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01901e94;
        bVar26 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01901e94:
        bVar26 = false;
      }
      if (bVar26) {
        lVar23 = *(long *)(lVar23 + 0x10);
        if (lVar23 == 0) {
          return;
        }
        lVar21 = *param_9;
        plVar29 = (long *)(lVar23 + -0x28);
        local_74[0] = param_6;
        if ((lVar21 == 0) || (*(short *)(lVar21 + 0x1a) == 0)) goto LAB_01901ecc;
        psVar1 = (short *)(lVar21 + 0x1a);
        sVar27 = *(short *)(lVar21 + 0x1a);
        goto LAB_01901f40;
      }
      param_11 = param_11 & 0xffffffff;
      sVar27 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}


