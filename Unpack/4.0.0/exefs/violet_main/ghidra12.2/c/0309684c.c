/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0309684c; name: FUN_0309684c
 */


void FUN_0309684c(long param_1,undefined1 (*param_2) [16],int *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lVar9;
  long lVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ulong uVar29;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  ulong uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  byte bVar41;
  byte bVar42;
  byte bVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  int iVar58;
  int iVar61;
  float fVar62;
  int iVar63;
  float fVar64;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar65 [16];
  undefined1 auVar69 [16];
  undefined1 auVar68 [16];
  undefined1 auVar67 [16];
  undefined1 auVar66 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar84 [16];
  undefined1 auVar83 [16];
  undefined1 auVar82 [16];
  undefined1 auVar81 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  
  piVar11 = (int *)(*(long *)(param_1 + 0x18) + (long)*param_3 * 0x10);
  iVar61 = *piVar11;
  auVar30 = *param_2;
  iVar58 = iVar61 + 1;
  iVar63 = iVar61 + (short)piVar11[2] + -1;
  if (iVar58 < iVar63) {
    lVar9 = *(long *)(param_1 + 0x38);
    puVar1 = (undefined8 *)
             (lVar9 + (long)*(int *)(*(long *)(param_1 + 0x28) + (long)iVar61 * 0x14) * 0x10);
    uVar21 = puVar1[1];
    uVar18 = *puVar1;
    fVar13 = (float)*(undefined8 *)*param_2;
    fVar17 = (float)uVar18;
    fVar23 = fVar13 - fVar17;
    fVar14 = (float)((ulong)*(undefined8 *)*param_2 >> 0x20);
    fVar19 = (float)((ulong)uVar18 >> 0x20);
    fVar24 = fVar14 - fVar19;
    fVar15 = (float)*(undefined8 *)(*param_2 + 8);
    fVar20 = (float)uVar21;
    fVar25 = fVar15 - fVar20;
    fVar16 = (float)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    fVar22 = (float)((ulong)uVar21 >> 0x20);
    fVar26 = fVar16 - fVar22;
    auVar27._4_4_ = fVar24;
    auVar27._0_4_ = fVar23;
    auVar27._8_4_ = fVar25;
    auVar27._12_4_ = fVar26;
    auVar28._4_4_ = fVar24;
    auVar28._0_4_ = fVar23;
    auVar28._8_4_ = fVar25;
    auVar28._12_4_ = fVar26;
    auVar27 = NEON_ext(auVar27,auVar28,4,1);
    lVar10 = (long)iVar63 - (long)iVar58;
    auVar28 = NEON_fmov(0x3f800000,4);
    uVar29 = NEON_fmov(0x3f800000,4);
    piVar11 = (int *)(*(long *)(param_1 + 0x28) + (long)iVar58 * 0x14 + 4);
    fVar12 = 3.40282e+38;
    do {
      puVar1 = (undefined8 *)(lVar9 + (long)piVar11[-1] * 0x10);
      uVar18 = puVar1[1];
      fVar56 = (float)uVar18;
      fVar57 = (float)((ulong)uVar18 >> 0x20);
      uVar18 = *puVar1;
      pfVar2 = (float *)(lVar9 + (long)*piVar11 * 0x10);
      fVar32 = *pfVar2;
      fVar34 = pfVar2[1];
      fVar48 = pfVar2[2];
      fVar49 = pfVar2[3];
      fVar54 = (float)uVar18;
      fVar50 = fVar54 - fVar17;
      fVar55 = (float)((ulong)uVar18 >> 0x20);
      fVar51 = fVar55 - fVar19;
      fVar52 = fVar56 - fVar20;
      fVar53 = fVar57 - fVar22;
      auVar76._4_4_ = fVar51;
      auVar76._0_4_ = fVar50;
      auVar76._8_4_ = fVar52;
      auVar76._12_4_ = fVar53;
      auVar87._4_4_ = fVar51;
      auVar87._0_4_ = fVar50;
      auVar87._8_4_ = fVar52;
      auVar87._12_4_ = fVar53;
      auVar71 = NEON_ext(auVar76,auVar87,4,1);
      auVar38._0_4_ = fVar32 - fVar54;
      auVar38._4_4_ = fVar34 - fVar55;
      auVar38._8_4_ = fVar48 - fVar56;
      auVar38._12_4_ = fVar49 - fVar57;
      auVar76 = NEON_ext(auVar38,auVar38,4,1);
      fVar54 = fVar13 - fVar54;
      fVar55 = fVar14 - fVar55;
      fVar56 = fVar15 - fVar56;
      fVar57 = fVar16 - fVar57;
      fVar31 = fVar17 - fVar32;
      fVar33 = fVar19 - fVar34;
      fVar35 = fVar20 - fVar48;
      fVar36 = fVar22 - fVar49;
      fVar32 = fVar13 - fVar32;
      fVar34 = fVar14 - fVar34;
      uVar44 = SUB41(fVar34,0);
      uVar45 = (undefined1)((uint)fVar34 >> 8);
      uVar46 = (undefined1)((uint)fVar34 >> 0x10);
      uVar47 = (undefined1)((uint)fVar34 >> 0x18);
      fVar48 = fVar15 - fVar48;
      fVar49 = fVar16 - fVar49;
      auVar80[4] = uVar44;
      auVar80._0_4_ = fVar32;
      auVar80[5] = uVar45;
      auVar80[6] = uVar46;
      auVar80[7] = uVar47;
      auVar80._8_4_ = fVar48;
      auVar80._12_4_ = fVar49;
      auVar85[4] = uVar44;
      auVar85._0_4_ = fVar32;
      auVar85[5] = uVar45;
      auVar85[6] = uVar46;
      auVar85[7] = uVar47;
      auVar85._8_4_ = fVar48;
      auVar85._12_4_ = fVar49;
      auVar85 = NEON_ext(auVar80,auVar85,4,1);
      auVar79._0_4_ = auVar27._0_4_ * fVar50 - fVar23 * auVar71._0_4_;
      auVar79._4_4_ = auVar27._4_4_ * fVar51 - fVar24 * auVar71._4_4_;
      auVar79._8_4_ = fVar23 * fVar52 - fVar25 * fVar50;
      auVar79._12_4_ = fVar24 * fVar53 - fVar26 * fVar51;
      auVar7._4_4_ = fVar55;
      auVar7._0_4_ = fVar54;
      auVar7._8_4_ = fVar56;
      auVar7._12_4_ = fVar57;
      auVar8._4_4_ = fVar55;
      auVar8._0_4_ = fVar54;
      auVar8._8_4_ = fVar56;
      auVar8._12_4_ = fVar57;
      auVar72 = NEON_ext(auVar7,auVar8,4,1);
      auVar59._0_4_ = fVar50 * auVar76._0_4_ - auVar38._0_4_ * auVar71._0_4_;
      auVar59._4_4_ = fVar51 * auVar76._4_4_ - auVar38._4_4_ * auVar71._4_4_;
      auVar59._8_4_ = fVar52 * auVar38._0_4_ - auVar38._8_4_ * fVar50;
      auVar59._12_4_ = fVar53 * auVar38._4_4_ - auVar38._12_4_ * fVar51;
      auVar87 = NEON_ext(auVar79,auVar79,4,1);
      auVar80 = NEON_ext(auVar59,auVar59,4,1);
      fVar64 = auVar80._4_4_;
      auVar77._0_4_ = auVar38._0_4_ * auVar72._0_4_ - fVar54 * auVar76._0_4_;
      auVar77._4_4_ = auVar38._4_4_ * auVar72._4_4_ - fVar55 * auVar76._4_4_;
      auVar77._8_4_ = auVar38._8_4_ * fVar54 - fVar56 * auVar38._0_4_;
      auVar77._12_4_ = auVar38._12_4_ * fVar55 - fVar57 * auVar38._4_4_;
      auVar71._4_4_ = fVar33;
      auVar71._0_4_ = fVar31;
      auVar71._8_4_ = fVar35;
      auVar71._12_4_ = fVar36;
      auVar72._4_4_ = fVar33;
      auVar72._0_4_ = fVar31;
      auVar72._8_4_ = fVar35;
      auVar72._12_4_ = fVar36;
      auVar71 = NEON_ext(auVar71,auVar72,4,1);
      auVar76 = NEON_ext(auVar77,auVar77,4,1);
      auVar86._0_4_ = fVar31 * auVar85._0_4_ - fVar32 * auVar71._0_4_;
      auVar86._4_4_ = fVar33 * auVar85._4_4_ - fVar34 * auVar71._4_4_;
      auVar86._8_4_ = fVar35 * fVar32 - fVar48 * fVar31;
      auVar86._12_4_ =
           fVar36 * (float)(CONCAT17(uVar47,CONCAT16(uVar46,CONCAT15(uVar45,CONCAT14(uVar44,fVar32))
                                                    )) >> 0x20) - fVar49 * fVar33;
      auVar72 = NEON_ext(auVar86,auVar86,4,1);
      fVar62 = auVar80._0_4_;
      auVar74._8_4_ = auVar59._0_4_;
      auVar74._0_8_ = auVar80._0_8_;
      auVar74._12_4_ = 0;
      auVar65._0_4_ = auVar87._0_4_ * fVar62;
      auVar65._4_4_ = auVar87._4_4_ * fVar64;
      auVar65._8_4_ = auVar79._0_4_ * auVar59._0_4_;
      auVar65._12_4_ = auVar79._4_4_ * 0.0;
      fVar75 = fVar62 * auVar76._0_4_;
      auVar66._4_12_ = auVar65._4_12_;
      auVar66._0_4_ = auVar65._0_4_;
      auVar68._0_8_ = auVar66._0_8_;
      auVar68._8_4_ = auVar65._8_4_;
      auVar68._12_4_ = auVar65._12_4_;
      auVar67._8_8_ = auVar68._8_8_;
      auVar67._4_4_ = fVar75;
      auVar67._0_4_ = auVar65._0_4_;
      auVar69._0_12_ = auVar67._0_12_;
      auVar69._12_4_ = auVar59._0_4_ * auVar77._0_4_;
      auVar71 = NEON_ext(auVar69,auVar69,8,1);
      iVar58 = -(uint)(0.0 < auVar71._0_4_ + auVar87._4_4_ * fVar64 + auVar65._0_4_);
      iVar61 = -(uint)(0.0 < auVar71._4_4_ + fVar64 * auVar76._4_4_ + fVar75);
      iVar63 = -(uint)(0.0 < fVar62 * auVar72._0_4_ + fVar64 * auVar72._4_4_ +
                             auVar59._0_4_ * auVar86._0_4_);
      if (CONCAT13((byte)((uint)iVar61 >> 0x18) & (byte)((uint)iVar58 >> 0x18) &
                   (byte)((uint)iVar63 >> 0x18),
                   CONCAT12((byte)((uint)iVar61 >> 0x10) & (byte)((uint)iVar58 >> 0x10) &
                            (byte)((uint)iVar63 >> 0x10),
                            CONCAT11((byte)((uint)iVar61 >> 8) & (byte)((uint)iVar58 >> 8) &
                                     (byte)((uint)iVar63 >> 8),
                                     (byte)iVar61 & (byte)iVar58 & (byte)iVar63))) == 0) {
        auVar78._4_4_ = fVar54 * auVar38._0_4_;
        auVar78._0_4_ = fVar23 * fVar50;
        auVar78._8_4_ = fVar25 * fVar52;
        auVar78._12_4_ = fVar56 * auVar38._8_4_;
        auVar71 = NEON_ext(auVar78,auVar78,8,1);
        fVar75 = fVar50 * fVar50;
        auVar81._4_12_ = auVar80._4_12_;
        auVar81._0_4_ = fVar75;
        auVar83._12_4_ = auVar80._12_4_;
        auVar83._0_8_ = auVar81._0_8_;
        auVar83._8_4_ = fVar52 * fVar52;
        auVar82._8_8_ = auVar83._8_8_;
        auVar82._4_4_ = auVar38._0_4_ * auVar38._0_4_;
        auVar82._0_4_ = fVar75;
        auVar84._0_12_ = auVar82._0_12_;
        auVar84._12_4_ = auVar38._8_4_ * auVar38._8_4_;
        auVar72 = NEON_ext(auVar84,auVar84,8,1);
        auVar60._0_4_ =
             (auVar71._0_4_ + fVar24 * fVar51 + fVar23 * fVar50) /
             (auVar72._0_4_ + fVar51 * fVar51 + fVar75);
        auVar60._4_4_ =
             (auVar71._4_4_ + fVar55 * auVar38._4_4_ + fVar54 * auVar38._0_4_) /
             (auVar72._4_4_ + auVar38._4_4_ * auVar38._4_4_ + auVar38._0_4_ * auVar38._0_4_);
        auVar60._12_4_ =
             (fVar35 * fVar48 + fVar31 * fVar32 + fVar33 * fVar34) /
             (fVar35 * fVar35 + fVar31 * fVar31 + fVar33 * fVar33);
        auVar60._8_4_ =
             (fVar35 * fVar48 + fVar31 * fVar32 + fVar33 * fVar34) /
             (fVar35 * fVar35 + fVar31 * fVar31 + fVar33 * fVar33);
        auVar71 = NEON_fminnm(auVar60,auVar28,4);
        auVar71 = NEON_fmax(auVar71,ZEXT816(0),4);
        fVar75 = auVar71._0_4_;
        fVar64 = auVar71._8_4_;
        fVar50 = fVar23 - fVar50 * fVar75;
        fVar51 = fVar24 - fVar51 * fVar75;
        fVar52 = fVar25 - fVar52 * fVar75;
        fVar62 = auVar71._4_4_;
        fVar32 = fVar32 - fVar31 * fVar64;
        fVar34 = fVar34 - fVar33 * fVar64;
        fVar48 = fVar48 - fVar35 * fVar64;
        fVar49 = fVar49 - fVar36 * fVar64;
        auVar39._0_4_ = fVar54 - auVar38._0_4_ * fVar62;
        auVar39._4_4_ = fVar55 - auVar38._4_4_ * fVar62;
        auVar39._8_4_ = fVar56 - auVar38._8_4_ * fVar62;
        auVar39._12_4_ = fVar57 - auVar38._12_4_ * fVar62;
        fVar54 = fVar50 * fVar50 + fVar51 * fVar51 + fVar52 * fVar52;
        fVar55 = fVar50 * fVar50 + fVar51 * fVar51 + fVar52 * fVar52;
        fVar31 = auVar39._0_4_ * auVar39._0_4_ + auVar39._4_4_ * auVar39._4_4_ +
                 auVar39._8_4_ * auVar39._8_4_;
        fVar33 = auVar39._0_4_ * auVar39._0_4_ + auVar39._4_4_ * auVar39._4_4_ +
                 auVar39._8_4_ * auVar39._8_4_;
        fVar35 = fVar32 * fVar32 + fVar34 * fVar34 + fVar48 * fVar48;
        fVar36 = fVar32 * fVar32 + fVar34 * fVar34 + fVar48 * fVar48;
        uVar18 = NEON_fmin(CONCAT17((char)((uint)fVar55 >> 0x18),
                                    CONCAT16((char)((uint)fVar55 >> 0x10),
                                             CONCAT15((char)((uint)fVar55 >> 8),
                                                      CONCAT14(SUB41(fVar55,0),fVar54)))),
                           CONCAT44(fVar33,fVar31),4);
        uVar37 = CONCAT44(-(uint)(fVar55 < fVar33),-(uint)(fVar54 < fVar31)) & 0x100000001;
        iVar58 = (int)uVar37;
        iVar61 = (int)(uVar37 >> 0x20);
        auVar70._0_4_ = (iVar58 << 0x1f) >> 0x1f;
        auVar70._4_4_ = (iVar61 << 0x1f) >> 0x1f;
        auVar70._8_4_ = (iVar58 << 0x1f) >> 0x1f;
        auVar70._12_4_ = (iVar61 << 0x1f) >> 0x1f;
        auVar6._4_4_ = fVar51;
        auVar6._0_4_ = fVar50;
        auVar6._8_4_ = fVar52;
        auVar6._12_4_ = fVar26 - fVar53 * fVar75;
        uVar37 = CONCAT44(-(uint)((float)((ulong)uVar18 >> 0x20) < fVar36),
                          -(uint)((float)uVar18 < fVar35)) & 0x100000001;
        iVar58 = (int)uVar37;
        iVar61 = (int)(uVar37 >> 0x20);
        auVar73._12_4_ = (iVar61 << 0x1f) >> 0x1f;
        auVar73._8_4_ = (iVar58 << 0x1f) >> 0x1f;
        auVar73._4_4_ = (iVar61 << 0x1f) >> 0x1f;
        auVar73._0_4_ = (iVar58 << 0x1f) >> 0x1f;
        auVar3._4_4_ = fVar34;
        auVar3._0_4_ = fVar32;
        auVar3._8_4_ = fVar48;
        auVar3._12_4_ = fVar49;
        auVar4._4_4_ = fVar34;
        auVar4._0_4_ = fVar32;
        auVar4._8_4_ = fVar48;
        auVar4._12_4_ = fVar49;
        auVar74 = auVar4 ^ (auVar3 ^ auVar39 ^ (auVar39 ^ auVar6) & auVar70) & auVar73;
        uVar18 = NEON_fmin(uVar18,CONCAT44(fVar36,fVar35),4);
        fVar54 = (float)uVar18;
        uVar37 = uVar29;
      }
      else {
        fVar54 = auVar59._0_4_ * auVar59._0_4_ + fVar62 * fVar62 + fVar64 * fVar64;
        iVar58 = -(uint)(fVar54 == 0.0);
        bVar41 = ~(byte)((uint)iVar58 >> 8);
        bVar42 = ~(byte)((uint)iVar58 >> 0x10);
        bVar43 = ~(byte)((uint)iVar58 >> 0x18);
        uVar37 = CONCAT44((fVar25 * auVar59._0_4_ + fVar23 * fVar62 + fVar24 * fVar64) /
                          (auVar59._0_4_ * auVar59._0_4_ + fVar62 * fVar62 + fVar64 * fVar64),
                          (fVar25 * auVar59._0_4_ + fVar23 * fVar62 + fVar24 * fVar64) / fVar54) &
                 CONCAT17(bVar43,CONCAT16(bVar42,CONCAT15(bVar41,CONCAT14(~(byte)iVar58,
                                                                          CONCAT13(bVar43,CONCAT12(
                                                  bVar42,CONCAT11(bVar41,~(byte)iVar58)))))));
        fVar55 = (float)uVar37;
        fVar54 = fVar54 * fVar55 * fVar55;
      }
      piVar11 = piVar11 + 5;
      fVar55 = (float)(uVar37 >> 0x20);
      auVar40._0_4_ = fVar13 - (float)uVar37 * auVar74._0_4_;
      auVar40._4_4_ = fVar14 - fVar55 * auVar74._4_4_;
      auVar40._8_4_ = fVar15 - (float)uVar37 * auVar74._8_4_;
      auVar40._12_4_ = fVar16 - fVar55 * auVar74._12_4_;
      iVar58 = -(uint)(fVar54 < fVar12);
      if (fVar54 >= fVar12) {
        fVar54 = fVar12;
      }
      fVar12 = fVar54;
      lVar10 = lVar10 + -1;
      auVar5[4] = (char)iVar58;
      auVar5._0_4_ = iVar58;
      auVar5[5] = (char)((uint)iVar58 >> 8);
      auVar5[6] = (char)((uint)iVar58 >> 0x10);
      auVar5[7] = (char)((uint)iVar58 >> 0x18);
      auVar5._8_4_ = iVar58;
      auVar5._12_4_ = iVar58;
      auVar30 = auVar30 ^ (auVar30 ^ auVar40) & auVar5;
    } while (lVar10 != 0);
  }
  else {
    auVar30 = *param_2;
  }
  param_4[1] = auVar30._8_8_;
  *param_4 = auVar30._0_8_;
  return;
}


