/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008e388c; name: FUN_008e388c
 */


void FUN_008e388c(float param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 int *param_6)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined2 uVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  float *pfVar19;
  ulong uVar20;
  int iVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  byte bVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  byte bVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  byte bVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  byte bVar33;
  undefined1 uVar34;
  byte bVar35;
  undefined1 uVar36;
  byte bVar37;
  undefined1 uVar38;
  byte bVar39;
  undefined1 uVar40;
  byte bVar41;
  undefined1 uVar42;
  byte bVar43;
  undefined1 uVar44;
  byte bVar45;
  undefined1 uVar46;
  byte bVar47;
  undefined1 uVar48;
  byte bVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar56 [12];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar65;
  float fVar66;
  float fVar67;
  float fStack_ec;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0 [4];
  float local_b0;
  float fStack_ac;
  
  iVar14 = *(int *)(param_4 + 0x70);
  if (iVar14 < 3) {
    *(undefined4 *)(param_4 + 0x78) = 0;
    return;
  }
  pfVar19 = *(float **)(*(long *)(param_4 + 0x58) + 0x58);
  if (param_6[0x16] == 1) {
    fVar54 = 0.0;
    iVar16 = iVar14 + -1;
    pfVar12 = pfVar19;
    do {
      pfVar12 = *(float **)(pfVar12 + 0x16);
      iVar16 = iVar16 + -1;
      pfVar13 = *(float **)(pfVar12 + 0x18);
      auVar57._0_4_ = (*pfVar12 - *pfVar13) * (*pfVar12 - *pfVar13);
      auVar57._4_4_ = (pfVar12[1] - pfVar13[1]) * (pfVar12[1] - pfVar13[1]);
      auVar57._8_4_ = (pfVar12[2] - pfVar13[2]) * (pfVar12[2] - pfVar13[2]);
      auVar57._12_4_ = (pfVar12[3] - pfVar13[3]) * (pfVar12[3] - pfVar13[3]);
      auVar62 = NEON_ext(auVar57,auVar57,8,1);
      fVar54 = fVar54 + SQRT(auVar62._0_4_ + auVar57._0_4_ + auVar62._4_4_ + auVar57._4_4_);
    } while (iVar16 != 0);
    fVar54 = 1.0 / fVar54;
    lVar11 = *(long *)(*(long *)(param_5 + 0x238) + 0x10);
    cVar1 = *(char *)(lVar11 + 0x75c);
  }
  else {
    fVar54 = 0.0;
    lVar11 = *(long *)(*(long *)(param_5 + 0x238) + 0x10);
    cVar1 = *(char *)(lVar11 + 0x75c);
  }
  if (cVar1 == '\0') {
    fVar66 = 1.0;
    cVar1 = *(char *)(lVar11 + 0x756);
  }
  else {
    fVar66 = *(float *)(param_5 + 0x74);
    cVar1 = *(char *)(lVar11 + 0x756);
  }
  if (cVar1 != '\0') {
    fVar66 = fVar66 * *(float *)(param_5 + 0x70);
  }
  iVar16 = param_6[10];
  uVar2 = iVar14 + iVar16 * (iVar14 + -1);
  fVar65 = 1.0 / (float)(iVar16 + 1);
  if ((int)uVar2 < 1) {
    *(undefined4 *)(param_4 + 0x78) = 0;
    iVar14 = *param_6;
  }
  else {
    fVar55 = *(float *)(param_4 + 0x80);
    pfVar12 = (float *)(param_3 + 0x50);
    iVar18 = -2;
    uVar22 = 0;
    uVar25 = 0;
    uVar28 = 0;
    uVar31 = 0;
    uVar34 = 0;
    uVar36 = 0;
    uVar38 = 0;
    uVar40 = 0;
    uVar42 = 0;
    uVar44 = 0;
    uVar46 = 0;
    uVar48 = 0;
    uVar50 = 0;
    uVar51 = 0;
    uVar52 = 0;
    uVar53 = 0;
    uVar20 = 0;
    iVar21 = 0;
    do {
      fVar67 = (float)(int)uVar20;
      fVar60 = (float)CONCAT13(uVar48,CONCAT12(uVar46,CONCAT11(uVar44,uVar42)));
      uVar7 = CONCAT17(uVar53,CONCAT16(uVar52,CONCAT15(uVar51,CONCAT14(uVar50,fVar60))));
      fVar59 = (float)CONCAT13(uVar31,CONCAT12(uVar28,CONCAT11(uVar25,uVar22)));
      uVar3 = CONCAT17(uVar40,CONCAT16(uVar38,CONCAT15(uVar36,CONCAT14(uVar34,fVar59))));
      fVar61 = fVar65 * fVar67;
      iVar10 = (int)fVar61;
      if (iVar21 < iVar10) {
        pfVar19 = *(float **)(pfVar19 + 0x16);
        iVar21 = iVar10;
      }
      FUN_008e3ff0(SUB41(fVar61 - (float)iVar10,0),&local_d0,&local_e0,pfVar19,iVar10,iVar14);
      if (param_6[0x16] == 1) {
        uVar42 = SUB41(fStack_c8,0);
        uVar44 = (undefined1)((uint)fStack_c8 >> 8);
        uVar46 = (undefined1)((uint)fStack_c8 >> 0x10);
        uVar48 = (undefined1)((uint)fStack_c8 >> 0x18);
        uVar50 = SUB41(fStack_c4,0);
        uVar51 = (undefined1)((uint)fStack_c4 >> 8);
        uVar52 = (undefined1)((uint)fStack_c4 >> 0x10);
        uVar53 = (undefined1)((uint)fStack_c4 >> 0x18);
        uVar22 = SUB41(local_d0,0);
        uVar25 = (undefined1)((uint)local_d0 >> 8);
        uVar28 = (undefined1)((uint)local_d0 >> 0x10);
        uVar31 = (undefined1)((uint)local_d0 >> 0x18);
        uVar34 = SUB41(fStack_cc,0);
        uVar36 = (undefined1)((uint)fStack_cc >> 8);
        uVar38 = (undefined1)((uint)fStack_cc >> 0x10);
        uVar40 = (undefined1)((uint)fStack_cc >> 0x18);
        fVar61 = 0.0;
        if (uVar20 != 0) {
          fStack_ec = (float)((ulong)uVar3 >> 0x20);
          fStack_e4 = (float)((ulong)uVar7 >> 0x20);
          fVar59 = local_d0 - fVar59;
          fVar60 = fStack_c8 - fVar60;
          auVar62._0_4_ = fVar59 * fVar59;
          auVar62._4_4_ = (fStack_cc - fStack_ec) * (fStack_cc - fStack_ec);
          auVar62._8_4_ = fVar60 * fVar60;
          auVar62._12_4_ = (fStack_c4 - fStack_e4) * (fStack_c4 - fStack_e4);
          auVar57 = NEON_ext(auVar62,auVar62,8,1);
          fVar61 = SQRT(auVar57._0_4_ + auVar62._0_4_ + auVar57._4_4_ + auVar62._4_4_);
        }
        lVar11 = (long)iVar18;
        if (uVar20 < 2) {
          lVar11 = 0;
        }
        fVar59 = fVar54 * fVar61;
        bVar9 = uVar20 != 0;
        lVar11 = param_3 + lVar11 * 0x50;
        local_c0[0] = 0.0;
        if (bVar9) {
          local_c0[0] = fVar59 + *(float *)(lVar11 + 0x30);
        }
        local_c0[1] = 0.0;
        if (bVar9) {
          local_c0[1] = fVar59 + *(float *)(lVar11 + 0x34);
        }
        fStack_ac = *(float *)(param_4 + 0x8c) * 0.1;
        fVar61 = fVar61 * 0.1;
        local_c0[3] = fStack_ac;
        local_c0[2] = 0.0;
        if (bVar9) {
          local_c0[3] = *(float *)(lVar11 + 0x30) - fVar61;
          local_c0[2] = fVar59 + *(float *)(lVar11 + 0x38);
        }
        local_b0 = fStack_ac;
        if (bVar9) {
          fStack_ac = *(float *)(lVar11 + 0x38) - fVar61;
          local_b0 = *(float *)(lVar11 + 0x34) - fVar61;
        }
        auVar56._4_4_ = local_c0[(long)param_6[4] * 3 + 1];
        auVar56._0_4_ = local_c0[(long)param_6[3] * 3];
        auVar56._8_4_ = local_c0[(long)param_6[5] * 3 + 2];
      }
      else if (param_6[0x16] == 0) {
        fVar59 = ((fVar55 - (float)(int)fVar55) + param_1 + fVar67) /
                 (float)((int)(float)param_6[6] + -1 + ((int)(float)param_6[6] + -1) * iVar16);
        uVar23 = SUB41(fVar59,0);
        uVar26 = (undefined1)((uint)fVar59 >> 8);
        uVar29 = (undefined1)((uint)fVar59 >> 0x10);
        uVar32 = (undefined1)((uint)fVar59 >> 0x18);
        local_c0[0] = fVar67 / (float)(int)(uVar2 - 1);
        if (1.0 < fVar59) {
          uVar23 = 0;
          uVar26 = 0;
          uVar29 = 0x80;
          uVar32 = 0x3f;
        }
        local_c0[1] = local_c0[0];
        local_b0 = (float)CONCAT13(uVar32,CONCAT12(uVar29,CONCAT11(uVar26,uVar23)));
        fStack_ac = (float)CONCAT13(uVar32,CONCAT12(uVar29,CONCAT11(uVar26,uVar23)));
        local_c0[2] = local_c0[0];
        local_c0[3] = (float)CONCAT13(uVar32,CONCAT12(uVar29,CONCAT11(uVar26,uVar23)));
        auVar56._4_4_ = local_c0[(long)param_6[4] * 3 + 1];
        auVar56._0_4_ = local_c0[(long)param_6[3] * 3];
        auVar56._8_4_ = local_c0[(long)param_6[5] * 3 + 2];
      }
      else {
        auVar56 = SUB1612(ZEXT816(0),0);
      }
      uVar20 = uVar20 + 1;
      fVar59 = pfVar19[0x14];
      pfVar12[-0x14] = local_d0;
      pfVar12[-0x13] = fStack_cc;
      pfVar12[-0x12] = fStack_c8;
      *pfVar12 = local_d0;
      pfVar12[1] = fStack_cc;
      pfVar12[2] = fStack_c8;
      pfVar12[-0x11] = fVar66 * fVar59;
      pfVar12[3] = -(fVar66 * fVar59);
      pfVar12[-0x10] = local_e0;
      pfVar12[-0xf] = fStack_dc;
      pfVar12[-0xe] = fStack_d8;
      pfVar12[4] = local_e0;
      pfVar12[5] = fStack_dc;
      pfVar12[6] = fStack_d8;
      fVar59 = pfVar19[0xd];
      fVar60 = pfVar19[0xe];
      pfVar12[-0xc] = pfVar19[0xc];
      pfVar12[-0xb] = fVar59;
      pfVar12[-10] = fVar60;
      auVar57 = *(undefined1 (*) [16])(pfVar19 + 0xc);
      *(long *)(pfVar12 + 8) = auVar57._0_8_;
      pfVar12[10] = auVar57._8_4_;
      *(long *)(pfVar12 + -8) = auVar56._0_8_;
      pfVar12[-6] = auVar56._8_4_;
      iVar18 = iVar18 + 2;
      *(long *)(pfVar12 + 0xc) = auVar56._0_8_;
      pfVar12[0xe] = auVar56._8_4_;
      pfVar12[-0xd] = fVar67;
      pfVar12[7] = fVar67;
      pfVar12 = pfVar12 + 0x28;
    } while (uVar2 != uVar20);
    *(uint *)(param_4 + 0x78) = uVar2 * 2;
    iVar14 = *param_6;
  }
  if (((iVar14 != 0) && (iVar14 != 3)) && (0 < (int)uVar2)) {
    uVar20 = 0;
    iVar14 = 0;
    puVar15 = (undefined4 *)(param_3 + 0x98);
    lVar11 = *(long *)(*(long *)(param_4 + 0x58) + 0x58);
    do {
      fVar54 = fVar65 * (float)(int)uVar20;
      iVar16 = (int)fVar54;
      if (iVar14 < iVar16) {
        lVar11 = *(long *)(lVar11 + 0x58);
        iVar14 = iVar16;
      }
      fVar54 = fVar54 - (float)iVar16;
      lVar17 = *(long *)(lVar11 + 0x58);
      fVar60 = *(float *)(lVar11 + 0x40) +
               (*(float *)(lVar17 + 0x40) - *(float *)(lVar11 + 0x40)) * fVar54;
      fVar61 = *(float *)(lVar11 + 0x44) +
               (*(float *)(lVar17 + 0x44) - *(float *)(lVar11 + 0x44)) * fVar54;
      fVar67 = *(float *)(lVar11 + 0x48) +
               (*(float *)(lVar17 + 0x48) - *(float *)(lVar11 + 0x48)) * fVar54;
      fVar59 = *(float *)(lVar11 + 0x4c) +
               (*(float *)(lVar17 + 0x4c) - *(float *)(lVar11 + 0x4c)) * fVar54;
      fVar54 = fVar60 * fVar60;
      fVar66 = fVar61 * fVar61;
      uVar22 = (undefined1)((uint)fVar66 >> 8);
      uVar25 = (undefined1)((uint)fVar66 >> 0x10);
      uVar28 = (undefined1)((uint)fVar66 >> 0x18);
      fVar55 = fVar67 * fVar67;
      uVar31 = (undefined1)((uint)fVar55 >> 8);
      uVar34 = (undefined1)((uint)fVar55 >> 0x10);
      uVar36 = (undefined1)((uint)fVar55 >> 0x18);
      fVar59 = fVar59 * fVar59;
      uVar38 = (undefined1)((uint)fVar59 >> 8);
      uVar40 = (undefined1)((uint)fVar59 >> 0x10);
      uVar42 = (undefined1)((uint)fVar59 >> 0x18);
      auVar4[4] = SUB41(fVar66,0);
      auVar4._0_4_ = fVar54;
      auVar4[5] = uVar22;
      auVar4[6] = uVar25;
      auVar4[7] = uVar28;
      auVar4[8] = SUB41(fVar55,0);
      auVar4[9] = uVar31;
      auVar4[10] = uVar34;
      auVar4[0xb] = uVar36;
      auVar4[0xc] = SUB41(fVar59,0);
      auVar4[0xd] = uVar38;
      auVar4[0xe] = uVar40;
      auVar4[0xf] = uVar42;
      auVar5[4] = SUB41(fVar66,0);
      auVar5._0_4_ = fVar54;
      auVar5[5] = uVar22;
      auVar5[6] = uVar25;
      auVar5[7] = uVar28;
      auVar5[8] = SUB41(fVar55,0);
      auVar5[9] = uVar31;
      auVar5[10] = uVar34;
      auVar5[0xb] = uVar36;
      auVar5[0xc] = SUB41(fVar59,0);
      auVar5[0xd] = uVar38;
      auVar5[0xe] = uVar40;
      auVar5[0xf] = uVar42;
      auVar57 = NEON_ext(auVar4,auVar5,8,1);
      fVar54 = auVar57._0_4_ + fVar54;
      fVar66 = auVar57._4_4_ + fVar66;
      fVar55 = fVar54 + fVar66;
      fVar54 = fVar54 + fVar66;
      uVar22 = SUB41(fVar54,0);
      uVar25 = (undefined1)((uint)fVar54 >> 8);
      uVar28 = (undefined1)((uint)fVar54 >> 0x10);
      uVar31 = (undefined1)((uint)fVar54 >> 0x18);
      uVar20 = uVar20 + 1;
      auVar6[4] = uVar22;
      auVar6._0_4_ = fVar55;
      auVar6[5] = uVar25;
      auVar6[6] = uVar28;
      auVar6[7] = uVar31;
      auVar6[8] = SUB41(fVar55,0);
      auVar6[9] = (char)((uint)fVar55 >> 8);
      auVar6[10] = (char)((uint)fVar55 >> 0x10);
      auVar6[0xb] = (char)((uint)fVar55 >> 0x18);
      auVar6[0xc] = uVar22;
      auVar6[0xd] = uVar25;
      auVar6[0xe] = uVar28;
      auVar6[0xf] = uVar31;
      auVar57 = NEON_frsqrte(auVar6,4);
      auVar63._0_4_ = auVar57._0_4_ * fVar55;
      auVar63._4_4_ = auVar57._4_4_ * fVar54;
      auVar63._8_4_ = auVar57._8_4_ * fVar55;
      uVar8 = (undefined2)(CONCAT15(uVar25,CONCAT14(uVar22,fVar55)) >> 0x20);
      auVar63._12_4_ = auVar57._12_4_ * (float)CONCAT13(uVar31,CONCAT12(uVar28,uVar8));
      auVar62 = NEON_frsqrts(auVar57,auVar63,4);
      auVar58._0_4_ = auVar57._0_4_ * auVar62._0_4_;
      auVar58._4_4_ = auVar57._4_4_ * auVar62._4_4_;
      auVar58._8_4_ = auVar57._8_4_ * auVar62._8_4_;
      auVar58._12_4_ = auVar57._12_4_ * auVar62._12_4_;
      auVar64._0_4_ = fVar55 * auVar58._0_4_;
      auVar64._4_4_ = fVar54 * auVar58._4_4_;
      auVar64._8_4_ = fVar55 * auVar58._8_4_;
      auVar64._12_4_ = (float)CONCAT13(uVar31,CONCAT12(uVar28,uVar8)) * auVar58._12_4_;
      iVar16 = -(uint)(fVar55 == 0.0);
      iVar18 = -(uint)(fVar54 == 0.0);
      iVar21 = -(uint)(fVar55 == 0.0);
      auVar57 = NEON_frsqrts(auVar58,auVar64,4);
      fVar60 = fVar60 * auVar58._0_4_ * auVar57._0_4_;
      fVar61 = fVar61 * auVar58._4_4_ * auVar57._4_4_;
      fVar67 = fVar67 * auVar58._8_4_ * auVar57._8_4_;
      bVar24 = SUB41(fVar60,0) & ~(byte)iVar16;
      bVar27 = (byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar16 >> 8);
      bVar30 = (byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10);
      bVar33 = (byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18);
      bVar35 = SUB41(fVar61,0) & ~(byte)iVar18;
      bVar37 = (byte)((uint)fVar61 >> 8) & ~(byte)((uint)iVar18 >> 8);
      bVar39 = (byte)((uint)fVar61 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10);
      bVar41 = (byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18);
      bVar43 = SUB41(fVar67,0) & ~(byte)iVar21;
      bVar45 = (byte)((uint)fVar67 >> 8) & ~(byte)((uint)iVar21 >> 8);
      bVar47 = (byte)((uint)fVar67 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10);
      bVar49 = (byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18);
      *(ulong *)(puVar15 + -0x16) =
           CONCAT17(bVar41,CONCAT16(bVar39,CONCAT15(bVar37,CONCAT14(bVar35,CONCAT13(bVar33,CONCAT12(
                                                  bVar30,CONCAT11(bVar27,bVar24)))))));
      puVar15[-0x14] = CONCAT13(bVar49,CONCAT12(bVar47,CONCAT11(bVar45,bVar43)));
      *(ulong *)(puVar15 + -2) =
           CONCAT17(bVar41,CONCAT16(bVar39,CONCAT15(bVar37,CONCAT14(bVar35,CONCAT13(bVar33,CONCAT12(
                                                  bVar30,CONCAT11(bVar27,bVar24)))))));
      *puVar15 = CONCAT13(bVar49,CONCAT12(bVar47,CONCAT11(bVar45,bVar43)));
      puVar15 = puVar15 + 0x28;
    } while (uVar2 != uVar20);
  }
  return;
}


