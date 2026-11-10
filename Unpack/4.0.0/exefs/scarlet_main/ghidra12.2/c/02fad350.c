/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fad350; name: FUN_02fad350
 */


void FUN_02fad350(long param_1,long param_2,undefined4 *param_3,long param_4,uint param_5,
                 undefined8 param_6,long param_7,long param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  bool bVar14;
  byte bVar15;
  undefined *puVar16;
  bool bVar17;
  undefined8 uVar18;
  float *pfVar19;
  int iVar20;
  uint uVar21;
  long lVar22;
  long *plVar23;
  undefined8 *puVar24;
  short *psVar25;
  undefined8 *puVar26;
  byte *pbVar27;
  undefined4 *puVar28;
  long lVar29;
  undefined4 *puVar30;
  long lVar31;
  long *plVar32;
  ulong *puVar33;
  undefined2 *puVar34;
  float *pfVar35;
  undefined8 *puVar36;
  ulong uVar37;
  undefined8 *puVar38;
  undefined8 *puVar39;
  float *pfVar40;
  ulong uVar41;
  ushort *puVar42;
  int iVar43;
  int iVar49;
  double dVar44;
  int iVar50;
  int iVar51;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar66;
  double dVar67;
  float fVar69;
  undefined1 auVar68 [16];
  double dVar70;
  double dVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined8 uVar74;
  double dVar75;
  double dVar76;
  undefined4 uVar77;
  double dVar78;
  double dVar79;
  double dVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar85;
  undefined8 uVar84;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  float local_490;
  float fStack_48c;
  undefined8 uStack_488;
  undefined1 auStack_3c0 [64];
  float local_380;
  float fStack_37c;
  float fStack_378;
  double local_340;
  double local_338;
  double local_330;
  double local_328;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  float *local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  long local_290;
  uint local_288;
  char local_284;
  undefined1 auStack_280 [16];
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [16];
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  float local_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  ulong uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  float local_120;
  float local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined1 *local_f0;
  undefined1 *local_e8;
  float *local_e0;
  float *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined *local_a0;
  double *local_98;
  
  local_e8 = auStack_280;
  local_98 = (double *)0x0;
  local_a0 = PTR_LAB_047e4990;
  local_120 = (float)*(undefined8 *)(param_3 + 0xe);
  local_11c = (float)param_3[0x1f] * local_120;
  local_118 = (undefined4)*(undefined8 *)(param_3 + 0x10);
  local_114 = (undefined4)*(undefined8 *)(param_3 + 4);
  local_110 = (undefined4)*(undefined8 *)(param_3 + 6);
  local_10c = (float)param_3[0x1d];
  local_108 = local_10c * (float)(int)param_3[0x1e];
  local_104 = (undefined4)*(undefined8 *)(param_3 + 0x34);
  local_100 = (undefined4)*(undefined8 *)(param_3 + 0x36);
  local_b0 = *param_3;
  local_f0 = auStack_1d0;
  local_a8 = 0x7fff00007fff;
  lVar31 = *(long *)PTR_DAT_047e34d8;
  local_2a8 = 0;
  local_2b0 = 0;
  local_2a0 = 0x7fffffff7fffffff;
  local_ac = (undefined4)*(undefined8 *)(param_3 + 2);
  local_284 = '\0';
  lVar29 = tpidr_el0;
  lVar22 = *(long *)(lVar29 + 0x1000b8);
  local_298 = param_6;
  local_290 = param_4;
  local_288 = param_5;
  if (lVar22 == 0) {
    lVar22 = FUN_00e5d3b4();
    *(long *)(lVar29 + 0x1000b8) = lVar22;
  }
  puVar16 = PTR_DAT_047e48d8;
  plVar23 = *(long **)(lVar22 + 0x3e0);
  puVar26 = (undefined8 *)plVar23[2];
  if (puVar26 < (undefined8 *)plVar23[4]) {
    bVar17 = *(int *)(param_1 + 0x7a0) != 0;
    if (*(int *)(param_1 + 0x790) != 0) {
      if (plVar23 != (long *)0x0) {
        lVar29 = (long)*(int *)(param_1 + 0x790) * 4;
        puVar28 = *(undefined4 **)(param_1 + 0x788);
        while( true ) {
          lVar29 = lVar29 + -4;
          if (puVar26 != (undefined8 *)0x0) {
            puVar30 = (undefined4 *)((long)puVar26 + 0x13U & 0xfffffffffffffffc);
            uVar41 = (long)puVar30 + 0xbU & 0xfffffffffffffff8;
            if (uVar41 <= (ulong)plVar23[3]) {
              uVar77 = *puVar28;
              plVar23[2] = uVar41;
              *puVar26 = &DAT_03c1a9df;
              puVar26[1] = puVar16;
              if (puVar30 != (undefined4 *)0x0) {
                *puVar30 = uVar77;
              }
            }
          }
          if (lVar29 == 0) break;
          puVar28 = puVar28 + 1;
          puVar26 = (undefined8 *)plVar23[2];
        }
      }
      bVar15 = 1;
      goto LAB_02fad4dc;
    }
  }
  else {
    bVar17 = false;
  }
  bVar15 = 0;
LAB_02fad4dc:
  if (0 < (int)param_5) {
    auVar64 = NEON_fmov(0x3f800000,4);
    iVar20 = 0x30;
    puVar26 = &local_2d0;
    if (!bVar17) {
      iVar20 = 0;
      puVar26 = (undefined8 *)0x0;
    }
    uVar41 = 0;
    do {
      plVar32 = (long *)(param_4 + uVar41 * 0x68);
      puVar42 = (ushort *)((long)plVar32 + 0x42);
      if (((*(byte *)puVar42 >> 2 & 1) != 0) &&
         ((pfVar35 = (float *)(param_4 + uVar41 * 0x68 + 8), (~(uint)*pfVar35 & 0xffffff) != 0 ||
          ((~*(uint *)(param_4 + uVar41 * 0x68 + 0x18) & 0xffffff) != 0)))) {
        lVar29 = *plVar32;
        puVar33 = (ulong *)(param_4 + uVar41 * 0x68 + 8);
        uVar37 = *puVar33;
        fVar90 = (float)uVar37;
        if (lVar29 == -1) {
          pfVar35 = (float *)(lVar31 + 0x9c0);
        }
        else {
          uVar21 = (uint)fVar90 & 0xffffff;
          if ((((uVar21 == 0xffffff) || (*(uint *)(param_2 + 0x40) <= uVar21)) ||
              (lVar22 = *(long *)(param_2 + 0x38),
              (*(byte *)(lVar22 + (ulong)uVar21 * 0xc0 + 0x54) & 3) == 0)) ||
             (*(float *)(lVar22 + (ulong)uVar21 * 0xc0 + 0x50) != fVar90)) {
            if (lVar29 < 0) {
              fVar90 = (float)lVar29;
            }
            else {
              uVar37 = FUN_00dbb6c8(param_2 + 0x960,lVar29,&local_490);
              fVar90 = local_490;
              if ((uVar37 & 1) == 0) {
                fVar90 = 2.3509886e-38;
              }
            }
            uVar21 = (uint)fVar90 & 0xffffff;
            if (((uVar21 == 0xffffff) || (*pfVar35 = fVar90, *(uint *)(param_2 + 0x40) <= uVar21))
               || ((lVar22 = *(long *)(param_2 + 0x38),
                   (*(byte *)(lVar22 + (ulong)uVar21 * 0xc0 + 0x54) & 3) == 0 ||
                   (*(float *)(lVar22 + (ulong)uVar21 * 0xc0 + 0x50) != fVar90))))
            goto LAB_02fad6f8;
            uVar37 = *puVar33;
          }
          pfVar35 = (float *)(lVar22 + (uVar37 & 0xffffff) * 0xc0);
          if (((uint)pfVar35[0x22] & 1) == 0) goto LAB_02fad6f8;
        }
        lVar29 = plVar32[2];
        uVar37 = plVar32[3];
        fVar81 = (float)uVar37;
        if (lVar29 == -1) {
          pfVar40 = (float *)(lVar31 + 0x9c0);
        }
        else {
          uVar21 = (uint)fVar81 & 0xffffff;
          if (((uVar21 == 0xffffff) || (*(uint *)(param_2 + 0x40) <= uVar21)) ||
             ((lVar22 = *(long *)(param_2 + 0x38),
              (*(byte *)(lVar22 + (ulong)uVar21 * 0xc0 + 0x54) & 3) == 0 ||
              (*(float *)(lVar22 + (ulong)uVar21 * 0xc0 + 0x50) != fVar81)))) {
            if (lVar29 < 0) {
              fVar81 = (float)lVar29;
            }
            else {
              uVar37 = FUN_00dbb6c8(param_2 + 0x960,lVar29,&local_490);
              fVar81 = local_490;
              if ((uVar37 & 1) == 0) {
                fVar81 = 2.3509886e-38;
              }
            }
            uVar21 = (uint)fVar81 & 0xffffff;
            if ((((uVar21 == 0xffffff) ||
                 (*(float *)(plVar32 + 3) = fVar81, *(uint *)(param_2 + 0x40) <= uVar21)) ||
                (lVar22 = *(long *)(param_2 + 0x38),
                (*(byte *)(lVar22 + (ulong)uVar21 * 0xc0 + 0x54) & 3) == 0)) ||
               (*(float *)(lVar22 + (ulong)uVar21 * 0xc0 + 0x50) != fVar81)) goto LAB_02fad6f8;
            uVar37 = plVar32[3];
          }
          pfVar40 = (float *)(lVar22 + (uVar37 & 0xffffff) * 0xc0);
          if (((uint)pfVar40[0x22] & 1) == 0) goto LAB_02fad6f8;
        }
        if ((((uint)pfVar35[0x15] & 5) == 0) || (((uint)pfVar40[0x15] & 5) == 0)) {
          fVar2 = pfVar40[0x20];
          fVar3 = pfVar35[0x20];
          if (fVar3 != fVar2) {
            puVar36 = (undefined8 *)(*(long *)(param_2 + 0x150) + (long)(int)fVar3 * 0x80);
            fVar4 = *(float *)((long)puVar36 + 0x4c);
            bVar5 = *(byte *)((long)puVar36 + 0x5e);
            puVar39 = (undefined8 *)(*(long *)(param_2 + 0x150) + (long)(int)fVar2 * 0x80);
            fVar82 = *(float *)((long)puVar39 + 0x4c);
            bVar6 = *(byte *)((long)puVar39 + 0x5e);
            fVar1 = 0.0;
            if (fVar4 != NAN) {
              fVar1 = fVar4;
            }
            fVar4 = 0.0;
            if (fVar82 != NAN) {
              fVar4 = fVar82;
            }
            local_e0 = pfVar35;
            local_d8 = pfVar40;
            if ((bool)(bVar17 | bVar15)) {
              iVar43 = FUN_02f0e180(*(undefined8 *)(param_4 + uVar41 * 0x68 + 0x20),&local_490,
                                    &local_380);
              if (iVar43 < 0) {
                auVar68._8_4_ = 0xff7fffee;
                auVar68._0_8_ = 0xff7fffeeff7fffee;
                auVar68._12_4_ = 0xff7fffee;
                auVar47._8_4_ = 0x7f7fffee;
                auVar47._0_8_ = 0x7f7fffee7f7fffee;
                auVar47._12_4_ = 0x7f7fffee;
                if (((uint)pfVar35[0x15] & 1) == 0) {
                  auVar73[8] = 0xee;
                  auVar73._0_8_ = 0xff7fffeeff7fffee;
                  auVar13._8_4_ = 0x7f7fffee;
                  auVar13._0_8_ = 0x7f7fffee7f7fffee;
                  auVar13._12_4_ = 0x7f7fffee;
                  auVar47 = NEON_fmin(*(undefined1 (*) [16])(pfVar35 + 0xc),auVar13,4);
                  auVar73[9] = 0xff;
                  auVar73[10] = 0x7f;
                  auVar73[0xb] = 0xff;
                  auVar73[0xc] = 0xee;
                  auVar73[0xd] = 0xff;
                  auVar73[0xe] = 0x7f;
                  auVar73[0xf] = 0xff;
                  auVar68 = NEON_fmax(*(undefined1 (*) [16])(pfVar35 + 0xc),auVar73,4);
                }
                if (((uint)pfVar40[0x15] & 1) == 0) {
                  uVar18 = *(undefined8 *)(pfVar40 + 0xe);
                  uVar56 = (undefined1)((ulong)uVar18 >> 8);
                  uVar57 = (undefined1)((ulong)uVar18 >> 0x10);
                  uVar58 = (undefined1)((ulong)uVar18 >> 0x18);
                  uVar59 = (undefined1)((ulong)uVar18 >> 0x20);
                  uVar60 = (undefined1)((ulong)uVar18 >> 0x28);
                  uVar61 = (undefined1)((ulong)uVar18 >> 0x30);
                  uVar62 = (undefined1)((ulong)uVar18 >> 0x38);
                  auVar8[9] = uVar56;
                  auVar8._0_9_ = *(unkbyte9 *)(pfVar40 + 0xc);
                  auVar8[10] = uVar57;
                  auVar8[0xb] = uVar58;
                  auVar8[0xc] = uVar59;
                  auVar8[0xd] = uVar60;
                  auVar8[0xe] = uVar61;
                  auVar8[0xf] = uVar62;
                  auVar47 = NEON_fmin(auVar47,auVar8,4);
                  auVar9[9] = uVar56;
                  auVar9._0_9_ = *(unkbyte9 *)(pfVar40 + 0xc);
                  auVar9[10] = uVar57;
                  auVar9[0xb] = uVar58;
                  auVar9[0xc] = uVar59;
                  auVar9[0xd] = uVar60;
                  auVar9[0xe] = uVar61;
                  auVar9[0xf] = uVar62;
                  auVar68 = NEON_fmax(auVar68,auVar9,4);
                }
              }
              else {
                fVar82 = (float)uStack_488;
                auVar46._0_4_ =
                     pfVar35[0xc] +
                     pfVar35[8] * fVar82 + *pfVar35 * local_490 + pfVar35[4] * fStack_48c;
                auVar46._4_4_ =
                     pfVar35[0xd] +
                     pfVar35[9] * fVar82 + pfVar35[1] * local_490 + pfVar35[5] * fStack_48c;
                auVar46._8_4_ =
                     pfVar35[0xe] +
                     pfVar35[10] * fVar82 + pfVar35[2] * local_490 + pfVar35[6] * fStack_48c;
                auVar46._12_4_ =
                     pfVar35[0xf] +
                     pfVar35[0xb] * fVar82 + pfVar35[3] * local_490 + pfVar35[7] * fStack_48c;
                auVar11._8_4_ = 0xff7fffee;
                auVar11._0_8_ = 0xff7fffeeff7fffee;
                auVar11._12_4_ = 0xff7fffee;
                auVar12._8_4_ = 0x7f7fffee;
                auVar12._0_8_ = 0x7f7fffee7f7fffee;
                auVar12._12_4_ = 0x7f7fffee;
                auVar68 = NEON_fmin(auVar46,auVar12,4);
                auVar73 = NEON_fmax(auVar46,auVar11,4);
                auVar54._0_4_ =
                     (float)*(undefined8 *)(pfVar40 + 0xc) +
                     pfVar40[8] * fStack_378 +
                     *pfVar40 * local_380 + (float)*(undefined8 *)(pfVar40 + 4) * fStack_37c;
                auVar54._4_4_ =
                     (float)((ulong)*(undefined8 *)(pfVar40 + 0xc) >> 0x20) +
                     pfVar40[9] * fStack_378 +
                     pfVar40[1] * local_380 +
                     (float)((ulong)*(undefined8 *)(pfVar40 + 4) >> 0x20) * fStack_37c;
                auVar54._8_4_ =
                     (float)*(undefined8 *)(pfVar40 + 0xe) +
                     pfVar40[10] * fStack_378 +
                     pfVar40[2] * local_380 + (float)*(undefined8 *)(pfVar40 + 6) * fStack_37c;
                auVar54._12_4_ =
                     (float)((ulong)*(undefined8 *)(pfVar40 + 0xe) >> 0x20) +
                     pfVar40[0xb] * fStack_378 +
                     pfVar40[3] * local_380 +
                     (float)((ulong)*(undefined8 *)(pfVar40 + 6) >> 0x20) * fStack_37c;
                auVar47 = NEON_fmin(auVar68,auVar54,4);
                auVar68 = NEON_fmax(auVar73,auVar54,4);
              }
              auVar55._0_8_ = CONCAT44(auVar68._4_4_ + 0.06666667,auVar68._0_4_ + 0.06666667);
              auVar55._8_4_ = auVar68._8_4_ + 0.06666667;
              auVar55._12_4_ = auVar68._12_4_ + 0.06666667;
              auVar48._0_8_ = CONCAT44(auVar47._4_4_ + -0.06666667,auVar47._0_4_ + -0.06666667);
              auVar48._8_4_ = auVar47._8_4_ + -0.06666667;
              auVar48._12_4_ = auVar47._12_4_ + -0.06666667;
              uStack_2c8 = auVar48._8_8_;
              uStack_2b8 = auVar55._8_8_;
              local_2d0 = auVar48._0_8_;
              local_2c0 = auVar55._0_8_;
            }
            if (!(bool)(plVar23 == (long *)0x0 | bVar15 ^ 1)) {
              lVar29 = *plVar23;
              if (*(code **)(lVar29 + 0x18) != (code *)0x0) {
                (**(code **)(lVar29 + 0x18))(&DAT_03c7fb74,0,*(undefined8 *)(lVar29 + 0x28));
              }
              puVar38 = (undefined8 *)plVar23[2];
              uVar37 = (long)puVar38 + 0x17U & 0xfffffffffffffff8;
              if ((uVar37 <= (ulong)plVar23[3]) &&
                 (plVar23[2] = uVar37, puVar38 != (undefined8 *)0x0)) {
                *puVar38 = &DAT_03c7fb72;
                uVar18 = nn::os::GetSystemTick();
                puVar38[1] = uVar18;
              }
              if (((*(byte *)(lVar29 + 0x38) & 1) == 0) || (plVar23[6] == 0)) {
LAB_02fad840:
                puVar24 = (undefined8 *)plVar23[2];
              }
              else {
                puVar38 = (undefined8 *)plVar23[2];
                puVar24 = (undefined8 *)((long)puVar38 + 0x17U & 0xfffffffffffffff8);
                if ((undefined8 *)plVar23[3] < puVar24) goto LAB_02fad840;
                plVar23[2] = (long)puVar24;
                if (puVar38 != (undefined8 *)0x0) {
                  *puVar38 = &DAT_03c4e575;
                  puVar38[1] = *(undefined8 *)(plVar23[6] + 8);
                  goto LAB_02fad840;
                }
              }
              if (puVar24 != (undefined8 *)0x0) {
                puVar28 = (undefined4 *)((long)puVar24 + 0x13U & 0xfffffffffffffffc);
                uVar37 = (long)puVar28 + 0x1fU & 0xfffffffffffffff8;
                if (uVar37 <= (ulong)plVar23[3]) {
                  plVar23[2] = uVar37;
                  *puVar24 = &DAT_03c1a9df;
                  puVar24[1] = PTR_DAT_047e48d0;
                  if (puVar28 != (undefined4 *)0x0) {
                    *puVar28 = (undefined4)local_2d0;
                    puVar28[1] = local_2d0._4_4_;
                    puVar28[2] = (undefined4)uStack_2c8;
                    *(undefined8 *)(puVar28 + 3) = local_2c0;
                    puVar28[5] = (int)uStack_2b8;
                  }
                }
              }
            }
            local_2e0 = *(undefined8 *)(param_4 + uVar41 * 0x68 + 0x58);
            local_2d8 = local_2e0;
            if (((param_8 != 0) && (((uint)pfVar35[0x15] & 1) == 0)) &&
               (((uint)pfVar40[0x15] & 1) == 0)) {
              if (*(int *)(param_8 + 0x18) < 0xf99) {
                pfVar19 = (float *)(*(long *)(param_8 + 0x10) + (long)*(int *)(param_8 + 0x18) +
                                   0x20);
              }
              else {
                pfVar19 = (float *)FUN_031c36f4(param_8);
              }
              *pfVar19 = fVar3;
              pfVar19[1] = fVar2;
              *(int *)(param_8 + 0x18) = *(int *)(param_8 + 0x18) + 8;
              *(int *)(param_8 + 0x1c) = *(int *)(param_8 + 0x1c) + 1;
            }
            uStack_308 = auVar64._8_8_;
            local_310 = auVar64._0_8_;
            lVar29 = *(long *)(param_1 + 0x40);
            uVar7 = *puVar42;
            local_300 = local_310;
            uStack_2f8 = uStack_308;
            if ((*(uint *)(lVar29 + 0x948) & (uint)uVar7) == 0) {
              uVar21 = (uint)*(ushort *)(param_4 + uVar41 * 0x68 + 0x52);
LAB_02fad9e4:
              bVar14 = false;
              iVar43 = 0;
            }
            else {
              puVar38 = (undefined8 *)(lVar29 + 0x958);
              lVar22 = 1;
              while( true ) {
                if ((uVar7 & *(ushort *)(puVar38 + -1)) != 0) {
                  (**(code **)(*(long *)*puVar38 + 0x68))
                            ((long *)*puVar38,param_1,plVar32,&local_300,&local_310);
                }
                if (*(int *)(lVar29 + 0x94c) <= lVar22) break;
                uVar7 = *puVar42;
                lVar22 = lVar22 + 1;
                puVar38 = puVar38 + 2;
              }
              iVar43 = -(uint)((float)local_300 == auVar64._0_4_);
              iVar49 = -(uint)(local_300._4_4_ == auVar64._4_4_);
              iVar50 = -(uint)((float)uStack_2f8 == auVar64._8_4_);
              iVar51 = -(uint)(uStack_2f8._4_4_ == auVar64._12_4_);
              if (CONCAT13((byte)((uint)iVar49 >> 0x18) & (byte)((uint)iVar43 >> 0x18) &
                           (byte)((uint)iVar50 >> 0x18) & (byte)((uint)iVar51 >> 0x18),
                           CONCAT12((byte)((uint)iVar49 >> 0x10) & (byte)((uint)iVar43 >> 0x10) &
                                    (byte)((uint)iVar50 >> 0x10) & (byte)((uint)iVar51 >> 0x10),
                                    CONCAT11((byte)((uint)iVar49 >> 8) & (byte)((uint)iVar43 >> 8) &
                                             (byte)((uint)iVar50 >> 8) & (byte)((uint)iVar51 >> 8),
                                             (byte)iVar49 & (byte)iVar43 & (byte)iVar50 &
                                             (byte)iVar51))) == 0) {
                uVar21 = (uint)*(ushort *)(param_4 + uVar41 * 0x68 + 0x52);
              }
              else {
                iVar43 = -(uint)((float)local_310 == auVar64._0_4_);
                iVar49 = -(uint)(local_310._4_4_ == auVar64._4_4_);
                iVar50 = -(uint)((float)uStack_308 == auVar64._8_4_);
                iVar51 = -(uint)(uStack_308._4_4_ == auVar64._12_4_);
                uVar21 = (uint)*(ushort *)(param_4 + uVar41 * 0x68 + 0x52);
                if (CONCAT13((byte)((uint)iVar49 >> 0x18) & (byte)((uint)iVar43 >> 0x18) &
                             (byte)((uint)iVar50 >> 0x18) & (byte)((uint)iVar51 >> 0x18),
                             CONCAT12((byte)((uint)iVar49 >> 0x10) & (byte)((uint)iVar43 >> 0x10) &
                                      (byte)((uint)iVar50 >> 0x10) & (byte)((uint)iVar51 >> 0x10),
                                      CONCAT11((byte)((uint)iVar49 >> 8) & (byte)((uint)iVar43 >> 8)
                                               & (byte)((uint)iVar50 >> 8) &
                                               (byte)((uint)iVar51 >> 8),
                                               (byte)iVar49 & (byte)iVar43 & (byte)iVar50 &
                                               (byte)iVar51))) != 0) goto LAB_02fad9e4;
              }
              iVar43 = 0x40;
              bVar14 = true;
            }
            if ((int)(uVar21 + iVar20 + iVar43 + *(int *)(param_7 + 0x18)) < 0xfa1) {
              pfVar19 = (float *)(*(long *)(param_7 + 0x10) + (long)*(int *)(param_7 + 0x18) + 0x20)
              ;
            }
            else {
              pfVar19 = (float *)FUN_031c36f4();
            }
            *pfVar19 = *pfVar19 + 1.1920929e-07;
            *(undefined1 *)pfVar19 = 1;
            if ((*(byte *)puVar42 >> 1 & 1) == 0) {
              fVar82 = *(float *)(param_4 + uVar41 * 0x68 + 0x30);
            }
            else {
              fVar82 = NAN;
            }
            pfVar19[4] = fVar82;
            lVar29 = param_4 + uVar41 * 0x68;
            *(undefined8 *)(pfVar19 + 6) = local_2e0;
            *(undefined1 *)((long)pfVar19 + 0x2a) = 0;
            *(undefined2 *)(pfVar19 + 10) = *(undefined2 *)(lVar29 + 0x40);
            pbVar27 = (byte *)(lVar29 + 0x55);
            *(byte *)((long)pfVar19 + 0xf) = *pbVar27 & 0x1f;
            *(undefined1 *)((long)pfVar19 + 1) = 8;
            local_2e8 = pfVar19 + 0xc;
            *(byte *)(pfVar19 + 3) = bVar5;
            *(byte *)((long)pfVar19 + 0xd) = bVar6;
            pfVar19[1] = fVar1;
            pfVar19[2] = fVar4;
            *(char *)(pfVar19 + 8) = (bVar6 < bVar5) << 3;
            *(byte *)((long)pfVar19 + 2) = *(byte *)puVar42;
            if ((long)(uVar41 + 1) < (long)(int)local_288) {
              uVar77 = *(undefined4 *)(param_4 + (uVar41 + 1) * 0x68 + 0x34);
            }
            else {
              uVar77 = 0x7fffffff;
            }
            FUN_02fae614(&local_2b0,*(undefined4 *)(param_4 + uVar41 * 0x68 + 0x34),uVar77,pfVar19);
            local_328 = 0.0;
            dVar10 = (double)pfVar35[0xc] + (double)pfVar35[0x10];
            dVar52 = (double)pfVar35[0xe] + (double)pfVar35[0x12];
            dVar67 = (double)pfVar35[0xd] + (double)pfVar35[0x11];
            dVar44 = (double)pfVar35[0xf] + (double)pfVar35[0x13];
            if (*(float *)((long)puVar36 + 0x4c) == 0.0) {
              local_340 = dVar10;
              local_338 = dVar67;
              local_330 = dVar52;
              local_328 = dVar44;
              if ((~(uint)fVar90 & 0xffffff) == 0) {
                psVar25 = *(short **)(param_4 + uVar41 * 0x68 + 0x48);
                if (*psVar25 == 3) {
                  uVar74 = *(undefined8 *)(psVar25 + 0xc);
                  uVar18 = *(undefined8 *)(psVar25 + 8);
                }
                else {
                  if (*psVar25 != 2) goto LAB_02fadca8;
                  uVar74 = *(undefined8 *)(psVar25 + 0x24);
                  uVar18 = *(undefined8 *)(psVar25 + 0x20);
                }
                local_340 = dVar10 + (double)(float)uVar18;
                local_338 = dVar67 + (double)(float)((ulong)uVar18 >> 0x20);
                local_330 = dVar52 + (double)(float)uVar74;
                local_328 = dVar44 + (double)(float)((ulong)uVar74 >> 0x20);
              }
            }
            else {
              local_340 = (double)puVar36[2];
              local_338 = (double)puVar36[3];
              local_330 = (double)puVar36[4];
            }
LAB_02fadca8:
            dVar76 = (double)(float)*(undefined8 *)(pfVar40 + 0xc) +
                     (double)(float)*(undefined8 *)(pfVar40 + 0x10);
            dVar78 = (double)(float)((ulong)*(undefined8 *)(pfVar40 + 0xc) >> 0x20) +
                     (double)(float)((ulong)*(undefined8 *)(pfVar40 + 0x10) >> 0x20);
            dVar79 = (double)(float)*(undefined8 *)(pfVar40 + 0xe) +
                     (double)(float)*(undefined8 *)(pfVar40 + 0x12);
            dVar75 = (double)(float)((ulong)*(undefined8 *)(pfVar40 + 0xe) >> 0x20) +
                     (double)(float)((ulong)*(undefined8 *)(pfVar40 + 0x12) >> 0x20);
            dVar70 = (double)puVar39[3];
            dVar80 = 0.0;
            dVar63 = (double)puVar39[2];
            dVar71 = (double)puVar39[4];
            if (*(float *)((long)puVar39 + 0x4c) == 0.0) {
              dVar70 = dVar78;
              dVar80 = dVar75;
              dVar63 = dVar76;
              dVar71 = dVar79;
              if ((~(uint)fVar81 & 0xffffff) == 0) {
                psVar25 = *(short **)(param_4 + uVar41 * 0x68 + 0x48);
                if (*psVar25 == 3) {
                  fVar90 = *(float *)(psVar25 + 0x10);
                  fVar81 = *(float *)(psVar25 + 0x12);
                  fVar82 = *(float *)(psVar25 + 0x14);
                  fVar83 = *(float *)(psVar25 + 0x16);
                }
                else {
                  if (*psVar25 != 2) goto LAB_02fadd44;
                  fVar90 = *(float *)(psVar25 + 0x40);
                  fVar81 = *(float *)(psVar25 + 0x42);
                  fVar82 = *(float *)(psVar25 + 0x44);
                  fVar83 = *(float *)(psVar25 + 0x46);
                }
                dVar63 = dVar76 + (double)fVar90;
                dVar70 = dVar78 + (double)fVar81;
                dVar71 = dVar79 + (double)fVar82;
                dVar80 = dVar75 + (double)fVar83;
              }
            }
LAB_02fadd44:
            uStack_1b8 = puVar36[0xd];
            local_1c0 = puVar36[0xc];
            uStack_1a8 = puVar36[0xf];
            local_1b0 = puVar36[0xe];
            uVar18 = puVar36[8];
            fVar81 = (float)((int)(short)uVar18 << 0x10);
            fVar82 = (float)((int)(short)((ulong)uVar18 >> 0x10) << 0x10);
            uVar74 = CONCAT44(fVar82,fVar81);
            fVar83 = (float)((int)(short)((ulong)uVar18 >> 0x20) << 0x10);
            fVar85 = (float)((int)(short)((ulong)uVar18 >> 0x30) << 0x10);
            uVar84 = CONCAT44(fVar85,fVar83);
            fVar88 = -(float)*puVar36;
            fVar89 = -(float)((ulong)*puVar36 >> 0x20);
            local_150 = CONCAT44(fVar89,fVar88);
            fVar90 = -(float)puVar36[1];
            fVar69 = (float)((ulong)puVar36[1] >> 0x20);
            uStack_148 = CONCAT44(fVar69,fVar90);
            fVar92 = fVar89 + fVar89;
            fVar93 = fVar90 + fVar90;
            fVar66 = (float)(dVar67 - local_338);
            fVar94 = (fVar88 + fVar88) * fVar88;
            fVar87 = (fVar88 + fVar88) * fVar69;
            fVar91 = 1.0 - fVar90 * fVar93;
            fStack_18c = fVar92 * fVar88 + fVar93 * fVar69;
            local_190 = fVar91 - fVar92 * fVar89;
            auVar65._0_8_ = CONCAT44((float)(dVar70 - local_338),(float)(dVar63 - local_340));
            fVar90 = fVar93 * fVar88 + fVar92 * fVar69;
            fStack_188 = fVar93 * fVar88 - fVar92 * fVar69;
            fStack_184 = fVar93 * fVar89 - fVar87;
            local_140 = puVar36[7];
            local_c0 = CONCAT44((float)(dVar78 - local_338),(float)(dVar76 - local_340));
            uStack_178 = CONCAT44(fVar90,fVar93 * fVar89 + fVar87);
            local_170 = CONCAT44(fStack_184,fVar90);
            uStack_168 = (ulong)(uint)((1.0 - fVar94) - fVar92 * fVar89);
            uStack_128 = puVar36[6];
            local_130 = puVar36[5];
            auVar65._8_4_ = (float)(dVar71 - local_330);
            local_158 = 0;
            uVar77 = (undefined4)((ulong)uStack_128 >> 0x20);
            uStack_138 = CONCAT44(uVar77,uVar77);
            local_160 = 0;
            local_180 = CONCAT44(fVar91 - fVar94,fVar92 * fVar88 - fVar93 * fVar69);
            auVar65._12_4_ = (float)(dVar80 - local_328);
            uStack_268 = puVar39[0xd];
            local_270 = puVar39[0xc];
            uStack_258 = puVar39[0xf];
            local_260 = puVar39[0xe];
            fVar90 = (float)(dVar44 - local_328);
            uVar18 = puVar39[8];
            fVar92 = (float)((int)(short)uVar18 << 0x10);
            fVar93 = (float)((int)(short)((ulong)uVar18 >> 0x10) << 0x10);
            local_250 = CONCAT44(fVar93,fVar92);
            fVar94 = (float)((int)(short)((ulong)uVar18 >> 0x20) << 0x10);
            fVar86 = (float)((int)(short)((ulong)uVar18 >> 0x30) << 0x10);
            uVar18 = CONCAT44(fVar86,fVar94);
            local_200 = -(float)*puVar39;
            fStack_1fc = -(float)((ulong)*puVar39 >> 0x20);
            fStack_1f8 = -(float)puVar39[1];
            fStack_1f4 = (float)((ulong)puVar39[1] >> 0x20);
            uStack_b8 = CONCAT44((float)(dVar75 - local_328),(float)(dVar79 - local_330));
            uStack_1d8 = puVar39[6];
            uStack_1e0 = puVar39[5];
            local_1f0 = puVar39[7];
            local_98 = &local_340;
            uStack_c8 = CONCAT17((char)((uint)fVar90 >> 0x18),
                                 CONCAT16((char)((uint)fVar90 >> 0x10),
                                          CONCAT15((char)((uint)fVar90 >> 8),
                                                   CONCAT14(SUB41(fVar90,0),
                                                            (float)(dVar52 - local_330)))));
            local_d0 = CONCAT17((char)((uint)fVar66 >> 0x18),
                                CONCAT16((char)((uint)fVar66 >> 0x10),
                                         CONCAT15((char)((uint)fVar66 >> 8),
                                                  CONCAT14(SUB41(fVar66,0),
                                                           (float)(dVar10 - local_340)))));
            fVar69 = fStack_1fc + fStack_1fc;
            fVar88 = fStack_1f8 + fStack_1f8;
            fVar89 = (local_200 + local_200) * local_200;
            fVar87 = (local_200 + local_200) * fStack_1f4;
            fVar90 = 1.0 - fStack_1f8 * fVar88;
            fVar91 = fVar90 - fVar89;
            fVar66 = fVar88 * fStack_1fc - fVar87;
            uVar77 = (undefined4)((ulong)uStack_1d8 >> 0x20);
            uStack_1e8 = CONCAT44(uVar77,uVar77);
            auVar45._0_8_ =
                 CONCAT44(fVar69 * local_200 + fVar88 * fStack_1f4,fVar90 - fVar69 * fStack_1fc);
            auVar45._8_4_ = fVar88 * local_200 - fVar69 * fStack_1f4;
            fVar90 = fVar88 * local_200 + fVar69 * fStack_1f4;
            auVar72._4_12_ = SUB1612(ZEXT816(0),4);
            auVar72._0_4_ = (1.0 - fVar89) - fVar69 * fStack_1fc;
            local_220 = CONCAT44(fVar66,fVar90);
            auVar45._12_4_ = fVar66;
            uStack_218 = auVar72._0_8_;
            uStack_238 = auVar45._8_8_;
            uStack_228 = CONCAT17((char)((uint)fVar90 >> 0x18),
                                  CONCAT16((char)((uint)fVar90 >> 0x10),
                                           CONCAT15((char)((uint)fVar90 >> 8),
                                                    CONCAT14(SUB41(fVar90,0),
                                                             fVar88 * fStack_1fc + fVar87))));
            uStack_230 = CONCAT17((char)((uint)fVar91 >> 0x18),
                                  CONCAT16((char)((uint)fVar91 >> 0x10),
                                           CONCAT15((char)((uint)fVar91 >> 8),
                                                    CONCAT14(SUB41(fVar91,0),
                                                             fVar69 * local_200 -
                                                             fVar88 * fStack_1f4))));
            uStack_208 = auVar65._8_8_;
            uStack_248 = uVar18;
            local_1a0 = uVar74;
            uStack_198 = uVar84;
            if (bVar14) {
              auVar53._0_8_ = CONCAT44(local_310._4_4_ * fVar93,(float)local_310 * fVar92);
              auVar53._8_4_ = (float)uStack_308 * fVar94;
              auVar53._12_4_ = uStack_308._4_4_ * fVar86;
              fVar81 = fVar81 * (float)local_300;
              fVar82 = fVar82 * local_300._4_4_;
              fVar83 = fVar83 * (float)uStack_2f8;
              fVar85 = fVar85 * uStack_2f8._4_4_;
              uStack_198 = CONCAT44(fVar85,fVar83);
              local_1a0 = CONCAT44(fVar82,fVar81);
              uStack_248 = auVar53._8_8_;
              local_2e8[2] = fVar83;
              local_2e8[3] = fVar85;
              *local_2e8 = fVar81;
              local_2e8[1] = fVar82;
              *(undefined1 *)local_2e8 = 0x15;
              *(undefined8 *)(local_2e8 + 6) = uStack_248;
              *(undefined8 *)(local_2e8 + 4) = auVar53._0_8_;
              local_2e8 = local_2e8 + 8;
              local_560 = local_250;
              uStack_558 = uVar18;
              local_550 = uVar74;
              uStack_548 = uVar84;
              local_250 = auVar53._0_8_;
            }
            lVar29 = param_4 + uVar41 * 0x68;
            local_490 = 0.0;
            puVar36 = (undefined8 *)(lVar29 + 0x48);
            puVar34 = (undefined2 *)(lVar29 + 0x50);
            local_240 = auVar45._0_8_;
            uStack_210 = auVar65._0_8_;
            FUN_02f265b0(*puVar36,*puVar34,&local_380,auStack_3c0,&local_490,&local_120,&local_2e8,
                         plVar32,puVar26);
            if (local_284 != '\0') {
              if (plVar23 == (long *)0x0) {
                FUN_02fb2980(*puVar36,*puVar34,&local_380,auStack_3c0,&local_490,&local_120,
                             &local_2e8,plVar32,local_2a8,fVar3,fVar2,fVar1,fVar4,bVar6 < bVar5);
              }
              else {
                lVar29 = *plVar23;
                if (*(code **)(lVar29 + 0x18) != (code *)0x0) {
                  (**(code **)(lVar29 + 0x18))
                            ("PrepareConstraintGroupDirectSolving",0x23,
                             *(undefined8 *)(lVar29 + 0x28));
                }
                puVar39 = (undefined8 *)plVar23[2];
                uVar37 = (long)puVar39 + 0x17U & 0xfffffffffffffff8;
                if ((uVar37 <= (ulong)plVar23[3]) &&
                   (plVar23[2] = uVar37, puVar39 != (undefined8 *)0x0)) {
                  *puVar39 = "TtPrepareConstraintGroupDirectSolving";
                  uVar18 = nn::os::GetSystemTick();
                  puVar39[1] = uVar18;
                }
                if (((*(byte *)(lVar29 + 0x38) & 1) != 0) && (plVar23[6] != 0)) {
                  puVar39 = (undefined8 *)plVar23[2];
                  uVar37 = (long)puVar39 + 0x17U & 0xfffffffffffffff8;
                  if ((uVar37 <= (ulong)plVar23[3]) &&
                     (plVar23[2] = uVar37, puVar39 != (undefined8 *)0x0)) {
                    *puVar39 = &DAT_03c4e575;
                    puVar39[1] = *(undefined8 *)(plVar23[6] + 8);
                  }
                }
                FUN_02fb2980(*puVar36,*puVar34,&local_380,auStack_3c0,&local_490,&local_120,
                             &local_2e8,plVar32,local_2a8,fVar3,fVar2,fVar1,fVar4,bVar6 < bVar5);
                lVar29 = *plVar23;
                if (((*(byte *)(lVar29 + 0x38) & 1) == 0) || (plVar23[6] == 0)) {
LAB_02fae18c:
                  puVar39 = (undefined8 *)plVar23[2];
                  puVar38 = (undefined8 *)plVar23[3];
                }
                else {
                  puVar36 = (undefined8 *)plVar23[2];
                  puVar38 = (undefined8 *)plVar23[3];
                  puVar39 = (undefined8 *)((long)puVar36 + 0x17U & 0xfffffffffffffff8);
                  if (puVar38 < puVar39) goto LAB_02fae18c;
                  plVar23[2] = (long)puVar39;
                  if (puVar36 != (undefined8 *)0x0) {
                    *puVar36 = &DAT_03c4e575;
                    puVar36[1] = *(undefined8 *)(plVar23[6] + 8);
                    goto LAB_02fae18c;
                  }
                }
                puVar36 = (undefined8 *)((long)puVar39 + 0x17U & 0xfffffffffffffff8);
                if ((puVar36 <= puVar38) &&
                   (plVar23[2] = (long)puVar36, puVar39 != (undefined8 *)0x0)) {
                  *puVar39 = &DAT_03c2d363;
                  uVar18 = nn::os::GetSystemTick();
                  puVar39[1] = uVar18;
                }
                if (*(code **)(lVar29 + 0x20) != (code *)0x0) {
                  (**(code **)(lVar29 + 0x20))(*(undefined8 *)(lVar29 + 0x28));
                }
              }
            }
            if (bVar14) {
              *(undefined8 *)(local_2e8 + 2) = uStack_548;
              *(undefined8 *)local_2e8 = local_550;
              *(undefined8 *)(local_2e8 + 6) = uStack_558;
              *(undefined8 *)(local_2e8 + 4) = local_560;
              *(undefined1 *)local_2e8 = 0x15;
              local_2e8 = local_2e8 + 8;
            }
            uVar21 = (int)local_2e8 - (int)pfVar19;
            *(uint *)(param_7 + 0x28) = *(int *)(param_7 + 0x28) + (*pbVar27 & 0x1f) * 4;
            *(char *)((long)pfVar19 + 0xe) = (char)(uVar21 >> 4);
            *(uint *)(param_7 + 0x18) = *(int *)(param_7 + 0x18) + uVar21;
            *(int *)(param_7 + 0x1c) = *(int *)(param_7 + 0x1c) + 1;
            if ((bool)(plVar23 != (long *)0x0 & bVar15)) {
              lVar29 = *plVar23;
              if (((*(byte *)(lVar29 + 0x38) & 1) == 0) || (plVar23[6] == 0)) {
LAB_02fae304:
                puVar39 = (undefined8 *)plVar23[2];
                puVar38 = (undefined8 *)plVar23[3];
              }
              else {
                puVar36 = (undefined8 *)plVar23[2];
                puVar38 = (undefined8 *)plVar23[3];
                puVar39 = (undefined8 *)((long)puVar36 + 0x17U & 0xfffffffffffffff8);
                if (puVar38 < puVar39) goto LAB_02fae304;
                plVar23[2] = (long)puVar39;
                if (puVar36 != (undefined8 *)0x0) {
                  *puVar36 = &DAT_03c4e575;
                  puVar36[1] = *(undefined8 *)(plVar23[6] + 8);
                  goto LAB_02fae304;
                }
              }
              puVar36 = (undefined8 *)((long)puVar39 + 0x17U & 0xfffffffffffffff8);
              if ((puVar36 <= puVar38) && (plVar23[2] = (long)puVar36, puVar39 != (undefined8 *)0x0)
                 ) {
                *puVar39 = &DAT_03c2d363;
                uVar18 = nn::os::GetSystemTick();
                puVar39[1] = uVar18;
              }
              if (*(code **)(lVar29 + 0x20) != (code *)0x0) {
                (**(code **)(lVar29 + 0x20))(*(undefined8 *)(lVar29 + 0x28));
              }
            }
          }
        }
      }
LAB_02fad6f8:
      uVar41 = uVar41 + 1;
    } while (uVar41 != param_5);
  }
  return;
}


