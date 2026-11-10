/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03096b5c; name: FUN_03096b5c
 */


void FUN_03096b5c(long param_1,uint *param_2,uint *param_3,uint *param_4)

{
  undefined8 *puVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int *piVar12;
  float fVar13;
  int *piVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  ulong uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  ulong uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  byte bVar48;
  byte bVar49;
  byte bVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  int iVar65;
  int iVar68;
  float fVar69;
  int iVar70;
  float fVar71;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar72 [16];
  undefined1 auVar76 [16];
  undefined1 auVar75 [16];
  undefined1 auVar74 [16];
  undefined1 auVar73 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar91 [16];
  undefined1 auVar90 [16];
  undefined1 auVar89 [16];
  undefined1 auVar88 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  
  uVar36 = *param_3;
  uVar5 = uVar36 - *(int *)(param_1 + 0x20);
  if ((int)uVar36 < *(int *)(param_1 + 0x20)) {
    lVar18 = *(long *)(param_1 + 0x18);
    uVar15 = uVar36;
    if (*(int *)(param_1 + 0x98) != 0) {
      uVar15 = *(uint *)(*(long *)(param_1 + 0x90) + (long)(int)uVar36 * 4);
    }
    uVar5 = uVar36;
    if (uVar15 != 0xffffffff) {
      lVar18 = *(long *)(param_1 + 0xb0);
      uVar5 = uVar15;
    }
  }
  else {
    lVar18 = *(long *)(param_1 + 0xd0);
  }
  iVar4 = *(int *)(param_1 + 0x30);
  iVar65 = *(int *)(lVar18 + (-(ulong)(uVar5 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar5 << 4));
  if (iVar65 < iVar4) {
    iVar19 = iVar65;
    if (*(int *)(param_1 + 0x78) != 0) {
      iVar19 = *(int *)(*(long *)(param_1 + 0x70) + (long)iVar65 * 4);
    }
    if (iVar19 == -1) {
      lVar20 = *(long *)(param_1 + 0x28);
      iVar19 = iVar65;
    }
    else {
      lVar20 = *(long *)(param_1 + 0xc0);
    }
  }
  else {
    lVar20 = *(long *)(param_1 + 0xe0);
    iVar19 = iVar65 - iVar4;
  }
  iVar3 = *(int *)(param_1 + 0x40);
  lVar16 = *(long *)(param_1 + 0x38);
  lVar17 = *(long *)(param_1 + 0xf0);
  iVar19 = *(int *)(lVar20 + (long)iVar19 * 0x14);
  uVar36 = *param_2;
  uVar15 = param_2[1];
  uVar37 = param_2[2];
  uVar38 = param_2[3];
  puVar1 = (undefined8 *)(lVar16 + (long)iVar19 * 0x10);
  if (iVar3 <= iVar19) {
    puVar1 = (undefined8 *)(lVar17 + (long)(iVar19 - iVar3) * 0x10);
  }
  iVar19 = iVar65 + *(short *)(lVar18 + (long)(int)uVar5 * 0x10 + 8) + -1;
  if (iVar65 + 1 < iVar19) {
    fVar21 = (float)*(undefined8 *)param_2;
    fVar25 = (float)*puVar1;
    fVar29 = fVar21 - fVar25;
    fVar22 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
    fVar26 = (float)((ulong)*puVar1 >> 0x20);
    fVar30 = fVar22 - fVar26;
    fVar23 = (float)*(undefined8 *)(param_2 + 2);
    fVar27 = (float)puVar1[1];
    fVar31 = fVar23 - fVar27;
    fVar24 = (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
    fVar28 = (float)((ulong)puVar1[1] >> 0x20);
    fVar32 = fVar24 - fVar28;
    auVar33._4_4_ = fVar30;
    auVar33._0_4_ = fVar29;
    auVar33._8_4_ = fVar31;
    auVar33._12_4_ = fVar32;
    auVar34._4_4_ = fVar30;
    auVar34._0_4_ = fVar29;
    auVar34._8_4_ = fVar31;
    auVar34._12_4_ = fVar32;
    auVar33 = NEON_ext(auVar33,auVar34,4,1);
    lVar18 = (long)(iVar65 + 1);
    piVar12 = (int *)(*(long *)(param_1 + 0xe0) + (lVar18 - iVar4) * 0x14);
    auVar34 = NEON_fmov(0x3f800000,4);
    uVar35 = NEON_fmov(0x3f800000,4);
    fVar13 = 3.40282e+38;
    uVar36 = *param_2;
    uVar15 = param_2[1];
    uVar37 = param_2[2];
    uVar38 = param_2[3];
    do {
      piVar14 = piVar12;
      if (lVar18 < iVar4) {
        if (*(int *)(param_1 + 0x78) == 0) {
          iVar65 = (int)lVar18;
        }
        else {
          iVar65 = *(int *)(*(long *)(param_1 + 0x70) + lVar18 * 4);
        }
        piVar14 = (int *)(*(long *)(param_1 + 0xc0) + (long)iVar65 * 0x14);
        if (iVar65 == -1) {
          piVar14 = (int *)(*(long *)(param_1 + 0x28) + lVar18 * 0x14);
        }
      }
      iVar65 = *piVar14;
      iVar68 = piVar14[1];
      puVar1 = (undefined8 *)(lVar16 + (long)iVar65 * 0x10);
      if (iVar3 <= iVar65) {
        puVar1 = (undefined8 *)(lVar17 + (long)(iVar65 - iVar3) * 0x10);
      }
      fVar63 = (float)puVar1[1];
      fVar64 = (float)((ulong)puVar1[1] >> 0x20);
      pfVar2 = (float *)(lVar16 + (long)iVar68 * 0x10);
      if (iVar3 <= iVar68) {
        pfVar2 = (float *)(lVar17 + (long)(iVar68 - iVar3) * 0x10);
      }
      fVar40 = *pfVar2;
      fVar42 = pfVar2[1];
      fVar55 = pfVar2[2];
      fVar56 = pfVar2[3];
      fVar61 = (float)*puVar1;
      fVar57 = fVar61 - fVar25;
      fVar62 = (float)((ulong)*puVar1 >> 0x20);
      fVar58 = fVar62 - fVar26;
      fVar59 = fVar63 - fVar27;
      fVar60 = fVar64 - fVar28;
      auVar83._4_4_ = fVar58;
      auVar83._0_4_ = fVar57;
      auVar83._8_4_ = fVar59;
      auVar83._12_4_ = fVar60;
      auVar94._4_4_ = fVar58;
      auVar94._0_4_ = fVar57;
      auVar94._8_4_ = fVar59;
      auVar94._12_4_ = fVar60;
      auVar78 = NEON_ext(auVar83,auVar94,4,1);
      auVar46._0_4_ = fVar40 - fVar61;
      auVar46._4_4_ = fVar42 - fVar62;
      auVar46._8_4_ = fVar55 - fVar63;
      auVar46._12_4_ = fVar56 - fVar64;
      auVar83 = NEON_ext(auVar46,auVar46,4,1);
      fVar61 = fVar21 - fVar61;
      fVar62 = fVar22 - fVar62;
      fVar63 = fVar23 - fVar63;
      fVar64 = fVar24 - fVar64;
      fVar39 = fVar25 - fVar40;
      fVar41 = fVar26 - fVar42;
      fVar43 = fVar27 - fVar55;
      fVar44 = fVar28 - fVar56;
      fVar40 = fVar21 - fVar40;
      fVar42 = fVar22 - fVar42;
      uVar51 = SUB41(fVar42,0);
      uVar52 = (undefined1)((uint)fVar42 >> 8);
      uVar53 = (undefined1)((uint)fVar42 >> 0x10);
      uVar54 = (undefined1)((uint)fVar42 >> 0x18);
      fVar55 = fVar23 - fVar55;
      fVar56 = fVar24 - fVar56;
      auVar87[4] = uVar51;
      auVar87._0_4_ = fVar40;
      auVar87[5] = uVar52;
      auVar87[6] = uVar53;
      auVar87[7] = uVar54;
      auVar87._8_4_ = fVar55;
      auVar87._12_4_ = fVar56;
      auVar92[4] = uVar51;
      auVar92._0_4_ = fVar40;
      auVar92[5] = uVar52;
      auVar92[6] = uVar53;
      auVar92[7] = uVar54;
      auVar92._8_4_ = fVar55;
      auVar92._12_4_ = fVar56;
      auVar92 = NEON_ext(auVar87,auVar92,4,1);
      auVar86._0_4_ = auVar33._0_4_ * fVar57 - fVar29 * auVar78._0_4_;
      auVar86._4_4_ = auVar33._4_4_ * fVar58 - fVar30 * auVar78._4_4_;
      auVar86._8_4_ = fVar29 * fVar59 - fVar31 * fVar57;
      auVar86._12_4_ = fVar30 * fVar60 - fVar32 * fVar58;
      auVar10._4_4_ = fVar62;
      auVar10._0_4_ = fVar61;
      auVar10._8_4_ = fVar63;
      auVar10._12_4_ = fVar64;
      auVar11._4_4_ = fVar62;
      auVar11._0_4_ = fVar61;
      auVar11._8_4_ = fVar63;
      auVar11._12_4_ = fVar64;
      auVar79 = NEON_ext(auVar10,auVar11,4,1);
      auVar66._0_4_ = fVar57 * auVar83._0_4_ - auVar78._0_4_ * auVar46._0_4_;
      auVar66._4_4_ = fVar58 * auVar83._4_4_ - auVar78._4_4_ * auVar46._4_4_;
      auVar66._8_4_ = fVar59 * auVar46._0_4_ - fVar57 * auVar46._8_4_;
      auVar66._12_4_ = fVar60 * auVar46._4_4_ - fVar58 * auVar46._12_4_;
      auVar94 = NEON_ext(auVar86,auVar86,4,1);
      auVar87 = NEON_ext(auVar66,auVar66,4,1);
      fVar71 = auVar87._4_4_;
      auVar84._0_4_ = auVar79._0_4_ * auVar46._0_4_ - fVar61 * auVar83._0_4_;
      auVar84._4_4_ = auVar79._4_4_ * auVar46._4_4_ - fVar62 * auVar83._4_4_;
      auVar84._8_4_ = fVar61 * auVar46._8_4_ - fVar63 * auVar46._0_4_;
      auVar84._12_4_ = fVar62 * auVar46._12_4_ - fVar64 * auVar46._4_4_;
      auVar78._4_4_ = fVar41;
      auVar78._0_4_ = fVar39;
      auVar78._8_4_ = fVar43;
      auVar78._12_4_ = fVar44;
      auVar79._4_4_ = fVar41;
      auVar79._0_4_ = fVar39;
      auVar79._8_4_ = fVar43;
      auVar79._12_4_ = fVar44;
      auVar78 = NEON_ext(auVar78,auVar79,4,1);
      auVar83 = NEON_ext(auVar84,auVar84,4,1);
      auVar93._0_4_ = fVar39 * auVar92._0_4_ - fVar40 * auVar78._0_4_;
      auVar93._4_4_ = fVar41 * auVar92._4_4_ - fVar42 * auVar78._4_4_;
      auVar93._8_4_ = fVar43 * fVar40 - fVar55 * fVar39;
      auVar93._12_4_ =
           fVar44 * (float)(CONCAT17(uVar54,CONCAT16(uVar53,CONCAT15(uVar52,CONCAT14(uVar51,fVar40))
                                                    )) >> 0x20) - fVar56 * fVar41;
      auVar79 = NEON_ext(auVar93,auVar93,4,1);
      fVar69 = auVar87._0_4_;
      auVar81._8_4_ = auVar66._0_4_;
      auVar81._0_8_ = auVar87._0_8_;
      auVar81._12_4_ = 0;
      auVar72._0_4_ = auVar94._0_4_ * fVar69;
      auVar72._4_4_ = auVar94._4_4_ * fVar71;
      auVar72._8_4_ = auVar86._0_4_ * auVar66._0_4_;
      auVar72._12_4_ = auVar86._4_4_ * 0.0;
      fVar82 = fVar69 * auVar83._0_4_;
      auVar73._4_12_ = auVar72._4_12_;
      auVar73._0_4_ = auVar72._0_4_;
      auVar75._0_8_ = auVar73._0_8_;
      auVar75._8_4_ = auVar72._8_4_;
      auVar75._12_4_ = auVar72._12_4_;
      auVar74._8_8_ = auVar75._8_8_;
      auVar74._4_4_ = fVar82;
      auVar74._0_4_ = auVar72._0_4_;
      auVar76._0_12_ = auVar74._0_12_;
      auVar76._12_4_ = auVar66._0_4_ * auVar84._0_4_;
      auVar78 = NEON_ext(auVar76,auVar76,8,1);
      iVar65 = -(uint)(0.0 < auVar78._0_4_ + auVar94._4_4_ * fVar71 + auVar72._0_4_);
      iVar68 = -(uint)(0.0 < auVar78._4_4_ + fVar71 * auVar83._4_4_ + fVar82);
      iVar70 = -(uint)(0.0 < fVar69 * auVar79._0_4_ + fVar71 * auVar79._4_4_ +
                             auVar66._0_4_ * auVar93._0_4_);
      if (CONCAT13((byte)((uint)iVar68 >> 0x18) & (byte)((uint)iVar65 >> 0x18) &
                   (byte)((uint)iVar70 >> 0x18),
                   CONCAT12((byte)((uint)iVar68 >> 0x10) & (byte)((uint)iVar65 >> 0x10) &
                            (byte)((uint)iVar70 >> 0x10),
                            CONCAT11((byte)((uint)iVar68 >> 8) & (byte)((uint)iVar65 >> 8) &
                                     (byte)((uint)iVar70 >> 8),
                                     (byte)iVar68 & (byte)iVar65 & (byte)iVar70))) == 0) {
        auVar85._4_4_ = fVar61 * auVar46._0_4_;
        auVar85._0_4_ = fVar29 * fVar57;
        auVar85._8_4_ = fVar31 * fVar59;
        auVar85._12_4_ = fVar63 * auVar46._8_4_;
        auVar78 = NEON_ext(auVar85,auVar85,8,1);
        fVar82 = fVar57 * fVar57;
        auVar88._4_12_ = auVar87._4_12_;
        auVar88._0_4_ = fVar82;
        auVar90._12_4_ = auVar87._12_4_;
        auVar90._0_8_ = auVar88._0_8_;
        auVar90._8_4_ = fVar59 * fVar59;
        auVar89._8_8_ = auVar90._8_8_;
        auVar89._4_4_ = auVar46._0_4_ * auVar46._0_4_;
        auVar89._0_4_ = fVar82;
        auVar91._0_12_ = auVar89._0_12_;
        auVar91._12_4_ = auVar46._8_4_ * auVar46._8_4_;
        auVar79 = NEON_ext(auVar91,auVar91,8,1);
        auVar67._0_4_ =
             (auVar78._0_4_ + fVar30 * fVar58 + fVar29 * fVar57) /
             (auVar79._0_4_ + fVar58 * fVar58 + fVar82);
        auVar67._4_4_ =
             (auVar78._4_4_ + fVar62 * auVar46._4_4_ + fVar61 * auVar46._0_4_) /
             (auVar79._4_4_ + auVar46._4_4_ * auVar46._4_4_ + auVar46._0_4_ * auVar46._0_4_);
        auVar67._12_4_ =
             (fVar43 * fVar55 + fVar39 * fVar40 + fVar41 * fVar42) /
             (fVar43 * fVar43 + fVar39 * fVar39 + fVar41 * fVar41);
        auVar67._8_4_ =
             (fVar43 * fVar55 + fVar39 * fVar40 + fVar41 * fVar42) /
             (fVar43 * fVar43 + fVar39 * fVar39 + fVar41 * fVar41);
        auVar78 = NEON_fminnm(auVar67,auVar34,4);
        auVar78 = NEON_fmax(auVar78,ZEXT816(0),4);
        fVar82 = auVar78._0_4_;
        fVar71 = auVar78._8_4_;
        fVar57 = fVar29 - fVar57 * fVar82;
        fVar58 = fVar30 - fVar58 * fVar82;
        fVar59 = fVar31 - fVar59 * fVar82;
        fVar69 = auVar78._4_4_;
        fVar40 = fVar40 - fVar39 * fVar71;
        fVar42 = fVar42 - fVar41 * fVar71;
        fVar55 = fVar55 - fVar43 * fVar71;
        fVar56 = fVar56 - fVar44 * fVar71;
        auVar47._0_4_ = fVar61 - auVar46._0_4_ * fVar69;
        auVar47._4_4_ = fVar62 - auVar46._4_4_ * fVar69;
        auVar47._8_4_ = fVar63 - auVar46._8_4_ * fVar69;
        auVar47._12_4_ = fVar64 - auVar46._12_4_ * fVar69;
        fVar63 = fVar57 * fVar57 + fVar58 * fVar58 + fVar59 * fVar59;
        fVar64 = fVar57 * fVar57 + fVar58 * fVar58 + fVar59 * fVar59;
        fVar61 = auVar47._0_4_ * auVar47._0_4_ + auVar47._4_4_ * auVar47._4_4_ +
                 auVar47._8_4_ * auVar47._8_4_;
        fVar62 = auVar47._0_4_ * auVar47._0_4_ + auVar47._4_4_ * auVar47._4_4_ +
                 auVar47._8_4_ * auVar47._8_4_;
        fVar39 = fVar40 * fVar40 + fVar42 * fVar42 + fVar55 * fVar55;
        fVar41 = fVar40 * fVar40 + fVar42 * fVar42 + fVar55 * fVar55;
        uVar8 = NEON_fmin(CONCAT17((char)((uint)fVar64 >> 0x18),
                                   CONCAT16((char)((uint)fVar64 >> 0x10),
                                            CONCAT15((char)((uint)fVar64 >> 8),
                                                     CONCAT14(SUB41(fVar64,0),fVar63)))),
                          CONCAT44(fVar62,fVar61),4);
        uVar45 = CONCAT44(-(uint)(fVar64 < fVar62),-(uint)(fVar63 < fVar61)) & 0x100000001;
        iVar65 = (int)uVar45;
        iVar68 = (int)(uVar45 >> 0x20);
        auVar77._0_4_ = (iVar65 << 0x1f) >> 0x1f;
        auVar77._4_4_ = (iVar68 << 0x1f) >> 0x1f;
        auVar77._8_4_ = (iVar65 << 0x1f) >> 0x1f;
        auVar77._12_4_ = (iVar68 << 0x1f) >> 0x1f;
        auVar9._4_4_ = fVar58;
        auVar9._0_4_ = fVar57;
        auVar9._8_4_ = fVar59;
        auVar9._12_4_ = fVar32 - fVar60 * fVar82;
        uVar45 = CONCAT44(-(uint)((float)((ulong)uVar8 >> 0x20) < fVar41),
                          -(uint)((float)uVar8 < fVar39)) & 0x100000001;
        iVar65 = (int)uVar45;
        iVar68 = (int)(uVar45 >> 0x20);
        auVar80._12_4_ = (iVar68 << 0x1f) >> 0x1f;
        auVar80._8_4_ = (iVar65 << 0x1f) >> 0x1f;
        auVar80._4_4_ = (iVar68 << 0x1f) >> 0x1f;
        auVar80._0_4_ = (iVar65 << 0x1f) >> 0x1f;
        auVar6._4_4_ = fVar42;
        auVar6._0_4_ = fVar40;
        auVar6._8_4_ = fVar55;
        auVar6._12_4_ = fVar56;
        auVar7._4_4_ = fVar42;
        auVar7._0_4_ = fVar40;
        auVar7._8_4_ = fVar55;
        auVar7._12_4_ = fVar56;
        auVar81 = auVar7 ^ (auVar6 ^ auVar47 ^ (auVar47 ^ auVar9) & auVar77) & auVar80;
        uVar8 = NEON_fmin(uVar8,CONCAT44(fVar41,fVar39),4);
        fVar63 = (float)uVar8;
        uVar45 = uVar35;
      }
      else {
        fVar63 = auVar66._0_4_ * auVar66._0_4_ + fVar69 * fVar69 + fVar71 * fVar71;
        iVar65 = -(uint)(fVar63 == 0.0);
        bVar48 = ~(byte)((uint)iVar65 >> 8);
        bVar49 = ~(byte)((uint)iVar65 >> 0x10);
        bVar50 = ~(byte)((uint)iVar65 >> 0x18);
        uVar45 = CONCAT44((fVar31 * auVar66._0_4_ + fVar29 * fVar69 + fVar30 * fVar71) /
                          (auVar66._0_4_ * auVar66._0_4_ + fVar69 * fVar69 + fVar71 * fVar71),
                          (fVar31 * auVar66._0_4_ + fVar29 * fVar69 + fVar30 * fVar71) / fVar63) &
                 CONCAT17(bVar50,CONCAT16(bVar49,CONCAT15(bVar48,CONCAT14(~(byte)iVar65,
                                                                          CONCAT13(bVar50,CONCAT12(
                                                  bVar49,CONCAT11(bVar48,~(byte)iVar65)))))));
        fVar64 = (float)uVar45;
        fVar63 = fVar63 * fVar64 * fVar64;
      }
      lVar18 = lVar18 + 1;
      piVar12 = piVar12 + 5;
      fVar64 = (float)(uVar45 >> 0x20);
      uVar5 = -(uint)(fVar63 < fVar13);
      if (fVar63 >= fVar13) {
        fVar63 = fVar13;
      }
      uVar36 = uVar36 ^ (uVar36 ^ (uint)(fVar21 - (float)uVar45 * auVar81._0_4_)) & uVar5;
      uVar15 = uVar15 ^ (uVar15 ^ (uint)(fVar22 - fVar64 * auVar81._4_4_)) & uVar5;
      uVar37 = uVar37 ^ (uVar37 ^ (uint)(fVar23 - (float)uVar45 * auVar81._8_4_)) & uVar5;
      uVar38 = uVar38 ^ (uVar38 ^ (uint)(fVar24 - fVar64 * auVar81._12_4_)) & uVar5;
      fVar13 = fVar63;
    } while (iVar19 != lVar18);
  }
  param_4[2] = uVar37;
  param_4[3] = uVar38;
  *param_4 = uVar36;
  param_4[1] = uVar15;
  return;
}


