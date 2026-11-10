/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e8ce4c; name: FUN_02e8ce4c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02e8ce4c(long *param_1,long *param_2,long *param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 *puVar14;
  float *pfVar15;
  ulong uVar16;
  uint uVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  float *pfVar22;
  void *__src;
  byte *pbVar23;
  undefined4 uVar24;
  uint uVar25;
  float fVar26;
  int iVar27;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar28 [12];
  float fVar33;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar37;
  undefined1 auVar32 [16];
  float fVar38;
  undefined8 uVar40;
  undefined8 uVar41;
  float fVar46;
  int iVar47;
  undefined1 auVar42 [16];
  int iVar39;
  int iVar45;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar51;
  float fVar52;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  undefined8 uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined8 uVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float local_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float local_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float local_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  undefined8 local_1d0;
  ulong uStack_1c8;
  float *local_1c0;
  ulong local_1b8 [5];
  float *local_190;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [32];
  float local_150;
  float fStack_14c;
  float fStack_148;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long local_e0;
  undefined8 local_d8;
  float *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8 [2];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  undefined8 uStack_80;
  
  uVar1 = *(ushort *)((long)param_1 + 0x1c);
  uVar13 = (ulong)uVar1;
  if (uVar13 != 0) {
    lVar11 = param_2[1];
    plVar18 = (long *)(*(long *)(*param_3 + 8) + 0x38);
    lVar20 = *plVar18;
    lVar19 = 0;
    if (*param_1 != 0) {
      lVar19 = *param_1 + (long)param_1;
    }
    lVar21 = 0;
    if (lVar20 != 0) {
      lVar21 = lVar20 + (long)plVar18;
    }
    if ((*(uint *)(lVar21 + ((ulong)(uVar1 >> 3) & 0x1ffc)) >> (ulong)(uVar1 & 0x1f) & 1) != 0) {
      pfVar15 = (float *)(lVar19 + uVar13 * 0x20);
      auVar29._0_4_ =
           ((*pfVar15 - *(float *)(param_3 + 8)) - *(float *)(param_3 + 2)) *
           *(float *)(param_3 + 6);
      auVar29._4_4_ =
           ((pfVar15[1] - *(float *)((long)param_3 + 0x44)) - *(float *)((long)param_3 + 0x14)) *
           *(float *)((long)param_3 + 0x34);
      auVar29._8_4_ =
           ((pfVar15[2] - *(float *)(param_3 + 9)) - *(float *)(param_3 + 3)) *
           *(float *)(param_3 + 7);
      auVar29._12_4_ =
           ((pfVar15[3] - *(float *)((long)param_3 + 0x4c)) - *(float *)((long)param_3 + 0x1c)) *
           *(float *)((long)param_3 + 0x3c);
      auVar31._0_4_ =
           *(float *)(param_3 + 6) *
           ((pfVar15[4] + *(float *)(param_3 + 8)) - *(float *)(param_3 + 2));
      auVar31._4_4_ =
           *(float *)((long)param_3 + 0x34) *
           ((pfVar15[5] + *(float *)((long)param_3 + 0x44)) - *(float *)((long)param_3 + 0x14));
      auVar31._8_4_ =
           *(float *)(param_3 + 7) *
           ((pfVar15[6] + *(float *)(param_3 + 9)) - *(float *)(param_3 + 3));
      auVar31._12_4_ =
           *(float *)((long)param_3 + 0x3c) *
           ((*(float *)((long)param_3 + 0x4c) + 0.0) - *(float *)((long)param_3 + 0x1c));
      auVar48 = NEON_fmin(auVar29,auVar31,4);
      auVar29 = NEON_fmax(auVar29,auVar31,4);
      uVar40 = NEON_fmaxp(auVar48._0_8_,auVar48._0_8_,4);
      uVar41 = NEON_fmax(CONCAT44(auVar48._8_4_,auVar48._8_4_),uVar40,4);
      uVar40 = NEON_fminp(auVar29._0_8_,auVar29._0_8_,4);
      uVar40 = NEON_fmin(CONCAT44(auVar29._8_4_,auVar29._8_4_),uVar40,4);
      uVar41 = NEON_fmax(uVar41,0,4);
      uVar40 = NEON_fmin(uVar40,*(undefined8 *)(*(long *)(*param_3 + 0x48) + 0x10),4);
      if (!(bool)(~((float)uVar41 <= (float)uVar40) & 1)) {
        auVar29 = NEON_fmov(0x3f800000,4);
LAB_02e8cfa0:
        while( true ) {
          uVar1 = *(ushort *)(pfVar15 + 7);
          uVar16 = (ulong)uVar1;
          if (uVar16 == 0) break;
          local_1b8[0]._0_4_ = CONCAT22(local_1b8[0]._2_2_,uVar1);
          lVar19 = 0;
          if (*param_1 != 0) {
            lVar19 = *param_1 + (long)param_1;
          }
          local_1c0 = (float *)(lVar19 + uVar16 * 0x20);
          local_1d0 = *(undefined8 *)(local_1c0 + 4);
          uStack_1c8 = (ulong)(uint)local_1c0[6];
          local_1e0 = *local_1c0;
          fStack_1dc = local_1c0[1];
          fStack_1d8 = local_1c0[2];
          fStack_1d4 = local_1c0[3];
          uVar2 = *(ushort *)((long)pfVar15 + 0x1e);
          local_190 = (float *)(lVar19 + (ulong)uVar2 * 0x20);
          uStack_188 = CONCAT62(uStack_188._2_6_,uVar2);
          local_1b8[4] = (ulong)(uint)local_190[6];
          local_1b8[3] = *(undefined8 *)(local_190 + 4);
          local_1b8[2] = *(ulong *)(local_190 + 2);
          local_1b8[1] = *(ulong *)local_190;
          fVar74 = *(float *)(param_3 + 6);
          fVar75 = *(float *)((long)param_3 + 0x34);
          fVar68 = *(float *)(param_3 + 7);
          fVar46 = *(float *)((long)param_3 + 0x3c);
          fVar76 = (float)param_3[9];
          fVar78 = (float)((ulong)param_3[9] >> 0x20);
          fVar38 = (float)param_3[8];
          fVar52 = (float)((ulong)param_3[8] >> 0x20);
          lVar19 = *param_3;
          fVar77 = (float)param_3[3];
          fVar79 = (float)((ulong)param_3[3] >> 0x20);
          fVar51 = (float)param_3[2];
          fVar53 = (float)((ulong)param_3[2] >> 0x20);
          auVar42._0_4_ = ((local_1e0 - fVar38) - fVar51) * fVar74;
          auVar42._4_4_ = ((fStack_1dc - fVar52) - fVar53) * fVar75;
          auVar42._8_4_ = ((fStack_1d8 - fVar76) - fVar77) * fVar68;
          auVar42._12_4_ = ((fStack_1d4 - fVar78) - fVar79) * fVar46;
          auVar30._0_4_ = fVar74 * ((local_1c0[4] + fVar38) - fVar51);
          auVar30._4_4_ = fVar75 * ((local_1c0[5] + fVar52) - fVar53);
          auVar30._8_4_ = fVar68 * ((local_1c0[6] + fVar76) - fVar77);
          auVar30._12_4_ = fVar46 * ((fVar78 + 0.0) - fVar79);
          auVar48 = NEON_fmin(auVar42,auVar30,4);
          uVar40 = NEON_fmaxp(auVar48._0_8_,auVar48._0_8_,4);
          auVar31 = NEON_fmax(auVar42,auVar30,4);
          uVar40 = NEON_fmax(CONCAT44(auVar48._8_4_,auVar48._8_4_),uVar40,4);
          uVar73 = NEON_fminp(auVar31._0_8_,auVar31._0_8_,4);
          uVar41 = *(undefined8 *)(*(long *)(lVar19 + 0x48) + 0x10);
          uVar73 = NEON_fmin(CONCAT44(auVar31._8_4_,auVar31._8_4_),uVar73,4);
          uVar40 = NEON_fmax(uVar40,0,4);
          uVar73 = NEON_fmin(uVar73,uVar41,4);
          if ((bool)(~((float)uVar40 <= (float)uVar73) & 1)) {
            uVar25 = 0;
          }
          else {
            plVar18 = (long *)(*(long *)(lVar19 + 8) + 0x38);
            lVar21 = *plVar18;
            lVar20 = 0;
            if (lVar21 != 0) {
              lVar20 = lVar21 + (long)plVar18;
            }
            uVar25 = *(uint *)(lVar20 + ((ulong)(uVar1 >> 3) & 0x1ffc)) >> (ulong)(uVar1 & 0x1f) & 1
            ;
          }
          fVar61 = (((float)local_1b8[1] - fVar38) - fVar51) * fVar74;
          fVar62 = (((float)(local_1b8[1] >> 0x20) - fVar52) - fVar53) * fVar75;
          fVar64 = (((float)local_1b8[2] - fVar76) - fVar77) * fVar68;
          fVar66 = (((float)(local_1b8[2] >> 0x20) - fVar78) - fVar79) * fVar46;
          auVar49._0_4_ = fVar74 * ((local_190[4] + fVar38) - fVar51);
          auVar49._4_4_ = fVar75 * ((local_190[5] + fVar52) - fVar53);
          auVar49._8_4_ = fVar68 * ((local_190[6] + fVar76) - fVar77);
          auVar49._12_4_ = fVar46 * ((fVar78 + 0.0) - fVar79);
          auVar3._4_4_ = fVar62;
          auVar3._0_4_ = fVar61;
          auVar3._8_4_ = fVar64;
          auVar3._12_4_ = fVar66;
          auVar48 = NEON_fmin(auVar3,auVar49,4);
          auVar4._4_4_ = fVar62;
          auVar4._0_4_ = fVar61;
          auVar4._8_4_ = fVar64;
          auVar4._12_4_ = fVar66;
          auVar31 = NEON_fmax(auVar4,auVar49,4);
          uVar73 = NEON_fmaxp(auVar48._0_8_,auVar48._0_8_,4);
          uVar56 = NEON_fmax(CONCAT44(auVar48._8_4_,auVar48._8_4_),uVar73,4);
          uVar73 = NEON_fminp(auVar31._0_8_,auVar31._0_8_,4);
          uVar73 = NEON_fmin(CONCAT44(auVar31._8_4_,auVar31._8_4_),uVar73,4);
          uVar56 = NEON_fmax(uVar56,0,4);
          uVar41 = NEON_fmin(uVar73,uVar41,4);
          if ((bool)(~((float)uVar56 <= (float)uVar41) & 1)) {
            uVar17 = 0;
          }
          else {
            plVar18 = (long *)(*(long *)(lVar19 + 8) + 0x38);
            lVar20 = *plVar18;
            lVar19 = 0;
            if (lVar20 != 0) {
              lVar19 = lVar20 + (long)plVar18;
            }
            uVar17 = (*(uint *)(lVar19 + ((ulong)(uVar2 >> 3) & 0x1ffc)) >> (ulong)(uVar2 & 0x1f) &
                     1) << 1;
          }
          uVar17 = uVar17 | uVar25;
          if (uVar17 == 1) {
            uVar13 = uVar16;
            pfVar15 = local_1c0;
          }
          else {
            uVar13 = (ulong)uVar2;
            pfVar15 = local_190;
            if (uVar17 != 2) {
              if (uVar17 != 3) goto LAB_02e8d7f0;
              uVar25 = -(uint)((float)uVar56 < (float)uVar40);
              *(uint *)(param_3 + 10) = uVar25 & 1;
              iVar27 = (int)param_2[1];
              lVar19 = (long)iVar27;
              if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar27) {
                FUN_02e8bb18(param_2,PTR_PTR_047d1a50,lVar19 + 1);
                iVar27 = (int)param_2[1];
              }
              *(int *)(param_2 + 1) = (int)(lVar19 + 1);
              *(undefined2 *)(*param_2 + (long)iVar27 * 2) =
                   *(undefined2 *)(local_1b8 + ((ulong)~uVar25 & 1) * 6);
              uVar13 = (ulong)*(ushort *)(local_1b8 + ((ulong)uVar25 & 1) * 6);
              pfVar15 = (float *)local_1b8[((ulong)uVar25 & 1) * 6 + -1];
            }
          }
        }
        plVar18 = (long *)*param_3;
        lVar20 = *(long *)(plVar18[1] + 0x38);
        lVar19 = 0;
        if (lVar20 != 0) {
          lVar19 = lVar20 + plVar18[1] + 0x38;
        }
        if ((*(uint *)(lVar19 + (uVar13 >> 3 & 0x1ffc)) >> (ulong)((uint)uVar13 & 0x1f) & 1) != 0) {
          lVar19 = *plVar18;
          uVar1 = *(ushort *)((long)pfVar15 + 0x1e);
          pfVar15 = (float *)(lVar19 + 0x48 + (ulong)uVar1 * 0x40 + *(long *)(lVar19 + 0x48));
          pbVar23 = (byte *)((long)pfVar15 + 0x1e);
          if ((*pbVar23 >> 6 & 1) != 0) {
            local_88 = *(undefined8 *)plVar18[6];
            uStack_80 = ((undefined8 *)plVar18[6])[1];
            puVar14 = (undefined8 *)plVar18[7];
            uVar13 = puVar14[3];
            iVar27 = (uint)*(byte *)(lVar19 + 0x1c) + (int)(uVar13 >> 0x20);
            pfVar22 = pfVar15 + 0xc;
            uVar13 = (ulong)((uVar1 + 1 << (ulong)(-iVar27 & 0x1f)) - 1) |
                     uVar13 & *(uint *)(PTR_DAT_047d1a60 + ((long)uVar13 >> 0x20) * 4);
            plVar12 = *(long **)plVar18[4];
            lVar20 = 0;
            if (*(long *)pfVar22 != 0) {
              lVar20 = *(long *)pfVar22 + (long)pfVar22;
            }
            uVar24 = (undefined4)uVar13;
            if (plVar12 != (long *)0x0) {
              (**(code **)(*plVar12 + 0x40))
                        (plVar12,*(undefined2 *)(pfVar15 + 0xb),2,*puVar14,puVar14[1],lVar19,uVar13,
                         lVar20,&local_88);
              lVar19 = plVar18[4];
              if (*(long *)(lVar19 + 8) != 0) {
                local_1e0 = (float)CONCAT22(local_1e0._2_2_,*(undefined2 *)(lVar19 + 0x10));
                uVar40 = *(undefined8 *)(lVar19 + 0x14);
                *(undefined4 *)((undefined8 *)((ulong)&local_1e0 | 4) + 1) =
                     *(undefined4 *)(lVar19 + 0x1c);
                *(undefined8 *)((ulong)&local_1e0 | 4) = uVar40;
                puVar14 = (undefined8 *)plVar18[5];
                local_1d0 = *puVar14;
                uStack_1c8 = puVar14[1];
                local_1c0 = (float *)puVar14[2];
                local_1b8[0]._0_4_ = *(undefined4 *)(puVar14 + 3);
                local_1b8[1] = *(undefined8 *)(lVar19 + 0x38);
                local_f0 = CONCAT62(local_f0._2_6_,(undefined2)local_88);
                uVar40 = *(undefined8 *)((ulong)&local_88 | 4);
                *(undefined4 *)((undefined8 *)((ulong)&local_f0 | 4) + 1) =
                     *(undefined4 *)((undefined8 *)((ulong)&local_88 | 4) + 1);
                *(undefined8 *)((ulong)&local_f0 | 4) = uVar40;
                local_e0 = *(long *)plVar18[7];
                local_d8 = ((long *)plVar18[7])[1];
                local_d0 = (float *)*plVar18;
                local_c8 = CONCAT44(local_c8._4_4_,uVar24);
                local_c0 = lVar20;
                uVar13 = (**(code **)(**(long **)(lVar19 + 8) + 0x40))
                                   (*(long **)(lVar19 + 8),2,(char)plVar18[8] == '\0',&local_1e0,
                                    &local_f0);
                if ((uVar13 & 1) == 0) goto LAB_02e8d7f0;
              }
            }
            puVar14 = (undefined8 *)plVar18[7];
            local_f0 = *puVar14;
            uStack_e8 = puVar14[1];
            local_e0 = puVar14[2];
            local_d8 = puVar14[3];
            local_d0 = (float *)puVar14[4];
            local_c8 = 0;
            local_b0 = puVar14[8];
            uStack_a8 = puVar14[9];
            local_a0 = puVar14[10];
            uStack_98 = puVar14[0xb];
            local_b8[0] = *(undefined4 *)(puVar14 + 7);
            local_c0._0_4_ =
                 (undefined4)CONCAT71((int7)((ulong)local_c0 >> 8),*(undefined1 *)(puVar14 + 6));
            local_c0 = CONCAT44(*(undefined4 *)((long)puVar14 + 0x34),(undefined4)local_c0);
            uVar40 = *(undefined8 *)(pfVar15 + 4);
            auVar31 = *(undefined1 (*) [16])(pfVar15 + 8);
            auVar48._0_12_ = auVar31._0_12_;
            auVar48._12_4_ = 1.0;
            fVar74 = *pfVar15;
            fVar75 = pfVar15[1];
            fVar68 = pfVar15[2];
            fVar46 = pfVar15[3];
            fVar76 = (float)*(undefined8 *)(pfVar15 + 6);
            fVar51 = fVar75 + fVar75;
            fVar52 = fVar68 + fVar68;
            fVar53 = (fVar74 + fVar74) * fVar74;
            fVar38 = (fVar74 + fVar74) * fVar46;
            fVar68 = 1.0 - fVar68 * fVar52;
            fVar79 = fVar52 * fVar75 - fVar38;
            fVar78 = fVar68 - fVar51 * fVar75;
            fVar68 = fVar68 - fVar53;
            fVar61 = fVar52 * fVar74 + fVar51 * fVar46;
            fVar77 = fVar52 * fVar74 - fVar51 * fVar46;
            fVar62 = fVar51 * fVar74 + fVar52 * fVar46;
            fVar74 = fVar51 * fVar74 - fVar52 * fVar46;
            fVar38 = fVar52 * fVar75 + fVar38;
            fVar75 = (1.0 - fVar53) - fVar51 * fVar75;
            if (*(char *)(puVar14 + 6) == '\0') {
              if ((*pbVar23 >> 3 & 1) != 0) goto LAB_02e8d478;
            }
            else {
              auVar43 = *(undefined1 (*) [16])(puVar14 + 8);
              auVar48._0_4_ = auVar31._0_4_ * auVar43._0_4_;
              auVar48._4_4_ = auVar31._4_4_ * auVar43._4_4_;
              auVar48._8_4_ = auVar31._8_4_ * auVar43._8_4_;
              auVar48._12_4_ = auVar43._12_4_ * 1.0;
              uVar40 = CONCAT44((float)((ulong)uVar40 >> 0x20) * auVar43._4_4_,
                                (float)uVar40 * auVar43._0_4_);
              fVar76 = fVar76 * auVar43._8_4_;
LAB_02e8d478:
              uStack_a8 = auVar48._8_8_;
              local_b0 = auVar48._0_8_;
              local_c0 = CONCAT71(local_c0._1_7_,1);
              local_a0 = 0;
              uStack_98 = 0;
              if ((*pbVar23 >> 3 & 1) == 0) {
                uVar25 = *(uint *)((long)puVar14 + 0x34);
              }
              else {
                uVar25 = (*pbVar23 >> 5 ^ 0xffffffff) & 1;
              }
              local_c0 = CONCAT44(uVar25,(undefined4)local_c0);
              lVar19 = 0;
              if (*(long *)pfVar22 != 0) {
                lVar19 = *(long *)pfVar22 + (long)pfVar22;
              }
              local_b8[0] = *(undefined4 *)(lVar19 + 0x20);
              if ((lVar19 != 0) && ((*(ushort *)(lVar19 + 0x1a) & 1) != 0)) {
                iVar39 = *(int *)(lVar19 + 0x40);
                lVar21 = 0;
                if (iVar39 != 0) {
                  lVar21 = (long)iVar39 + lVar19 + 0x40;
                }
                FUN_00cb0560(lVar21,*(undefined4 *)(lVar19 + 0x44),uVar25,&local_b0,local_b8,
                             &local_a0);
              }
            }
            pfVar15 = *(float **)(plVar18[7] + 0x20);
            fVar65 = (float)*(undefined8 *)(pfVar15 + 10);
            fVar67 = (float)((ulong)*(undefined8 *)(pfVar15 + 10) >> 0x20);
            fVar36 = (float)*(undefined8 *)(pfVar15 + 8);
            fVar63 = (float)((ulong)*(undefined8 *)(pfVar15 + 8) >> 0x20);
            fVar46 = *pfVar15;
            fVar51 = pfVar15[1];
            fVar52 = pfVar15[2];
            fVar53 = pfVar15[3];
            fVar64 = pfVar15[4];
            fVar66 = pfVar15[5];
            fVar34 = pfVar15[6];
            fVar9 = pfVar15[7];
            fVar58 = (float)((ulong)uVar40 >> 0x20);
            fVar55 = (float)uVar40;
            fVar54 = fVar36 * fVar75 + fVar46 * fVar61 + fVar64 * fVar79;
            fVar57 = fVar63 * fVar75 + fVar51 * fVar61 + fVar66 * fVar79;
            fVar59 = fVar65 * fVar75 + fVar52 * fVar61 + fVar34 * fVar79;
            fVar60 = fVar67 * fVar75 + fVar53 * fVar61 + fVar9 * fVar79;
            fVar69 = fVar36 * fVar38 + fVar46 * fVar74 + fVar64 * fVar68;
            fVar70 = fVar63 * fVar38 + fVar51 * fVar74 + fVar66 * fVar68;
            fVar71 = fVar65 * fVar38 + fVar52 * fVar74 + fVar34 * fVar68;
            fVar72 = fVar67 * fVar38 + fVar53 * fVar74 + fVar9 * fVar68;
            fVar26 = fVar36 * fVar77 + fVar46 * fVar78 + fVar64 * fVar62;
            fVar33 = fVar63 * fVar77 + fVar51 * fVar78 + fVar66 * fVar62;
            fVar35 = fVar65 * fVar77 + fVar52 * fVar78 + fVar34 * fVar62;
            fVar37 = fVar67 * fVar77 + fVar53 * fVar78 + fVar9 * fVar62;
            uStack_118 = CONCAT44(fVar72,fVar71);
            uStack_120 = CONCAT44(fVar70,fVar69);
            fVar64 = fVar36 * fVar76 + fVar46 * fVar55 + fVar64 * fVar58 + pfVar15[0xc];
            fVar66 = fVar63 * fVar76 + fVar51 * fVar55 + fVar66 * fVar58 + pfVar15[0xd];
            fVar36 = fVar65 * fVar76 + fVar52 * fVar55 + fVar34 * fVar58 + pfVar15[0xe];
            fStack_f4 = fVar67 * fVar76 + fVar53 * fVar55 + fVar9 * fVar58 + pfVar15[0xf];
            __src = (void *)plVar18[4];
            local_130 = fVar26;
            fStack_12c = fVar33;
            fStack_128 = fVar35;
            fStack_124 = fVar37;
            local_110 = fVar54;
            fStack_10c = fVar57;
            fStack_108 = fVar59;
            fStack_104 = fVar60;
            local_100 = fVar64;
            fStack_fc = fVar66;
            fStack_f8 = fVar36;
            memcpy(&local_1e0,__src,0x38);
            local_1b8[2] = *(undefined8 *)((long)__src + 0x38);
            local_190 = *(float **)((long)__src + 0x50);
            uStack_188 = *(undefined8 *)((long)__src + 0x58);
            uStack_180 = *(undefined8 *)((long)__src + 0x60);
            uStack_178 = *(undefined8 *)((long)__src + 0x68);
            memcpy(auStack_170,(void *)((long)__src + 0x70),0x40);
            auVar44._8_4_ = 0x7f7fffee;
            auVar44._0_8_ = 0x7f7fffee7f7fffee;
            auVar44._12_4_ = 0x7f7fffee;
            local_d0 = &local_130;
            fVar46 = *(float *)((long)__src + 0x50);
            fVar51 = *(float *)((long)__src + 0x54);
            fVar52 = *(float *)((long)__src + 0x58);
            local_1b8[3] = 0;
            local_1b8[4] = 0;
            local_270 = auVar29._0_4_;
            fStack_26c = auVar29._4_4_;
            fStack_268 = auVar29._8_4_;
            fStack_264 = auVar29._12_4_;
            fVar53 = fVar77 * fVar52 + fVar78 * fVar46 + fVar62 * fVar51;
            fVar34 = fVar38 * fVar52 + fVar74 * fVar46 + fVar68 * fVar51;
            fVar51 = fVar75 * fVar52 + fVar61 * fVar46 + fVar79 * fVar51;
            iVar39 = -(uint)(fVar53 == 0.0);
            iVar45 = -(uint)(fVar34 == 0.0);
            iVar47 = -(uint)(fVar51 == 0.0);
            fVar46 = (float)CONCAT13((byte)((uint)fVar53 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18),
                                     CONCAT12((byte)((uint)fVar53 >> 0x10) &
                                              ~(byte)((uint)iVar39 >> 0x10),
                                              CONCAT11((byte)((uint)fVar53 >> 8) &
                                                       ~(byte)((uint)iVar39 >> 8),
                                                       SUB41(fVar53,0) & ~(byte)iVar39)));
            auVar28._0_8_ =
                 (float *)CONCAT17((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18),
                                   CONCAT16((byte)((uint)fVar34 >> 0x10) &
                                            ~(byte)((uint)iVar45 >> 0x10),
                                            CONCAT15((byte)((uint)fVar34 >> 8) &
                                                     ~(byte)((uint)iVar45 >> 8),
                                                     CONCAT14(SUB41(fVar34,0) & ~(byte)iVar45,fVar46
                                                             ))));
            auVar28[8] = SUB41(fVar51,0) & ~(byte)iVar47;
            auVar28[9] = (byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar47 >> 8);
            auVar28[10] = (byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10);
            auVar28[0xb] = (byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18);
            auVar50._0_4_ = local_270 / fVar46;
            fVar51 = (float)((ulong)auVar28._0_8_ >> 0x20);
            auVar50._4_4_ = fStack_26c / fVar51;
            fVar52 = auVar28._8_4_;
            auVar50._8_4_ = fStack_268 / fVar52;
            auVar50._12_4_ = fStack_264 / 0.0;
            iVar39 = -(uint)(fVar46 == 0.0);
            iVar45 = -(uint)(fVar51 == 0.0);
            iVar47 = -(uint)(fVar52 == 0.0);
            auVar43[0] = ~(byte)iVar39;
            auVar43[1] = ~(byte)((uint)iVar39 >> 8);
            auVar43[2] = ~(byte)((uint)iVar39 >> 0x10);
            auVar43[3] = ~(byte)((uint)iVar39 >> 0x18);
            auVar43[4] = ~(byte)iVar45;
            auVar43[5] = ~(byte)((uint)iVar45 >> 8);
            auVar43[6] = ~(byte)((uint)iVar45 >> 0x10);
            auVar43[7] = ~(byte)((uint)iVar45 >> 0x18);
            auVar43[8] = ~(byte)iVar47;
            auVar43[9] = ~(byte)((uint)iVar47 >> 8);
            auVar43[10] = ~(byte)((uint)iVar47 >> 0x10);
            auVar43[0xb] = ~(byte)((uint)iVar47 >> 0x18);
            auVar43._12_4_ = 0;
            auVar44 = auVar44 ^ (auVar44 ^ auVar50) & auVar43;
            uStack_188 = (ulong)(uint)fVar52;
            uStack_178 = auVar44._8_8_;
            uStack_180 = auVar44._0_8_;
            local_e0 = *plVar18;
            local_d8 = CONCAT44(iVar27,uVar24);
            local_c8 = *(undefined8 *)
                        (plVar18[1] + 0x28 + (ulong)uVar1 * 8 + *(long *)(plVar18[1] + 0x28));
            if ((char)plVar18[8] != '\0') {
              iVar27 = -(uint)(*(float *)((long)__src + 0x90) == 0.0);
              iVar39 = -(uint)(*(float *)((long)__src + 0x94) == 0.0);
              iVar45 = -(uint)(*(float *)((long)__src + 0x98) == 0.0);
              iVar47 = -(uint)(*(float *)((long)__src + 0x9c) == 0.0);
              if (CONCAT13(~(byte)((uint)iVar39 >> 0x18) | ~(byte)((uint)iVar27 >> 0x18) |
                           ~(byte)((uint)iVar45 >> 0x18) | ~(byte)((uint)iVar47 >> 0x18),
                           CONCAT12(~(byte)((uint)iVar39 >> 0x10) | ~(byte)((uint)iVar27 >> 0x10) |
                                    ~(byte)((uint)iVar45 >> 0x10) | ~(byte)((uint)iVar47 >> 0x10),
                                    CONCAT11(~(byte)((uint)iVar39 >> 8) | ~(byte)((uint)iVar27 >> 8)
                                             | ~(byte)((uint)iVar45 >> 8) |
                                             ~(byte)((uint)iVar47 >> 8),
                                             ~(byte)iVar39 | ~(byte)iVar27 | ~(byte)iVar45 |
                                             ~(byte)iVar47))) != 0) {
                fVar46 = fVar74 * local_150;
                fVar51 = fVar61 * local_150;
                fVar52 = fVar79 * fStack_14c;
                fVar55 = local_140 - fVar55;
                fVar58 = fStack_13c - fVar58;
                fStack_138 = fStack_138 - fVar76;
                local_150 = fVar77 * fStack_148 + fVar78 * local_150 + fVar62 * fStack_14c;
                fStack_14c = fVar38 * fStack_148 + fVar46 + fVar68 * fStack_14c;
                fStack_148 = fVar75 * fStack_148 + fVar51 + fVar52;
                local_140 = fVar77 * fStack_138 + fVar78 * fVar55 + fVar62 * fVar58;
                fStack_13c = fVar38 * fStack_138 + fVar74 * fVar55 + fVar68 * fVar58;
                fStack_138 = fVar75 * fStack_138 + fVar61 * fVar55 + fVar79 * fVar58;
              }
            }
            auVar8._4_4_ = fVar33;
            auVar8._0_4_ = fVar26;
            auVar8._8_4_ = fVar35;
            auVar7._4_4_ = fVar33;
            auVar7._0_4_ = fVar26;
            auVar7._8_4_ = fVar35;
            auVar6._8_4_ = fVar71;
            auVar6._0_8_ = CONCAT44(fVar70,fVar69);
            auVar5._8_4_ = fVar71;
            auVar5._0_8_ = CONCAT44(fVar70,fVar69);
            auVar5._12_4_ = fVar72;
            auVar6._12_4_ = fVar72;
            auVar48 = NEON_ext(auVar5,auVar6,8,1);
            auVar10._4_4_ = fVar57;
            auVar10._0_4_ = fVar54;
            auVar10._8_4_ = fVar59;
            auVar10._12_4_ = fVar60;
            auVar7._12_4_ = fVar37;
            auVar8._12_4_ = fVar37;
            auVar31 = NEON_ext(auVar7,auVar8,8,1);
            fVar46 = auVar31._0_4_;
            fVar38 = auVar48._0_4_;
            auVar31 = NEON_ext(auVar10,auVar10,8,1);
            pfVar15 = *(float **)(plVar18[5] + 0x20);
            fVar52 = auVar31._4_4_;
            fVar51 = auVar31._0_4_;
            fVar74 = pfVar15[8];
            fVar75 = pfVar15[9];
            fVar68 = pfVar15[10];
            local_200 = fVar46 * fVar68 + fVar26 * fVar74 + fVar33 * fVar75;
            fStack_1fc = fVar38 * fVar68 + fVar69 * fVar74 + fVar70 * fVar75;
            fStack_1f8 = fVar51 * fVar68 + fVar54 * fVar74 + fVar57 * fVar75;
            fStack_1f4 = fVar52 * fVar68 + fVar57 * fVar74 + fVar52 * fVar75;
            fVar74 = pfVar15[4];
            fVar75 = pfVar15[5];
            fVar68 = pfVar15[6];
            local_210 = fVar46 * fVar68 + fVar26 * fVar74 + fVar33 * fVar75;
            fStack_20c = fVar38 * fVar68 + fVar69 * fVar74 + fVar70 * fVar75;
            fStack_208 = fVar51 * fVar68 + fVar54 * fVar74 + fVar57 * fVar75;
            fStack_204 = fVar52 * fVar68 + fVar57 * fVar74 + fVar52 * fVar75;
            fVar74 = *pfVar15;
            fVar75 = pfVar15[1];
            fVar68 = pfVar15[2];
            local_220 = fVar46 * fVar68 + fVar26 * fVar74 + fVar33 * fVar75;
            fStack_21c = fVar38 * fVar68 + fVar69 * fVar74 + fVar70 * fVar75;
            fStack_218 = fVar51 * fVar68 + fVar54 * fVar74 + fVar57 * fVar75;
            fStack_214 = fVar52 * fVar68 + fVar57 * fVar74 + fVar52 * fVar75;
            fVar64 = pfVar15[0xc] - fVar64;
            fVar66 = pfVar15[0xd] - fVar66;
            fVar36 = pfVar15[0xe] - fVar36;
            auVar32._0_8_ =
                 CONCAT44(fVar38 * fVar36 + fVar69 * fVar64 + fVar70 * fVar66,
                          fVar46 * fVar36 + fVar26 * fVar64 + fVar33 * fVar66);
            auVar32._8_4_ = fVar51 * fVar36 + fVar54 * fVar64 + fVar57 * fVar66;
            auVar32._12_4_ = fVar52 * fVar36 + fVar57 * fVar64 + fVar52 * fVar66;
            uStack_1e8 = auVar32._8_8_;
            local_1f0 = auVar32._0_8_;
            local_190 = auVar28._0_8_;
            FUN_02ea2d14(*(undefined8 *)plVar18[3],(undefined8 *)plVar18[3],&local_1e0,plVar18[5],
                         lVar20,&local_88,&local_f0,&local_220,(char)plVar18[8] != '\0',plVar18[9],
                         plVar18[10]);
          }
        }
LAB_02e8d7f0:
        if ((int)lVar11 < (int)param_2[1]) {
          iVar27 = (int)param_2[1] + -1;
          *(int *)(param_2 + 1) = iVar27;
          uVar13 = (ulong)*(ushort *)(*param_2 + (long)iVar27 * 2);
          lVar19 = 0;
          if (*param_1 != 0) {
            lVar19 = *param_1 + (long)param_1;
          }
          pfVar15 = (float *)(lVar19 + uVar13 * 0x20);
          goto LAB_02e8cfa0;
        }
      }
    }
  }
  return;
}


