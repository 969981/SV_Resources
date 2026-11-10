/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03098e0c; name: FUN_03098e0c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_03098e0c(long param_1,int *param_2,undefined1 (*param_3) [16],undefined8 *param_4,
            undefined8 *param_5)

{
  bool bVar1;
  undefined1 (*pauVar2) [12];
  undefined1 (*pauVar3) [12];
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined1 (*pauVar7) [12];
  float *pfVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  long *plVar22;
  int iVar23;
  long lVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  long lVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  undefined1 auVar33 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  float fVar42;
  undefined8 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  byte bVar53;
  byte bVar56;
  byte bVar57;
  float fVar54;
  int iVar55;
  byte bVar58;
  undefined8 uVar59;
  float fVar62;
  float fVar63;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar64;
  float fVar69;
  ulong uVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar70;
  ulong uVar71;
  float fVar72;
  undefined8 uVar73;
  float fVar75;
  float fVar76;
  undefined1 auVar74 [16];
  float in_s20;
  float in_register_00005284;
  float in_register_00005288;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar79;
  float fVar83;
  float fVar84;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar85 [16];
  int iVar86;
  int iVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  uint uVar91;
  float fVar92;
  
  lVar20 = *(long *)(param_1 + 0x20);
  fVar39 = (float)*(undefined8 *)(*param_3 + 8);
  fVar40 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
  uVar32 = *(undefined8 *)*param_3;
  fVar37 = (float)uVar32;
  fVar38 = (float)((ulong)uVar32 >> 0x20);
  uVar43 = param_4[1];
  uVar41 = *param_4;
  iVar21 = *param_2;
  pauVar2 = (undefined1 (*) [12])(param_1 + 0x60);
  fVar48 = (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20);
  fVar44 = (float)*(undefined8 *)*pauVar2;
  fVar45 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
  pauVar7 = (undefined1 (*) [12])(param_1 + 0x70);
  fVar49 = (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
  fVar46 = (float)*(undefined8 *)*pauVar7;
  fVar47 = (float)((ulong)*(undefined8 *)*pauVar7 >> 0x20);
  pauVar3 = (undefined1 (*) [12])(param_1 + 0x80);
  fVar52 = (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20);
  fVar50 = (float)*(undefined8 *)*pauVar3;
  fVar51 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
  if (iVar21 < *(int *)(lVar20 + 0x20)) {
    lVar24 = *(long *)(lVar20 + 0x18);
    iVar23 = iVar21;
    if (*(int *)(lVar20 + 0x98) != 0) {
      iVar23 = *(int *)(*(long *)(lVar20 + 0x90) + (long)iVar21 * 4);
    }
    if (iVar23 != -1) {
      plVar22 = (long *)(lVar20 + 0xb0);
      iVar21 = iVar23;
      goto LAB_03098e64;
    }
  }
  else {
    plVar22 = (long *)(lVar20 + 0xd0);
    iVar21 = iVar21 - *(int *)(lVar20 + 0x20);
LAB_03098e64:
    lVar24 = *plVar22;
  }
  piVar4 = (int *)(lVar24 + (long)iVar21 * 0x10);
  iVar6 = *(int *)(lVar20 + 0x30);
  iVar21 = *piVar4;
  iVar27 = (int)(short)piVar4[2];
  iVar23 = iVar21 + iVar27;
  iVar26 = iVar23 + -1;
  if (iVar6 < iVar23) {
    plVar22 = (long *)(lVar20 + 0xe0);
    iVar26 = iVar26 - iVar6;
LAB_03098ebc:
    lVar24 = *plVar22;
  }
  else {
    iVar25 = iVar26;
    if (*(int *)(lVar20 + 0x78) != 0) {
      iVar25 = *(int *)(*(long *)(lVar20 + 0x70) + (long)iVar26 * 4);
    }
    if (iVar25 != -1) {
      plVar22 = (long *)(lVar20 + 0xc0);
      iVar26 = iVar25;
      goto LAB_03098ebc;
    }
    lVar24 = *(long *)(lVar20 + 0x28);
  }
  iVar26 = *(int *)(lVar24 + (long)iVar26 * 0x14 + 4);
  iVar25 = *(int *)(lVar20 + 0x40);
  lVar24 = 0x38;
  if (iVar25 <= iVar26) {
    lVar24 = 0xf0;
  }
  iVar5 = 0;
  if (iVar25 <= iVar26) {
    iVar5 = iVar25;
  }
  fVar42 = (float)((ulong)uVar41 >> 0x20);
  fVar31 = (float)*(undefined8 *)(param_1 + 0x90);
  fVar34 = (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20);
  fVar35 = (float)*(undefined8 *)(param_1 + 0x98);
  if (iVar27 < 1) {
    auVar74 = ZEXT816(0x5f7ffff0);
  }
  else {
    auVar68._12_4_ = fVar48;
    auVar68._0_12_ = *pauVar2;
    auVar77._12_4_ = fVar48;
    auVar77._0_12_ = *pauVar2;
    auVar78 = NEON_ext(auVar68,auVar77,8,1);
    auVar80._12_4_ = fVar49;
    auVar80._0_12_ = *pauVar7;
    auVar9._12_4_ = fVar49;
    auVar9._0_12_ = *pauVar7;
    auVar80 = NEON_ext(auVar80,auVar9,8,1);
    auVar66._8_8_ = _UNK_03caaa68;
    auVar66._0_8_ = _DAT_03caaa60;
    auVar74._12_4_ = fVar40;
    auVar74._0_12_ = *(undefined1 (*) [12])*param_3;
    auVar67._12_4_ = fVar40;
    auVar67._0_12_ = *(undefined1 (*) [12])*param_3;
    auVar74 = NEON_ext(auVar74,auVar67,8,1);
    auVar10._12_4_ = fVar52;
    auVar10._0_12_ = *pauVar3;
    auVar11._12_4_ = fVar52;
    auVar11._0_12_ = *pauVar3;
    auVar77 = NEON_ext(auVar10,auVar11,8,1);
    uVar73 = NEON_ext(uVar32,auVar74._0_8_,4,1);
    fVar69 = fVar38 * fVar38 + fVar37 * fVar37;
    fVar54 = fVar39 * fVar39 + fVar37 * fVar37;
    lVar28 = (long)iVar21;
    iVar13 = -(uint)(fVar69 <= 0.0);
    iVar55 = -(uint)(fVar54 <= 0.0);
    uVar71 = CONCAT44(-(uint)(fVar54 < fVar69),-(uint)(fVar54 < fVar69));
    uVar32 = 0;
    uVar36 = 0;
    auVar60._0_12_ = SUB1612(*param_3,0);
    auVar60._12_4_ = 0;
    auVar67 = a64_TBL(ZEXT816(0),auVar60,auVar66);
    auVar15._8_8_ = _UNK_03cabbb8;
    auVar15._0_8_ = _DAT_03cabbb0;
    auVar74 = a64_TBL(ZEXT816(0),auVar60,auVar15);
    fVar79 = (float)uVar41 - fVar31;
    fVar83 = fVar42 - fVar34;
    fVar84 = (float)uVar43 - fVar35;
    uVar65 = uVar71 & 0x100000001;
    iVar86 = (int)uVar65;
    iVar87 = (int)(uVar65 >> 0x20);
    iVar27 = 0;
    auVar14._4_4_ = (iVar87 << 0x1f) >> 0x1f;
    auVar14._0_4_ = (iVar86 << 0x1f) >> 0x1f;
    auVar14._8_4_ = (iVar86 << 0x1f) >> 0x1f;
    auVar14._12_4_ = (iVar87 << 0x1f) >> 0x1f;
    auVar74 = auVar74 ^ (auVar74 ^ auVar67) & auVar14;
    fVar64 = -auVar74._0_4_;
    fVar88 = auVar74._4_4_;
    auVar67 = NEON_ext(auVar74,auVar74,8,1);
    auVar68 = NEON_fmov(0x3f800000,4);
    fVar69 = auVar68._4_4_ / SQRT(fVar69);
    fVar54 = auVar68._8_4_ / SQRT(fVar54);
    uVar59 = NEON_ext(CONCAT44(fVar88,fVar64),auVar67._0_8_,4,1);
    bVar53 = SUB41(fVar54,0) & ~(byte)iVar55;
    bVar56 = (byte)((uint)fVar54 >> 8) & ~(byte)((uint)iVar55 >> 8);
    bVar57 = (byte)((uint)fVar54 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10);
    bVar58 = (byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18);
    uVar12 = CONCAT13((byte)((uint)fVar69 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                      CONCAT12((byte)((uint)fVar69 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10),
                               CONCAT11((byte)((uint)fVar69 >> 8) & ~(byte)((uint)iVar13 >> 8),
                                        SUB41(fVar69,0) & ~(byte)iVar13)));
    uVar65 = CONCAT44(uVar12,uVar12);
    auVar61._0_4_ = fVar37 * (float)uVar59 - (float)uVar73 * fVar64;
    auVar61._4_4_ =
         fVar38 * (float)((ulong)uVar59 >> 0x20) - (float)((ulong)uVar73 >> 0x20) * fVar88;
    auVar61._8_4_ = fVar39 * fVar64 - fVar37 * auVar74._8_4_;
    auVar61._12_4_ = fVar40 * fVar88 - fVar38 * auVar74._12_4_;
    uVar65 = uVar65 ^ (uVar65 ^ CONCAT17(bVar58,CONCAT16(bVar57,CONCAT15(bVar56,CONCAT14(bVar53,
                                                  CONCAT13(bVar58,CONCAT12(bVar57,CONCAT11(bVar56,
                                                  bVar53)))))))) & ~uVar71;
    auVar67 = NEON_ext(auVar61,auVar61,4,1);
    fVar72 = auVar78._0_4_ * fVar84 + fVar44 * fVar79 + fVar45 * fVar83;
    fVar75 = auVar80._0_4_ * fVar84 + fVar46 * fVar79 + fVar47 * fVar83;
    fVar76 = auVar77._0_4_ * fVar84 + fVar50 * fVar79 + fVar51 * fVar83;
    fVar63 = (float)uVar65;
    fVar64 = fVar63 * fVar64;
    fVar62 = (float)(uVar65 >> 0x20);
    fVar88 = fVar62 * fVar88;
    fVar83 = fVar63 * auVar74._8_4_;
    fVar84 = fVar63 * auVar67._0_4_;
    fVar62 = fVar62 * auVar67._4_4_;
    fVar63 = fVar63 * auVar61._0_4_;
    pfVar8 = (float *)(*(long *)(lVar20 + lVar24) + (long)(iVar26 - iVar5) * 0x10);
    fVar69 = *pfVar8;
    fVar54 = pfVar8[1];
    fVar79 = pfVar8[2];
    lVar24 = (long)iVar6 * -0x14 + lVar28 * 0x14;
    fVar70 = -(fVar72 * fVar64 + fVar75 * fVar88 + fVar76 * fVar83);
    fVar76 = -(fVar72 * fVar84 + fVar75 * fVar62 + fVar76 * fVar63);
    auVar74 = ZEXT416(0x5f7ffff0);
    auVar78._0_4_ = fVar64 * fVar69;
    auVar78._4_4_ = fVar88 * fVar54;
    auVar78._8_4_ = fVar83 * fVar79;
    auVar78._12_4_ = fVar70 * pfVar8[3];
    auVar67 = NEON_ext(auVar78,auVar78,8,1);
    auVar81._0_4_ = fVar84 * fVar69;
    auVar81._4_4_ = fVar62 * fVar54;
    auVar81._8_4_ = fVar63 * fVar79;
    auVar81._12_4_ = fVar76 * pfVar8[3];
    auVar68 = NEON_ext(auVar81,auVar81,8,1);
    in_s20 = auVar78._0_4_ + auVar78._4_4_;
    in_register_00005284 = auVar67._0_4_ + fVar70;
    in_register_00005288 = 0.0;
    fVar72 = in_s20 + in_register_00005284;
    fVar75 = auVar81._0_4_ + auVar81._4_4_ + auVar68._0_4_ + fVar76;
    do {
      bVar1 = 0.0 < fVar72;
      if (lVar28 < iVar6) {
        iVar26 = iVar21;
        if (*(int *)(lVar20 + 0x78) != 0) {
          iVar26 = *(int *)(*(long *)(lVar20 + 0x70) + lVar28 * 4);
        }
        if (iVar26 == -1) {
          lVar19 = *(long *)(lVar20 + 0x28) + lVar28 * 0x14;
        }
        else {
          lVar19 = *(long *)(lVar20 + 0xc0) + (long)iVar26 * 0x14;
        }
      }
      else {
        lVar19 = *(long *)(lVar20 + 0xe0) + lVar24;
      }
      iVar26 = *(int *)(lVar19 + 4);
      lVar19 = 0x38;
      if (iVar25 <= iVar26) {
        lVar19 = 0xf0;
      }
      iVar5 = 0;
      if (iVar25 <= iVar26) {
        iVar5 = iVar25;
      }
      pfVar8 = (float *)(*(long *)(lVar20 + lVar19) + (long)(iVar26 - iVar5) * 0x10);
      fVar16 = *pfVar8;
      fVar17 = pfVar8[1];
      fVar18 = pfVar8[2];
      auVar82._0_4_ = fVar64 * fVar16;
      auVar82._4_4_ = fVar88 * fVar17;
      auVar82._8_4_ = fVar83 * fVar18;
      auVar82._12_4_ = fVar70 * pfVar8[3];
      auVar67 = NEON_ext(auVar82,auVar82,8,1);
      fVar29 = auVar82._0_4_ + auVar82._4_4_ + auVar67._0_4_ + fVar70;
      auVar85._0_4_ = fVar84 * fVar16;
      auVar85._4_4_ = fVar62 * fVar17;
      auVar85._8_4_ = fVar63 * fVar18;
      auVar85._12_4_ = fVar76 * pfVar8[3];
      auVar67 = NEON_ext(auVar85,auVar85,8,1);
      fVar30 = auVar85._0_4_ + auVar85._4_4_ + auVar67._0_4_ + fVar76;
      fVar89 = fVar29 * fVar29 + fVar30 * fVar30;
      fVar90 = auVar74._0_4_;
      uVar91 = -(uint)(fVar89 < fVar90);
      if (fVar90 <= fVar89) {
        fVar89 = fVar90;
      }
      auVar74 = ZEXT416((uint)fVar89);
      in_s20 = (float)((uint)in_s20 ^ ((uint)in_s20 ^ (uint)fVar16) & uVar91);
      in_register_00005284 =
           (float)((uint)in_register_00005284 ^ ((uint)in_register_00005284 ^ (uint)fVar17) & uVar91
                  );
      in_register_00005288 =
           (float)((uint)in_register_00005288 ^ ((uint)in_register_00005288 ^ (uint)fVar18) & uVar91
                  );
      fVar90 = fVar72 * fVar30 - fVar75 * fVar29;
      fVar92 = (fVar72 - fVar29) * (fVar72 - fVar29) + (fVar75 - fVar30) * (fVar75 - fVar30);
      if (fVar90 * fVar90 < fVar92 * fVar89) {
        fVar89 = fVar72 * (fVar29 - fVar72) + fVar75 * (fVar30 - fVar75);
        if ((fVar89 < 0.0) && (0.0 < fVar29 * (fVar29 - fVar72) + fVar30 * (fVar30 - fVar75))) {
          fVar72 = -fVar89 / fVar92;
          in_s20 = fVar69 + (fVar16 - fVar69) * fVar72;
          in_register_00005284 = fVar54 + (fVar17 - fVar54) * fVar72;
          in_register_00005288 = fVar79 + (fVar18 - fVar79) * fVar72;
          auVar74 = ZEXT416((uint)((fVar90 * fVar90) / fVar92));
        }
      }
      if (fVar75 <= 0.0 && 0.0 < fVar30) {
        if (fVar29 <= 0.0 || !bVar1) {
          iVar27 = iVar27 + (uint)((bVar1 || 0.0 < fVar29) && 0.0 < fVar90);
        }
        else {
          iVar27 = iVar27 + 1;
        }
      }
      else if ((fVar30 <= 0.0) && (fVar75 > 0.0)) {
        if (fVar29 <= 0.0 || !bVar1) {
          iVar27 = iVar27 - (uint)((bVar1 || 0.0 < fVar29) && fVar90 <= 0.0);
        }
        else {
          iVar27 = iVar27 + -1;
        }
      }
      lVar28 = lVar28 + 1;
      lVar24 = lVar24 + 0x14;
      iVar21 = iVar21 + 1;
      fVar72 = fVar29;
      fVar69 = fVar16;
      fVar54 = fVar17;
      fVar79 = fVar18;
      fVar75 = fVar30;
    } while (lVar28 < iVar23);
    if (iVar27 != 0) goto LAB_030992d0;
  }
  fVar64 = fVar37 * (float)uVar41;
  fVar42 = fVar38 * fVar42;
  fVar69 = fVar39 * (float)uVar43;
  fVar31 = fVar31 + fVar50 * in_register_00005288 + fVar44 * in_s20 + fVar46 * in_register_00005284;
  fVar34 = fVar34 + fVar51 * in_register_00005288 + fVar45 * in_s20 + fVar47 * in_register_00005284;
  fVar35 = fVar35 + (float)*(undefined8 *)(param_1 + 0x88) * in_register_00005288 +
                    (float)*(undefined8 *)(param_1 + 0x68) * in_s20 +
                    (float)*(undefined8 *)(param_1 + 0x78) * in_register_00005284;
  fVar44 = fVar37 * fVar31;
  fVar46 = fVar38 * fVar34;
  fVar47 = fVar39 * fVar35;
  fVar45 = fVar44 + fVar46 + fVar47;
  fVar47 = fVar44 + fVar46 + fVar47;
  fVar44 = fVar69 + fVar64 + fVar42;
  fVar69 = fVar69 + fVar64 + fVar42;
  uVar41 = CONCAT44(fVar38 * fVar69 + (fVar34 - fVar38 * fVar47),
                    fVar37 * fVar44 + (fVar31 - fVar37 * fVar45));
  uVar43 = CONCAT44(fVar40 * fVar69 +
                    (((float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) +
                     fVar52 * in_register_00005288 + fVar48 * in_s20 + fVar49 * in_register_00005284
                     ) - fVar40 * fVar47),fVar39 * fVar44 + (fVar35 - fVar39 * fVar45));
  uVar36 = auVar74._8_8_;
  uVar32 = auVar74._0_8_;
LAB_030992d0:
  param_5[1] = uVar43;
  *param_5 = uVar41;
  auVar33._8_8_ = uVar36;
  auVar33._0_8_ = uVar32;
  return auVar33;
}


