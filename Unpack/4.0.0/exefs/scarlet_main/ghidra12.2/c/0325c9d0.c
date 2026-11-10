/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0325c9d0; name: FUN_0325c9d0
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0325c9d0(undefined8 *param_1,float *param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  bool bVar23;
  bool bVar24;
  bool bVar25;
  uint uVar26;
  ulong uVar27;
  long lVar28;
  ulong *puVar29;
  long lVar30;
  uint uVar31;
  uint uVar32;
  undefined8 *puVar33;
  ulong *puVar34;
  int iVar35;
  ulong uVar36;
  float fVar37;
  float fVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  float fVar47;
  float fVar48;
  float fVar54;
  float fVar55;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar56;
  float fVar57;
  undefined8 uVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined8 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  float fVar71;
  float fVar72;
  int iVar73;
  int iVar78;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar82;
  float fVar83;
  float fVar88;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar89;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar90;
  float fVar91;
  undefined8 local_130;
  ulong local_118;
  undefined1 (*local_110) [16];
  ulong local_108 [2];
  undefined1 (*local_f8) [16];
  ulong local_f0;
  ulong local_e8;
  undefined1 (*local_e0) [16];
  ulong local_d8;
  ulong local_d0;
  undefined1 (*local_c8) [16];
  ulong local_c0;
  int local_b8;
  float local_b4;
  undefined8 *local_b0;
  float *local_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  
  local_118 = DAT_03d7ad20;
  local_110 = DAT_03d7ad28;
  local_c8 = DAT_03d7ad28;
  local_108[0] = DAT_03d7ad30;
  local_108[1] = DAT_03d7ad20;
  local_f8 = DAT_03d7ad28;
  local_f0 = DAT_03d7ad30;
  local_e8 = DAT_03d7ad20;
  local_e0 = DAT_03d7ad28;
  local_d8 = DAT_03d7ad30;
  local_d0 = DAT_03d7ad20;
  local_c0 = DAT_03d7ad30;
  local_b8 = 0;
  local_b4 = 0.0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar58 = param_1[2];
  fVar56 = *(float *)(param_1 + 8);
  *(undefined8 *)(param_2 + 6) = param_1[3];
  *(undefined8 *)(param_2 + 4) = uVar58;
  uVar58 = *param_1;
  *(undefined8 *)(param_2 + 2) = param_1[1];
  *(undefined8 *)param_2 = uVar58;
  uVar27 = (ulong)*(uint *)(param_1 + 10);
  if (0 < (int)*(uint *)(param_1 + 10)) {
    lVar28 = 0;
    lVar30 = 0;
    do {
      puVar1 = (undefined2 *)(*(long *)(param_2 + 10) + lVar28);
      lVar28 = lVar28 + 0x10;
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(undefined4 *)(puVar1 + 6) = 0;
      uVar27 = (ulong)*(int *)(param_1 + 10);
      lVar30 = lVar30 + 1;
    } while (lVar30 < (long)uVar27);
  }
  if (fVar56 < 0.0) {
    return;
  }
  local_130 = CONCAT17((char)((uint)fVar56 >> 0x18),
                       CONCAT16((char)((uint)fVar56 >> 0x10),
                                CONCAT15((char)((uint)fVar56 >> 8),CONCAT14(SUB41(fVar56,0),fVar56))
                               ));
LAB_0325cad4:
  uVar26 = (uint)uVar27;
  uVar39 = (undefined1)local_130;
  uVar40 = (undefined1)((ulong)local_130 >> 8);
  uVar41 = (undefined1)((ulong)local_130 >> 0x10);
  uVar42 = (undefined1)((ulong)local_130 >> 0x18);
  uVar43 = (undefined1)((ulong)local_130 >> 0x20);
  uVar44 = (undefined1)((ulong)local_130 >> 0x28);
  uVar45 = (undefined1)((ulong)local_130 >> 0x30);
  uVar46 = (undefined1)((ulong)local_130 >> 0x38);
  if ((int)uVar26 < 1) {
    uVar32 = 0xffffffff;
  }
  else {
    auVar49 = *(undefined1 (*) [16])(param_2 + 4);
    fVar56 = (float)*(undefined8 *)param_2;
    fVar57 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
    fVar47 = (float)*(undefined8 *)(param_2 + 2);
    fVar48 = (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
    if (local_b8 < 1) {
      lVar28 = 0;
      uVar27 = 0;
      if ((int)uVar26 < 2) {
        uVar26 = 1;
      }
      puVar33 = (undefined8 *)(param_1[9] + 0x10);
      uVar32 = 0xffffffff;
      do {
        if (*(int *)(*(long *)(param_2 + 10) + 0xc + lVar28) == 0) {
          fVar38 = (float)puVar33[1];
          fVar72 = (float)*puVar33;
          fVar37 = (float)((ulong)*puVar33 >> 0x20);
          fVar54 = (float)puVar33[-2];
          fVar60 = (auVar49._0_4_ - fVar72) * fVar54;
          fVar55 = (float)((ulong)puVar33[-2] >> 0x20);
          fVar63 = (auVar49._4_4_ - fVar37) * fVar55;
          fVar71 = (float)puVar33[-1];
          fVar65 = (auVar49._8_4_ - fVar38) * fVar71;
          fVar61 = -(fVar60 + fVar63 + fVar65);
          if (0.0 < fVar61) {
            fVar54 = fVar54 * (fVar56 - local_b4 * fVar72);
            fVar55 = fVar55 * (fVar57 - local_b4 * fVar37);
            uVar68 = (undefined1)((uint)fVar55 >> 8);
            uVar69 = (undefined1)((uint)fVar55 >> 0x10);
            uVar70 = (undefined1)((uint)fVar55 >> 0x18);
            fVar71 = fVar71 * (fVar47 - local_b4 * fVar38);
            fVar38 = (float)((ulong)puVar33[-1] >> 0x20);
            fVar72 = fVar38 * (fVar48 - local_b4 * (float)((ulong)puVar33[1] >> 0x20));
            auVar74[4] = SUB41(fVar55,0);
            auVar74._0_4_ = fVar54;
            auVar74[5] = uVar68;
            auVar74[6] = uVar69;
            auVar74[7] = uVar70;
            auVar74._8_4_ = fVar71;
            auVar74._12_4_ = fVar72;
            auVar84[4] = SUB41(fVar55,0);
            auVar84._0_4_ = fVar54;
            auVar84[5] = uVar68;
            auVar84[6] = uVar69;
            auVar84[7] = uVar70;
            auVar84._8_4_ = fVar71;
            auVar84._12_4_ = fVar72;
            auVar74 = NEON_ext(auVar74,auVar84,8,1);
            fVar38 = auVar74._0_4_ + fVar38;
            fVar37 = fVar54 + fVar55 + fVar38;
            fVar38 = fVar54 + fVar55 + fVar38;
            iVar73 = -(uint)(fVar37 <= 1.1920929e-07);
            iVar78 = -(uint)(fVar38 <= 1.1920929e-07);
            fVar72 = *(float *)(*(long *)(local_a8 + 10) + lVar28 + 8);
            fVar54 = (float)CONCAT13((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar73 >> 0x18),
                                     CONCAT12((byte)((uint)fVar37 >> 0x10) &
                                              ~(byte)((uint)iVar73 >> 0x10),
                                              CONCAT11((byte)((uint)fVar37 >> 8) &
                                                       ~(byte)((uint)iVar73 >> 8),
                                                       SUB41(fVar37,0) & ~(byte)iVar73)));
            fVar37 = fVar54 + fVar72;
            if (!(bool)(~(fVar37 < (float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39)))
                                   * fVar61) & 1)) {
              fVar37 = fVar37 / fVar61;
              uVar39 = SUB41(fVar37,0);
              uVar40 = (undefined1)((uint)fVar37 >> 8);
              uVar41 = (undefined1)((uint)fVar37 >> 0x10);
              uVar42 = (undefined1)((uint)fVar37 >> 0x18);
              fVar72 = ((float)(CONCAT17((byte)((uint)fVar38 >> 0x18) &
                                         ~(byte)((uint)iVar78 >> 0x18),
                                         CONCAT16((byte)((uint)fVar38 >> 0x10) &
                                                  ~(byte)((uint)iVar78 >> 0x10),
                                                  CONCAT15((byte)((uint)fVar38 >> 8) &
                                                           ~(byte)((uint)iVar78 >> 8),
                                                           CONCAT14(SUB41(fVar38,0) & ~(byte)iVar78,
                                                                    fVar54)))) >> 0x20) + fVar72) /
                       -(fVar60 + fVar63 + fVar65);
              uVar43 = SUB41(fVar72,0);
              uVar44 = (undefined1)((uint)fVar72 >> 8);
              uVar45 = (undefined1)((uint)fVar72 >> 0x10);
              uVar46 = (undefined1)((uint)fVar72 >> 0x18);
              uVar32 = (uint)uVar27;
            }
          }
        }
        uVar27 = uVar27 + 1;
        lVar28 = lVar28 + 0x10;
        puVar33 = puVar33 + 10;
      } while (uVar26 != uVar27);
    }
    else {
      puVar33 = (undefined8 *)(param_1[9] + 0x10);
      if ((int)uVar26 < 2) {
        uVar26 = 1;
      }
      uVar31 = 0;
      lVar28 = 0;
      uVar32 = 0xffffffff;
      do {
        if ((local_118 & 0xffffffff) * 0x10 != lVar28) {
          if (1 < local_b8) {
            if (((local_108[1] & 0xffffffff) * 0x10 == lVar28) ||
               (2 < local_b8 && (local_e8 & 0xffffffff) * 0x10 == lVar28)) goto LAB_0325cbec;
          }
          if (*(int *)(*(long *)(param_2 + 10) + 0xc + lVar28) == 0) {
            fVar38 = (float)puVar33[1];
            fVar72 = (float)*puVar33;
            fVar37 = (float)((ulong)*puVar33 >> 0x20);
            fVar54 = (float)puVar33[-2];
            fVar60 = (auVar49._0_4_ - fVar72) * fVar54;
            fVar55 = (float)((ulong)puVar33[-2] >> 0x20);
            fVar63 = (auVar49._4_4_ - fVar37) * fVar55;
            fVar71 = (float)puVar33[-1];
            fVar65 = (auVar49._8_4_ - fVar38) * fVar71;
            fVar61 = -(fVar60 + fVar63 + fVar65);
            if (0.0 < fVar61) {
              fVar54 = fVar54 * (fVar56 - local_b4 * fVar72);
              fVar55 = fVar55 * (fVar57 - local_b4 * fVar37);
              uVar68 = (undefined1)((uint)fVar55 >> 8);
              uVar69 = (undefined1)((uint)fVar55 >> 0x10);
              uVar70 = (undefined1)((uint)fVar55 >> 0x18);
              fVar71 = fVar71 * (fVar47 - local_b4 * fVar38);
              fVar38 = (float)((ulong)puVar33[-1] >> 0x20);
              fVar72 = fVar38 * (fVar48 - local_b4 * (float)((ulong)puVar33[1] >> 0x20));
              auVar17[4] = SUB41(fVar55,0);
              auVar17._0_4_ = fVar54;
              auVar17[5] = uVar68;
              auVar17[6] = uVar69;
              auVar17[7] = uVar70;
              auVar17._8_4_ = fVar71;
              auVar17._12_4_ = fVar72;
              auVar18[4] = SUB41(fVar55,0);
              auVar18._0_4_ = fVar54;
              auVar18[5] = uVar68;
              auVar18[6] = uVar69;
              auVar18[7] = uVar70;
              auVar18._8_4_ = fVar71;
              auVar18._12_4_ = fVar72;
              auVar74 = NEON_ext(auVar17,auVar18,8,1);
              fVar38 = auVar74._0_4_ + fVar38;
              fVar37 = fVar54 + fVar55 + fVar38;
              fVar38 = fVar54 + fVar55 + fVar38;
              iVar73 = -(uint)(fVar37 <= 1.1920929e-07);
              iVar78 = -(uint)(fVar38 <= 1.1920929e-07);
              fVar72 = *(float *)(*(long *)(local_a8 + 10) + lVar28 + 8);
              fVar54 = (float)CONCAT13((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar73 >> 0x18),
                                       CONCAT12((byte)((uint)fVar37 >> 0x10) &
                                                ~(byte)((uint)iVar73 >> 0x10),
                                                CONCAT11((byte)((uint)fVar37 >> 8) &
                                                         ~(byte)((uint)iVar73 >> 8),
                                                         SUB41(fVar37,0) & ~(byte)iVar73)));
              fVar37 = fVar54 + fVar72;
              if (!(bool)(~(fVar37 < (float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39))
                                                    ) * fVar61) & 1)) {
                fVar37 = fVar37 / fVar61;
                uVar39 = SUB41(fVar37,0);
                uVar40 = (undefined1)((uint)fVar37 >> 8);
                uVar41 = (undefined1)((uint)fVar37 >> 0x10);
                uVar42 = (undefined1)((uint)fVar37 >> 0x18);
                fVar72 = ((float)(CONCAT17((byte)((uint)fVar38 >> 0x18) &
                                           ~(byte)((uint)iVar78 >> 0x18),
                                           CONCAT16((byte)((uint)fVar38 >> 0x10) &
                                                    ~(byte)((uint)iVar78 >> 0x10),
                                                    CONCAT15((byte)((uint)fVar38 >> 8) &
                                                             ~(byte)((uint)iVar78 >> 8),
                                                             CONCAT14(SUB41(fVar38,0) &
                                                                      ~(byte)iVar78,fVar54)))) >>
                                 0x20) + fVar72) / -(fVar60 + fVar63 + fVar65);
                uVar43 = SUB41(fVar72,0);
                uVar44 = (undefined1)((uint)fVar72 >> 8);
                uVar45 = (undefined1)((uint)fVar72 >> 0x10);
                uVar46 = (undefined1)((uint)fVar72 >> 0x18);
                uVar32 = uVar31;
              }
            }
          }
        }
LAB_0325cbec:
        lVar28 = lVar28 + 0x10;
        puVar33 = puVar33 + 10;
        uVar31 = uVar31 + 1;
      } while ((ulong)uVar26 * 0x10 != lVar28);
    }
  }
  bVar23 = NAN((float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39))));
  if ((bVar23 || (float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39))) != 0.0001) &&
      (!bVar23 && (float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39))) < 0.0001) ==
      bVar23) {
    local_b4 = (float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39))) + local_b4;
    fVar57 = (float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39)));
    fVar56 = (float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39)));
    uVar67 = *(undefined8 *)(param_2 + 2);
    uVar58 = *(undefined8 *)param_2;
    param_2[2] = (float)uVar67 + fVar56 * (float)*(undefined8 *)(param_2 + 6);
    param_2[3] = (float)((ulong)uVar67 >> 0x20) +
                 (float)(CONCAT17(uVar46,CONCAT16(uVar45,CONCAT15(uVar44,CONCAT14(uVar43,fVar56))))
                        >> 0x20) * (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20);
    *param_2 = (float)uVar58 + fVar57 * (float)*(undefined8 *)(param_2 + 4);
    param_2[1] = (float)((ulong)uVar58 >> 0x20) +
                 (float)(CONCAT17(uVar46,CONCAT16(uVar45,CONCAT15(uVar44,CONCAT14(uVar43,fVar57))))
                        >> 0x20) * (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
    if (0 < local_b8) {
      lVar28 = 0;
      puVar29 = local_108;
      do {
        lVar28 = lVar28 + 1;
        *(float *)(*puVar29 + 4) =
             (float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39))) +
             *(float *)(*puVar29 + 4);
        *(undefined1 *)*puVar29 = 1;
        puVar29 = puVar29 + 3;
      } while (lVar28 < local_b8);
    }
    param_2[8] = local_b4;
    if (*(float *)((long)local_b0 + 0x44) < local_b4) {
      return;
    }
    local_130 = CONCAT44(local_130._4_4_ -
                         (float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43))),
                         (float)local_130 -
                         (float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39))));
  }
  if ((int)uVar32 < 0) {
    param_2[8] = *(float *)(param_1 + 8);
    return;
  }
  lVar28 = (long)local_b8;
  local_b8 = local_b8 + 1;
  uVar27 = *(long *)(param_2 + 10) + (ulong)uVar32 * 0x10;
  local_108[lVar28 * 3 + -1] = param_1[9] + (ulong)uVar32 * 0x50;
  local_108[lVar28 * 3] = uVar27;
  fVar56 = *(float *)(uVar27 + 8) + 1.1920929e-07;
  *(float *)(uVar27 + 8) = fVar56 + fVar56;
  *(uint *)(local_108 + lVar28 * 3 + -2) = uVar32;
LAB_0325cda8:
  switch(local_b8) {
  case 1:
    break;
  case 2:
    auVar49 = *local_f8;
    fVar48 = (float)*(undefined8 *)(local_f8[1] + 8);
    fVar72 = (float)((ulong)*(undefined8 *)(local_f8[1] + 8) >> 0x20);
    uVar58 = *(undefined8 *)local_f8[1];
    uVar39 = (undefined1)uVar58;
    uVar40 = (undefined1)((ulong)uVar58 >> 8);
    uVar41 = (undefined1)((ulong)uVar58 >> 0x10);
    uVar42 = (undefined1)((ulong)uVar58 >> 0x18);
    uVar43 = (undefined1)((ulong)uVar58 >> 0x20);
    uVar44 = (undefined1)((ulong)uVar58 >> 0x28);
    uVar45 = (undefined1)((ulong)uVar58 >> 0x30);
    uVar46 = (undefined1)((ulong)uVar58 >> 0x38);
    fVar71 = (float)local_b0[2] - (float)uVar58;
    fVar56 = (float)((ulong)uVar58 >> 0x20);
    fVar38 = (float)((ulong)local_b0[2] >> 0x20) - fVar56;
    fVar59 = (float)local_b0[3] - fVar48;
    fVar66 = *(float *)local_f8[3];
    fVar37 = auVar49._0_4_;
    fVar54 = auVar49._4_4_;
    fVar55 = auVar49._8_4_;
    fVar65 = fVar71 * fVar37 + fVar38 * fVar54 + fVar59 * fVar55;
    fVar64 = fVar71 * fVar37 + fVar38 * fVar54 + fVar59 * fVar55;
    fVar47 = fVar65 * fVar65;
    fVar61 = *(float *)(local_f8[3] + 0xc);
    fVar60 = auVar49._12_4_;
    fVar62 = fVar71 * fVar71 + fVar38 * fVar38 + fVar59 * fVar59;
    auVar74 = *(undefined1 (*) [16])(local_b0 + 6);
    fVar57 = fVar71 - fVar37 * fVar65;
    fVar63 = fVar38 - fVar54 * fVar64;
    fVar65 = fVar59 - fVar55 * fVar65;
    fVar64 = ((float)((ulong)local_b0[3] >> 0x20) - fVar72) - fVar60 * fVar64;
    fVar83 = auVar74._0_4_;
    auVar77._0_4_ = fVar83 * fVar57;
    fVar89 = auVar74._4_4_;
    auVar77._4_4_ = fVar89 * fVar63;
    auVar77._8_4_ = auVar74._8_4_ * fVar65;
    auVar77._12_4_ = auVar74._12_4_ * fVar64;
    auVar84 = NEON_ext(auVar77,auVar77,8,1);
    pfVar3 = (float *)(local_f8[3] + 8);
    if (0.0 < auVar77._0_4_ + auVar77._4_4_ + auVar84._0_4_) {
      pfVar3 = (float *)(local_f8[3] + 4);
    }
    if (0.0 < *pfVar3) {
      auVar84 = NEON_ext(auVar74,auVar74,4,1);
      auVar49 = NEON_ext(auVar49,auVar49,4,1);
      auVar87._0_4_ = auVar49._0_4_ * fVar83 - fVar37 * auVar84._0_4_;
      auVar87._4_4_ = auVar49._4_4_ * fVar89 - fVar54 * auVar84._4_4_;
      auVar87._8_4_ = fVar37 * auVar74._8_4_ - fVar55 * fVar83;
      auVar87._12_4_ = fVar54 * auVar74._12_4_ - fVar60 * fVar89;
      auVar49 = NEON_ext(auVar87,auVar87,4,1);
      fVar83 = auVar49._0_4_;
      fVar89 = auVar49._4_4_;
      auVar81._0_8_ = auVar49._0_8_;
      auVar81._8_4_ = auVar87._0_4_;
      auVar81._12_4_ = 0.0;
      fVar82 = auVar87._0_4_ * auVar87._0_4_ + fVar83 * fVar83 + fVar89 * fVar89;
      if (1.1920929e-07 < fVar82) {
        fVar82 = SQRT(fVar82);
        fVar88 = SQRT(auVar87._0_4_ * auVar87._0_4_ + fVar83 * fVar83 + fVar89 * fVar89);
        auVar81._0_4_ = fVar83 / fVar82;
        auVar81._4_4_ = fVar89 / fVar88;
        auVar81._8_4_ = auVar87._0_4_ / fVar82;
        auVar81._12_4_ = 0.0 / fVar88;
        fVar83 = fVar65 * auVar81._8_4_ + fVar57 * auVar81._0_4_ + fVar63 * auVar81._4_4_;
        fVar89 = fVar65 * auVar81._8_4_ + fVar57 * auVar81._0_4_ + fVar63 * auVar81._4_4_;
        if (fVar83 * fVar83 <= fVar66 * fVar66 * fVar47) {
          fVar82 = auVar81._0_4_ * fVar83;
          fVar88 = auVar81._4_4_ * fVar89;
          fVar90 = auVar81._8_4_ * fVar83;
          fVar91 = auVar81._12_4_ * fVar89;
          fVar83 = 0.0;
          fVar89 = 0.0;
          fVar57 = fVar57 - fVar82;
          fVar63 = fVar63 - fVar88;
          fVar65 = fVar65 - fVar90;
          fVar64 = fVar64 - fVar91;
        }
      }
      else {
        fVar83 = 0.0;
        fVar89 = 0.0;
      }
      fVar66 = fVar66 + *pfVar3;
      if ((fVar62 - fVar83 * fVar83) - fVar47 <= fVar66 * fVar66 * fVar47) {
        if (fVar83 == 0.0) goto LAB_0325d880;
        fVar57 = auVar81._0_4_ * fVar83;
        fVar63 = auVar81._4_4_ * fVar89;
        fVar65 = auVar81._8_4_ * fVar83;
        fVar64 = auVar81._12_4_ * fVar89;
      }
LAB_0325d804:
      if (fVar61 < 1.0) {
        fVar66 = fVar65 * fVar65 + fVar57 * fVar57 + fVar63 * fVar63;
        fVar47 = fVar62 * 0.001;
        bVar23 = false;
        bVar24 = true;
        bVar25 = false;
        if (1.1920929e-07 <= fVar66) {
          bVar23 = false;
          bVar24 = false;
          bVar25 = true;
          if (!NAN(fVar66) && !NAN(fVar47)) {
            bVar23 = fVar66 < fVar47;
            bVar24 = fVar66 == fVar47;
            bVar25 = false;
          }
        }
        if (!bVar24 && bVar23 == bVar25) {
          uVar67 = NEON_fmov(0x3f800000,4);
          fVar47 = fVar61 + ((float)uVar67 - fVar61) * SQRT(fVar62 / fVar66);
          fVar61 = fVar61 + ((float)((ulong)uVar67 >> 0x20) - fVar61) *
                            SQRT((fVar71 * fVar71 + fVar38 * fVar38 + fVar59 * fVar59) /
                                 (fVar65 * fVar65 + fVar57 * fVar57 + fVar63 * fVar63));
          fVar57 = fVar57 * fVar47;
          fVar63 = fVar63 * fVar61;
          fVar65 = fVar65 * fVar47;
          fVar47 = fVar37 * fVar57;
          fVar38 = fVar54 * fVar63;
          fVar59 = fVar55 * fVar65;
          fVar71 = fVar59 + fVar47 + fVar38;
          fVar59 = fVar59 + fVar47 + fVar38;
          fVar57 = fVar57 - fVar37 * fVar71;
          fVar63 = fVar63 - fVar54 * fVar59;
          fVar65 = fVar65 - fVar55 * fVar71;
          fVar64 = fVar64 * fVar61 - fVar60 * fVar59;
        }
      }
      fVar57 = (float)uVar58 + fVar57;
      uVar39 = SUB41(fVar57,0);
      uVar40 = (undefined1)((uint)fVar57 >> 8);
      uVar41 = (undefined1)((uint)fVar57 >> 0x10);
      uVar42 = (undefined1)((uint)fVar57 >> 0x18);
      fVar56 = fVar56 + fVar63;
      uVar43 = SUB41(fVar56,0);
      uVar44 = (undefined1)((uint)fVar56 >> 8);
      uVar45 = (undefined1)((uint)fVar56 >> 0x10);
      uVar46 = (undefined1)((uint)fVar56 >> 0x18);
      fVar48 = fVar48 + fVar65;
      fVar72 = fVar72 + fVar64;
    }
    else if ((fVar66 * fVar66 + 1.0) * fVar47 < fVar62) goto LAB_0325d804;
LAB_0325d880:
    auVar53._0_4_ =
         ((float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39))) - *(float *)local_110[1])
         * *(float *)*local_110;
    auVar53._4_4_ =
         ((float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43))) -
         *(float *)(local_110[1] + 4)) * *(float *)(*local_110 + 4);
    auVar53._8_4_ = (fVar48 - *(float *)(local_110[1] + 8)) * *(float *)(*local_110 + 8);
    auVar53._12_4_ = (fVar72 - *(float *)(local_110[1] + 0xc)) * *(float *)(*local_110 + 0xc);
    auVar49 = NEON_ext(auVar53,auVar53,8,1);
    if (auVar53._0_4_ + auVar53._4_4_ + auVar49._0_4_ < -0.001) {
      FUN_0325d920(&local_118);
    }
    else {
      *(ulong *)(local_a8 + 6) = CONCAT44(fVar72,fVar48);
      *(ulong *)(local_a8 + 4) =
           CONCAT17(uVar46,CONCAT16(uVar45,CONCAT15(uVar44,CONCAT14(uVar43,CONCAT13(uVar42,CONCAT12(
                                                  uVar41,CONCAT11(uVar40,uVar39)))))));
      local_110 = local_f8;
      local_108[0] = local_f0;
      local_118 = local_108[1];
      local_b8 = 1;
    }
    goto switchD_0325cdcc_default;
  case 3:
    fVar66 = *(float *)local_e0[3];
    auVar49 = *local_e0;
    fVar48 = (float)*(undefined8 *)(local_e0[1] + 8);
    fVar72 = (float)((ulong)*(undefined8 *)(local_e0[1] + 8) >> 0x20);
    uVar58 = *(undefined8 *)local_e0[1];
    uVar39 = (undefined1)uVar58;
    uVar40 = (undefined1)((ulong)uVar58 >> 8);
    uVar41 = (undefined1)((ulong)uVar58 >> 0x10);
    uVar42 = (undefined1)((ulong)uVar58 >> 0x18);
    uVar43 = (undefined1)((ulong)uVar58 >> 0x20);
    uVar44 = (undefined1)((ulong)uVar58 >> 0x28);
    uVar45 = (undefined1)((ulong)uVar58 >> 0x30);
    uVar46 = (undefined1)((ulong)uVar58 >> 0x38);
    fVar71 = (float)local_b0[2] - (float)uVar58;
    fVar56 = (float)((ulong)uVar58 >> 0x20);
    fVar38 = (float)((ulong)local_b0[2] >> 0x20) - fVar56;
    fVar59 = (float)local_b0[3] - fVar48;
    fVar61 = *(float *)(local_e0[3] + 0xc);
    fVar37 = auVar49._0_4_;
    fVar54 = auVar49._4_4_;
    fVar55 = auVar49._8_4_;
    fVar65 = fVar71 * fVar37 + fVar38 * fVar54 + fVar59 * fVar55;
    fVar64 = fVar71 * fVar37 + fVar38 * fVar54 + fVar59 * fVar55;
    fVar47 = fVar65 * fVar65;
    fVar60 = auVar49._12_4_;
    fVar62 = fVar71 * fVar71 + fVar38 * fVar38 + fVar59 * fVar59;
    auVar74 = *(undefined1 (*) [16])(local_b0 + 6);
    fVar57 = fVar71 - fVar37 * fVar65;
    fVar63 = fVar38 - fVar54 * fVar64;
    fVar65 = fVar59 - fVar55 * fVar65;
    fVar64 = ((float)((ulong)local_b0[3] >> 0x20) - fVar72) - fVar60 * fVar64;
    fVar83 = auVar74._0_4_;
    auVar75._0_4_ = fVar83 * fVar57;
    fVar89 = auVar74._4_4_;
    auVar75._4_4_ = fVar89 * fVar63;
    auVar75._8_4_ = auVar74._8_4_ * fVar65;
    auVar75._12_4_ = auVar74._12_4_ * fVar64;
    auVar84 = NEON_ext(auVar75,auVar75,8,1);
    pfVar3 = (float *)(local_e0[3] + 8);
    if (0.0 < auVar75._0_4_ + auVar75._4_4_ + auVar84._0_4_) {
      pfVar3 = (float *)(local_e0[3] + 4);
    }
    if (0.0 < *pfVar3) {
      auVar84 = NEON_ext(auVar74,auVar74,4,1);
      auVar49 = NEON_ext(auVar49,auVar49,4,1);
      auVar85._0_4_ = auVar49._0_4_ * fVar83 - fVar37 * auVar84._0_4_;
      auVar85._4_4_ = auVar49._4_4_ * fVar89 - fVar54 * auVar84._4_4_;
      auVar85._8_4_ = fVar37 * auVar74._8_4_ - fVar55 * fVar83;
      auVar85._12_4_ = fVar54 * auVar74._12_4_ - fVar60 * fVar89;
      auVar49 = NEON_ext(auVar85,auVar85,4,1);
      fVar83 = auVar49._0_4_;
      fVar89 = auVar49._4_4_;
      auVar79._0_8_ = auVar49._0_8_;
      auVar79._8_4_ = auVar85._0_4_;
      auVar79._12_4_ = 0.0;
      fVar82 = auVar85._0_4_ * auVar85._0_4_ + fVar83 * fVar83 + fVar89 * fVar89;
      if (1.1920929e-07 < fVar82) {
        fVar82 = SQRT(fVar82);
        fVar88 = SQRT(auVar85._0_4_ * auVar85._0_4_ + fVar83 * fVar83 + fVar89 * fVar89);
        auVar79._0_4_ = fVar83 / fVar82;
        auVar79._4_4_ = fVar89 / fVar88;
        auVar79._8_4_ = auVar85._0_4_ / fVar82;
        auVar79._12_4_ = 0.0 / fVar88;
        fVar83 = fVar65 * auVar79._8_4_ + fVar57 * auVar79._0_4_ + fVar63 * auVar79._4_4_;
        fVar89 = fVar65 * auVar79._8_4_ + fVar57 * auVar79._0_4_ + fVar63 * auVar79._4_4_;
        if (fVar83 * fVar83 <= fVar66 * fVar66 * fVar47) {
          fVar82 = auVar79._0_4_ * fVar83;
          fVar88 = auVar79._4_4_ * fVar89;
          fVar90 = auVar79._8_4_ * fVar83;
          fVar91 = auVar79._12_4_ * fVar89;
          fVar83 = 0.0;
          fVar89 = 0.0;
          fVar57 = fVar57 - fVar82;
          fVar63 = fVar63 - fVar88;
          fVar65 = fVar65 - fVar90;
          fVar64 = fVar64 - fVar91;
        }
      }
      else {
        fVar83 = 0.0;
        fVar89 = 0.0;
      }
      fVar66 = fVar66 + *pfVar3;
      if ((fVar62 - fVar83 * fVar83) - fVar47 <= fVar66 * fVar66 * fVar47) {
        if (fVar83 == 0.0) goto LAB_0325d12c;
        fVar57 = auVar79._0_4_ * fVar83;
        fVar63 = auVar79._4_4_ * fVar89;
        fVar65 = auVar79._8_4_ * fVar83;
        fVar64 = auVar79._12_4_ * fVar89;
      }
LAB_0325d0b0:
      if (fVar61 < 1.0) {
        fVar66 = fVar65 * fVar65 + fVar57 * fVar57 + fVar63 * fVar63;
        fVar47 = fVar62 * 0.001;
        bVar23 = false;
        bVar24 = true;
        bVar25 = false;
        if (1.1920929e-07 <= fVar66) {
          bVar23 = false;
          bVar24 = false;
          bVar25 = true;
          if (!NAN(fVar66) && !NAN(fVar47)) {
            bVar23 = fVar66 < fVar47;
            bVar24 = fVar66 == fVar47;
            bVar25 = false;
          }
        }
        if (!bVar24 && bVar23 == bVar25) {
          uVar67 = NEON_fmov(0x3f800000,4);
          fVar47 = fVar61 + ((float)uVar67 - fVar61) * SQRT(fVar62 / fVar66);
          fVar61 = fVar61 + ((float)((ulong)uVar67 >> 0x20) - fVar61) *
                            SQRT((fVar71 * fVar71 + fVar38 * fVar38 + fVar59 * fVar59) /
                                 (fVar65 * fVar65 + fVar57 * fVar57 + fVar63 * fVar63));
          fVar57 = fVar57 * fVar47;
          fVar63 = fVar63 * fVar61;
          fVar65 = fVar65 * fVar47;
          fVar47 = fVar37 * fVar57;
          fVar38 = fVar54 * fVar63;
          fVar59 = fVar55 * fVar65;
          fVar71 = fVar59 + fVar47 + fVar38;
          fVar59 = fVar59 + fVar47 + fVar38;
          fVar57 = fVar57 - fVar37 * fVar71;
          fVar63 = fVar63 - fVar54 * fVar59;
          fVar65 = fVar65 - fVar55 * fVar71;
          fVar64 = fVar64 * fVar61 - fVar60 * fVar59;
        }
      }
      fVar57 = (float)uVar58 + fVar57;
      uVar39 = SUB41(fVar57,0);
      uVar40 = (undefined1)((uint)fVar57 >> 8);
      uVar41 = (undefined1)((uint)fVar57 >> 0x10);
      uVar42 = (undefined1)((uint)fVar57 >> 0x18);
      fVar56 = fVar56 + fVar63;
      uVar43 = SUB41(fVar56,0);
      uVar44 = (undefined1)((uint)fVar56 >> 8);
      uVar45 = (undefined1)((uint)fVar56 >> 0x10);
      uVar46 = (undefined1)((uint)fVar56 >> 0x18);
      fVar48 = fVar48 + fVar65;
      fVar72 = fVar72 + fVar64;
    }
    else if ((fVar66 * fVar66 + 1.0) * fVar47 < fVar62) goto LAB_0325d0b0;
LAB_0325d12c:
    auVar51._0_4_ =
         ((float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39))) - *(float *)local_110[1])
         * *(float *)*local_110;
    auVar51._4_4_ =
         ((float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43))) -
         *(float *)(local_110[1] + 4)) * *(float *)(*local_110 + 4);
    auVar51._8_4_ = (fVar48 - *(float *)(local_110[1] + 8)) * *(float *)(*local_110 + 8);
    auVar51._12_4_ = (fVar72 - *(float *)(local_110[1] + 0xc)) * *(float *)(*local_110 + 0xc);
    auVar49 = NEON_ext(auVar51,auVar51,8,1);
    if ((auVar51._0_4_ + auVar51._4_4_ + auVar49._0_4_ < -0.001) ||
       (auVar52._0_4_ =
             ((float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39))) -
             *(float *)local_f8[1]) * *(float *)*local_f8,
       auVar52._4_4_ =
            ((float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43))) -
            *(float *)(local_f8[1] + 4)) * *(float *)(*local_f8 + 4),
       auVar52._8_4_ = (fVar48 - *(float *)(local_f8[1] + 8)) * *(float *)(*local_f8 + 8),
       auVar52._12_4_ = (fVar72 - *(float *)(local_f8[1] + 0xc)) * *(float *)(*local_f8 + 0xc),
       auVar49 = NEON_ext(auVar52,auVar52,8,1),
       auVar52._0_4_ + auVar52._4_4_ + auVar49._0_4_ < -0.001)) {
      FUN_0325d920(&local_118,local_110,local_e0,local_b0 + 2,&local_a0);
      auVar49 = *local_f8;
      fVar56 = ((float)local_a0 - *(float *)local_f8[1]) * auVar49._0_4_;
      fVar57 = ((float)(local_a0 >> 0x20) - *(float *)(local_f8[1] + 4)) * auVar49._4_4_;
      uVar39 = (undefined1)((uint)fVar57 >> 8);
      uVar40 = (undefined1)((uint)fVar57 >> 0x10);
      uVar41 = (undefined1)((uint)fVar57 >> 0x18);
      fVar47 = ((float)uStack_98 - *(float *)(local_f8[1] + 8)) * auVar49._8_4_;
      fVar48 = ((float)(uStack_98 >> 0x20) - *(float *)(local_f8[1] + 0xc)) * auVar49._12_4_;
      auVar13[4] = SUB41(fVar57,0);
      auVar13._0_4_ = fVar56;
      auVar13[5] = uVar39;
      auVar13[6] = uVar40;
      auVar13[7] = uVar41;
      auVar13._8_4_ = fVar47;
      auVar13._12_4_ = fVar48;
      auVar14[4] = SUB41(fVar57,0);
      auVar14._0_4_ = fVar56;
      auVar14[5] = uVar39;
      auVar14[6] = uVar40;
      auVar14[7] = uVar41;
      auVar14._8_4_ = fVar47;
      auVar14._12_4_ = fVar48;
      auVar49 = NEON_ext(auVar13,auVar14,8,1);
      if (fVar56 + fVar57 + auVar49._0_4_ < -0.001) {
        FUN_0325d920(&local_118,local_f8,local_e0,local_b0 + 2,&local_a0);
        auVar49 = *local_110;
        fVar56 = ((float)local_a0 - *(float *)local_110[1]) * auVar49._0_4_;
        fVar57 = ((float)(local_a0 >> 0x20) - *(float *)(local_110[1] + 4)) * auVar49._4_4_;
        uVar39 = (undefined1)((uint)fVar57 >> 8);
        uVar40 = (undefined1)((uint)fVar57 >> 0x10);
        uVar41 = (undefined1)((uint)fVar57 >> 0x18);
        fVar47 = ((float)uStack_98 - *(float *)(local_110[1] + 8)) * auVar49._8_4_;
        fVar48 = ((float)(uStack_98 >> 0x20) - *(float *)(local_110[1] + 0xc)) * auVar49._12_4_;
        auVar15[4] = SUB41(fVar57,0);
        auVar15._0_4_ = fVar56;
        auVar15[5] = uVar39;
        auVar15[6] = uVar40;
        auVar15[7] = uVar41;
        auVar15._8_4_ = fVar47;
        auVar15._12_4_ = fVar48;
        auVar16[4] = SUB41(fVar57,0);
        auVar16._0_4_ = fVar56;
        auVar16[5] = uVar39;
        auVar16[6] = uVar40;
        auVar16[7] = uVar41;
        auVar16._8_4_ = fVar47;
        auVar16._12_4_ = fVar48;
        auVar49 = NEON_ext(auVar15,auVar16,8,1);
        if (fVar56 + fVar57 + auVar49._0_4_ < -0.001) {
          FUN_0325e350(&local_118,local_110,local_f8,local_e0,1,local_b0 + 2,local_a8 + 4);
          goto switchD_0325cdcc_default;
        }
        lVar28 = 1;
      }
      else {
        lVar28 = 0;
      }
      local_110 = (undefined1 (*) [16])local_108[lVar28 * 3 + -1];
      local_108[0] = local_108[lVar28 * 3];
      local_118 = local_108[lVar28 * 3 + -2];
      local_f8 = local_e0;
      local_f0 = local_d8;
      local_108[1] = local_e8;
      local_b8 = local_b8 + -1;
    }
    else {
      *(ulong *)(local_a8 + 6) = CONCAT44(fVar72,fVar48);
      *(ulong *)(local_a8 + 4) =
           CONCAT17(uVar46,CONCAT16(uVar45,CONCAT15(uVar44,CONCAT14(uVar43,CONCAT13(uVar42,CONCAT12(
                                                  uVar41,CONCAT11(uVar40,uVar39)))))));
      local_110 = local_e0;
      local_108[0] = local_d8;
      local_118 = local_e8;
      local_b8 = 1;
    }
    goto LAB_0325cda8;
  case 4:
    iVar73 = 1;
    puVar29 = local_108 + 1;
    lVar28 = 0;
    iVar78 = local_b8;
    do {
      lVar30 = lVar28 + 1;
      if (lVar30 < iVar78) {
        puVar34 = puVar29;
        iVar35 = iVar73;
        do {
          uVar36 = local_108[lVar28 * 3 + -1];
          uVar27 = puVar34[1];
          if (*(int *)(uVar27 + 0x40) <= *(int *)(uVar36 + 0x40)) {
            if (*(int *)(uVar36 + 0x40) == *(int *)(uVar27 + 0x40)) {
              fVar47 = (float)*(undefined8 *)(uVar36 + 0x18);
              fVar48 = (float)((ulong)*(undefined8 *)(uVar36 + 0x18) >> 0x20);
              fVar56 = (float)*(undefined8 *)(uVar36 + 0x10);
              fVar56 = fVar56 * fVar56;
              fVar57 = (float)((ulong)*(undefined8 *)(uVar36 + 0x10) >> 0x20);
              fVar57 = fVar57 * fVar57;
              uVar39 = (undefined1)((uint)fVar57 >> 8);
              uVar40 = (undefined1)((uint)fVar57 >> 0x10);
              uVar41 = (undefined1)((uint)fVar57 >> 0x18);
              fVar47 = fVar47 * fVar47;
              fVar48 = fVar48 * fVar48;
              auVar49[4] = SUB41(fVar57,0);
              auVar49._0_4_ = fVar56;
              auVar49[5] = uVar39;
              auVar49[6] = uVar40;
              auVar49[7] = uVar41;
              auVar49._8_4_ = fVar47;
              auVar49._12_4_ = fVar48;
              auVar6[4] = SUB41(fVar57,0);
              auVar6._0_4_ = fVar56;
              auVar6[5] = uVar39;
              auVar6[6] = uVar40;
              auVar6[7] = uVar41;
              auVar6._8_4_ = fVar47;
              auVar6._12_4_ = fVar48;
              auVar49 = NEON_ext(auVar49,auVar6,8,1);
              auVar50._0_4_ = *(float *)(uVar27 + 0x10) * *(float *)(uVar27 + 0x10);
              auVar50._4_4_ = *(float *)(uVar27 + 0x14) * *(float *)(uVar27 + 0x14);
              auVar50._8_4_ = *(float *)(uVar27 + 0x18) * *(float *)(uVar27 + 0x18);
              auVar50._12_4_ = *(float *)(uVar27 + 0x1c) * *(float *)(uVar27 + 0x1c);
              auVar74 = NEON_ext(auVar50,auVar50,8,1);
              if (!(bool)(~(fVar56 + fVar57 + auVar49._0_4_ <
                           auVar50._0_4_ + auVar50._4_4_ + auVar74._0_4_) & 1)) goto LAB_0325cf14;
            }
            local_a0 = local_108[lVar28 * 3 + -2];
            uStack_98 = local_108[lVar28 * 3 + -1];
            local_90 = local_108[lVar28 * 3];
            uVar27 = puVar34[2];
            uVar36 = *puVar34;
            local_108[lVar28 * 3 + -1] = puVar34[1];
            local_108[lVar28 * 3] = uVar27;
            local_108[lVar28 * 3 + -2] = uVar36;
            uVar36 = local_90;
            uVar27 = local_a0;
            puVar34[1] = uStack_98;
            puVar34[2] = uVar36;
            *puVar34 = uVar27;
            iVar78 = local_b8;
          }
LAB_0325cf14:
          iVar35 = iVar35 + 1;
          puVar34 = puVar34 + 3;
        } while (iVar35 < iVar78);
      }
      iVar73 = iVar73 + 1;
      puVar29 = puVar29 + 3;
      lVar28 = lVar30;
    } while (lVar30 < iVar78 + -1);
    FUN_0325e350(&local_118,local_f8,local_e0,local_c8,0,local_b0 + 2,&local_a0);
    auVar49 = *local_110;
    fVar56 = ((float)local_a0 - *(float *)local_110[1]) * auVar49._0_4_;
    fVar57 = ((float)(local_a0 >> 0x20) - *(float *)(local_110[1] + 4)) * auVar49._4_4_;
    uVar39 = (undefined1)((uint)fVar57 >> 8);
    uVar40 = (undefined1)((uint)fVar57 >> 0x10);
    uVar41 = (undefined1)((uint)fVar57 >> 0x18);
    fVar47 = ((float)uStack_98 - *(float *)(local_110[1] + 8)) * auVar49._8_4_;
    fVar48 = ((float)(uStack_98 >> 0x20) - *(float *)(local_110[1] + 0xc)) * auVar49._12_4_;
    auVar7[4] = SUB41(fVar57,0);
    auVar7._0_4_ = fVar56;
    auVar7[5] = uVar39;
    auVar7[6] = uVar40;
    auVar7[7] = uVar41;
    auVar7._8_4_ = fVar47;
    auVar7._12_4_ = fVar48;
    auVar8[4] = SUB41(fVar57,0);
    auVar8._0_4_ = fVar56;
    auVar8[5] = uVar39;
    auVar8[6] = uVar40;
    auVar8[7] = uVar41;
    auVar8._8_4_ = fVar47;
    auVar8._12_4_ = fVar48;
    auVar49 = NEON_ext(auVar7,auVar8,8,1);
    if (fVar56 + fVar57 + auVar49._0_4_ < -0.001) {
      FUN_0325e350(&local_118,local_e0,local_110,local_c8,0,local_b0 + 2,&local_a0);
      auVar49 = *local_f8;
      fVar56 = ((float)local_a0 - *(float *)local_f8[1]) * auVar49._0_4_;
      fVar57 = ((float)(local_a0 >> 0x20) - *(float *)(local_f8[1] + 4)) * auVar49._4_4_;
      uVar39 = (undefined1)((uint)fVar57 >> 8);
      uVar40 = (undefined1)((uint)fVar57 >> 0x10);
      uVar41 = (undefined1)((uint)fVar57 >> 0x18);
      fVar47 = ((float)uStack_98 - *(float *)(local_f8[1] + 8)) * auVar49._8_4_;
      fVar48 = ((float)(uStack_98 >> 0x20) - *(float *)(local_f8[1] + 0xc)) * auVar49._12_4_;
      auVar9[4] = SUB41(fVar57,0);
      auVar9._0_4_ = fVar56;
      auVar9[5] = uVar39;
      auVar9[6] = uVar40;
      auVar9[7] = uVar41;
      auVar9._8_4_ = fVar47;
      auVar9._12_4_ = fVar48;
      auVar10[4] = SUB41(fVar57,0);
      auVar10._0_4_ = fVar56;
      auVar10[5] = uVar39;
      auVar10[6] = uVar40;
      auVar10[7] = uVar41;
      auVar10._8_4_ = fVar47;
      auVar10._12_4_ = fVar48;
      auVar49 = NEON_ext(auVar9,auVar10,8,1);
      if (-0.001 <= fVar56 + fVar57 + auVar49._0_4_) {
        lVar28 = 1;
        goto LAB_0325d2bc;
      }
      FUN_0325e350(&local_118,local_110,local_f8,local_c8,0,local_b0 + 2,&local_a0);
      iVar73 = local_b8;
      pauVar22 = local_c8;
      pauVar21 = local_e0;
      pauVar20 = local_f8;
      pauVar19 = local_110;
      auVar49 = *local_e0;
      fVar56 = ((float)local_a0 - *(float *)local_e0[1]) * auVar49._0_4_;
      fVar57 = ((float)(local_a0 >> 0x20) - *(float *)(local_e0[1] + 4)) * auVar49._4_4_;
      uVar39 = (undefined1)((uint)fVar57 >> 8);
      uVar40 = (undefined1)((uint)fVar57 >> 0x10);
      uVar41 = (undefined1)((uint)fVar57 >> 0x18);
      fVar47 = ((float)uStack_98 - *(float *)(local_e0[1] + 8)) * auVar49._8_4_;
      fVar48 = ((float)(uStack_98 >> 0x20) - *(float *)(local_e0[1] + 0xc)) * auVar49._12_4_;
      auVar11[4] = SUB41(fVar57,0);
      auVar11._0_4_ = fVar56;
      auVar11[5] = uVar39;
      auVar11[6] = uVar40;
      auVar11[7] = uVar41;
      auVar11._8_4_ = fVar47;
      auVar11._12_4_ = fVar48;
      auVar12[4] = SUB41(fVar57,0);
      auVar12._0_4_ = fVar56;
      auVar12[5] = uVar39;
      auVar12[6] = uVar40;
      auVar12[7] = uVar41;
      auVar12._8_4_ = fVar47;
      auVar12._12_4_ = fVar48;
      auVar49 = NEON_ext(auVar11,auVar12,8,1);
      if (-0.001 <= fVar56 + fVar57 + auVar49._0_4_) {
        lVar28 = 2;
        goto LAB_0325d2bc;
      }
      local_a0 = local_b0[2];
      uStack_98 = local_b0[3];
      FUN_0325e350(&local_118,local_110,local_f8,local_e0,0,&local_a0,&local_a0);
      if (iVar73 == local_b8) {
        FUN_0325e350(&local_118,pauVar19,pauVar20,pauVar22,0,&local_a0,&local_a0);
      }
      if (iVar73 == local_b8) {
        FUN_0325e350(&local_118,pauVar19,pauVar21,pauVar22,0,&local_a0,&local_a0);
      }
      if (iVar73 == local_b8) {
        FUN_0325e350(&local_118,pauVar20,pauVar21,pauVar22,0,&local_a0,&local_a0);
      }
      uVar27 = local_d0;
      *(ulong *)(local_a8 + 6) = uStack_98;
      *(ulong *)(local_a8 + 4) = local_a0;
      uVar32 = *(uint *)(local_108[0] + 0xc);
      uVar31 = *(uint *)(local_f0 + 0xc);
      uVar26 = uVar32 & ((int)uVar32 >> 0x1f ^ 0xffffffffU);
      uVar4 = *(uint *)(local_d8 + 0xc);
      uVar5 = *(uint *)(local_c0 + 0xc);
      if ((int)uVar26 <= (int)uVar31) {
        uVar26 = uVar31;
      }
      if ((int)uVar26 <= (int)uVar4) {
        uVar26 = uVar4;
      }
      uVar2 = uVar26;
      if ((int)uVar26 <= (int)uVar5) {
        uVar2 = uVar5;
      }
      if (uVar2 == uVar32) {
        lVar28 = 0;
LAB_0325d440:
        local_108[lVar28 * 3 + -1] = (ulong)local_c8;
        local_108[lVar28 * 3] = local_c0;
        local_108[lVar28 * 3 + -2] = uVar27;
      }
      else {
        if (uVar2 == uVar31) {
          lVar28 = 1;
          goto LAB_0325d440;
        }
        lVar28 = 2;
        if ((uVar2 == uVar4) || (lVar28 = 3, (int)uVar26 <= (int)uVar5)) goto LAB_0325d440;
      }
      local_b8 = local_b8 + -1;
      *(undefined4 *)(local_108[0] + 0xc) = 0;
      *(undefined4 *)(local_f0 + 0xc) = 0;
      *(undefined4 *)(local_d8 + 0xc) = 0;
    }
    else {
      lVar28 = 0;
LAB_0325d2bc:
      local_108[lVar28 * 3 + -1] = (ulong)local_e0;
      local_108[lVar28 * 3] = local_d8;
      local_108[lVar28 * 3 + -2] = local_e8;
      local_e0 = local_c8;
      local_d8 = local_c0;
      local_e8 = local_d0;
      local_b8 = 3;
    }
    goto LAB_0325cda8;
  default:
    goto switchD_0325cdcc_default;
  }
  fVar66 = *(float *)local_110[3];
  fVar61 = *(float *)(local_110[3] + 0xc);
  auVar49 = *local_110;
  fVar48 = (float)*(undefined8 *)(local_110[1] + 8);
  fVar72 = (float)((ulong)*(undefined8 *)(local_110[1] + 8) >> 0x20);
  uVar58 = *(undefined8 *)local_110[1];
  uVar39 = (undefined1)uVar58;
  uVar40 = (undefined1)((ulong)uVar58 >> 8);
  uVar41 = (undefined1)((ulong)uVar58 >> 0x10);
  uVar42 = (undefined1)((ulong)uVar58 >> 0x18);
  uVar43 = (undefined1)((ulong)uVar58 >> 0x20);
  uVar44 = (undefined1)((ulong)uVar58 >> 0x28);
  uVar45 = (undefined1)((ulong)uVar58 >> 0x30);
  uVar46 = (undefined1)((ulong)uVar58 >> 0x38);
  fVar71 = (float)local_b0[2] - (float)uVar58;
  fVar56 = (float)((ulong)uVar58 >> 0x20);
  fVar38 = (float)((ulong)local_b0[2] >> 0x20) - fVar56;
  fVar59 = (float)local_b0[3] - fVar48;
  fVar37 = auVar49._0_4_;
  fVar54 = auVar49._4_4_;
  fVar55 = auVar49._8_4_;
  fVar65 = fVar71 * fVar37 + fVar38 * fVar54 + fVar59 * fVar55;
  fVar64 = fVar71 * fVar37 + fVar38 * fVar54 + fVar59 * fVar55;
  fVar47 = fVar65 * fVar65;
  fVar60 = auVar49._12_4_;
  fVar62 = fVar71 * fVar71 + fVar38 * fVar38 + fVar59 * fVar59;
  auVar74 = *(undefined1 (*) [16])(local_b0 + 6);
  fVar57 = fVar71 - fVar37 * fVar65;
  fVar63 = fVar38 - fVar54 * fVar64;
  fVar65 = fVar59 - fVar55 * fVar65;
  fVar64 = ((float)((ulong)local_b0[3] >> 0x20) - fVar72) - fVar60 * fVar64;
  fVar83 = auVar74._0_4_;
  auVar76._0_4_ = fVar83 * fVar57;
  fVar89 = auVar74._4_4_;
  auVar76._4_4_ = fVar89 * fVar63;
  auVar76._8_4_ = auVar74._8_4_ * fVar65;
  auVar76._12_4_ = auVar74._12_4_ * fVar64;
  auVar84 = NEON_ext(auVar76,auVar76,8,1);
  pfVar3 = (float *)(local_110[3] + 8);
  if (0.0 < auVar76._0_4_ + auVar76._4_4_ + auVar84._0_4_) {
    pfVar3 = (float *)(local_110[3] + 4);
  }
  if (0.0 < *pfVar3) {
    auVar84 = NEON_ext(auVar74,auVar74,4,1);
    auVar49 = NEON_ext(auVar49,auVar49,4,1);
    auVar86._0_4_ = auVar49._0_4_ * fVar83 - fVar37 * auVar84._0_4_;
    auVar86._4_4_ = auVar49._4_4_ * fVar89 - fVar54 * auVar84._4_4_;
    auVar86._8_4_ = fVar37 * auVar74._8_4_ - fVar55 * fVar83;
    auVar86._12_4_ = fVar54 * auVar74._12_4_ - fVar60 * fVar89;
    auVar49 = NEON_ext(auVar86,auVar86,4,1);
    fVar83 = auVar49._0_4_;
    fVar89 = auVar49._4_4_;
    auVar80._0_8_ = auVar49._0_8_;
    auVar80._8_4_ = auVar86._0_4_;
    auVar80._12_4_ = 0.0;
    fVar82 = auVar86._0_4_ * auVar86._0_4_ + fVar83 * fVar83 + fVar89 * fVar89;
    if (1.1920929e-07 < fVar82) {
      fVar82 = SQRT(fVar82);
      fVar88 = SQRT(auVar86._0_4_ * auVar86._0_4_ + fVar83 * fVar83 + fVar89 * fVar89);
      auVar80._0_4_ = fVar83 / fVar82;
      auVar80._4_4_ = fVar89 / fVar88;
      auVar80._8_4_ = auVar86._0_4_ / fVar82;
      auVar80._12_4_ = 0.0 / fVar88;
      fVar83 = fVar65 * auVar80._8_4_ + fVar57 * auVar80._0_4_ + fVar63 * auVar80._4_4_;
      fVar89 = fVar65 * auVar80._8_4_ + fVar57 * auVar80._0_4_ + fVar63 * auVar80._4_4_;
      if (fVar83 * fVar83 <= fVar66 * fVar66 * fVar47) {
        fVar82 = auVar80._0_4_ * fVar83;
        fVar88 = auVar80._4_4_ * fVar89;
        fVar90 = auVar80._8_4_ * fVar83;
        fVar91 = auVar80._12_4_ * fVar89;
        fVar83 = 0.0;
        fVar89 = 0.0;
        fVar57 = fVar57 - fVar82;
        fVar63 = fVar63 - fVar88;
        fVar65 = fVar65 - fVar90;
        fVar64 = fVar64 - fVar91;
      }
    }
    else {
      fVar83 = 0.0;
      fVar89 = 0.0;
    }
    fVar66 = fVar66 + *pfVar3;
    if ((fVar62 - fVar83 * fVar83) - fVar47 <= fVar66 * fVar66 * fVar47) {
      if (fVar83 == 0.0) goto LAB_0325d78c;
      fVar57 = auVar80._0_4_ * fVar83;
      fVar63 = auVar80._4_4_ * fVar89;
      fVar65 = auVar80._8_4_ * fVar83;
      fVar64 = auVar80._12_4_ * fVar89;
    }
  }
  else if (fVar62 <= (fVar66 * fVar66 + 1.0) * fVar47) goto LAB_0325d78c;
  if (fVar61 < 1.0) {
    fVar66 = fVar65 * fVar65 + fVar57 * fVar57 + fVar63 * fVar63;
    fVar47 = fVar62 * 0.001;
    bVar23 = false;
    bVar24 = true;
    bVar25 = false;
    if (1.1920929e-07 <= fVar66) {
      bVar23 = false;
      bVar24 = false;
      bVar25 = true;
      if (!NAN(fVar66) && !NAN(fVar47)) {
        bVar23 = fVar66 < fVar47;
        bVar24 = fVar66 == fVar47;
        bVar25 = false;
      }
    }
    if (!bVar24 && bVar23 == bVar25) {
      uVar67 = NEON_fmov(0x3f800000,4);
      fVar47 = fVar61 + ((float)uVar67 - fVar61) * SQRT(fVar62 / fVar66);
      fVar61 = fVar61 + ((float)((ulong)uVar67 >> 0x20) - fVar61) *
                        SQRT((fVar71 * fVar71 + fVar38 * fVar38 + fVar59 * fVar59) /
                             (fVar65 * fVar65 + fVar57 * fVar57 + fVar63 * fVar63));
      fVar57 = fVar57 * fVar47;
      fVar63 = fVar63 * fVar61;
      fVar65 = fVar65 * fVar47;
      fVar47 = fVar37 * fVar57;
      fVar38 = fVar54 * fVar63;
      fVar59 = fVar55 * fVar65;
      fVar71 = fVar59 + fVar47 + fVar38;
      fVar59 = fVar59 + fVar47 + fVar38;
      fVar57 = fVar57 - fVar37 * fVar71;
      fVar63 = fVar63 - fVar54 * fVar59;
      fVar65 = fVar65 - fVar55 * fVar71;
      fVar64 = fVar64 * fVar61 - fVar60 * fVar59;
    }
  }
  fVar57 = (float)uVar58 + fVar57;
  uVar39 = SUB41(fVar57,0);
  uVar40 = (undefined1)((uint)fVar57 >> 8);
  uVar41 = (undefined1)((uint)fVar57 >> 0x10);
  uVar42 = (undefined1)((uint)fVar57 >> 0x18);
  fVar56 = fVar56 + fVar63;
  uVar43 = SUB41(fVar56,0);
  uVar44 = (undefined1)((uint)fVar56 >> 8);
  uVar45 = (undefined1)((uint)fVar56 >> 0x10);
  uVar46 = (undefined1)((uint)fVar56 >> 0x18);
  fVar48 = fVar48 + fVar65;
  fVar72 = fVar72 + fVar64;
LAB_0325d78c:
  *(ulong *)(local_a8 + 6) = CONCAT44(fVar72,fVar48);
  *(ulong *)(local_a8 + 4) =
       CONCAT17(uVar46,CONCAT16(uVar45,CONCAT15(uVar44,CONCAT14(uVar43,CONCAT13(uVar42,CONCAT12(
                                                  uVar41,CONCAT11(uVar40,uVar39)))))));
switchD_0325cdcc_default:
  if ((float)local_130 < 0.0) {
    return;
  }
  uVar27 = (ulong)*(uint *)(param_1 + 10);
  goto LAB_0325cad4;
}


