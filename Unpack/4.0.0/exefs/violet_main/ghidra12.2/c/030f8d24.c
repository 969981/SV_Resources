/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030f8d24; name: FUN_030f8d24
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030f8d24(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long *plVar27;
  long lVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  int iVar34;
  int iVar35;
  float fVar36;
  int iVar40;
  int iVar41;
  float fVar42;
  int iVar43;
  int iVar44;
  float fVar45;
  int iVar46;
  float fVar47;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  int iVar52;
  float fVar53;
  float fVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  ulong uVar65;
  undefined1 auVar67 [12];
  undefined4 uVar71;
  undefined8 uVar66;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar77;
  undefined1 auVar78 [16];
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  
  lVar28 = tpidr_el0;
  lVar23 = *(long *)(lVar28 + 0x1000b8);
  if (lVar23 == 0) {
    lVar23 = FUN_00e5d3b4();
    *(long *)(lVar28 + 0x1000b8) = lVar23;
  }
  plVar27 = *(long **)(lVar23 + 0x3e0);
  if (plVar27 != (long *)0x0) {
    lVar28 = *plVar27;
    if (*(code **)(lVar28 + 0x18) != (code *)0x0) {
      (**(code **)(lVar28 + 0x18))("updateSections",0xe,*(undefined8 *)(lVar28 + 0x28));
    }
    puVar3 = (undefined8 *)plVar27[2];
    uVar24 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
    if ((uVar24 <= (ulong)plVar27[3]) && (plVar27[2] = uVar24, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = "TtupdateSections";
      uVar19 = nn::os::GetSystemTick();
      puVar3[1] = uVar19;
    }
    if (((*(byte *)(lVar28 + 0x38) & 1) != 0) && (plVar27[6] != 0)) {
      puVar3 = (undefined8 *)plVar27[2];
      uVar24 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
      if ((uVar24 <= (ulong)plVar27[3]) && (plVar27[2] = uVar24, puVar3 != (undefined8 *)0x0)) {
        *puVar3 = &DAT_03c4e575;
        puVar3[1] = *(undefined8 *)(plVar27[6] + 8);
      }
    }
  }
  if ((param_2 & 1) == 0) {
    uVar19 = CONCAT44(*(undefined4 *)(param_1 + 0x184),*(undefined4 *)(param_1 + 0x184));
  }
  else {
    uVar19 = NEON_fmov(0xbf800000,4);
  }
  iVar52 = *(int *)(param_1 + 0x98);
  if (0 < iVar52) {
    uVar31 = NEON_fmov(0x3f800000,4);
    lVar25 = 0;
    lVar28 = 0;
    lVar23 = 0xc9;
    do {
      lVar26 = *(long *)(param_1 + 0x90);
      lVar1 = lVar26 + lVar23;
      lVar20 = (long)*(int *)(lVar1 + -0xc9);
      lVar2 = param_3 + lVar20 * 0x60;
      pfVar4 = (float *)(param_3 + lVar20 * 0x60);
      fVar45 = *pfVar4;
      fVar47 = pfVar4[1];
      fVar48 = pfVar4[2];
      fVar49 = pfVar4[3];
      fVar29 = *(float *)(lVar2 + 0x10);
      fVar30 = *(float *)(lVar2 + 0x14);
      auVar73._4_4_ = fVar29;
      auVar73._0_4_ = fVar29;
      auVar73._8_8_ = 0;
      fVar50 = (float)*(undefined8 *)(lVar2 + 0x28);
      uVar66 = *(undefined8 *)(lVar2 + 0x20);
      fVar72 = (float)uVar66;
      fVar83 = (float)((ulong)uVar66 >> 0x20);
      fVar81 = fVar50 + (float)uVar31;
      fVar51 = (float)uVar31 - fVar50;
      fVar86 = fVar72 - fVar48;
      fVar72 = fVar48 + fVar72;
      fVar77 = *(float *)(lVar2 + 0x18) + fVar83;
      fVar83 = *(float *)(lVar2 + 0x18) - fVar83;
      fVar36 = fVar83;
      fVar42 = fVar86;
      fVar53 = fVar47 - fVar29;
      fVar54 = fVar45 + fVar30 + fVar81;
      if (fVar45 < -fVar30) {
        fVar36 = fVar72;
        fVar42 = fVar77;
        fVar53 = fVar81 - (fVar45 + fVar30);
        fVar54 = fVar47 - fVar29;
      }
      fVar81 = fVar47 + fVar29;
      fVar79 = fVar51 - (fVar45 - fVar30);
      uVar66 = CONCAT17((char)((uint)fVar86 >> 0x18),
                        CONCAT16((char)((uint)fVar86 >> 0x10),
                                 CONCAT15((char)((uint)fVar86 >> 8),CONCAT14(SUB41(fVar86,0),fVar77)
                                         )));
      if (fVar30 < fVar45) {
        fVar81 = (fVar45 - fVar30) + fVar51;
        fVar79 = fVar47 + fVar29;
        uVar66 = CONCAT44(fVar83,fVar72);
      }
      if (fVar50 < 0.0) {
        fVar53 = (float)uVar66;
        fVar54 = (float)((ulong)uVar66 >> 0x20);
        fVar36 = fVar81;
        fVar42 = fVar79;
      }
      fVar29 = fVar36 * fVar36 + fVar42 * fVar42;
      fVar72 = fVar53 * fVar53 + fVar54 * fVar54;
      fVar30 = fVar29 + fVar72;
      fVar77 = 0.0;
      fVar83 = 0.0;
      fVar50 = 0.0;
      fVar51 = 0.0;
      if (fVar30 != 0.0) {
        fVar30 = SQRT(fVar30);
        fVar83 = SQRT(fVar29 + fVar72);
        fVar50 = fVar36 / fVar30;
        fVar51 = fVar42 / fVar83;
        fVar77 = fVar53 / fVar30;
        fVar83 = fVar54 / fVar83;
      }
      lVar22 = param_3 + lVar20 * 0x60;
      uVar6 = *(undefined8 *)(lVar22 + 0x38);
      uVar66 = *(undefined8 *)(lVar22 + 0x30);
      fVar29 = (float)((ulong)uVar66 >> 0x20);
      fVar36 = (float)uVar19;
      iVar34 = -(uint)(ABS((float)uVar66 - *(float *)(lVar1 + -0x39)) <= fVar36);
      fVar42 = (float)((ulong)uVar19 >> 0x20);
      iVar40 = -(uint)(ABS(fVar29 - *(float *)(lVar1 + -0x35)) <= fVar42);
      iVar43 = -(uint)(ABS((float)uVar6 - *(float *)(lVar1 + -0x31)) <= fVar36);
      iVar35 = -(uint)(ABS(fVar50 - (float)*(undefined8 *)(lVar1 + -0x49)) <= fVar36);
      iVar41 = -(uint)(ABS(fVar51 - (float)((ulong)*(undefined8 *)(lVar1 + -0x49) >> 0x20)) <=
                      fVar42);
      iVar44 = -(uint)(ABS(fVar77 - (float)*(undefined8 *)(lVar1 + -0x41)) <= fVar36);
      iVar46 = -(uint)(ABS(fVar83 - (float)((ulong)*(undefined8 *)(lVar1 + -0x41) >> 0x20)) <=
                      fVar42);
      if (CONCAT13((byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar34 >> 0x18) &
                   (byte)((uint)iVar43 >> 0x18),
                   CONCAT12((byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar34 >> 0x10) &
                            (byte)((uint)iVar43 >> 0x10),
                            CONCAT11((byte)((uint)iVar40 >> 8) & (byte)((uint)iVar34 >> 8) &
                                     (byte)((uint)iVar43 >> 8),
                                     (byte)iVar40 & (byte)iVar34 & (byte)iVar43))) == 0 ||
          CONCAT13((byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar35 >> 0x18) &
                   (byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar46 >> 0x18),
                   CONCAT12((byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar35 >> 0x10) &
                            (byte)((uint)iVar44 >> 0x10) & (byte)((uint)iVar46 >> 0x10),
                            CONCAT11((byte)((uint)iVar41 >> 8) & (byte)((uint)iVar35 >> 8) &
                                     (byte)((uint)iVar44 >> 8) & (byte)((uint)iVar46 >> 8),
                                     (byte)iVar41 & (byte)iVar35 & (byte)iVar44 & (byte)iVar46))) ==
          0) {
        *(float *)(lVar1 + -0xa1) = fVar48;
        *(float *)(lVar1 + -0x9d) = fVar49;
        *(float *)(lVar1 + -0xa9) = fVar45;
        *(float *)(lVar1 + -0xa5) = fVar47;
        uVar18 = *(undefined8 *)(lVar2 + 0x10);
        lVar20 = param_3 + lVar20 * 0x60;
        lVar21 = *(long *)(lVar1 + -0xc1);
        *(undefined8 *)(lVar1 + -0x91) = *(undefined8 *)(lVar2 + 0x18);
        *(undefined8 *)(lVar1 + -0x99) = uVar18;
        uVar18 = *(undefined8 *)(lVar2 + 0x20);
        *(undefined8 *)(lVar1 + -0x81) = *(undefined8 *)(lVar2 + 0x28);
        *(undefined8 *)(lVar1 + -0x89) = uVar18;
        uVar18 = *(undefined8 *)(lVar22 + 0x30);
        *(undefined8 *)(lVar1 + -0x71) = *(undefined8 *)(lVar22 + 0x38);
        *(undefined8 *)(lVar1 + -0x79) = uVar18;
        uVar18 = *(undefined8 *)(lVar20 + 0x40);
        *(undefined8 *)(lVar1 + -0x61) = *(undefined8 *)(lVar20 + 0x48);
        *(undefined8 *)(lVar1 + -0x69) = uVar18;
        uVar18 = *(undefined8 *)(lVar20 + 0x50);
        *(undefined8 *)(lVar1 + -0x51) = *(undefined8 *)(lVar20 + 0x58);
        *(undefined8 *)(lVar1 + -0x59) = uVar18;
        *(ulong *)(lVar1 + -0x41) = CONCAT44(fVar83,fVar77);
        *(ulong *)(lVar1 + -0x49) = CONCAT44(fVar51,fVar50);
        *(undefined8 *)(lVar1 + -0x31) = uVar6;
        *(undefined8 *)(lVar1 + -0x39) = uVar66;
        auVar37 = *(undefined1 (*) [16])(lVar21 + 0x90);
        auVar32 = *(undefined1 (*) [16])(lVar21 + 0xa0);
        fVar36 = auVar32._0_4_;
        fVar47 = auVar37._0_4_;
        iVar52 = -(uint)(fVar36 < fVar47);
        fVar42 = auVar32._4_4_;
        fVar48 = auVar37._4_4_;
        iVar34 = -(uint)(fVar42 < fVar48);
        fVar45 = auVar32._8_4_;
        fVar49 = auVar37._8_4_;
        iVar35 = -(uint)(fVar45 < fVar49);
        if (CONCAT13((byte)((uint)iVar34 >> 0x18) | (byte)((uint)iVar52 >> 0x18) |
                     (byte)((uint)iVar35 >> 0x18),
                     CONCAT12((byte)((uint)iVar34 >> 0x10) | (byte)((uint)iVar52 >> 0x10) |
                              (byte)((uint)iVar35 >> 0x10),
                              CONCAT11((byte)((uint)iVar34 >> 8) | (byte)((uint)iVar52 >> 8) |
                                       (byte)((uint)iVar35 >> 8),
                                       (byte)iVar34 | (byte)iVar52 | (byte)iVar35))) == 0) {
          fVar53 = fVar51 + fVar51;
          fVar54 = fVar77 + fVar77;
          fVar30 = (fVar50 + fVar50) * fVar50;
          fVar72 = (fVar50 + fVar50) * fVar83;
          fVar86 = 1.0 - fVar77 * fVar54;
          fVar79 = fVar54 * fVar51 - fVar72;
          fVar82 = fVar86 - fVar53 * fVar51;
          fVar86 = fVar86 - fVar30;
          auVar73 = ZEXT416((uint)fVar86);
          fVar84 = fVar53 * fVar50 + fVar54 * fVar83;
          fVar80 = fVar53 * fVar50 - fVar54 * fVar83;
          fVar72 = fVar54 * fVar51 + fVar72;
          fVar85 = fVar54 * fVar50 - fVar53 * fVar83;
          fVar83 = fVar54 * fVar50 + fVar53 * fVar83;
          fVar50 = (1.0 - fVar30) - fVar53 * fVar51;
          fVar30 = ABS((fVar36 - fVar47) * 0.5);
          fVar53 = ABS((fVar42 - fVar48) * 0.5);
          fVar54 = ABS((fVar45 - fVar49) * 0.5);
          fVar51 = (fVar47 + fVar36) * 0.5;
          fVar77 = (fVar48 + fVar42) * 0.5;
          fVar81 = (fVar49 + fVar45) * 0.5;
          fVar36 = ABS(fVar83 * fVar54) + ABS(fVar80 * fVar53) + ABS(fVar82 * fVar30);
          fVar42 = ABS(fVar79 * fVar54) + ABS(fVar86 * fVar53) + ABS(fVar84 * fVar30);
          fVar45 = ABS(fVar50 * fVar54) + ABS(fVar72 * fVar53) + ABS(fVar85 * fVar30);
          fVar47 = ABS(fVar54 * 0.0) + ABS(fVar83 * fVar53) + ABS(fVar79 * fVar30);
          fVar48 = fVar83 * fVar81 + fVar80 * fVar77 + fVar82 * fVar51 + (float)uVar66;
          fVar29 = fVar79 * fVar81 + fVar86 * fVar77 + fVar84 * fVar51 + fVar29;
          fVar49 = fVar50 * fVar81 + fVar72 * fVar77 + fVar85 * fVar51 + (float)uVar6;
          fVar30 = fVar81 * 0.0 + fVar83 * fVar77 + fVar79 * fVar51 + (float)((ulong)uVar6 >> 0x20);
          auVar32._0_4_ = fVar36 + fVar48;
          auVar32._4_4_ = fVar42 + fVar29;
          auVar32._8_4_ = fVar45 + fVar49;
          auVar32._12_4_ = fVar47 + fVar30;
          auVar37._0_4_ = fVar48 - fVar36;
          auVar37._4_4_ = fVar29 - fVar42;
          auVar37._8_4_ = fVar49 - fVar45;
          auVar37._12_4_ = fVar30 - fVar47;
        }
        fVar36 = *(float *)(param_1 + (long)*(int *)(lVar1 + -0x29) * 4 + 200);
        fVar42 = *(float *)(lVar21 + 0xb0);
        if ((*(byte *)(lVar21 + 0x80) & 1) == 0) {
          fVar54 = (float)((ulong)*(undefined8 *)(param_1 + 0x158) >> 0x20);
          fVar45 = -(float)*(undefined8 *)(param_1 + 0x150);
          fVar47 = -(float)((ulong)*(undefined8 *)(param_1 + 0x150) >> 0x20);
          uVar55 = SUB41(fVar47,0);
          uVar56 = (undefined1)((uint)fVar47 >> 8);
          uVar58 = (undefined1)((uint)fVar47 >> 0x10);
          uVar60 = (undefined1)((uint)fVar47 >> 0x18);
          fVar49 = -(float)*(undefined8 *)(param_1 + 0x158);
          uVar57 = (undefined1)((uint)fVar49 >> 8);
          uVar59 = (undefined1)((uint)fVar49 >> 0x10);
          uVar61 = (undefined1)((uint)fVar49 >> 0x18);
          fVar47 = -fVar54;
          uVar62 = (undefined1)((uint)fVar47 >> 8);
          uVar63 = (undefined1)((uint)fVar47 >> 0x10);
          uVar64 = (undefined1)((uint)fVar47 >> 0x18);
          fVar53 = (float)(CONCAT17(uVar60,CONCAT16(uVar58,CONCAT15(uVar56,CONCAT14(uVar55,fVar45)))
                                   ) >> 0x20);
          fVar48 = fVar45 * fVar45;
          auVar78._8_8_ = _UNK_03caaa68;
          auVar78._0_8_ = _DAT_03caaa60;
          auVar14._4_8_ = auVar73._8_8_;
          auVar14._0_4_ = fVar48;
          auVar68._0_8_ = auVar14._0_8_ << 0x20;
          auVar68._8_4_ = fVar48;
          auVar68._12_4_ = fVar48;
          fVar29 = fVar53 * fVar53 + fVar48;
          fVar30 = fVar49 * fVar49 + fVar48;
          auVar15._4_8_ = auVar68._8_8_;
          auVar15._0_4_ = SQRT(fVar29);
          auVar69._0_8_ = auVar15._0_8_ << 0x20;
          auVar69._8_4_ = SQRT(fVar30);
          auVar69._12_4_ = SQRT(fVar54 * fVar54 + fVar48);
          auVar73 = NEON_fmov(0x3f800000,4);
          iVar52 = -(uint)(fVar29 <= 0.0);
          iVar34 = -(uint)(fVar30 <= 0.0);
          fVar48 = auVar73._4_4_ / SQRT(fVar29);
          auVar16._4_8_ = auVar69._8_8_;
          auVar16._0_4_ = fVar48;
          auVar70._0_8_ = auVar16._0_8_ << 0x20;
          auVar70._8_4_ = auVar73._8_4_ / auVar69._8_4_;
          auVar70._12_4_ = auVar73._12_4_ / auVar69._12_4_;
          auVar74._12_4_ = fVar54;
          auVar74._8_4_ = fVar49;
          auVar74._4_4_ = fVar53;
          auVar74._0_4_ = fVar45;
          auVar75._0_12_ = auVar74._0_12_;
          auVar75._12_4_ = 0;
          auVar17._1_11_ = auVar70._5_11_;
          auVar17[0] = SUB41(fVar48,0) & ~(byte)iVar52;
          auVar67._0_8_ =
               CONCAT17((byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18),
                        CONCAT16((byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10),
                                 CONCAT15((byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar52 >> 8),
                                          auVar17._0_5_ << 0x20)));
          auVar67[8] = SUB41(auVar70._8_4_,0) & ~(byte)iVar34;
          auVar67[9] = (byte)((uint)auVar70._8_4_ >> 8) & ~(byte)((uint)iVar34 >> 8);
          auVar67[10] = (byte)((uint)auVar70._8_4_ >> 0x10) & ~(byte)((uint)iVar34 >> 0x10);
          auVar67[0xb] = (byte)((uint)auVar70._8_4_ >> 0x18) & ~(byte)((uint)iVar34 >> 0x18);
          auVar73 = a64_TBL(ZEXT816(0),auVar75,auVar78);
          auVar12._8_4_ = (int)_UNK_03cabbb8;
          auVar12._0_8_ = _DAT_03cabbb0;
          auVar12._12_4_ = (int)((ulong)_UNK_03cabbb8 >> 0x20);
          auVar76 = a64_TBL(ZEXT816(0),auVar75,auVar12);
          uVar65 = CONCAT44(-(uint)(fVar30 < fVar29),-(uint)(fVar30 < fVar29));
          uVar24 = uVar65 & 0x100000001;
          iVar52 = (int)uVar24;
          iVar34 = (int)(uVar24 >> 0x20);
          auVar13._4_4_ = (iVar34 << 0x1f) >> 0x1f;
          auVar13._0_4_ = (iVar52 << 0x1f) >> 0x1f;
          auVar13._8_4_ = (iVar52 << 0x1f) >> 0x1f;
          auVar13._12_4_ = (iVar34 << 0x1f) >> 0x1f;
          auVar76 = auVar76 ^ (auVar76 ^ auVar73) & auVar13;
          fVar51 = -auVar76._0_4_;
          fVar50 = auVar76._4_4_;
          uVar71 = (undefined4)((ulong)auVar67._0_8_ >> 0x20);
          uVar24 = CONCAT44(auVar67._8_4_,auVar67._8_4_);
          uVar24 = uVar24 ^ (uVar24 ^ CONCAT44(uVar71,uVar71)) & uVar65;
          auVar73 = NEON_ext(auVar76,auVar76,8,1);
          uVar66 = NEON_ext(CONCAT44(fVar50,fVar51),auVar73._0_8_,4,1);
          auVar8[4] = uVar55;
          auVar8._0_4_ = fVar45;
          auVar8[5] = uVar56;
          auVar8[6] = uVar58;
          auVar8[7] = uVar60;
          auVar8[8] = SUB41(fVar49,0);
          auVar8[9] = uVar57;
          auVar8[10] = uVar59;
          auVar8[0xb] = uVar61;
          auVar8[0xc] = SUB41(fVar47,0);
          auVar8[0xd] = uVar62;
          auVar8[0xe] = uVar63;
          auVar8[0xf] = uVar64;
          auVar9[4] = uVar55;
          auVar9._0_4_ = fVar45;
          auVar9[5] = uVar56;
          auVar9[6] = uVar58;
          auVar9[7] = uVar60;
          auVar9[8] = SUB41(fVar49,0);
          auVar9[9] = uVar57;
          auVar9[10] = uVar59;
          auVar9[0xb] = uVar61;
          auVar9[0xc] = SUB41(fVar47,0);
          auVar9[0xd] = uVar62;
          auVar9[0xe] = uVar63;
          auVar9[0xf] = uVar64;
          auVar73 = NEON_ext(auVar8,auVar9,4,1);
          fVar72 = (float)uVar24;
          fVar83 = (float)(uVar24 >> 0x20);
          fVar47 = auVar73._0_4_ * fVar51 - fVar45 * (float)uVar66;
          fVar48 = auVar73._4_4_ * fVar50 - fVar53 * (float)((ulong)uVar66 >> 0x20);
          uVar57 = (undefined1)((uint)fVar48 >> 8);
          uVar59 = (undefined1)((uint)fVar48 >> 0x10);
          uVar61 = (undefined1)((uint)fVar48 >> 0x18);
          fVar29 = fVar45 * auVar76._8_4_ - fVar49 * fVar51;
          uVar62 = (undefined1)((uint)fVar29 >> 8);
          uVar63 = (undefined1)((uint)fVar29 >> 0x10);
          uVar64 = (undefined1)((uint)fVar29 >> 0x18);
          fVar30 = (float)(CONCAT17(uVar60,CONCAT16(uVar58,CONCAT15(uVar56,CONCAT14(uVar55,fVar45)))
                                   ) >> 0x20) * auVar76._12_4_ - fVar54 * fVar50;
          uVar55 = (undefined1)((uint)fVar30 >> 8);
          uVar56 = (undefined1)((uint)fVar30 >> 0x10);
          uVar58 = (undefined1)((uint)fVar30 >> 0x18);
          auVar10[4] = SUB41(fVar48,0);
          auVar10._0_4_ = fVar47;
          auVar10[5] = uVar57;
          auVar10[6] = uVar59;
          auVar10[7] = uVar61;
          auVar10[8] = SUB41(fVar29,0);
          auVar10[9] = uVar62;
          auVar10[10] = uVar63;
          auVar10[0xb] = uVar64;
          auVar10[0xc] = SUB41(fVar30,0);
          auVar10[0xd] = uVar55;
          auVar10[0xe] = uVar56;
          auVar10[0xf] = uVar58;
          auVar11[4] = SUB41(fVar48,0);
          auVar11._0_4_ = fVar47;
          auVar11[5] = uVar57;
          auVar11[6] = uVar59;
          auVar11[7] = uVar61;
          auVar11[8] = SUB41(fVar29,0);
          auVar11[9] = uVar62;
          auVar11[10] = uVar63;
          auVar11[0xb] = uVar64;
          auVar11[0xc] = SUB41(fVar30,0);
          auVar11[0xd] = uVar55;
          auVar11[0xe] = uVar56;
          auVar11[0xf] = uVar58;
          auVar73 = NEON_ext(auVar10,auVar11,4,1);
          fVar48 = fVar42 * 1.45 * (ABS(fVar72 * fVar51) + ABS(fVar72 * auVar73._0_4_));
          fVar29 = fVar42 * 1.45 * (ABS(fVar83 * fVar50) + ABS(fVar83 * auVar73._4_4_));
          fVar47 = fVar42 * 1.45 * (ABS(fVar72 * auVar76._8_4_) + ABS(fVar72 * fVar47));
          fVar42 = fVar42 * 1.45 * (ABS(fVar83 * auVar76._12_4_) + ABS(fVar83 * 0.0));
          auVar38._0_4_ = auVar37._0_4_ - fVar48;
          auVar38._4_4_ = auVar37._4_4_ - fVar29;
          auVar38._8_4_ = auVar37._8_4_ - fVar47;
          auVar38._12_4_ = auVar37._12_4_ - fVar42;
          auVar33._0_4_ = auVar32._0_4_ + fVar48;
          auVar33._4_4_ = auVar32._4_4_ + fVar29;
          auVar33._8_4_ = auVar32._8_4_ + fVar47;
          auVar33._12_4_ = auVar32._12_4_ + fVar42;
          fVar45 = fVar45 * -fVar36;
          fVar53 = fVar53 * -fVar36;
          fVar49 = fVar49 * -fVar36;
          fVar54 = fVar54 * -fVar36;
          auVar7._4_4_ = fVar53 + auVar33._4_4_;
          auVar7._0_4_ = fVar45 + auVar33._0_4_;
          auVar7._8_4_ = fVar49 + auVar33._8_4_;
          auVar7._12_4_ = fVar54 + auVar33._12_4_;
          auVar76 = NEON_fmax(auVar33,auVar7,4);
          auVar5._4_4_ = fVar53 + auVar38._4_4_;
          auVar5._0_4_ = fVar45 + auVar38._0_4_;
          auVar5._8_4_ = fVar49 + auVar38._8_4_;
          auVar5._12_4_ = fVar54 + auVar38._12_4_;
          auVar39 = NEON_fmin(auVar38,auVar5,4);
        }
        else {
          uVar66 = NEON_fmax(CONCAT44(fVar42 * 1.45,fVar42 * 1.45),CONCAT44(fVar36,fVar36),4);
          fVar36 = (float)uVar66;
          fVar42 = (float)((ulong)uVar66 >> 0x20);
          auVar76._0_4_ = auVar32._0_4_ + fVar36;
          auVar76._4_4_ = auVar32._4_4_ + fVar42;
          auVar76._8_4_ = auVar32._8_4_ + fVar36;
          auVar76._12_4_ = auVar32._12_4_ + fVar42;
          auVar39._0_4_ = auVar37._0_4_ - fVar36;
          auVar39._4_4_ = auVar37._4_4_ - fVar42;
          auVar39._8_4_ = auVar37._8_4_ - fVar36;
          auVar39._12_4_ = auVar37._12_4_ - fVar42;
        }
        lVar1 = *(long *)(param_1 + 0x30) + lVar25;
        *(undefined1 *)(lVar1 + 0x40) = 1;
        *(long *)(lVar1 + 0x28) = auVar39._8_8_;
        *(long *)(lVar1 + 0x20) = auVar39._0_8_;
        *(long *)(lVar1 + 0x38) = auVar76._8_8_;
        *(long *)(lVar1 + 0x30) = auVar76._0_8_;
        *(undefined1 *)(lVar26 + lVar23) = 1;
        iVar52 = *(int *)(param_1 + 0x98);
        *(undefined1 *)(param_1 + 0xc4) = 1;
      }
      lVar28 = lVar28 + 1;
      lVar23 = lVar23 + 0xd0;
      lVar25 = lVar25 + 0x50;
    } while (lVar28 < iVar52);
  }
  if (plVar27 != (long *)0x0) {
    lVar28 = *plVar27;
    if (((*(byte *)(lVar28 + 0x38) & 1) != 0) && (plVar27[6] != 0)) {
      puVar3 = (undefined8 *)plVar27[2];
      uVar24 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
      if ((uVar24 <= (ulong)plVar27[3]) && (plVar27[2] = uVar24, puVar3 != (undefined8 *)0x0)) {
        *puVar3 = &DAT_03c4e575;
        puVar3[1] = *(undefined8 *)(plVar27[6] + 8);
      }
    }
    puVar3 = (undefined8 *)plVar27[2];
    uVar24 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
    if ((uVar24 <= (ulong)plVar27[3]) && (plVar27[2] = uVar24, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = &DAT_03c2d363;
      uVar19 = nn::os::GetSystemTick();
      puVar3[1] = uVar19;
    }
    if (*(code **)(lVar28 + 0x20) != (code *)0x0) {
      (**(code **)(lVar28 + 0x20))(*(undefined8 *)(lVar28 + 0x28));
    }
  }
  return;
}


