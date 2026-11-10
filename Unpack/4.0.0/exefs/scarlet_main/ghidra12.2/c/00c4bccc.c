/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c4bccc; name: FUN_00c4bccc
 */


undefined8 FUN_00c4bccc(long param_1)

{
  byte *pbVar1;
  undefined1 (*pauVar2) [12];
  long *plVar3;
  float *pfVar4;
  long lVar5;
  ushort uVar6;
  char cVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  bool bVar15;
  undefined1 (*pauVar16) [16];
  undefined8 uVar17;
  long *plVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long *plVar26;
  long lVar27;
  uint uVar28;
  long lVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  byte bVar47;
  undefined1 auVar48 [12];
  undefined1 auVar49 [16];
  float fVar53;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar66;
  float fVar67;
  undefined1 auVar60 [16];
  undefined1 auVar64 [16];
  undefined1 auVar63 [16];
  undefined1 auVar62 [16];
  undefined1 auVar61 [16];
  undefined1 auVar65 [16];
  float fVar68;
  float fVar69;
  float fVar75;
  undefined1 auVar70 [16];
  undefined1 auVar74 [16];
  undefined1 auVar73 [16];
  undefined1 auVar72 [16];
  undefined1 auVar71 [16];
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar83;
  undefined8 uVar82;
  float fVar84;
  float fVar86;
  undefined8 uVar85;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  
  lVar27 = *(long *)(param_1 + 0xc0);
  if (lVar27 == 0) {
    bVar15 = false;
    uVar28 = 0;
    iVar19 = 0xffff;
  }
  else {
    if (**(char **)(param_1 + 0x188) != '\0') {
      plVar18 = *(long **)(lVar27 + 0x30);
      if (plVar18 != *(long **)(lVar27 + 0x38)) {
        uVar22 = *(ulong *)(param_1 + 0x180);
LAB_00c4bd14:
        uVar23 = *(ulong *)(*plVar18 + 0x40);
        if (uVar23 != 0) {
          uVar24 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
          uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
          uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar24 < 2) {
            uVar25 = uVar23 - 1 & uVar22;
          }
          else {
            uVar25 = uVar22;
            if (uVar23 <= uVar22) {
              uVar25 = 0;
              if (uVar23 != 0) {
                uVar25 = uVar22 / uVar23;
              }
              uVar25 = uVar22 - uVar25 * uVar23;
            }
          }
          plVar26 = *(long **)(*(long *)(*plVar18 + 0x38) + uVar25 * 8);
          if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
            if (uVar24 < 2) {
              do {
                if (plVar26[1] == uVar22) {
                  if (plVar26[2] == uVar22) goto LAB_00c4be08;
                }
                else if ((plVar26[1] & uVar23 - 1) != uVar25) break;
                plVar26 = (long *)*plVar26;
              } while (plVar26 != (long *)0x0);
            }
            else {
              do {
                uVar24 = plVar26[1];
                if (uVar24 == uVar22) {
                  if (plVar26[2] == uVar22) goto LAB_00c4be08;
                }
                else {
                  if (uVar23 <= uVar24) {
                    uVar8 = 0;
                    if (uVar23 != 0) {
                      uVar8 = uVar24 / uVar23;
                    }
                    uVar24 = uVar24 - uVar8 * uVar23;
                  }
                  if (uVar24 != uVar25) break;
                }
                plVar26 = (long *)*plVar26;
              } while (plVar26 != (long *)0x0);
            }
          }
        }
        goto LAB_00c4be10;
      }
    }
LAB_00c4be1c:
    iVar19 = 0xffff;
LAB_00c4be20:
    bVar15 = -1 < (short)iVar19;
    uVar28 = ~*(uint *)(param_1 + 0x244) >> 0x1f;
  }
  auVar60 = *(undefined1 (*) [16])(param_1 + 0xd0);
  if (ABS(auVar60._0_4_) < 1e-12) {
    auVar60._0_4_ = 0x2b8cbccc;
  }
  auVar48 = auVar60._0_12_;
  if (ABS(auVar60._4_4_) < 1e-12) {
    auVar50._8_8_ = auVar60._8_8_;
    auVar50._0_4_ = auVar60._0_4_;
    auVar50._4_4_ = 0x2b8cbccc;
    auVar48 = auVar50._0_12_;
  }
  if (ABS(auVar48._8_4_) < 1e-12) {
    auVar48._8_4_ = 0x2b8cbccc;
  }
  pauVar2 = (undefined1 (*) [12])(param_1 + 0xe0);
  fVar57 = (float)*(undefined8 *)(param_1 + 0xe8);
  fVar55 = (float)((ulong)*(undefined8 *)(param_1 + 0xe8) >> 0x20);
  fVar86 = (float)*(undefined8 *)*pauVar2;
  fVar58 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
  uVar17 = *(undefined8 *)(param_1 + 0xf0);
  auVar9._12_4_ = fVar55;
  auVar9._0_12_ = *pauVar2;
  auVar10._12_4_ = fVar55;
  auVar10._0_12_ = *pauVar2;
  auVar60 = NEON_ext(auVar9,auVar10,0xc,1);
  uVar30 = SUB124(*pauVar2,0);
  auVar61._4_12_ = auVar60._4_12_;
  auVar61._0_4_ = uVar30;
  auVar63._12_4_ = auVar60._12_4_;
  auVar63._0_8_ = auVar61._0_8_;
  auVar63._8_4_ = SUB124(*pauVar2,4);
  auVar62._8_8_ = auVar63._8_8_;
  auVar62._4_4_ = auVar60._0_4_;
  auVar62._0_4_ = uVar30;
  auVar64._0_12_ = auVar62._0_12_;
  auVar64._12_4_ = auVar60._4_4_;
  fVar78 = fVar58 * fVar58 + fVar58 * fVar58;
  fVar79 = fVar57 * fVar57 + fVar57 * fVar57;
  auVar60 = NEON_ext(auVar64,auVar64,8,1);
  fVar59 = auVar60._0_4_ * SUB124(*pauVar2,8);
  fVar66 = auVar60._4_4_ * SUB124(*pauVar2,8);
  fVar67 = auVar60._8_4_ * fVar58;
  auVar60 = NEON_fmov(0x3f800000,4);
  fVar54 = fVar86 * fVar55 + fVar86 * fVar55;
  fVar56 = fVar58 * fVar55 + fVar58 * fVar55;
  fVar57 = fVar57 * fVar55 + fVar57 * fVar55;
  auVar70._0_4_ = auVar60._0_4_ - (fVar86 * fVar86 + fVar86 * fVar86);
  auVar70._4_4_ = auVar60._4_4_ - fVar78;
  auVar70._8_4_ = auVar60._8_4_ - fVar79;
  auVar70._12_4_ = auVar60._12_4_ - (fVar55 * fVar55 + fVar55 * fVar55);
  fVar59 = fVar59 + fVar59;
  fVar66 = fVar66 + fVar66;
  fVar67 = fVar67 + fVar67;
  auVar71._4_12_ = auVar70._4_12_;
  auVar71._0_4_ = auVar70._0_4_;
  auVar73._0_8_ = auVar71._0_8_;
  auVar73._8_4_ = auVar70._4_4_;
  auVar73._12_4_ = auVar70._12_4_;
  auVar72._8_8_ = auVar73._8_8_;
  auVar72._4_4_ = auVar70._0_4_;
  auVar72._0_4_ = auVar70._0_4_;
  auVar74._0_12_ = auVar72._0_12_;
  auVar74._12_4_ = auVar70._4_4_;
  auVar60 = NEON_ext(auVar74,auVar74,0xc,1);
  fVar53 = (float)*(undefined8 *)(param_1 + 0xf8);
  fVar80 = 1.0;
  fVar86 = auVar48._0_4_;
  fVar81 = (auVar60._0_4_ - fVar79) * fVar86;
  fVar83 = (fVar67 + fVar57) * fVar86;
  uVar82 = CONCAT44(fVar83,fVar81);
  fVar84 = (fVar66 - fVar56) * fVar86;
  fVar86 = fVar86 * 0.0;
  uVar85 = CONCAT44(fVar86,fVar84);
  fVar58 = auVar48._4_4_;
  fVar55 = (fVar67 - fVar57) * fVar58;
  fVar67 = (auVar60._4_4_ - fVar79) * fVar58;
  fVar79 = (fVar59 + fVar54) * fVar58;
  fVar58 = fVar58 * 0.0;
  fVar57 = auVar48._8_4_;
  auVar65._0_4_ = (fVar66 + fVar56) * fVar57;
  auVar65._4_4_ = (fVar59 - fVar54) * fVar57;
  auVar65._8_4_ = (auVar60._8_4_ - fVar78) * fVar57;
  auVar65._12_4_ = fVar57 * 0.0;
  if ((bVar15 || uVar28 != 0) || (*(char *)(param_1 + 0x248) != '\0')) {
    fVar57 = fVar53;
    if (bVar15) {
      pauVar16 = (undefined1 (*) [16])FUN_00c4c40c(lVar27);
      fVar54 = *(float *)pauVar16[1];
      fVar56 = *(float *)(pauVar16[1] + 4);
      fVar59 = *(float *)(pauVar16[1] + 8);
      fVar66 = *(float *)(pauVar16[1] + 0xc);
      fVar57 = *(float *)pauVar16[2];
      fVar80 = *(float *)(pauVar16[2] + 4);
      fVar78 = *(float *)(pauVar16[2] + 8);
      fVar75 = *(float *)(pauVar16[2] + 0xc);
      auVar60 = *pauVar16;
      fVar68 = (float)*(undefined8 *)pauVar16[3];
      fVar69 = (float)((ulong)*(undefined8 *)pauVar16[3] >> 0x20);
      fVar31 = fVar55 * fVar69;
      fVar38 = fVar67 * fVar69;
      fVar76 = auVar60._0_4_;
      fVar77 = auVar60._4_4_;
      fVar45 = auVar60._8_4_;
      fVar32 = auVar65._0_4_ * fVar45;
      fVar39 = auVar65._4_4_ * fVar45;
      fVar42 = auVar65._8_4_ * fVar45;
      fVar45 = auVar65._12_4_ * fVar45;
      fVar33 = auVar65._0_4_ * fVar59;
      fVar40 = auVar65._4_4_ * fVar59;
      fVar43 = auVar65._8_4_ * fVar59;
      fVar59 = auVar65._12_4_ * fVar59;
      fVar46 = (float)*(undefined8 *)(pauVar16[3] + 8);
      fVar34 = auVar65._0_4_ * fVar46;
      fVar41 = auVar65._4_4_ * fVar46;
      fVar44 = auVar65._8_4_ * fVar46;
      fVar46 = auVar65._12_4_ * fVar46;
      local_a0._0_4_ = (float)uVar17;
      local_a0._4_4_ = (float)((ulong)uVar17 >> 0x20);
      auVar65._0_4_ =
           fVar81 * fVar57 + fVar55 * fVar80 + auVar65._0_4_ * fVar78 + (float)local_a0 * fVar75;
      auVar65._4_4_ =
           fVar83 * fVar57 + fVar67 * fVar80 + auVar65._4_4_ * fVar78 + local_a0._4_4_ * fVar75;
      auVar65._8_4_ = fVar84 * fVar57 + fVar79 * fVar80 + auVar65._8_4_ * fVar78 + fVar53 * fVar75;
      auVar65._12_4_ = fVar86 * fVar57 + fVar58 * fVar80 + auVar65._12_4_ * fVar78 + fVar75 * 1.0;
      fVar78 = (float)((ulong)*(undefined8 *)(pauVar16[3] + 8) >> 0x20);
      fVar57 = fVar84 * fVar68 + fVar79 * fVar69 + fVar44 + fVar53 * fVar78;
      fVar80 = fVar86 * fVar68 + fVar58 * fVar69 + fVar46 + fVar78 * 1.0;
      fVar75 = auVar60._12_4_;
      uVar82 = CONCAT44(fVar83 * fVar76 + fVar67 * fVar77 + fVar39 + local_a0._4_4_ * fVar75,
                        fVar81 * fVar76 + fVar55 * fVar77 + fVar32 + (float)local_a0 * fVar75);
      uVar85 = CONCAT44(fVar86 * fVar76 + fVar58 * fVar77 + fVar45 + fVar75 * 1.0,
                        fVar84 * fVar76 + fVar79 * fVar77 + fVar42 + fVar53 * fVar75);
      fVar55 = fVar81 * fVar54 + fVar55 * fVar56 + fVar33 + (float)local_a0 * fVar66;
      fVar67 = fVar83 * fVar54 + fVar67 * fVar56 + fVar40 + local_a0._4_4_ * fVar66;
      fVar79 = fVar84 * fVar54 + fVar79 * fVar56 + fVar43 + fVar53 * fVar66;
      fVar58 = fVar86 * fVar54 + fVar58 * fVar56 + fVar59 + fVar66 * 1.0;
      uVar17 = CONCAT44(fVar83 * fVar68 + fVar38 + fVar41 + local_a0._4_4_ * fVar78,
                        fVar81 * fVar68 + fVar31 + fVar34 + (float)local_a0 * fVar78);
    }
    if (0.0 < *(float *)(param_1 + 0x1cc)) {
      *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_1 + 0x1c0);
      *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x1c8);
    }
    else {
      auVar49._8_8_ = uVar85;
      auVar49._0_8_ = uVar82;
      fVar86 = (float)uVar17;
      fVar54 = (float)((ulong)uVar17 >> 0x20);
      if (uVar28 != 0) {
        fStack_a8 = auVar65._8_4_;
        fStack_a4 = auVar65._12_4_;
        local_b0 = auVar65._0_4_;
        fStack_ac = auVar65._4_4_;
        uVar22 = FUN_00c4c5d8(lVar27,*(undefined4 *)(param_1 + 0x244),&local_90);
        auVar14._8_8_ = uVar85;
        auVar14._0_8_ = uVar82;
        auVar13._8_8_ = uVar85;
        auVar13._0_8_ = uVar82;
        auVar12._8_8_ = uVar85;
        auVar12._0_8_ = uVar82;
        auVar11._8_8_ = uVar85;
        auVar11._0_8_ = uVar82;
        if (((uVar22 & 1) != 0) && (auVar49 = auVar11, -1 < (short)*(uint *)(param_1 + 0x244))) {
          uVar22 = (ulong)*(uint *)(param_1 + 0x244) & 0xffff;
          auVar49 = auVar12;
          if (((int)uVar22 <
               (*(int *)(lVar27 + 0x3b0) - (int)*(long *)(lVar27 + 0x3a8)) * 0x8000 >> 0x10) &&
             (uVar6 = *(ushort *)(*(long *)(lVar27 + 0x3a8) + uVar22 * 2), auVar49 = auVar13,
             -1 < (short)uVar6)) {
            auVar49 = auVar14;
            if ((int)(uint)uVar6 <
                (*(int *)(lVar27 + 0x368) - (int)*(long *)(lVar27 + 0x360)) * 0x400 >> 0x10) {
              pfVar4 = (float *)(*(long *)(lVar27 + 0x360) + (ulong)uVar6 * 0x40);
              fVar56 = *pfVar4;
              fVar59 = pfVar4[1];
              fVar66 = pfVar4[2];
              fVar53 = pfVar4[3];
              fVar78 = (float)*(undefined8 *)(pfVar4 + 4);
              fVar81 = (float)((ulong)*(undefined8 *)(pfVar4 + 4) >> 0x20);
              fVar83 = (float)*(undefined8 *)(pfVar4 + 6);
              fVar84 = (float)((ulong)*(undefined8 *)(pfVar4 + 6) >> 0x20);
              fVar34 = local_90 * fVar78 + fStack_80 * fVar81 + local_70 * fVar83 +
                       fStack_60 * fVar84;
              fVar38 = fStack_8c * fVar78 + fStack_7c * fVar81 + fStack_6c * fVar83 +
                       fStack_5c * fVar84;
              fVar39 = fStack_88 * fVar78 + fStack_78 * fVar81 + fStack_68 * fVar83 +
                       fStack_58 * fVar84;
              fVar40 = fStack_84 * fVar78 + fStack_74 * fVar81 + fStack_64 * fVar83 +
                       fStack_54 * fVar84;
              fVar81 = (float)*(undefined8 *)(pfVar4 + 8);
              fVar78 = local_90 * fVar56 + fStack_80 * fVar59 + local_70 * fVar66 +
                       fStack_60 * fVar53;
              fVar32 = fStack_8c * fVar56 + fStack_7c * fVar59 + fStack_6c * fVar66 +
                       fStack_5c * fVar53;
              fVar33 = fStack_88 * fVar56 + fStack_78 * fVar59 + fStack_68 * fVar66 +
                       fStack_58 * fVar53;
              fVar56 = fStack_84 * fVar56 + fStack_74 * fVar59 + fStack_64 * fVar66 +
                       fStack_54 * fVar53;
              fVar59 = (float)*(undefined8 *)(pfVar4 + 0xc);
              fVar84 = (float)((ulong)*(undefined8 *)(pfVar4 + 8) >> 0x20);
              fVar66 = (float)((ulong)*(undefined8 *)(pfVar4 + 0xc) >> 0x20);
              fVar75 = (float)*(undefined8 *)(pfVar4 + 10);
              fVar53 = (float)*(undefined8 *)(pfVar4 + 0xe);
              fVar44 = (float)uVar82;
              fVar45 = (float)((ulong)uVar82 >> 0x20);
              fVar46 = (float)uVar85;
              fVar68 = (float)((ulong)uVar85 >> 0x20);
              fVar31 = (float)((ulong)*(undefined8 *)(pfVar4 + 10) >> 0x20);
              fVar41 = local_90 * fVar81 + fStack_80 * fVar84 + local_70 * fVar75 +
                       fStack_60 * fVar31;
              fVar83 = fStack_8c * fVar81 + fStack_7c * fVar84 + fStack_6c * fVar75 +
                       fStack_5c * fVar31;
              fVar42 = fStack_88 * fVar81 + fStack_78 * fVar84 + fStack_68 * fVar75 +
                       fStack_58 * fVar31;
              fVar43 = fStack_84 * fVar81 + fStack_74 * fVar84 + fStack_64 * fVar75 +
                       fStack_54 * fVar31;
              fVar31 = (float)((ulong)*(undefined8 *)(pfVar4 + 0xe) >> 0x20);
              fVar84 = local_90 * fVar59 + fStack_80 * fVar66 + local_70 * fVar53 +
                       fStack_60 * fVar31;
              fVar81 = fStack_8c * fVar59 + fStack_7c * fVar66 + fStack_6c * fVar53 +
                       fStack_5c * fVar31;
              fVar75 = fStack_88 * fVar59 + fStack_78 * fVar66 + fStack_68 * fVar53 +
                       fStack_58 * fVar31;
              fVar31 = fStack_84 * fVar59 + fStack_74 * fVar66 + fStack_64 * fVar53 +
                       fStack_54 * fVar31;
              auVar49._0_4_ =
                   fVar44 * fVar78 + fVar55 * fVar32 + local_b0 * fVar33 + fVar86 * fVar56;
              auVar49._4_4_ =
                   fVar45 * fVar78 + fVar67 * fVar32 + fStack_ac * fVar33 + fVar54 * fVar56;
              auVar49._8_4_ =
                   fVar46 * fVar78 + fVar79 * fVar32 + fStack_a8 * fVar33 + fVar57 * fVar56;
              auVar49._12_4_ =
                   fVar68 * fVar78 + fVar58 * fVar32 + fStack_a4 * fVar33 + fVar80 * fVar56;
              fVar56 = fVar55 * fVar83;
              fVar66 = fVar67 * fVar83;
              fVar78 = fVar79 * fVar83;
              fVar83 = fVar58 * fVar83;
              fVar59 = fVar55 * fVar81;
              fVar53 = fVar67 * fVar81;
              fVar81 = fVar79 * fVar81;
              fVar55 = fVar44 * fVar34 + fVar55 * fVar38 + local_b0 * fVar39 + fVar86 * fVar40;
              fVar67 = fVar45 * fVar34 + fVar67 * fVar38 + fStack_ac * fVar39 + fVar54 * fVar40;
              fVar79 = fVar46 * fVar34 + fVar79 * fVar38 + fStack_a8 * fVar39 + fVar57 * fVar40;
              fVar58 = fVar68 * fVar34 + fVar58 * fVar38 + fStack_a4 * fVar39 + fVar80 * fVar40;
              auVar65._0_4_ = fVar44 * fVar41 + fVar56 + local_b0 * fVar42 + fVar86 * fVar43;
              auVar65._4_4_ = fVar45 * fVar41 + fVar66 + fStack_ac * fVar42 + fVar54 * fVar43;
              auVar65._8_4_ = fVar46 * fVar41 + fVar78 + fStack_a8 * fVar42 + fVar57 * fVar43;
              auVar65._12_4_ = fVar68 * fVar41 + fVar83 + fStack_a4 * fVar42 + fVar80 * fVar43;
              fVar86 = fVar44 * fVar84 + fVar59 + local_b0 * fVar75 + fVar86 * fVar31;
              fVar54 = fVar45 * fVar84 + fVar53 + fStack_ac * fVar75 + fVar54 * fVar31;
              fVar57 = fVar46 * fVar84 + fVar81 + fStack_a8 * fVar75 + fVar57 * fVar31;
            }
          }
        }
      }
      auVar60 = *(undefined1 (*) [16])(param_1 + 0x1a0);
      fVar80 = auVar60._0_4_;
      fVar56 = auVar49._0_4_;
      fVar59 = auVar49._4_4_;
      fVar66 = auVar49._8_4_;
      fVar53 = auVar49._12_4_ * auVar49._12_4_;
      fVar78 = auVar60._4_4_;
      auVar35._0_4_ = fVar56 * fVar56 + fVar59 * fVar59;
      auVar35._4_4_ = fVar66 * fVar66 + fVar53;
      auVar35._8_4_ = fVar56 * fVar56 + fVar59 * fVar59;
      auVar35._12_4_ = fVar66 * fVar66 + fVar53;
      fVar53 = auVar60._8_4_;
      fVar83 = auVar65._0_4_;
      fVar84 = auVar65._4_4_;
      fVar75 = auVar65._8_4_;
      auVar50 = NEON_ext(auVar35,auVar35,4,1);
      auVar36._0_4_ = fVar55 * fVar55 + fVar67 * fVar67;
      auVar36._4_4_ = fVar79 * fVar79 + fVar58 * fVar58;
      auVar36._8_4_ = fVar55 * fVar55 + fVar67 * fVar67;
      auVar36._12_4_ = fVar79 * fVar79 + fVar58 * fVar58;
      fVar58 = SQRT(auVar50._0_4_ + auVar50._4_4_);
      auVar50 = NEON_ext(auVar36,auVar36,4,1);
      fVar81 = auVar65._12_4_ * auVar65._12_4_;
      auVar37._0_4_ = fVar83 * fVar83 + fVar84 * fVar84;
      auVar37._4_4_ = fVar75 * fVar75 + fVar81;
      auVar37._8_4_ = fVar83 * fVar83 + fVar84 * fVar84;
      auVar37._12_4_ = fVar75 * fVar75 + fVar81;
      fVar31 = SQRT(auVar50._0_4_ + auVar50._4_4_);
      auVar50 = NEON_ext(auVar37,auVar37,4,1);
      fVar81 = SQRT(auVar50._0_4_ + auVar50._4_4_);
      fVar58 = (float)((uint)fVar58 ^
                      ((uint)fVar58 ^ (uint)fVar31) & (int)(short)-(ushort)(fVar58 < fVar31));
      *(ulong *)(param_1 + 0x1b8) =
           CONCAT44((float)((uint)fVar58 ^ ((uint)fVar58 ^ (uint)fVar81) & -(uint)(fVar58 < fVar81))
                    * auVar60._12_4_,fVar57 + fVar66 * fVar80 + fVar79 * fVar78 + fVar75 * fVar53);
      *(ulong *)(param_1 + 0x1b0) =
           CONCAT44(fVar54 + fVar59 * fVar80 + fVar67 * fVar78 + fVar84 * fVar53,
                    fVar86 + fVar56 * fVar80 + fVar55 * fVar78 + fVar83 * fVar53);
    }
    auVar51._8_8_ = uVar85;
    auVar51._0_8_ = uVar82;
    (**(code **)(*(long *)(*(long *)(param_1 + 0x100) + 0x30) + 0x10))(auVar51);
    plVar18 = *(long **)(param_1 + 0x50);
    plVar26 = *(long **)(param_1 + 0x58);
    if (plVar18 != plVar26) {
      pbVar1 = (byte *)(param_1 + 0x1b0);
      bVar47 = -(*(char *)(param_1 + 0x249) == '\0');
      uStack_98 = CONCAT17(*(byte *)(param_1 + 0x1bf) ^ *(byte *)(param_1 + 0x1bf) & bVar47,
                           CONCAT16(*(byte *)(param_1 + 0x1be) ^ *(byte *)(param_1 + 0x1be) & bVar47
                                    ,CONCAT15(*(byte *)(param_1 + 0x1bd) ^
                                              *(byte *)(param_1 + 0x1bd) & bVar47,
                                              CONCAT14(*(byte *)(param_1 + 0x1bc) ^
                                                       *(byte *)(param_1 + 0x1bc) & bVar47,
                                                       CONCAT13(*(byte *)(param_1 + 0x1bb) ^
                                                                (*(byte *)(param_1 + 0x1bb) ^
                                                                *(byte *)(param_1 + 0x1bb)) & bVar47
                                                                ,CONCAT12(*(byte *)(param_1 + 0x1ba)
                                                                          ^ (*(byte *)(param_1 +
                                                                                      0x1ba) ^
                                                                            *(byte *)(param_1 +
                                                                                     0x1ba)) &
                                                                            bVar47,CONCAT11(*(byte *
                                                  )(param_1 + 0x1b9) ^
                                                  (*(byte *)(param_1 + 0x1b9) ^
                                                  *(byte *)(param_1 + 0x1b9)) & bVar47,
                                                  *(byte *)(param_1 + 0x1b8) ^
                                                  (*(byte *)(param_1 + 0x1b8) ^
                                                  *(byte *)(param_1 + 0x1b8)) & bVar47)))))));
      local_a0._0_4_ =
           (float)CONCAT13(*(byte *)(param_1 + 0x1b3) ^
                           (*(byte *)(param_1 + 0x1b3) ^ *(byte *)(param_1 + 0x1b3)) & bVar47,
                           CONCAT12(*(byte *)(param_1 + 0x1b2) ^
                                    (*(byte *)(param_1 + 0x1b2) ^ *(byte *)(param_1 + 0x1b2)) &
                                    bVar47,CONCAT11(*(byte *)(param_1 + 0x1b1) ^
                                                    (*(byte *)(param_1 + 0x1b1) ^
                                                    *(byte *)(param_1 + 0x1b1)) & bVar47,
                                                    *pbVar1 ^ (*pbVar1 ^ *pbVar1) & bVar47)));
      local_a0 = CONCAT17(*(byte *)(param_1 + 0x1b7) ^
                          (*(byte *)(param_1 + 0x1b7) ^ *(byte *)(param_1 + 0x1b7)) & bVar47,
                          CONCAT16(*(byte *)(param_1 + 0x1b6) ^
                                   (*(byte *)(param_1 + 0x1b6) ^ *(byte *)(param_1 + 0x1b6)) &
                                   bVar47,CONCAT15(*(byte *)(param_1 + 0x1b5) ^
                                                   (*(byte *)(param_1 + 0x1b5) ^
                                                   *(byte *)(param_1 + 0x1b5)) & bVar47,
                                                   CONCAT14(*(byte *)(param_1 + 0x1b4) ^
                                                            (*(byte *)(param_1 + 0x1b4) ^
                                                            *(byte *)(param_1 + 0x1b4)) & bVar47,
                                                            (float)local_a0))));
      do {
        lVar29 = *plVar18;
        plVar3 = (long *)(lVar29 + 0x70);
        lVar27 = nn::os::GetCurrentThread();
        do {
          lVar20 = *plVar3;
          lVar21 = *(long *)(lVar29 + 0x78);
          cVar7 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar15) {
            *plVar3 = lVar20;
            *(long *)(lVar29 + 0x78) = lVar21;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
LAB_00c4c12c:
        while ((lVar20 != 0 && (lVar27 != lVar20))) {
          nn::os::WaitLightEvent((LightEventType *)(lVar29 + 0x80));
          do {
            lVar20 = *plVar3;
            lVar21 = *(long *)(lVar29 + 0x78);
            cVar7 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar15) {
              *plVar3 = lVar20;
              *(long *)(lVar29 + 0x78) = lVar21;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        do {
          lVar5 = *plVar3;
          if (lVar5 != lVar20 || *(long *)(lVar29 + 0x78) != lVar21) {
            bVar15 = false;
            ClearExclusiveLocal();
            goto LAB_00c4c15c;
          }
          cVar7 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar15) {
            *plVar3 = lVar20;
            *(long *)(lVar29 + 0x74) = lVar21 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar15 = true;
LAB_00c4c15c:
        if (!bVar15) {
          lVar20 = lVar5;
          lVar21 = *(long *)(lVar29 + 0x78);
          goto LAB_00c4c12c;
        }
        if ((int)((ulong)(*(long *)(lVar29 + 0x38) - (long)*(long **)(lVar29 + 0x30)) >> 3) != 0) {
          lVar27 = **(long **)(lVar29 + 0x30);
          *(undefined8 *)(lVar27 + 0xe8) = uStack_98;
          *(undefined8 *)(lVar27 + 0xe0) = local_a0;
          if ((*(long *)(lVar29 + 0x38) - *(long *)(lVar29 + 0x30) & 0x7fffffff0U) != 0) {
            lVar27 = *(long *)(*(long *)(lVar29 + 0x30) + 8);
            *(undefined8 *)(lVar27 + 0xe8) = uStack_98;
            *(undefined8 *)(lVar27 + 0xe0) = local_a0;
            if (0x10 < (*(long *)(lVar29 + 0x38) - *(long *)(lVar29 + 0x30) & 0x7fffffff8U)) {
              lVar27 = *(long *)(*(long *)(lVar29 + 0x30) + 0x10);
              *(undefined8 *)(lVar27 + 0xe8) = uStack_98;
              *(undefined8 *)(lVar27 + 0xe0) = local_a0;
              lVar27 = *(long *)(lVar29 + 0x30);
              if ((*(long *)(lVar29 + 0x38) - lVar27 & 0x7ffffffe0U) != 0) {
                uVar22 = 3;
                do {
                  lVar27 = *(long *)(lVar27 + uVar22 * 8);
                  *(undefined8 *)(lVar27 + 0xe8) = uStack_98;
                  *(undefined8 *)(lVar27 + 0xe0) = local_a0;
                  lVar27 = *(long *)(lVar29 + 0x30);
                  uVar22 = uVar22 + 1;
                } while (uVar22 < ((ulong)(*(long *)(lVar29 + 0x38) - lVar27) >> 3 & 0xffffffff));
              }
            }
          }
        }
        do {
          lVar27 = *plVar3;
          lVar20 = *(long *)(lVar29 + 0x78);
          cVar7 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar15) {
            *plVar3 = lVar27;
            *(long *)(lVar29 + 0x78) = lVar20;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        do {
          lVar21 = *plVar3;
          lVar5 = *(long *)(lVar29 + 0x78);
          if (lVar21 != lVar27 || lVar5 != lVar20) {
            bVar15 = false;
            ClearExclusiveLocal();
            goto joined_r0x00c4c220;
          }
          cVar7 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar15) {
            *plVar3 = lVar27;
            *(long *)(lVar29 + 0x74) = lVar20 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar15 = true;
joined_r0x00c4c220:
        if (!bVar15) {
          do {
            lVar27 = *plVar3;
            lVar20 = *(long *)(lVar29 + 0x78);
            if (lVar27 != lVar21 || lVar20 != lVar5) {
              bVar15 = false;
              ClearExclusiveLocal();
              lVar21 = lVar27;
              lVar5 = lVar20;
              goto joined_r0x00c4c220;
            }
            cVar7 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar15) {
              *plVar3 = lVar21;
              *(long *)(lVar29 + 0x74) = lVar5 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          bVar15 = true;
          lVar21 = lVar27;
          lVar5 = lVar20;
          goto joined_r0x00c4c220;
        }
        nn::os::SignalLightEvent((LightEventType *)(lVar29 + 0x80));
        plVar18 = plVar18 + 1;
      } while (plVar18 != plVar26);
    }
    uVar17 = 1;
    *(undefined1 *)(param_1 + 0x248) = 0;
  }
  else {
    auVar52._8_8_ = uVar85;
    auVar52._0_8_ = uVar82;
    plVar18 = (long *)(*(long *)(param_1 + 0x100) + 0x30);
    (**(code **)(*plVar18 + 0x10))(auVar52,plVar18,iVar19);
    uVar17 = 0;
  }
  return uVar17;
LAB_00c4be08:
  if (-1 < (short)plVar26[6]) {
    iVar19 = (uint)*(ushort *)((long)plVar18 + 10) + (int)(short)plVar26[6];
    goto LAB_00c4be20;
  }
LAB_00c4be10:
  plVar18 = plVar18 + 2;
  if (plVar18 == *(long **)(lVar27 + 0x38)) goto LAB_00c4be1c;
  goto LAB_00c4bd14;
}


