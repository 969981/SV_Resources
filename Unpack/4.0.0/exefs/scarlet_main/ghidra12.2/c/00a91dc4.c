/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a91dc4; name: FUN_00a91dc4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a91dc4(undefined8 *param_1,long param_2,undefined8 *param_3,uint param_4,uint param_5)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar22;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar23;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  undefined1 auVar31 [12];
  float fVar38;
  float fVar40;
  undefined1 auVar32 [16];
  float fVar30;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar39;
  float fVar41;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar44;
  float fVar45;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  int iVar46;
  int iVar48;
  int iVar49;
  float fVar50;
  int iVar51;
  undefined1 auVar47 [16];
  undefined1 auVar52 [16];
  undefined1 auVar56 [16];
  undefined1 auVar55 [16];
  undefined1 auVar54 [16];
  undefined1 auVar53 [16];
  undefined1 auVar60 [16];
  undefined1 auVar59 [16];
  undefined1 auVar58 [16];
  undefined1 auVar57 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar66 [16];
  undefined1 auVar65 [16];
  undefined1 auVar64 [16];
  undefined1 auVar63 [16];
  undefined1 auVar70 [16];
  undefined1 auVar69 [16];
  undefined1 auVar68 [16];
  undefined1 auVar67 [16];
  undefined8 uVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar10 = *(long *)(param_2 + 0x1b8);
  lVar1 = *(long *)(param_2 + 0x1c0);
  if (lVar10 == lVar1) {
    auVar27 = ZEXT816(0x7f7fffff);
  }
  else {
    uVar26 = param_3[1];
    uVar24 = *param_3;
    if ((param_4 & 1) == 0) {
      auVar27 = ZEXT816(0x7f7fffff);
      if ((param_5 & 1) == 0) {
        do {
          auVar32 = *(undefined1 (*) [16])(lVar10 + 0x20);
          fVar29 = (float)uVar24 - auVar32._0_4_;
          fVar38 = (float)((ulong)uVar24 >> 0x20) - auVar32._4_4_;
          fVar40 = (float)uVar26 - auVar32._8_4_;
          fVar28 = (float)((ulong)uVar26 >> 0x20) - auVar32._12_4_;
          fVar29 = fVar29 * fVar29;
          fVar38 = fVar38 * fVar38;
          fVar40 = fVar40 * fVar40;
          fVar28 = fVar28 * fVar28;
          auVar34._0_4_ = fVar29 + fVar38;
          auVar34._4_4_ = fVar40 + fVar28;
          auVar34._8_4_ = fVar29 + fVar38;
          auVar34._12_4_ = fVar40 + fVar28;
          auVar34 = NEON_ext(auVar34,auVar34,4,1);
          fVar29 = auVar34._0_4_ + auVar34._4_4_;
          auVar73._0_8_ = CONCAT44(auVar34._8_4_ + auVar34._12_4_,fVar29);
          auVar73._8_4_ = auVar34._0_4_ + auVar34._4_4_;
          auVar73._12_4_ = auVar34._8_4_ + auVar34._12_4_;
          if (fVar29 < auVar27._0_4_) {
            param_1[3] = auVar32._8_8_;
            param_1[2] = auVar32._0_8_;
            uVar2 = *(undefined1 *)(lVar10 + 0x10);
            auVar27._8_8_ = auVar73._8_8_;
            auVar27._0_8_ = auVar73._0_8_;
            *(undefined1 *)param_1 = 1;
            *(undefined1 *)(param_1 + 4) = uVar2;
          }
          lVar10 = lVar10 + 0x60;
        } while (lVar1 != lVar10);
      }
      else {
        do {
          auVar32 = FUN_026fd7c8(lVar10 + 0x20);
          fVar29 = (float)*param_3 - auVar32._0_4_;
          fVar38 = (float)((ulong)*param_3 >> 0x20) - auVar32._4_4_;
          fVar40 = (float)param_3[1] - auVar32._8_4_;
          fVar28 = (float)((ulong)param_3[1] >> 0x20) - auVar32._12_4_;
          fVar29 = fVar29 * fVar29;
          fVar38 = fVar38 * fVar38;
          fVar40 = fVar40 * fVar40;
          fVar28 = fVar28 * fVar28;
          auVar32._0_4_ = fVar29 + fVar38;
          auVar32._4_4_ = fVar40 + fVar28;
          auVar32._8_4_ = fVar29 + fVar38;
          auVar32._12_4_ = fVar40 + fVar28;
          auVar32 = NEON_ext(auVar32,auVar32,4,1);
          fVar29 = auVar32._0_4_ + auVar32._4_4_;
          auVar75._0_8_ = CONCAT44(auVar32._8_4_ + auVar32._12_4_,fVar29);
          auVar75._8_4_ = auVar32._0_4_ + auVar32._4_4_;
          auVar75._12_4_ = auVar32._8_4_ + auVar32._12_4_;
          if (fVar29 < auVar27._0_4_) {
            auVar32 = *(undefined1 (*) [16])(lVar10 + 0x20);
            auVar27._8_8_ = auVar75._8_8_;
            auVar27._0_8_ = auVar75._0_8_;
            param_1[3] = auVar32._8_8_;
            param_1[2] = auVar32._0_8_;
            *(undefined1 *)(param_1 + 4) = *(undefined1 *)(lVar10 + 0x10);
            *(undefined1 *)param_1 = 1;
          }
          lVar10 = lVar10 + 0x60;
        } while (lVar1 != lVar10);
      }
    }
    else {
      uVar25 = 0x7f7fffff;
      uVar71 = 0;
      do {
        auVar27 = *(undefined1 (*) [16])(lVar10 + 0x20);
        fVar29 = auVar27._0_4_ - (float)uVar24;
        fVar38 = auVar27._4_4_ - (float)((ulong)uVar24 >> 0x20);
        fVar40 = auVar27._8_4_ - (float)uVar26;
        fVar29 = fVar29 * fVar29;
        fVar38 = fVar38 * fVar38;
        fVar40 = fVar40 * fVar40;
        auVar76._0_4_ = fVar29 + fVar38;
        auVar76._4_4_ = fVar40 + 0.0;
        auVar76._8_4_ = fVar29 + fVar38;
        auVar76._12_4_ = fVar40 + 0.0;
        auVar32 = NEON_ext(auVar76,auVar76,4,1);
        if (*(float *)(lVar10 + 0x30) * *(float *)(lVar10 + 0x30) < auVar32._0_4_ + auVar32._4_4_) {
LAB_00a91ea4:
          auVar27._8_8_ = uVar71;
          auVar27._0_8_ = uVar25;
        }
        else {
          if ((param_5 & 1) != 0) {
            auVar27 = FUN_026fd7c8();
            uVar26 = param_3[1];
            uVar24 = *param_3;
          }
          fVar29 = (float)uVar24 - auVar27._0_4_;
          fVar38 = (float)((ulong)uVar24 >> 0x20) - auVar27._4_4_;
          fVar40 = (float)uVar26 - auVar27._8_4_;
          fVar28 = (float)((ulong)uVar26 >> 0x20) - auVar27._12_4_;
          fVar29 = fVar29 * fVar29;
          fVar38 = fVar38 * fVar38;
          fVar40 = fVar40 * fVar40;
          fVar28 = fVar28 * fVar28;
          auVar13._0_4_ = fVar29 + fVar38;
          auVar13._4_4_ = fVar40 + fVar28;
          auVar13._8_4_ = fVar29 + fVar38;
          auVar13._12_4_ = fVar40 + fVar28;
          auVar32 = NEON_ext(auVar13,auVar13,4,1);
          auVar27._0_4_ = auVar32._0_4_ + auVar32._4_4_;
          auVar27._4_4_ = auVar32._8_4_ + auVar32._12_4_;
          auVar27._8_4_ = auVar32._0_4_ + auVar32._4_4_;
          auVar27._12_4_ = auVar32._8_4_ + auVar32._12_4_;
          if ((float)uVar25 <= auVar27._0_4_) goto LAB_00a91ea4;
          auVar32 = *(undefined1 (*) [16])(lVar10 + 0x20);
          param_1[3] = auVar32._8_8_;
          param_1[2] = auVar32._0_8_;
          *(undefined1 *)(param_1 + 4) = *(undefined1 *)(lVar10 + 0x10);
          *(undefined1 *)param_1 = 1;
        }
        uVar71 = auVar27._8_8_;
        uVar25 = auVar27._0_8_;
        lVar10 = lVar10 + 0x60;
      } while (lVar1 != lVar10);
    }
  }
  puVar9 = PTR_DAT_047d41d0;
  puVar8 = PTR_DAT_047d41c0;
  puVar7 = PTR_DAT_047d41b0;
  puVar6 = PTR_DAT_047d41a0;
  puVar5 = PTR_DAT_047d4190;
  puVar4 = PTR_DAT_047d4180;
  uVar26 = _UNK_03cab648;
  uVar24 = _DAT_03cab640;
  lVar10 = *(long *)(param_2 + 0x1f0);
  lVar1 = *(long *)(param_2 + 0x1f8);
  if (lVar10 != lVar1) {
    uVar71 = param_3[1];
    uVar25 = *param_3;
    if ((param_4 & 1) == 0) {
      if ((param_5 & 1) == 0) {
        do {
          fVar29 = *(float *)(lVar10 + 0x40);
          fVar38 = *(float *)(lVar10 + 0x44);
          fVar40 = *(float *)(lVar10 + 0x4c);
          fVar28 = (float)uVar25 - fVar29;
          fVar11 = (float)((ulong)uVar25 >> 0x20) - fVar38;
          fVar44 = (float)uVar71 - *(float *)(lVar10 + 0x48);
          fVar45 = (float)((ulong)uVar71 >> 0x20) - fVar40;
          fVar28 = fVar28 * fVar28;
          fVar11 = fVar11 * fVar11;
          fVar44 = fVar44 * fVar44;
          fVar45 = fVar45 * fVar45;
          auVar20._0_4_ = fVar28 + fVar11;
          auVar20._4_4_ = fVar44 + fVar45;
          auVar20._8_4_ = fVar28 + fVar11;
          auVar20._12_4_ = fVar44 + fVar45;
          auVar32 = NEON_ext(auVar20,auVar20,4,1);
          fVar28 = auVar32._0_4_ + auVar32._4_4_;
          auVar21._0_8_ = CONCAT44(auVar32._8_4_ + auVar32._12_4_,fVar28);
          auVar21._8_4_ = auVar32._0_4_ + auVar32._4_4_;
          auVar21._12_4_ = auVar32._8_4_ + auVar32._12_4_;
          if (fVar28 < auVar27._0_4_) {
            *(float *)(param_1 + 3) = *(float *)(lVar10 + 0x48);
            *(float *)((long)param_1 + 0x1c) = fVar40;
            *(float *)(param_1 + 2) = fVar29;
            *(float *)((long)param_1 + 0x14) = fVar38;
            uVar2 = *(undefined1 *)(lVar10 + 0x10);
            auVar27._8_8_ = auVar21._8_8_;
            auVar27._0_8_ = auVar21._0_8_;
            *(undefined1 *)param_1 = 1;
            *(undefined1 *)(param_1 + 4) = uVar2;
          }
          lVar10 = lVar10 + 0x70;
        } while (lVar1 != lVar10);
      }
      else {
        do {
          auVar32 = FUN_0148c6d4(lVar10 + 0x20);
          fVar29 = (float)*param_3 - auVar32._0_4_;
          fVar38 = (float)((ulong)*param_3 >> 0x20) - auVar32._4_4_;
          fVar40 = (float)param_3[1] - auVar32._8_4_;
          fVar28 = (float)((ulong)param_3[1] >> 0x20) - auVar32._12_4_;
          fVar29 = fVar29 * fVar29;
          fVar38 = fVar38 * fVar38;
          fVar40 = fVar40 * fVar40;
          fVar28 = fVar28 * fVar28;
          auVar18._0_4_ = fVar29 + fVar38;
          auVar18._4_4_ = fVar40 + fVar28;
          auVar18._8_4_ = fVar29 + fVar38;
          auVar18._12_4_ = fVar40 + fVar28;
          auVar32 = NEON_ext(auVar18,auVar18,4,1);
          fVar29 = auVar32._0_4_ + auVar32._4_4_;
          auVar19._0_8_ = CONCAT44(auVar32._8_4_ + auVar32._12_4_,fVar29);
          auVar19._8_4_ = auVar32._0_4_ + auVar32._4_4_;
          auVar19._12_4_ = auVar32._8_4_ + auVar32._12_4_;
          if (fVar29 < auVar27._0_4_) {
            auVar32 = *(undefined1 (*) [16])(lVar10 + 0x40);
            auVar27._8_8_ = auVar19._8_8_;
            auVar27._0_8_ = auVar19._0_8_;
            param_1[3] = auVar32._8_8_;
            param_1[2] = auVar32._0_8_;
            *(undefined1 *)(param_1 + 4) = *(undefined1 *)(lVar10 + 0x10);
            *(undefined1 *)param_1 = 1;
          }
          lVar10 = lVar10 + 0x70;
        } while (lVar1 != lVar10);
      }
    }
    else {
      do {
        fVar29 = *(float *)(lVar10 + 0x30);
        fVar38 = *(float *)(lVar10 + 0x34);
        fVar40 = *(float *)(lVar10 + 0x38);
        fVar28 = *(float *)(lVar10 + 0x3c);
        auVar14._0_4_ = fVar29 * *(float *)puVar9 + fVar38 * *(float *)(puVar9 + 4);
        auVar14._4_4_ = fVar40 * *(float *)(puVar9 + 8) + fVar28 * *(float *)(puVar9 + 0xc);
        auVar14._8_4_ = fVar29 * *(float *)puVar9 + fVar38 * *(float *)(puVar9 + 4);
        auVar14._12_4_ = fVar40 * *(float *)(puVar9 + 8) + fVar28 * *(float *)(puVar9 + 0xc);
        auVar32 = NEON_ext(auVar14,auVar14,4,1);
        fVar11 = auVar32._0_4_ + auVar32._4_4_;
        fVar30 = ((float)(*(float *)puVar4 <= fVar11) * fVar11 +
                 *(float *)puVar6 * (float)(fVar11 < *(float *)puVar4) * fVar11) - *(float *)puVar5;
        fVar11 = (float)uVar25;
        fVar44 = (float)((ulong)uVar25 >> 0x20);
        fVar45 = (float)uVar71;
        fVar12 = (float)((ulong)uVar71 >> 0x20);
        if ((fVar30 < *(float *)puVar8) || (*(float *)puVar7 < fVar30)) {
          auVar17._0_4_ = fVar29 * fVar29 + fVar38 * fVar38;
          auVar17._4_4_ = fVar40 * fVar40 + fVar28 * fVar28;
          auVar17._8_4_ = fVar29 * fVar29 + fVar38 * fVar38;
          auVar17._12_4_ = fVar40 * fVar40 + fVar28 * fVar28;
          auVar32 = NEON_ext(auVar17,auVar17,4,1);
          fVar12 = auVar32._0_4_ + auVar32._4_4_;
          fVar30 = auVar32._8_4_ + auVar32._12_4_;
          fVar22 = auVar32._0_4_ + auVar32._4_4_;
          fVar23 = auVar32._8_4_ + auVar32._12_4_;
          auVar32 = *(undefined1 (*) [16])(lVar10 + 0x40);
          fVar29 = -fVar29 / fVar12;
          fVar39 = -fVar38 / fVar30;
          fVar41 = -fVar40 / fVar22;
          fVar28 = fVar28 / fVar23;
          iVar46 = -(uint)(fVar12 == 0.0);
          iVar48 = -(uint)(fVar30 == 0.0);
          iVar49 = -(uint)(fVar22 == 0.0);
          iVar51 = -(uint)(fVar23 == 0.0);
          fVar38 = auVar32._0_4_;
          fVar11 = fVar11 - fVar38;
          fVar40 = auVar32._4_4_;
          fVar44 = fVar44 - fVar40;
          fVar12 = auVar32._8_4_;
          fVar45 = fVar45 - fVar12;
          auVar62._4_4_ = fVar45;
          auVar62._0_4_ = fVar45;
          auVar62._8_4_ = fVar45;
          auVar62._12_4_ = fVar45;
          fVar30 = (float)CONCAT13((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18),
                                   CONCAT12((byte)((uint)fVar29 >> 0x10) &
                                            ~(byte)((uint)iVar46 >> 0x10),
                                            CONCAT11((byte)((uint)fVar29 >> 8) &
                                                     ~(byte)((uint)iVar46 >> 8),
                                                     SUB41(fVar29,0) & ~(byte)iVar46)));
          auVar31._0_8_ =
               CONCAT17((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                        CONCAT16((byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10),
                                 CONCAT15((byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar48 >> 8),
                                          CONCAT14(SUB41(fVar39,0) & ~(byte)iVar48,fVar30))));
          auVar31[8] = SUB41(fVar41,0) & ~(byte)iVar49;
          auVar31[9] = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar49 >> 8);
          auVar31[10] = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10);
          auVar31[0xb] = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18);
          auVar35[0xc] = SUB41(fVar28,0) & ~(byte)iVar51;
          auVar35._0_12_ = auVar31;
          auVar35[0xd] = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar51 >> 8);
          auVar35[0xe] = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10);
          auVar35[0xf] = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18);
          auVar63._4_12_ = auVar62._4_12_;
          auVar63._0_4_ = fVar11;
          auVar65._0_8_ = auVar63._0_8_;
          auVar65._8_4_ = fVar44;
          auVar65._12_4_ = fVar45;
          auVar64._8_8_ = auVar65._8_8_;
          auVar64._4_4_ = fVar45;
          auVar64._0_4_ = fVar11;
          auVar66._0_12_ = auVar64._0_12_;
          auVar66._12_4_ = fVar45;
          auVar76 = NEON_ext(auVar66,auVar66,8,1);
          fVar23 = auVar35._12_4_;
          fVar39 = -fVar30;
          fVar28 = (float)((ulong)auVar31._0_8_ >> 0x20);
          fVar41 = -fVar28;
          fVar22 = auVar31._8_4_;
          fVar50 = -fVar22;
          auVar72._4_4_ = fVar22;
          auVar72._0_4_ = fVar22;
          auVar72._8_4_ = fVar22;
          auVar72._12_4_ = fVar22;
          auVar73 = NEON_ext(auVar72,auVar35,0xc,1);
          auVar52._4_4_ = fVar50;
          auVar52._0_4_ = fVar50;
          auVar52._8_4_ = fVar50;
          auVar52._12_4_ = fVar50;
          auVar74._4_4_ = fVar28;
          auVar74._0_4_ = fVar28;
          auVar74._8_4_ = fVar28;
          auVar74._12_4_ = fVar28;
          fVar77 = (float)uVar24;
          fVar78 = (float)((ulong)uVar24 >> 0x20);
          fVar79 = (float)uVar26;
          fVar80 = (float)((ulong)uVar26 >> 0x20);
          fVar29 = auVar76._0_4_;
          auVar67._4_12_ = auVar66._4_12_;
          auVar67._0_4_ = fVar29;
          auVar69._0_8_ = auVar67._0_8_;
          auVar69._8_4_ = auVar76._8_4_;
          auVar69._12_4_ = fVar45;
          auVar68._8_8_ = auVar69._8_8_;
          auVar68._4_4_ = fVar11;
          auVar68._0_4_ = fVar29;
          auVar70._0_12_ = auVar68._0_12_;
          auVar70._12_4_ = fVar44;
          auVar75 = NEON_ext(auVar74,auVar73,0xc,1);
          auVar34 = NEON_ext(auVar70,auVar76,8,1);
          auVar34 = NEON_ext(auVar34,auVar34,0xc,1);
          auVar53._4_12_ = auVar52._4_12_;
          auVar53._0_4_ = fVar39;
          auVar55._0_8_ = auVar53._0_8_;
          auVar55._8_4_ = fVar41;
          auVar55._12_4_ = fVar50;
          auVar54._8_8_ = auVar55._8_8_;
          auVar54._4_4_ = fVar50;
          auVar54._0_4_ = fVar39;
          auVar56._0_12_ = auVar54._0_12_;
          auVar56._12_4_ = fVar50;
          auVar43._0_4_ =
               (fVar11 * fVar23 + fVar30 * fVar77 * 0.0 + auVar34._0_4_ * auVar75._0_4_ * fVar77) -
               auVar73._0_4_ * fVar29;
          auVar43._4_4_ =
               (fVar44 * fVar23 + fVar28 * fVar78 * 0.0 + auVar34._4_4_ * auVar75._4_4_ * fVar78) -
               auVar73._4_4_ * auVar76._4_4_;
          auVar43._8_4_ =
               (fVar45 * fVar23 + fVar22 * fVar79 * 0.0 + auVar34._8_4_ * auVar75._8_4_ * fVar79) -
               auVar73._8_4_ * auVar76._8_4_;
          auVar43._12_4_ =
               (fVar23 * 0.0 + fVar11 * fVar30 * fVar80 + auVar34._12_4_ * auVar75._12_4_ * fVar80)
               - auVar73._12_4_ * auVar76._12_4_;
          auVar36._4_4_ = auVar43._8_4_;
          auVar36._0_4_ = auVar43._8_4_;
          auVar36._8_4_ = auVar43._8_4_;
          auVar36._12_4_ = auVar43._8_4_;
          auVar61._4_4_ = auVar43._4_4_;
          auVar61._0_4_ = auVar43._4_4_;
          auVar61._8_4_ = auVar43._4_4_;
          auVar61._12_4_ = auVar43._4_4_;
          auVar73 = NEON_ext(auVar56,auVar56,8,1);
          auVar34 = NEON_ext(auVar36,auVar43,0xc,1);
          fVar29 = auVar73._0_4_;
          auVar57._4_12_ = auVar56._4_12_;
          auVar57._0_4_ = fVar29;
          auVar59._0_8_ = auVar57._0_8_;
          auVar59._8_4_ = auVar73._8_4_;
          auVar59._12_4_ = fVar50;
          auVar58._8_8_ = auVar59._8_8_;
          auVar58._4_4_ = fVar39;
          auVar58._0_4_ = fVar29;
          auVar60._0_12_ = auVar58._0_12_;
          auVar60._12_4_ = fVar41;
          auVar76 = NEON_ext(auVar61,auVar34,0xc,1);
          auVar75 = NEON_ext(auVar60,auVar73,8,1);
          auVar75 = NEON_ext(auVar75,auVar75,0xc,1);
          fVar45 = ABS(*(float *)(lVar10 + 0x20) * 0.5);
          fVar30 = ABS(*(float *)(lVar10 + 0x24) * 0.5);
          fVar22 = ABS(*(float *)(lVar10 + 0x28) * 0.5);
          fVar29 = fVar38 + ((fVar39 * auVar43._12_4_ + fVar23 * auVar43._0_4_ * fVar77 +
                             auVar75._0_4_ * auVar76._0_4_ * fVar77) - auVar34._0_4_ * fVar29);
          fVar28 = fVar40 + ((fVar41 * auVar43._12_4_ + fVar23 * auVar43._4_4_ * fVar78 +
                             auVar75._4_4_ * auVar76._4_4_ * fVar78) - auVar34._4_4_ * auVar73._4_4_
                            );
          fVar11 = fVar12 + ((fVar50 * auVar43._12_4_ + fVar23 * auVar43._8_4_ * fVar79 +
                             auVar75._8_4_ * auVar76._8_4_ * fVar79) - auVar34._8_4_ * auVar73._8_4_
                            );
          fVar44 = auVar32._12_4_ + 0.0;
          auVar47._0_4_ = fVar29 - (fVar38 - fVar45);
          auVar47._4_4_ = fVar28 - (fVar40 - fVar30);
          auVar47._8_4_ = fVar11 - (fVar12 - fVar22);
          auVar47._12_4_ = fVar44 - 0.0;
          auVar37._0_4_ = (fVar38 + fVar45) - fVar29;
          auVar37._4_4_ = (fVar40 + fVar30) - fVar28;
          auVar37._8_4_ = (fVar12 + fVar22) - fVar11;
          auVar37._12_4_ = 0.0 - fVar44;
          auVar34 = NEON_fmin(auVar47,auVar37,4);
          auVar31 = auVar34._0_12_;
        }
        else {
          fVar29 = ABS(*(float *)(lVar10 + 0x20) * 0.5);
          fVar38 = ABS(*(float *)(lVar10 + 0x24) * 0.5);
          fVar40 = ABS(*(float *)(lVar10 + 0x28) * 0.5);
          auVar32 = *(undefined1 (*) [16])(lVar10 + 0x40);
          auVar42._0_4_ = fVar11 - (auVar32._0_4_ - fVar29);
          auVar42._4_4_ = fVar44 - (auVar32._4_4_ - fVar38);
          auVar42._8_4_ = fVar45 - (auVar32._8_4_ - fVar40);
          auVar42._12_4_ = fVar12 - 0.0;
          auVar33._0_4_ = (auVar32._0_4_ + fVar29) - fVar11;
          auVar33._4_4_ = (auVar32._4_4_ + fVar38) - fVar44;
          auVar33._8_4_ = (auVar32._8_4_ + fVar40) - fVar45;
          auVar33._12_4_ = 0.0 - fVar12;
          auVar34 = NEON_fmin(auVar42,auVar33,4);
          auVar31 = auVar34._0_12_;
        }
        if (((0.0 <= auVar31._8_4_) && (0.0 <= auVar31._0_4_)) && (0.0 <= auVar31._4_4_)) {
          if ((param_5 & 1) != 0) {
            auVar32 = FUN_0148c6d4(lVar10 + 0x20);
            uVar71 = param_3[1];
            uVar25 = *param_3;
          }
          fVar29 = (float)uVar25 - auVar32._0_4_;
          fVar38 = (float)((ulong)uVar25 >> 0x20) - auVar32._4_4_;
          fVar40 = (float)uVar71 - auVar32._8_4_;
          fVar28 = (float)((ulong)uVar71 >> 0x20) - auVar32._12_4_;
          fVar29 = fVar29 * fVar29;
          fVar38 = fVar38 * fVar38;
          fVar40 = fVar40 * fVar40;
          fVar28 = fVar28 * fVar28;
          auVar15._0_4_ = fVar29 + fVar38;
          auVar15._4_4_ = fVar40 + fVar28;
          auVar15._8_4_ = fVar29 + fVar38;
          auVar15._12_4_ = fVar40 + fVar28;
          auVar32 = NEON_ext(auVar15,auVar15,4,1);
          auVar16._0_4_ = auVar32._0_4_ + auVar32._4_4_;
          auVar16._4_4_ = 0;
          auVar16._8_4_ = auVar32._0_4_ + auVar32._4_4_;
          auVar16._12_4_ = auVar32._8_4_ + auVar32._12_4_;
          if (auVar16._0_4_ < auVar27._0_4_) {
            uVar3 = *(undefined8 *)(lVar10 + 0x40);
            param_1[3] = *(undefined8 *)(lVar10 + 0x48);
            param_1[2] = uVar3;
            *(undefined1 *)(param_1 + 4) = *(undefined1 *)(lVar10 + 0x10);
            *(undefined1 *)param_1 = 1;
            auVar27 = auVar16;
          }
        }
        lVar10 = lVar10 + 0x70;
      } while (lVar1 != lVar10);
    }
  }
  return;
}


