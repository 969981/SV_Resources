/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029f9218; name: FUN_029f9218
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_029f9218(long param_1,undefined8 *param_2)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  ushort *puVar6;
  undefined1 (*pauVar7) [16];
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined1 (*pauVar17) [16];
  ulong uVar18;
  byte *pbVar19;
  ushort uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  float *pfVar25;
  uint uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  int iVar30;
  undefined8 uVar31;
  int iVar32;
  int iVar33;
  undefined8 uVar34;
  int iVar35;
  float fVar36;
  float fVar42;
  float fVar43;
  undefined1 auVar37 [16];
  float fVar44;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar52;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar53;
  float fVar54;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar66;
  float fVar67;
  float fVar68;
  undefined1 auVar65 [16];
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar75;
  undefined8 uVar74;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar80;
  undefined8 uVar79;
  float fVar81;
  float fVar82;
  float fVar84;
  float fVar85;
  undefined8 uVar83;
  float fVar86;
  float fVar88;
  undefined8 uVar87;
  float fVar89;
  float fVar90;
  float fVar91;
  float fStack_1a4;
  float fStack_194;
  float fStack_184;
  float fStack_174;
  float fStack_164;
  float fStack_154;
  float fStack_144;
  float fStack_134;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  byte local_c8 [4];
  int local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  if (*(int *)(param_1 + 0xf0) == 5) {
    uVar12 = 3;
    goto LAB_029f9368;
  }
  if (*(int *)(param_1 + 0xf0) != 4) {
    auVar37 = *(undefined1 (*) [16])(param_1 + 0x30);
    pauVar1 = (undefined1 (*) [16])(param_1 + 0x20);
    uVar34 = *(undefined8 *)(param_1 + 0x28);
    uVar31 = *(undefined8 *)*pauVar1;
    auVar65 = *pauVar1;
    auVar64 = *pauVar1;
    memcpy(&local_c0,(void *)(param_1 + 0x40),0x40);
    iVar8 = *(int *)(param_1 + 0x80);
    iVar9 = *(int *)(param_1 + 0x84);
    puVar3 = (undefined8 *)(param_1 + 0x88);
    lVar24 = (long)iVar8;
    if (puVar3 != param_2 + 9) {
      FUN_03058490();
      FUN_03058490(puVar3);
      uVar14 = param_2[9];
      param_2[9] = *(undefined8 *)(param_1 + 0x88);
      *(undefined8 *)(param_1 + 0x88) = uVar14;
      uVar12 = *(undefined4 *)(param_2 + 10);
      *(undefined4 *)(param_2 + 10) = *(undefined4 *)(param_1 + 0x90);
      *(undefined4 *)(param_1 + 0x90) = uVar12;
      uVar12 = *(undefined4 *)((long)param_2 + 0x54);
      *(undefined4 *)((long)param_2 + 0x54) = *(undefined4 *)(param_1 + 0x94);
      *(undefined4 *)(param_1 + 0x94) = uVar12;
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
    lVar28 = *(long *)(*(long *)(param_1 + 0xf8) + 0x18);
    puVar15 = (undefined8 *)(lVar28 + lVar24 * 0x90);
    puVar4 = puVar15;
    if (iVar9 == 0) {
      puVar4 = puVar15 + 2;
    }
    fVar53 = (float)puVar4[1];
    fVar52 = (float)((ulong)puVar4[1] >> 0x20);
    fVar91 = (float)*puVar4;
    fVar43 = (float)((ulong)*puVar4 >> 0x20);
    fVar81 = (float)local_c0;
    fVar84 = (float)((ulong)local_c0 >> 0x20);
    fVar36 = auStack_b0._0_4_;
    fVar42 = auStack_b0._4_4_;
    fVar44 = auStack_b0._8_4_;
    fVar78 = (float)uStack_90;
    fVar80 = (float)((ulong)uStack_90 >> 0x20);
    fVar59 = (float)local_a0;
    fVar61 = (float)((ulong)local_a0 >> 0x20);
    fVar89 = fVar78 + fVar81 * fVar91 + fVar36 * fVar43 + fVar59 * fVar53;
    fVar90 = fVar80 + fVar84 * fVar91 + fVar42 * fVar43 + fVar61 * fVar53;
    uVar14 = CONCAT44(fVar90,fVar89);
    fVar91 = (float)uStack_88 + (float)uStack_b8 * fVar91 + fVar44 * fVar43 +
             (float)uStack_98 * fVar53;
    param_2[1] = uVar34;
    *param_2 = uVar31;
    param_2[3] = auVar37._8_8_;
    param_2[2] = auVar37._0_8_;
    param_2[5] = CONCAT44(fVar52,fVar91);
    param_2[4] = uVar14;
    iVar30 = -(uint)((float)*puVar15 == *(float *)(puVar15 + 2));
    iVar32 = -(uint)((float)((ulong)*puVar15 >> 0x20) == *(float *)((long)puVar15 + 0x14));
    iVar33 = -(uint)((float)puVar15[1] == *(float *)(puVar15 + 3));
    iVar35 = -(uint)((float)((ulong)puVar15[1] >> 0x20) == *(float *)((long)puVar15 + 0x1c));
    if (CONCAT13((byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar30 >> 0x18) &
                 (byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar35 >> 0x18),
                 CONCAT12((byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar30 >> 0x10) &
                          (byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar35 >> 0x10),
                          CONCAT11((byte)((uint)iVar32 >> 8) & (byte)((uint)iVar30 >> 8) &
                                   (byte)((uint)iVar33 >> 8) & (byte)((uint)iVar35 >> 8),
                                   (byte)iVar32 & (byte)iVar30 & (byte)iVar33 & (byte)iVar35))) != 0
       ) {
      FUN_03057778(param_1,0,param_2);
      uVar12 = 1;
      goto LAB_029f9368;
    }
    fVar89 = auVar37._0_4_ - fVar89;
    fVar90 = auVar37._4_4_ - fVar90;
    fVar43 = auVar37._8_4_ - fVar91;
    pfVar25 = (float *)(param_1 + 0x10);
    fVar53 = fVar89 * *pfVar25;
    fVar58 = fVar90 * *(float *)(param_1 + 0x14);
    fVar60 = fVar43 * *(float *)(param_1 + 0x18);
    fVar54 = fVar53 + fVar58 + fVar60;
    fVar60 = fVar53 + fVar58 + fVar60;
    fVar89 = fVar89 - *pfVar25 * fVar54;
    fVar90 = fVar90 - *(float *)(param_1 + 0x14) * fVar60;
    fVar43 = fVar43 - *(float *)(param_1 + 0x18) * fVar54;
    fVar53 = (auVar37._12_4_ - fVar52) - *(float *)(param_1 + 0x1c) * fVar60;
    auVar37._0_4_ = fVar89 * fVar89;
    auVar37._4_4_ = fVar90 * fVar90;
    auVar37._8_4_ = fVar43 * fVar43;
    auVar37._12_4_ = fVar53 * fVar53;
    auVar45 = NEON_ext(auVar37,auVar37,8,1);
    if (fVar52 * fVar52 * 0.7853982 <= auVar37._0_4_ + auVar37._4_4_ + auVar45._0_4_) {
      lVar27 = *(long *)(param_1 + 0xf8);
      lVar29 = *(long *)(lVar27 + 0x18);
      lVar16 = lVar29 + lVar24 * 0x90;
      puVar6 = (ushort *)(lVar16 + 0x7c);
      if (iVar9 == 0) {
        puVar6 = (ushort *)(lVar16 + 0x7e);
      }
      uVar20 = *puVar6;
      fStack_154 = auStack_b0._12_4_;
      if ((short)uVar20 < 0) {
        if ((uVar20 >> 0xe & 1) != 0) {
          local_c4 = iVar8 + (uVar20 & 0x1fff);
          uVar13 = uVar20 >> 0xd & 1;
          local_c8[0] = (byte)uVar13;
          goto LAB_029f94f0;
        }
      }
      else {
        uVar13 = FUN_0305d6dc(lVar27,iVar8,iVar9 != 0,&local_c4,local_c8);
        if ((5 < uVar13) || ((1 << (ulong)(uVar13 & 0x1f) & 0x32U) == 0)) {
          lVar16 = *(long *)(lVar27 + 0x18) + lVar24 * 0x90;
          uVar13 = (uint)local_c8[0];
          puVar6 = (ushort *)(lVar16 + 0x7c);
          if (iVar9 == 0) {
            puVar6 = (ushort *)(lVar16 + 0x7e);
          }
          uVar20 = 0xc000;
          if (uVar13 != 0) {
            uVar20 = 0xe000;
          }
          *puVar6 = uVar20 | (short)local_c4 - (short)iVar8;
          lVar29 = *(long *)(*(long *)(param_1 + 0xf8) + 0x18);
LAB_029f94f0:
          iVar9 = local_c4;
          uVar26 = *(byte *)(lVar29 + lVar24 * 0x90 + 0x80) >> 4 & 1;
          uVar31 = uStack_88;
          if (iVar8 == local_c4) {
            lVar27 = lVar24;
            auVar37 = auStack_b0;
            uVar74 = local_a0;
            uVar34 = uStack_98;
            uVar79 = uStack_90;
            uVar83 = local_c0;
            uVar87 = uStack_b8;
          }
          else {
            lVar27 = (long)local_c4;
            lVar16 = lVar27 - lVar24;
            pbVar19 = (byte *)(lVar29 + lVar24 * 0x90 + 0x110);
            uVar34 = uStack_98;
            uVar87 = uStack_b8;
            do {
              fVar89 = *(float *)(pbVar19 + -0xe0);
              fVar90 = *(float *)(pbVar19 + -0xdc);
              fVar43 = *(float *)(pbVar19 + -0xd8);
              fVar53 = *(float *)(pbVar19 + -0xd0);
              fVar54 = *(float *)(pbVar19 + -0xcc);
              fVar58 = *(float *)(pbVar19 + -200);
              fVar82 = (float)local_c0;
              fVar85 = (float)((ulong)local_c0 >> 0x20);
              fVar86 = (float)uVar87;
              fVar88 = (float)((ulong)uVar87 >> 0x20);
              fVar60 = auStack_b0._0_4_;
              fVar66 = auStack_b0._4_4_;
              fVar67 = auStack_b0._8_4_;
              fVar68 = auStack_b0._12_4_;
              lVar16 = lVar16 + -1;
              fVar73 = (float)local_a0;
              fVar75 = (float)((ulong)local_a0 >> 0x20);
              fVar76 = (float)uVar34;
              fVar77 = (float)((ulong)uVar34 >> 0x20);
              fVar71 = (float)*(undefined8 *)(pbVar19 + -0xa8);
              fVar69 = (float)*(undefined8 *)(pbVar19 + -0xb0);
              fVar70 = (float)((ulong)*(undefined8 *)(pbVar19 + -0xb0) >> 0x20);
              fVar72 = (float)*(undefined8 *)(pbVar19 + -0xc0);
              uVar26 = uVar26 | (*pbVar19 & 0x10) >> 4;
              local_c0 = CONCAT44(fVar75 * fVar43 + fVar85 * fVar89 + fVar66 * fVar90,
                                  fVar73 * fVar43 + fVar82 * fVar89 + fVar60 * fVar90);
              uVar87 = CONCAT44(fVar77 * fVar43 + fVar88 * fVar89 + fVar68 * fVar90,
                                fVar76 * fVar43 + fVar86 * fVar89 + fVar67 * fVar90);
              fVar89 = (float)((ulong)*(undefined8 *)(pbVar19 + -0xc0) >> 0x20);
              fVar90 = (float)*(undefined8 *)(pbVar19 + -0xb8);
              auStack_b0._0_4_ = fVar73 * fVar58 + fVar82 * fVar53 + fVar60 * fVar54;
              auStack_b0._4_4_ = fVar75 * fVar58 + fVar85 * fVar53 + fVar66 * fVar54;
              auStack_b0._8_4_ = fVar76 * fVar58 + fVar86 * fVar53 + fVar67 * fVar54;
              auStack_b0._12_4_ = fVar77 * fVar58 + fVar88 * fVar53 + fVar68 * fVar54;
              local_a0 = CONCAT44(fVar75 * fVar90 + fVar85 * fVar72 + fVar66 * fVar89,
                                  fVar73 * fVar90 + fVar82 * fVar72 + fVar60 * fVar89);
              uVar34 = CONCAT44(fVar77 * fVar90 + fVar88 * fVar72 + fVar68 * fVar89,
                                fVar76 * fVar90 + fVar86 * fVar72 + fVar67 * fVar89);
              uStack_90 = CONCAT44(fVar75 * fVar71 +
                                   fVar66 * fVar70 +
                                   (float)((ulong)uStack_90 >> 0x20) + fVar85 * fVar69,
                                   fVar73 * fVar71 +
                                   fVar60 * fVar70 + (float)uStack_90 + fVar82 * fVar69);
              uVar31 = CONCAT44(fVar77 * fVar71 +
                                fVar68 * fVar70 + (float)((ulong)uVar31 >> 0x20) + fVar88 * fVar69,
                                fVar76 * fVar71 + fVar67 * fVar70 + (float)uVar31 + fVar86 * fVar69)
              ;
              pbVar19 = pbVar19 + 0x90;
            } while (lVar16 != 0);
            auVar37 = auStack_b0;
            uVar74 = local_a0;
            uVar79 = uStack_90;
            uVar83 = local_c0;
          }
          pauVar17 = (undefined1 (*) [16])(lVar29 + lVar27 * 0x90);
          uStack_e8 = CONCAT44(-fVar52,fVar91);
          pauVar7 = pauVar17 + 1;
          if (uVar13 != 0) {
            pauVar7 = pauVar17;
          }
          auVar45 = *pauVar7;
          fVar89 = auVar45._0_4_;
          fVar52 = (float)((ulong)uVar83 >> 0x20);
          fVar90 = auVar45._4_4_;
          fVar53 = (float)((ulong)uVar79 >> 0x20);
          fVar91 = auVar45._8_4_;
          fVar43 = (float)((ulong)uVar74 >> 0x20);
          auVar62._0_8_ =
               CONCAT44(fVar43 * fVar91 + auVar37._4_4_ * fVar90 + fVar53 + fVar52 * fVar89,
                        (float)uVar74 * fVar91 +
                        auVar37._0_4_ * fVar90 + (float)uVar79 + (float)uVar83 * fVar89);
          auVar62._8_4_ =
               (float)uVar34 * fVar91 +
               auVar37._8_4_ * fVar90 + (float)uVar31 + (float)uVar87 * fVar89;
          auVar62._12_4_ = auVar45._12_4_;
          uStack_d8 = auVar62._8_8_;
          local_f0 = uVar14;
          uStack_e0 = auVar62._0_8_;
          FUN_03058024(&local_f0,&uStack_e0,pfVar25,&local_100,&local_110);
          uVar10 = *(uint *)(lVar28 + lVar24 * 0x90 + 0x70);
          uVar18 = (ulong)uVar10;
          lVar16 = *(long *)(param_1 + 0x100);
          if ((uVar10 != 0xffffffff) && (*(short *)(lVar28 + lVar24 * 0x90 + 0x78) != -1)) {
            if (lVar16 == 0) {
              lVar16 = _DAT_00000038;
            }
            else {
              lVar16 = *(long *)(lVar16 + 0x38);
              lVar21 = *(long *)(*(long *)(lVar16 + ((ulong)(uVar10 >> 0xe) & 0x3ff00)) + 0x20);
              uVar18 = uVar18 & 0x3fffff;
              uVar11 = *(uint *)(*(long *)(lVar21 + 0x168) + uVar18 * 4);
              if ((int)uVar11 < 0) {
                if ((*(int *)(lVar21 + 0x108) != 0) &&
                   ((*(byte *)(*(long *)(lVar21 + 0x100) + uVar18) & 1) != 0)) goto LAB_029f96f8;
                if (*(short *)(lVar28 + lVar24 * 0x90 + 0x74) != -1) {
                  uVar10 = 0xffffffff;
                }
                uVar18 = (ulong)uVar10;
              }
              else {
                iVar30 = *(int *)(lVar21 + 0x170);
                lVar22 = (long)iVar30;
                if (iVar30 <= (int)(uVar11 + 1)) {
                  iVar30 = uVar11 + 1;
                }
                lVar23 = (ulong)uVar11 + 1;
                do {
                  if (lVar22 <= lVar23) goto LAB_029f9694;
                  lVar2 = lVar23 * 4;
                  lVar23 = lVar23 + 1;
                } while (*(int *)(*(long *)(lVar21 + 0x168) + lVar2) == (int)uVar18);
                iVar30 = (int)lVar23 + -1;
LAB_029f9694:
                iVar32 = (int)*(short *)(lVar28 + lVar24 * 0x90 + 0x74);
                if ((iVar32 == -1) || (uVar11 = uVar11 + iVar32, iVar30 <= (int)uVar11)) {
LAB_029f96f8:
                  uVar18 = 0xffffffff;
                }
                else {
                  uVar18 = (ulong)(uVar11 | uVar10 & 0xffc00000);
                }
              }
            }
            FUN_0309bf90(*(undefined8 *)(*(long *)(lVar16 + (uVar18 >> 0x16) * 0x100) + 0x20),
                         (uint)uVar18 & 0x3fffff,&local_80);
            fStack_144 = (float)((ulong)uStack_b8 >> 0x20);
            fVar89 = (float)local_80;
            fVar90 = (float)((ulong)local_80 >> 0x20);
            fStack_164 = (float)((ulong)uStack_98 >> 0x20);
            fVar91 = (float)uStack_78;
            fVar36 = fVar59 * fVar91 + fVar81 * fVar89 + fVar36 * fVar90;
            fVar42 = fVar61 * fVar91 + fVar84 * fVar89 + fVar42 * fVar90;
            fVar44 = (float)uStack_98 * fVar91 + (float)uStack_b8 * fVar89 + fVar44 * fVar90;
            fStack_134 = (float)((ulong)uStack_88 >> 0x20);
            auVar46._0_4_ = fVar78 * fVar36;
            auVar46._4_4_ = fVar80 * fVar42;
            auVar46._8_4_ = (float)uStack_88 * fVar44;
            auVar46._12_4_ =
                 fStack_134 * (fStack_164 * fVar91 + fStack_144 * fVar89 + fStack_154 * fVar90);
            auVar45 = NEON_ext(auVar46,auVar46,8,1);
            fVar89 = (float)((ulong)uStack_78 >> 0x20) -
                     (auVar46._0_4_ + auVar46._4_4_ + auVar45._0_4_);
            fVar91 = *(float *)(param_1 + 0x10) * fVar36;
            fVar59 = *(float *)(param_1 + 0x14) * fVar42;
            fVar61 = *(float *)(param_1 + 0x18) * fVar44;
            auVar45._0_4_ = (float)local_100 * fVar36;
            auVar45._4_4_ = local_100._4_4_ * fVar42;
            auVar45._8_4_ = (float)uStack_f8 * fVar44;
            auVar45._12_4_ = uStack_f8._4_4_ * fVar89;
            auVar62 = NEON_ext(auVar45,auVar45,8,1);
            fVar89 = auVar62._0_4_ + fVar89;
            fVar90 = -(auVar45._0_4_ + auVar45._4_4_ + fVar89) / (fVar91 + fVar59 + fVar61);
            fVar89 = -(auVar45._0_4_ + auVar45._4_4_ + fVar89) / (fVar91 + fVar59 + fVar61);
            local_100 = CONCAT44(local_100._4_4_ + *(float *)(param_1 + 0x14) * fVar89,
                                 (float)local_100 + *(float *)(param_1 + 0x10) * fVar90);
            uStack_f8 = CONCAT44(uStack_f8._4_4_ + *(float *)(param_1 + 0x1c) * fVar89,
                                 (float)uStack_f8 + *(float *)(param_1 + 0x18) * fVar90);
            lVar16 = *(long *)(param_1 + 0x100);
          }
          uVar10 = *(uint *)(lVar29 + lVar27 * 0x90 + 0x70);
          uVar18 = (ulong)uVar10;
          auVar45 = *pauVar1;
          if ((uVar10 == 0xffffffff) || (*(short *)(lVar29 + lVar27 * 0x90 + 0x78) == -1))
          goto LAB_029f9934;
          if (lVar16 == 0) {
            lVar24 = _DAT_00000038;
          }
          else {
            lVar24 = *(long *)(lVar16 + 0x38);
            lVar28 = *(long *)(*(long *)(lVar24 + ((ulong)(uVar10 >> 0xe) & 0x3ff00)) + 0x20);
            uVar18 = uVar18 & 0x3fffff;
            uVar11 = *(uint *)(*(long *)(lVar28 + 0x168) + uVar18 * 4);
            if ((int)uVar11 < 0) {
              if ((*(int *)(lVar28 + 0x108) != 0) &&
                 ((*(byte *)(*(long *)(lVar28 + 0x100) + uVar18) & 1) != 0)) goto LAB_029f988c;
              if (*(short *)(lVar29 + lVar27 * 0x90 + 0x74) != -1) {
                uVar10 = 0xffffffff;
              }
              uVar18 = (ulong)uVar10;
            }
            else {
              iVar30 = *(int *)(lVar28 + 0x170);
              lVar16 = (long)iVar30;
              if (iVar30 <= (int)(uVar11 + 1)) {
                iVar30 = uVar11 + 1;
              }
              lVar21 = (ulong)uVar11 + 1;
              do {
                if (lVar16 <= lVar21) goto LAB_029f9828;
                lVar22 = lVar21 * 4;
                lVar21 = lVar21 + 1;
              } while (*(int *)(*(long *)(lVar28 + 0x168) + lVar22) == (int)uVar18);
              iVar30 = (int)lVar21 + -1;
LAB_029f9828:
              iVar32 = (int)*(short *)(lVar29 + lVar27 * 0x90 + 0x74);
              if ((iVar32 == -1) || (uVar11 = uVar11 + iVar32, iVar30 <= (int)uVar11)) {
LAB_029f988c:
                uVar18 = 0xffffffff;
              }
              else {
                uVar18 = (ulong)(uVar11 | uVar10 & 0xffc00000);
              }
            }
          }
          FUN_0309bf90(*(undefined8 *)(*(long *)(lVar24 + (uVar18 >> 0x16) * 0x100) + 0x20),
                       (uint)uVar18 & 0x3fffff,&local_80);
          fStack_1a4 = (float)((ulong)uVar87 >> 0x20);
          fStack_194 = auVar37._12_4_;
          fVar90 = (float)((ulong)local_80 >> 0x20);
          fVar89 = (float)local_80;
          fStack_184 = (float)((ulong)uVar34 >> 0x20);
          fVar36 = (float)uStack_78;
          fVar42 = (float)uVar74 * fVar36 + (float)uVar83 * fVar89 + auVar37._0_4_ * fVar90;
          fVar44 = fVar43 * fVar36 + fVar52 * fVar89 + auVar37._4_4_ * fVar90;
          fVar91 = (float)uVar34 * fVar36 + (float)uVar87 * fVar89 + auVar37._8_4_ * fVar90;
          fStack_174 = (float)((ulong)uVar31 >> 0x20);
          auVar47._0_4_ = (float)uVar79 * fVar42;
          auVar47._4_4_ = fVar53 * fVar44;
          auVar47._8_4_ = (float)uVar31 * fVar91;
          auVar47._12_4_ =
               fStack_174 * (fStack_184 * fVar36 + fStack_1a4 * fVar89 + fStack_194 * fVar90);
          auVar45 = NEON_ext(auVar47,auVar47,8,1);
          fVar89 = (float)((ulong)uStack_78 >> 0x20) -
                   (auVar47._0_4_ + auVar47._4_4_ + auVar45._0_4_);
          fVar36 = *pfVar25 * fVar42;
          fVar43 = *(float *)(param_1 + 0x14) * fVar44;
          fVar53 = *(float *)(param_1 + 0x18) * fVar91;
          auVar38._0_4_ = local_110 * fVar42;
          auVar38._4_4_ = fStack_10c * fVar44;
          auVar38._8_4_ = fStack_108 * fVar91;
          auVar38._12_4_ = fStack_104 * fVar89;
          auVar45 = NEON_ext(auVar38,auVar38,8,1);
          fVar89 = auVar45._0_4_ + fVar89;
          fVar90 = -(auVar38._0_4_ + auVar38._4_4_ + fVar89) / (fVar36 + fVar43 + fVar53);
          fVar89 = -(auVar38._0_4_ + auVar38._4_4_ + fVar89) / (fVar36 + fVar43 + fVar53);
          local_110 = local_110 + *pfVar25 * fVar90;
          fStack_10c = fStack_10c + *(float *)(param_1 + 0x14) * fVar89;
          fStack_108 = fStack_108 + *(float *)(param_1 + 0x18) * fVar90;
          fStack_104 = fStack_104 + *(float *)(param_1 + 0x1c) * fVar89;
          auVar45 = auVar64;
LAB_029f9934:
          auVar63._0_8_ =
               CONCAT44(fStack_10c - (float)((ulong)local_100 >> 0x20),local_110 - (float)local_100)
          ;
          auVar63._8_4_ = fStack_108 - (float)uStack_f8;
          auVar63._12_4_ = fStack_104 - (float)((ulong)uStack_f8 >> 0x20);
          uVar14 = auVar63._8_8_;
          auVar64 = auVar63;
          local_80 = auVar63._0_8_;
          uStack_78 = uVar14;
          if (uVar26 != 0) {
            FUN_030574fc(param_1,iVar8 + 1,iVar9 + 1,&local_100,&local_80,&local_c0,puVar3);
            auVar64._8_8_ = uVar14;
            auVar64._0_8_ = auVar63._0_8_;
            auVar45 = auVar65;
          }
          param_2[7] = uStack_f8;
          param_2[6] = local_100;
          fVar89 = (float)*(undefined8 *)(param_1 + 0x10);
          fVar44 = auVar45._0_4_ * fVar89;
          fVar36 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
          fVar43 = auVar45._4_4_ * fVar36;
          fVar42 = (float)*(undefined8 *)(param_1 + 0x18);
          fVar53 = auVar45._8_4_ * fVar42;
          fVar90 = (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
          fVar91 = fVar44 + fVar43 + fVar53;
          fVar53 = fVar44 + fVar43 + fVar53;
          fVar44 = auVar64._0_4_ * fVar89;
          fVar43 = auVar64._4_4_ * fVar36;
          fVar52 = auVar64._8_4_ * fVar42;
          auVar39._0_4_ = auVar45._0_4_ - fVar89 * fVar91;
          auVar39._4_4_ = auVar45._4_4_ - fVar36 * fVar53;
          auVar39._8_4_ = auVar45._8_4_ - fVar42 * fVar91;
          auVar39._12_4_ = auVar45._12_4_ - fVar90 * fVar53;
          fVar91 = fVar52 + fVar44 + fVar43;
          fVar52 = fVar52 + fVar44 + fVar43;
          auVar48._0_4_ = auVar64._0_4_ - fVar89 * fVar91;
          auVar48._4_4_ = auVar64._4_4_ - fVar36 * fVar52;
          auVar48._8_4_ = auVar64._8_4_ - fVar42 * fVar91;
          auVar48._12_4_ = auVar64._12_4_ - fVar90 * fVar52;
          auVar64 = NEON_ext(auVar39,auVar39,4,1);
          auVar65 = NEON_ext(auVar48,auVar48,4,1);
          auVar40._0_4_ = auVar39._0_4_ * auVar65._0_4_ - auVar48._0_4_ * auVar64._0_4_;
          auVar40._4_4_ = auVar39._4_4_ * auVar65._4_4_ - auVar48._4_4_ * auVar64._4_4_;
          auVar40._8_4_ = auVar39._8_4_ * auVar48._0_4_ - auVar48._8_4_ * auVar39._0_4_;
          auVar40._12_4_ = auVar39._12_4_ * auVar48._4_4_ - auVar48._12_4_ * auVar39._4_4_;
          auVar64 = NEON_ext(auVar40,auVar40,4,1);
          fVar44 = auVar39._0_4_ * auVar48._0_4_ + auVar39._4_4_ * auVar48._4_4_ +
                   auVar39._8_4_ * auVar48._8_4_;
          fVar91 = auVar39._0_4_ * auVar48._0_4_ + auVar39._4_4_ * auVar48._4_4_ +
                   auVar39._8_4_ * auVar48._8_4_;
          fVar89 = fVar89 * auVar64._0_4_;
          fVar36 = fVar36 * auVar64._4_4_;
          fVar90 = fVar89 + fVar36 + fVar42 * auVar40._0_4_;
          fVar89 = fVar89 + fVar36 + fVar42 * auVar40._0_4_;
          auVar49._0_4_ = ABS(fVar44);
          auVar49._4_4_ = ABS(fVar91);
          auVar49._8_4_ = ABS(fVar44);
          auVar49._12_4_ = ABS(fVar91);
          auVar55._0_4_ = ABS(fVar90);
          auVar55._4_4_ = ABS(fVar89);
          auVar55._8_4_ = ABS(fVar90);
          auVar55._12_4_ = ABS(fVar89);
          auVar41._0_4_ = -(uint)(fVar44 <= 0.0);
          auVar41._4_4_ = 0;
          auVar41._8_4_ = -(uint)(fVar44 <= 0.0);
          auVar41._12_4_ = -(uint)(fVar91 <= 0.0);
          auVar45 = NEON_fmax(auVar49,auVar55,4);
          auVar64 = NEON_fmin(auVar49,auVar55,4);
          auVar65._8_4_ = 0x800000;
          auVar65._0_8_ = 0x80000000800000;
          auVar65._12_4_ = 0x800000;
          auVar65 = NEON_fmax(auVar45,auVar65,4);
          auVar50._0_4_ = -(uint)(auVar49._0_4_ < auVar55._0_4_);
          auVar50._4_4_ = -(uint)(auVar49._4_4_ < auVar55._4_4_);
          auVar50._8_4_ = -(uint)(auVar49._8_4_ < auVar55._8_4_);
          auVar50._12_4_ = -(uint)(auVar49._12_4_ < auVar55._12_4_);
          fVar89 = auVar64._0_4_ / auVar65._0_4_;
          fVar36 = auVar64._4_4_ / auVar65._4_4_;
          fVar42 = auVar64._8_4_ / auVar65._8_4_;
          fVar44 = auVar64._12_4_ / auVar65._12_4_;
          fVar91 = fVar89 * fVar89;
          fVar43 = fVar36 * fVar36;
          fVar53 = fVar42 * fVar42;
          fVar52 = fVar44 * fVar44;
          auVar51._0_4_ =
               fVar89 + (fVar91 * (fVar91 + -1.0048817) + 3.768408) *
                        (fVar91 * (fVar91 + -3.8319519) + 5.503148) *
                        fVar89 * fVar91 * (fVar91 * 0.0028662258 + -0.007186844) *
                        (fVar91 * (fVar91 + 1.7041799) + 2.2365003);
          auVar51._4_4_ =
               fVar36 + (fVar43 * (fVar43 + -1.0048817) + 3.768408) *
                        (fVar43 * (fVar43 + -3.8319519) + 5.503148) *
                        fVar36 * fVar43 * (fVar43 * 0.0028662258 + -0.007186844) *
                        (fVar43 * (fVar43 + 1.7041799) + 2.2365003);
          auVar51._8_4_ =
               fVar42 + (fVar53 * (fVar53 + -1.0048817) + 3.768408) *
                        (fVar53 * (fVar53 + -3.8319519) + 5.503148) *
                        fVar42 * fVar53 * (fVar53 * 0.0028662258 + -0.007186844) *
                        (fVar53 * (fVar53 + 1.7041799) + 2.2365003);
          auVar51._12_4_ =
               fVar44 + (fVar52 * (fVar52 + -1.0048817) + 3.768408) *
                        (fVar52 * (fVar52 + -3.8319519) + 5.503148) *
                        fVar44 * fVar52 * (fVar52 * 0.0028662258 + -0.007186844) *
                        (fVar52 * (fVar52 + 1.7041799) + 2.2365003);
          auVar56._0_4_ = 1.5707964 - auVar51._0_4_;
          auVar56._4_4_ = 1.5707964 - auVar51._4_4_;
          auVar56._8_4_ = 1.5707964 - auVar51._8_4_;
          auVar56._12_4_ = 1.5707964 - auVar51._12_4_;
          auVar51 = auVar51 ^ (auVar51 ^ auVar56) & auVar50;
          auVar57._0_4_ = 3.1415927 - auVar51._0_4_;
          auVar57._4_4_ = 0;
          auVar57._8_4_ = 0.0 - auVar51._8_4_;
          auVar57._12_4_ = 0.0 - auVar51._12_4_;
          auVar51 = auVar51 ^ (auVar51 ^ auVar57) & auVar41;
          *(uint *)(param_2 + 8) =
               CONCAT13((byte)(-(uint)(fVar90 < 0.0) >> 0x18) & 0x80 ^ auVar51[3],auVar51._0_3_);
          FUN_03057778(param_1,1,param_2);
          *(undefined4 *)(param_1 + 0xf0) = 0;
          *(undefined8 *)(param_1 + 0x28) = uVar14;
          *(undefined8 *)(param_1 + 0x20) = auVar63._0_8_;
          *(ulong *)(param_1 + 0x38) = CONCAT44(fStack_104,fStack_108);
          *(ulong *)(param_1 + 0x30) = CONCAT44(fStack_10c,local_110);
          *(undefined8 *)(param_1 + 0x48) = uVar87;
          *(undefined8 *)(param_1 + 0x40) = uVar83;
          *(long *)(param_1 + 0x58) = auVar37._8_8_;
          *(long *)(param_1 + 0x50) = auVar37._0_8_;
          *(int *)(param_1 + 0x80) = iVar9;
          *(uint *)(param_1 + 0x84) = uVar13;
          *(undefined8 *)(param_1 + 0x68) = uVar34;
          *(undefined8 *)(param_1 + 0x60) = uVar74;
          *(undefined8 *)(param_1 + 0x78) = uVar31;
          *(undefined8 *)(param_1 + 0x70) = uVar79;
          return 0;
        }
        lVar24 = *(long *)(lVar27 + 0x18) + lVar24 * 0x90;
        puVar5 = (undefined2 *)(lVar24 + 0x7c);
        if (iVar9 == 0) {
          puVar5 = (undefined2 *)(lVar24 + 0x7e);
        }
        *puVar5 = 0x8000;
      }
    }
  }
  uVar12 = 2;
LAB_029f9368:
  *(undefined4 *)(param_1 + 0xf0) = uVar12;
  return uVar12;
}


