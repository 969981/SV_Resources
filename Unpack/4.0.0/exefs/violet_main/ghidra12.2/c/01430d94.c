/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01430d94; name: FUN_01430d94
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01430d94(undefined1 param_1 [16],long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  int iVar10;
  undefined2 uVar11;
  undefined3 uVar12;
  int iVar13;
  int iVar14;
  long *plVar15;
  float *pfVar16;
  long lVar17;
  int iVar18;
  short *psVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  undefined8 uVar39;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar40;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar41;
  float fVar42;
  undefined6 uVar43;
  byte bVar47;
  float fVar46;
  byte bVar48;
  float fVar49;
  undefined1 auVar44 [12];
  float fVar50;
  undefined1 auVar45 [16];
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar74;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined8 uVar75;
  undefined1 auVar76 [12];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  int iVar94;
  int iVar95;
  float fVar96;
  float fVar99;
  float fVar100;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  float fVar101;
  int iVar102;
  int iVar105;
  int iVar106;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  
  psVar19 = (short *)(param_2 + 0x80);
  if ((-1 < *psVar19) && (-1 < *(short *)(param_2 + 0x82))) {
    uVar39 = param_1._8_8_;
    auVar28._0_8_ = param_1._0_8_;
    FUN_01431564(param_2,psVar19);
    auVar28._8_8_ = uVar39;
    FUN_01431390(auVar28,param_2,psVar19);
    lVar17 = *(long *)(param_2 + 0x150);
    lVar2 = *(long *)(param_2 + 0x158);
    if (lVar17 != lVar2) {
      auVar30._8_8_ = uVar39;
      auVar30._0_8_ = auVar28._0_8_;
      FUN_01431564(auVar30,param_2,lVar17);
      auVar70._8_8_ = uVar39;
      auVar70._0_8_ = auVar28._0_8_;
      FUN_01431390(auVar70,param_2,lVar17);
      lVar1 = lVar17 + 0xd0;
      if (lVar1 != lVar2) {
        auVar72._8_8_ = uVar39;
        auVar72._0_8_ = auVar28._0_8_;
        FUN_01431564(auVar72,param_2,lVar1);
        auVar97._8_8_ = uVar39;
        auVar97._0_8_ = auVar28._0_8_;
        FUN_01431390(auVar97,param_2,lVar1);
        lVar1 = lVar17 + 0x1a0;
        if (lVar1 != lVar2) {
          auVar112._8_8_ = uVar39;
          auVar112._0_8_ = auVar28._0_8_;
          FUN_01431564(auVar112,param_2,lVar1);
          auVar29._8_8_ = uVar39;
          auVar29._0_8_ = auVar28._0_8_;
          FUN_01431390(auVar29,param_2,lVar1);
          for (lVar17 = lVar17 + 0x270; lVar17 != lVar2; lVar17 = lVar17 + 0xd0) {
            auVar36._8_8_ = uVar39;
            auVar36._0_8_ = auVar28._0_8_;
            FUN_01431564(auVar36,param_2,lVar17);
            auVar37._8_8_ = uVar39;
            auVar37._0_8_ = auVar28._0_8_;
            FUN_01431390(auVar37,param_2,lVar17);
          }
        }
      }
    }
    fVar42 = param_1._0_4_;
    if (*(char *)(param_2 + 0x67) != '\0') {
      iVar3 = *(int *)(param_2 + 0x244);
      if ((iVar3 == 0) || (iVar3 == 2)) {
        fVar27 = *(float *)(param_2 + 0x248);
        fVar26 = *(float *)(param_2 + 0x24c);
        iVar18 = iVar3;
      }
      else {
        fVar40 = *(float *)(param_2 + 0x24c) + fVar42;
        fVar27 = *(float *)(param_2 + 0x248);
        fVar26 = 0.0;
        if (fVar40 <= fVar27) {
          fVar26 = fVar40;
        }
        iVar18 = (uint)(iVar3 == 1) << 1;
        if (fVar40 <= fVar27) {
          iVar18 = iVar3;
        }
      }
      *(ulong *)(param_2 + 0x244) = CONCAT44(fVar27,iVar18);
      *(float *)(param_2 + 0x24c) = fVar26;
      if ((iVar3 != 0) && (iVar18 == 0)) {
        lVar17 = *(long *)(param_2 + 0x150);
        lVar2 = *(long *)(param_2 + 0x158);
        *(undefined8 *)(param_2 + 0xec) = 0;
        *(undefined8 *)(param_2 + 0x100) = 0;
        *(undefined8 *)(param_2 + 0x108) = 0;
        *(undefined8 *)(param_2 + 0x110) = 0;
        *(undefined8 *)(param_2 + 0x118) = 0;
        for (; lVar17 != lVar2; lVar17 = lVar17 + 0xd0) {
          *(undefined8 *)(lVar17 + 0x6c) = 0;
          *(undefined8 *)(lVar17 + 0x80) = 0;
          *(undefined8 *)(lVar17 + 0x88) = 0;
          *(undefined8 *)(lVar17 + 0x90) = 0;
          *(undefined8 *)(lVar17 + 0x98) = 0;
        }
      }
    }
    if (*(char *)(param_2 + 0x69) != '\0') {
      iVar3 = *(int *)(param_2 + 0x25c);
      if ((iVar3 == 0) || (iVar3 == 2)) {
        fVar27 = *(float *)(param_2 + 0x260);
        fVar26 = *(float *)(param_2 + 0x264);
        iVar18 = iVar3;
      }
      else {
        fVar40 = *(float *)(param_2 + 0x264) + fVar42;
        fVar27 = *(float *)(param_2 + 0x260);
        fVar26 = 0.0;
        if (fVar40 <= fVar27) {
          fVar26 = fVar40;
        }
        iVar18 = (uint)(iVar3 == 1) << 1;
        if (fVar40 <= fVar27) {
          iVar18 = iVar3;
        }
      }
      *(ulong *)(param_2 + 0x25c) = CONCAT44(fVar27,iVar18);
      *(float *)(param_2 + 0x264) = fVar26;
    }
    if (DAT_0486ae00 != 0) {
      lVar17 = *(long *)(*(long *)(*(long *)(param_2 + 0x58) + 0x30) + 0xe8);
      if (lVar17 == 0) {
        plVar15 = (long *)0x0;
      }
      else {
        plVar15 = *(long **)(lVar17 + 0x48);
      }
      pfVar16 = (float *)(**(code **)(*plVar15 + 0x68))();
      fVar41 = *pfVar16;
      fVar46 = pfVar16[1];
      fVar49 = pfVar16[2];
      fVar50 = pfVar16[3];
      fVar27 = (float)*(undefined8 *)(pfVar16 + 4);
      fVar26 = (float)((ulong)*(undefined8 *)(pfVar16 + 4) >> 0x20);
      fVar40 = (float)*(undefined8 *)(pfVar16 + 6);
      fVar96 = (float)((ulong)*(undefined8 *)(pfVar16 + 6) >> 0x20);
      fVar67 = pfVar16[8];
      fVar68 = pfVar16[9];
      fVar69 = pfVar16[10];
      fVar74 = pfVar16[0xb] * pfVar16[0xb];
      auVar20._0_4_ = fVar27 * fVar27 + fVar26 * fVar26;
      auVar20._4_4_ = fVar40 * fVar40 + fVar96 * fVar96;
      auVar20._8_4_ = fVar27 * fVar27 + fVar26 * fVar26;
      auVar20._12_4_ = fVar40 * fVar40 + fVar96 * fVar96;
      auVar21._0_4_ = fVar67 * fVar67 + fVar68 * fVar68;
      auVar21._4_4_ = fVar69 * fVar69 + fVar74;
      auVar21._8_4_ = fVar67 * fVar67 + fVar68 * fVar68;
      auVar21._12_4_ = fVar69 * fVar69 + fVar74;
      auVar22._0_4_ = fVar41 * fVar41 + fVar46 * fVar46;
      auVar22._4_4_ = fVar49 * fVar49 + fVar50 * fVar50;
      auVar22._8_4_ = fVar41 * fVar41 + fVar46 * fVar46;
      auVar22._12_4_ = fVar49 * fVar49 + fVar50 * fVar50;
      auVar70 = NEON_ext(auVar20,auVar20,4,1);
      auVar72 = NEON_ext(auVar21,auVar21,4,1);
      auVar30 = NEON_ext(auVar22,auVar22,4,1);
      auVar23._0_4_ = auVar70._0_4_ + auVar70._4_4_;
      auVar23._4_4_ = auVar70._8_4_ + auVar70._12_4_;
      auVar23._8_4_ = auVar70._0_4_ + auVar70._4_4_;
      auVar23._12_4_ = auVar70._8_4_ + auVar70._12_4_;
      auVar24._0_4_ = auVar72._0_4_ + auVar72._4_4_;
      auVar24._4_4_ = auVar72._8_4_ + auVar72._12_4_;
      auVar24._8_4_ = auVar72._0_4_ + auVar72._4_4_;
      auVar24._12_4_ = auVar72._8_4_ + auVar72._12_4_;
      auVar25._0_4_ = auVar30._0_4_ + auVar30._4_4_;
      auVar25._4_4_ = auVar30._8_4_ + auVar30._12_4_;
      auVar25._8_4_ = auVar30._0_4_ + auVar30._4_4_;
      auVar25._12_4_ = auVar30._8_4_ + auVar30._12_4_;
      auVar72 = NEON_frsqrte(auVar23,4);
      auVar97 = NEON_frsqrte(auVar24,4);
      auVar107._0_4_ = auVar23._0_4_ * auVar72._0_4_;
      auVar107._4_4_ = auVar23._4_4_ * auVar72._4_4_;
      auVar107._8_4_ = auVar23._8_4_ * auVar72._8_4_;
      auVar107._12_4_ = auVar23._12_4_ * auVar72._12_4_;
      auVar30 = NEON_frsqrte(auVar25,4);
      auVar111._0_4_ = auVar24._0_4_ * auVar97._0_4_;
      auVar111._4_4_ = auVar24._4_4_ * auVar97._4_4_;
      auVar111._8_4_ = auVar24._8_4_ * auVar97._8_4_;
      auVar111._12_4_ = auVar24._12_4_ * auVar97._12_4_;
      auVar89._0_4_ = auVar25._0_4_ * auVar30._0_4_;
      auVar89._4_4_ = auVar25._4_4_ * auVar30._4_4_;
      auVar89._8_4_ = auVar25._8_4_ * auVar30._8_4_;
      auVar89._12_4_ = auVar25._12_4_ * auVar30._12_4_;
      auVar112 = NEON_frsqrts(auVar97,auVar111,4);
      iVar102 = -(uint)(auVar24._0_4_ == 0.0);
      iVar105 = -(uint)(auVar24._4_4_ == 0.0);
      iVar106 = -(uint)(auVar24._8_4_ == 0.0);
      iVar13 = -(uint)(auVar23._0_4_ == 0.0);
      iVar14 = -(uint)(auVar23._4_4_ == 0.0);
      iVar94 = -(uint)(auVar23._8_4_ == 0.0);
      iVar95 = -(uint)(auVar23._12_4_ == 0.0);
      iVar3 = -(uint)(auVar25._0_4_ == 0.0);
      iVar18 = -(uint)(auVar25._4_4_ == 0.0);
      iVar9 = -(uint)(auVar25._8_4_ == 0.0);
      iVar10 = -(uint)(auVar25._12_4_ == 0.0);
      auVar70 = NEON_frsqrts(auVar30,auVar89,4);
      auVar77._0_4_ = auVar30._0_4_ * auVar70._0_4_;
      auVar77._4_4_ = auVar30._4_4_ * auVar70._4_4_;
      auVar77._8_4_ = auVar30._8_4_ * auVar70._8_4_;
      auVar77._12_4_ = auVar30._12_4_ * auVar70._12_4_;
      auVar70 = NEON_frsqrts(auVar72,auVar107,4);
      auVar108._0_4_ = auVar25._0_4_ * auVar77._0_4_;
      auVar108._4_4_ = auVar25._4_4_ * auVar77._4_4_;
      auVar108._8_4_ = auVar25._8_4_ * auVar77._8_4_;
      auVar108._12_4_ = auVar25._12_4_ * auVar77._12_4_;
      auVar30 = NEON_fmov(0x3f800000,4);
      auVar90._0_4_ = auVar72._0_4_ * auVar70._0_4_;
      auVar90._4_4_ = auVar72._4_4_ * auVar70._4_4_;
      auVar90._8_4_ = auVar72._8_4_ * auVar70._8_4_;
      auVar90._12_4_ = auVar72._12_4_ * auVar70._12_4_;
      auVar93._0_4_ = auVar97._0_4_ * auVar112._0_4_;
      auVar93._4_4_ = auVar97._4_4_ * auVar112._4_4_;
      auVar93._8_4_ = auVar97._8_4_ * auVar112._8_4_;
      auVar93._12_4_ = auVar97._12_4_ * auVar112._12_4_;
      auVar97 = NEON_frsqrts(auVar77,auVar108,4);
      auVar73._0_4_ = auVar24._0_4_ * auVar93._0_4_;
      auVar73._4_4_ = auVar24._4_4_ * auVar93._4_4_;
      auVar73._8_4_ = auVar24._8_4_ * auVar93._8_4_;
      auVar73._12_4_ = auVar24._12_4_ * auVar93._12_4_;
      auVar71._0_4_ = auVar23._0_4_ * auVar90._0_4_;
      auVar71._4_4_ = auVar23._4_4_ * auVar90._4_4_;
      auVar71._8_4_ = auVar23._8_4_ * auVar90._8_4_;
      auVar71._12_4_ = auVar23._12_4_ * auVar90._12_4_;
      auVar72 = NEON_frsqrts(auVar93,auVar73,4);
      auVar70 = NEON_frsqrts(auVar90,auVar71,4);
      fVar41 = fVar41 * auVar77._0_4_ * auVar97._0_4_;
      fVar46 = fVar46 * auVar77._4_4_ * auVar97._4_4_;
      fVar49 = fVar49 * auVar77._8_4_ * auVar97._8_4_;
      fVar50 = fVar50 * auVar77._12_4_ * auVar97._12_4_;
      fVar41 = (float)CONCAT13((byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar3 >> 0x18),
                               CONCAT12((byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar3 >> 0x10),
                                        CONCAT11((byte)((uint)fVar41 >> 8) &
                                                 ~(byte)((uint)iVar3 >> 8),
                                                 SUB41(fVar41,0) & ~(byte)iVar3)));
      uVar75 = CONCAT17((byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                        CONCAT16((byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10),
                                 CONCAT15((byte)((uint)fVar46 >> 8) & ~(byte)((uint)iVar18 >> 8),
                                          CONCAT14(SUB41(fVar46,0) & ~(byte)iVar18,fVar41))));
      auVar76._0_10_ =
           CONCAT19((byte)((uint)fVar49 >> 8) & ~(byte)((uint)iVar9 >> 8),
                    CONCAT18(SUB41(fVar49,0) & ~(byte)iVar9,uVar75));
      auVar76[10] = (byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10);
      auVar76[0xb] = (byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18);
      auVar78[0xc] = SUB41(fVar50,0) & ~(byte)iVar10;
      auVar78._0_12_ = auVar76;
      auVar78[0xd] = (byte)((uint)fVar50 >> 8) & ~(byte)((uint)iVar10 >> 8);
      auVar78[0xe] = (byte)((uint)fVar50 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10);
      auVar78[0xf] = (byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18);
      fVar67 = fVar67 * auVar93._0_4_ * auVar72._0_4_;
      fVar68 = fVar68 * auVar93._4_4_ * auVar72._4_4_;
      fVar69 = fVar69 * auVar93._8_4_ * auVar72._8_4_;
      fVar27 = fVar27 * auVar90._0_4_ * auVar70._0_4_;
      fVar26 = fVar26 * auVar90._4_4_ * auVar70._4_4_;
      fVar40 = fVar40 * auVar90._8_4_ * auVar70._8_4_;
      fVar96 = fVar96 * auVar90._12_4_ * auVar70._12_4_;
      auVar70 = NEON_ext(auVar78,auVar78,8,1);
      fVar50 = (float)CONCAT13((byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar102 >> 0x18),
                               CONCAT12((byte)((uint)fVar67 >> 0x10) &
                                        ~(byte)((uint)iVar102 >> 0x10),
                                        CONCAT11((byte)((uint)fVar67 >> 8) &
                                                 ~(byte)((uint)iVar102 >> 8),
                                                 SUB41(fVar67,0) & ~(byte)iVar102)));
      uVar43 = CONCAT15((byte)((uint)fVar68 >> 8) & ~(byte)((uint)iVar105 >> 8),
                        CONCAT14(SUB41(fVar68,0) & ~(byte)iVar105,fVar50));
      bVar47 = (byte)((uint)fVar68 >> 0x10) & ~(byte)((uint)iVar105 >> 0x10);
      bVar48 = (byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar105 >> 0x18);
      auVar44._0_8_ = CONCAT17(bVar48,CONCAT16(bVar47,uVar43));
      auVar44[8] = SUB41(fVar69,0) & ~(byte)iVar106;
      auVar44[9] = (byte)((uint)fVar69 >> 8) & ~(byte)((uint)iVar106 >> 8);
      auVar44[10] = (byte)((uint)fVar69 >> 0x10) & ~(byte)((uint)iVar106 >> 0x10);
      auVar44[0xb] = (byte)((uint)fVar69 >> 0x18) & ~(byte)((uint)iVar106 >> 0x18);
      bVar51 = SUB41(fVar27,0) & ~(byte)iVar13;
      bVar52 = (byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar13 >> 8);
      bVar53 = (byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10);
      bVar54 = (byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18);
      bVar55 = SUB41(fVar26,0) & ~(byte)iVar14;
      bVar56 = (byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar14 >> 8);
      bVar57 = (byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10);
      bVar58 = (byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18);
      bVar59 = SUB41(fVar40,0) & ~(byte)iVar94;
      bVar60 = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar94 >> 8);
      bVar61 = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar94 >> 0x10);
      bVar62 = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar94 >> 0x18);
      bVar63 = SUB41(fVar96,0) & ~(byte)iVar95;
      bVar64 = (byte)((uint)fVar96 >> 8) & ~(byte)((uint)iVar95 >> 8);
      bVar65 = (byte)((uint)fVar96 >> 0x10) & ~(byte)((uint)iVar95 >> 0x10);
      bVar66 = (byte)((uint)fVar96 >> 0x18) & ~(byte)((uint)iVar95 >> 0x18);
      fVar68 = (float)((ulong)uVar75 >> 0x20);
      fVar27 = (float)CONCAT13(bVar58,CONCAT12(bVar57,CONCAT11(bVar56,bVar55)));
      fVar40 = auVar44._8_4_;
      fVar26 = auVar30._0_4_ + (float)_DAT_03cab3a0 * fVar41 + (float)_DAT_03cac210 * fVar27 +
               (float)_DAT_03cabb00 * fVar40;
      fVar46 = auVar30._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar41 +
               (float)((ulong)_DAT_03cac210 >> 0x20) * fVar27 +
               (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar40;
      fVar49 = auVar30._8_4_ + (float)_UNK_03cab3a8 * fVar41 + (float)_UNK_03cac218 * fVar27 +
               (float)_UNK_03cabb08 * fVar40;
      fVar40 = auVar30._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar41 +
               (float)((ulong)_UNK_03cac218 >> 0x20) * fVar27 +
               (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar40;
      fVar67 = (float)((ulong)auVar44._0_8_ >> 0x20);
      uVar11 = (undefined2)((uint6)uVar43 >> 0x20);
      auVar4[1] = bVar52;
      auVar4[0] = bVar51;
      auVar4[2] = bVar53;
      auVar4[3] = bVar54;
      auVar4[4] = bVar55;
      auVar4[5] = bVar56;
      auVar4[6] = bVar57;
      auVar4[7] = bVar58;
      auVar4[8] = bVar59;
      auVar4[9] = bVar60;
      auVar4[10] = bVar61;
      auVar4[0xb] = bVar62;
      auVar4[0xc] = bVar63;
      auVar4[0xd] = bVar64;
      auVar4[0xe] = bVar65;
      auVar4[0xf] = bVar66;
      auVar5[1] = bVar52;
      auVar5[0] = bVar51;
      auVar5[2] = bVar53;
      auVar5[3] = bVar54;
      auVar5[4] = bVar55;
      auVar5[5] = bVar56;
      auVar5[6] = bVar57;
      auVar5[7] = bVar58;
      auVar5[8] = bVar59;
      auVar5[9] = bVar60;
      auVar5[10] = bVar61;
      auVar5[0xb] = bVar62;
      auVar5[0xc] = bVar63;
      auVar5[0xd] = bVar64;
      auVar5[0xe] = bVar65;
      auVar5[0xf] = bVar66;
      auVar30 = NEON_ext(auVar4,auVar5,8,1);
      fVar41 = auVar30._0_4_;
      auVar79._4_4_ = fVar26;
      auVar79._0_4_ = fVar26;
      auVar79._8_4_ = fVar26;
      auVar79._12_4_ = fVar26;
      auVar109._4_4_ = fVar46;
      auVar109._0_4_ = fVar46;
      auVar109._8_4_ = fVar46;
      auVar109._12_4_ = fVar46;
      auVar113._0_4_ = -(uint)(fVar26 <= fVar46);
      auVar113._4_4_ = -(uint)(fVar26 <= fVar46);
      auVar113._8_4_ = -(uint)(fVar26 <= fVar46);
      auVar113._12_4_ = -(uint)(fVar26 <= fVar46);
      auVar79 = auVar79 ^ (auVar79 ^ auVar109) & auVar113;
      auVar103._4_4_ = fVar49;
      auVar103._0_4_ = fVar49;
      auVar103._8_4_ = fVar49;
      auVar103._12_4_ = fVar49;
      fVar69 = SQRT(fVar26) * 0.5;
      fVar74 = SQRT(fVar40) * 0.5;
      auVar30 = NEON_fmov(0x40800000,4);
      auVar110._0_4_ = -(uint)(auVar79._0_4_ <= fVar49);
      auVar110._4_4_ = -(uint)(auVar79._4_4_ <= fVar49);
      auVar110._8_4_ = -(uint)(auVar79._8_4_ <= fVar49);
      auVar110._12_4_ = -(uint)(auVar79._12_4_ <= fVar49);
      fVar27 = fVar68 - (float)CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,bVar51)));
      auVar98._0_4_ = fVar69 * auVar30._0_4_;
      auVar98._4_4_ = SQRT(fVar46) * 0.5 * auVar30._4_4_;
      auVar98._8_4_ = SQRT(fVar49) * 0.5 * auVar30._8_4_;
      auVar98._12_4_ = fVar74 * auVar30._12_4_;
      auVar79 = auVar79 ^ (auVar79 ^ auVar103) & auVar110;
      auVar72 = NEON_frecpe(auVar98,4);
      auVar30 = NEON_frecps(auVar72,auVar98,4);
      auVar31._0_4_ = -(uint)(auVar79._0_4_ <= fVar40);
      auVar31._4_4_ = -(uint)(auVar79._4_4_ <= fVar40);
      auVar31._8_4_ = -(uint)(auVar79._8_4_ <= fVar40);
      auVar31._12_4_ = -(uint)(auVar79._12_4_ <= fVar40);
      auVar104._0_4_ = auVar72._0_4_ * auVar30._0_4_;
      auVar104._4_4_ = auVar72._4_4_ * auVar30._4_4_;
      auVar104._8_4_ = auVar72._8_4_ * auVar30._8_4_;
      auVar104._12_4_ = auVar72._12_4_ * auVar30._12_4_;
      auVar30 = NEON_frecps(auVar104,auVar98,4);
      fVar96 = auVar104._0_4_ * auVar30._0_4_;
      fVar99 = auVar104._4_4_ * auVar30._4_4_;
      fVar100 = auVar104._8_4_ * auVar30._8_4_;
      fVar101 = auVar104._12_4_ * auVar30._12_4_;
      fVar26 = (fVar68 + (float)CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,bVar51)))) * fVar96;
      uVar80 = (undefined1)((uint)fVar26 >> 8);
      uVar81 = (undefined1)((uint)fVar26 >> 0x10);
      uVar82 = (undefined1)((uint)fVar26 >> 0x18);
      fVar40 = (auVar70._0_4_ + fVar50) * fVar96;
      uVar83 = (undefined1)((uint)fVar40 >> 8);
      uVar84 = (undefined1)((uint)fVar40 >> 0x10);
      uVar85 = (undefined1)((uint)fVar40 >> 0x18);
      fVar96 = (fVar41 + -fVar67) * fVar96;
      uVar86 = (undefined1)((uint)fVar96 >> 8);
      uVar87 = (undefined1)((uint)fVar96 >> 0x10);
      uVar88 = (undefined1)((uint)fVar96 >> 0x18);
      auVar91._0_4_ =
           (fVar68 + (float)CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,bVar51)))) * fVar99;
      auVar91._4_4_ = fVar99 * 0.0;
      auVar91._8_4_ = (fVar41 + (float)CONCAT13(bVar48,CONCAT12(bVar47,uVar11))) * fVar99;
      auVar91._12_4_ = (fVar50 + -auVar76._8_4_) * fVar99;
      auVar45._0_4_ = (auVar70._0_4_ + fVar50) * fVar100;
      auVar45._4_4_ = (fVar41 + fVar67) * fVar100;
      auVar45._12_4_ = fVar27 * fVar100;
      auVar92._8_8_ = auVar91._8_8_;
      auVar92._4_4_ = SQRT(fVar46) * 0.5;
      auVar92._0_4_ = auVar91._0_4_;
      auVar45._8_4_ = SQRT(fVar49) * 0.5;
      auVar7[4] = SUB41(fVar26,0);
      auVar7._0_4_ = fVar69;
      auVar7[5] = uVar80;
      auVar7[6] = uVar81;
      auVar7[7] = uVar82;
      auVar7[8] = SUB41(fVar40,0);
      auVar7[9] = uVar83;
      auVar7[10] = uVar84;
      auVar7[0xb] = uVar85;
      auVar7[0xc] = SUB41(fVar96,0);
      auVar7[0xd] = uVar86;
      auVar7[0xe] = uVar87;
      auVar7[0xf] = uVar88;
      auVar8[4] = SUB41(fVar26,0);
      auVar8._0_4_ = fVar69;
      auVar8[5] = uVar80;
      auVar8[6] = uVar81;
      auVar8[7] = uVar82;
      auVar8[8] = SUB41(fVar40,0);
      auVar8[9] = uVar83;
      auVar8[10] = uVar84;
      auVar8[0xb] = uVar85;
      auVar8[0xc] = SUB41(fVar96,0);
      auVar8[0xd] = uVar86;
      auVar8[0xe] = uVar87;
      auVar8[0xf] = uVar88;
      auVar45 = auVar45 ^ (auVar45 ^ auVar8 ^ (auVar7 ^ auVar92) & auVar113) & ~auVar110;
      uVar12 = CONCAT12(auVar76[10],(short)((unkuint10)auVar76._0_10_ >> 0x40));
      fVar26 = (float)CONCAT13(auVar76[0xb],uVar12);
      fVar26 = (fVar50 - fVar26) * fVar101;
      fVar27 = fVar27 * fVar101;
      auVar6[4] = SUB41(fVar26,0);
      auVar6._0_4_ = (fVar41 - (float)CONCAT13(bVar48,CONCAT12(bVar47,uVar11))) * fVar101;
      auVar6[5] = (char)((uint)fVar26 >> 8);
      auVar6[6] = (char)((uint)fVar26 >> 0x10);
      auVar6[7] = (char)((uint)fVar26 >> 0x18);
      auVar6[8] = SUB41(fVar27,0);
      auVar6[9] = (char)((uint)fVar27 >> 8);
      auVar6[10] = (char)((uint)fVar27 >> 0x10);
      auVar6[0xb] = (char)((uint)fVar27 >> 0x18);
      auVar6[0xc] = SUB41(fVar74,0);
      auVar6[0xd] = (char)((uint)fVar74 >> 8);
      auVar6[0xe] = (char)((uint)fVar74 >> 0x10);
      auVar6[0xf] = (char)((uint)fVar74 >> 0x18);
      auVar45 = auVar45 ^ (auVar45 ^ auVar6) & auVar31;
      uStack_48 = auVar45._8_8_;
      local_50 = auVar45._0_8_;
      FUN_01431d9c(param_2,psVar19);
      auVar32._8_8_ = uVar39;
      auVar32._0_8_ = auVar28._0_8_;
      FUN_01431970(auVar32,param_2,psVar19,&local_50);
      lVar17 = *(long *)(param_2 + 0x150);
      lVar2 = *(long *)(param_2 + 0x158);
      if (lVar17 != lVar2) {
        FUN_01431d9c(param_2,lVar17);
        auVar33._8_8_ = uVar39;
        auVar33._0_8_ = auVar28._0_8_;
        FUN_01431970(auVar33,param_2,lVar17,&local_50);
        lVar1 = lVar17 + 0xd0;
        if (lVar1 != lVar2) {
          FUN_01431d9c(param_2,lVar1);
          auVar34._8_8_ = uVar39;
          auVar34._0_8_ = auVar28._0_8_;
          FUN_01431970(auVar34,param_2,lVar1,&local_50);
          lVar1 = lVar17 + 0x1a0;
          if (lVar1 != lVar2) {
            FUN_01431d9c(param_2,lVar1);
            auVar35._8_8_ = uVar39;
            auVar35._0_8_ = auVar28._0_8_;
            FUN_01431970(auVar35,param_2,lVar1,&local_50);
            for (lVar17 = lVar17 + 0x270; lVar17 != lVar2; lVar17 = lVar17 + 0xd0) {
              FUN_01431d9c(param_2,lVar17);
              auVar38._8_8_ = uVar39;
              auVar38._0_8_ = auVar28._0_8_;
              FUN_01431970(auVar38,param_2,lVar17,&local_50);
            }
          }
        }
      }
      if (*(char *)(param_2 + 0x68) != '\0') {
        iVar3 = *(int *)(param_2 + 0x250);
        if ((iVar3 == 0) || (iVar3 == 2)) {
          fVar27 = *(float *)(param_2 + 0x254);
          fVar26 = *(float *)(param_2 + 600);
          iVar18 = iVar3;
        }
        else {
          fVar40 = *(float *)(param_2 + 600) + fVar42;
          fVar27 = *(float *)(param_2 + 0x254);
          fVar26 = 0.0;
          if (fVar40 <= fVar27) {
            fVar26 = fVar40;
          }
          iVar18 = (uint)(iVar3 == 1) << 1;
          if (fVar40 <= fVar27) {
            iVar18 = iVar3;
          }
        }
        *(ulong *)(param_2 + 0x250) = CONCAT44(fVar27,iVar18);
        *(float *)(param_2 + 600) = fVar26;
      }
      if (*(char *)(param_2 + 0x66) != '\0') {
        iVar3 = *(int *)(param_2 + 0x238);
        if ((iVar3 == 0) || (iVar3 == 2)) {
          fVar27 = *(float *)(param_2 + 0x23c);
          fVar26 = *(float *)(param_2 + 0x240);
          iVar18 = iVar3;
        }
        else {
          fVar42 = *(float *)(param_2 + 0x240) + fVar42;
          fVar27 = *(float *)(param_2 + 0x23c);
          fVar26 = 0.0;
          if (fVar42 <= fVar27) {
            fVar26 = fVar42;
          }
          iVar18 = (uint)(iVar3 == 1) << 1;
          if (fVar42 <= fVar27) {
            iVar18 = iVar3;
          }
        }
        *(ulong *)(param_2 + 0x238) = CONCAT44(fVar27,iVar18);
        *(float *)(param_2 + 0x240) = fVar26;
      }
    }
  }
  return;
}


