/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034325c0; name: FUN_034325c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_034325c0(long *param_1,undefined1 (*param_2) [12],long *param_3,undefined1 (*param_4) [12])

{
  long lVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  ulong uVar12;
  undefined4 *puVar13;
  long lVar14;
  void *pvVar15;
  float *pfVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  float *pfVar19;
  int iVar20;
  uint uVar21;
  ulong uVar22;
  int iVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  long lVar27;
  int iVar28;
  ulong uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long *plVar33;
  long lVar34;
  long lVar35;
  long *plVar36;
  long *plVar37;
  uint uVar38;
  uint *puVar39;
  ulong uVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar48;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined4 uVar55;
  float fVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  float fVar66;
  float fVar67;
  float fStack_3b4;
  float local_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  undefined **local_390;
  long lStack_388;
  ulong local_380;
  ulong uStack_378;
  long local_370;
  undefined4 uStack_368;
  undefined4 uStack_364;
  ulong local_360;
  undefined8 *local_358;
  uint local_350;
  uint local_34c;
  undefined4 local_348;
  undefined **local_340;
  undefined4 uStack_338;
  float fStack_334;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  void *local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined8 local_260;
  uint local_258;
  long local_250;
  undefined8 uStack_248;
  long local_238;
  ulong local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined8 local_184;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 local_130;
  uint local_128;
  int local_120;
  byte local_11c;
  undefined4 local_118;
  long local_110;
  undefined8 local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  if ((param_4[3][8] != '\0') || (param_4[3][9] != '\0')) {
    iVar23 = (int)((float)*(uint *)(param_3 + 1) * 0.2);
    if (0 < iVar23) {
      fVar41 = 0.0;
      iVar20 = 0;
      iVar28 = 0;
      do {
        DAT_047bf680 = DAT_047bf680 * 0x5851f42d4c957f2d + 1;
        uVar29 = (ulong)(uint)(int)((float)((*(uint *)(param_3 + 1) - 1) *
                                           (uint)((ulong)DAT_047bf680 >> 0x21)) * 4.656613e-10);
        uVar21 = *(uint *)(*param_3 + uVar29 * 0x50 + 0x40);
        uVar12 = (ulong)uVar21;
        if (uVar21 != 0) {
          fVar59 = *(float *)(*param_2 + 4);
          fVar63 = *(float *)(*param_2 + 8);
          fVar49 = *(float *)*param_2;
          pfVar16 = *(float **)(*param_3 + uVar29 * 0x50 + 0x38);
          do {
            pfVar19 = *(float **)(pfVar16 + 6);
            if (pfVar19 == (float *)0x0) {
              fVar49 = *pfVar16 - fVar49;
              fVar59 = pfVar16[1] - fVar59;
              fVar63 = pfVar16[2] - fVar63;
              fVar50 = fVar49 * fVar49 + fVar59 * fVar59 + fVar63 * fVar63;
              fVar59 = pfVar16[1];
              fVar63 = pfVar16[2];
              fVar49 = *pfVar16;
            }
            else {
              fVar49 = *pfVar19 - fVar49;
              fVar59 = pfVar19[1] - fVar59;
              fVar63 = pfVar19[2] - fVar63;
              fVar50 = fVar49 * fVar49 + fVar59 * fVar59 + fVar63 * fVar63;
              fVar59 = pfVar19[1];
              fVar63 = pfVar19[2];
              fVar49 = *pfVar19;
            }
            fVar41 = SQRT(fVar50) + fVar41;
            pfVar16 = pfVar16 + 8;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
          iVar20 = uVar21 + iVar20;
        }
        iVar28 = iVar28 + 1;
      } while (iVar28 != iVar23);
      if (0 < iVar20) {
        *(float *)((long)param_1 + 0x24) = fVar41 / (float)iVar20;
      }
    }
  }
  puVar7 = PTR_DAT_047e2fd0;
  plVar36 = *(long **)(param_4[1] + 4);
  auVar42 = NEON_fmov(0x3f800000,4);
  puVar17 = (undefined8 *)*plVar36;
  local_250 = 0;
  uStack_248 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  fStack_3b4 = auVar42._12_4_;
  uVar8 = local_184._4_4_;
  if ((int)plVar36[1] != 0) {
    puVar25 = puVar17;
LAB_034327e0:
    local_184._4_4_ = uVar8;
    puVar18 = puVar25;
    uVar8 = local_184._4_4_;
    uVar12 = (ulong)*(uint *)(puVar18 + 8);
    if (*(uint *)(puVar18 + 8) != 0) {
      plVar37 = (long *)(puVar18[7] + 0x18);
      do {
        local_184._4_4_ = uVar8;
        if (*plVar37 == 0) {
          if (param_4[3][8] == '\0') goto LAB_03433a44;
          local_258 = 0;
          local_260 = 0x3f80000000000000;
          uVar31 = local_184;
          memset(&local_340,0,0xe0);
          uVar31 = local_184;
          local_390 = &PTR_FUN_047bf6c0;
          local_348 = 0;
          local_360 = 0;
          local_358 = (undefined8 *)0x0;
          local_350 = 0;
          local_34c = 0;
          local_3a0 = *(float *)*param_2;
          fStack_39c = *(float *)(*param_2 + 4);
          fStack_398 = *(float *)(*param_2 + 8);
          local_c8 = 0;
          fStack_394 = fStack_3b4;
          local_c0 = 0.0;
          auVar44._12_4_ = fStack_3b4;
          auVar44._0_12_ = *param_4;
          uStack_208 = auVar44._8_8_;
          local_210 = SUB128(*param_4,0);
          uVar8 = local_184._4_4_;
          local_184 = uVar31;
          uVar31 = local_184;
          local_184._4_4_ = uVar8;
          iVar23 = FUN_0342ffb8(auVar44,auVar42,param_1,&local_210,&local_3a0,puVar18,&local_340,
                                &local_c8,&local_d0);
          uVar32 = local_d0;
          uVar31 = local_184;
          local_184 = uVar31;
          if (iVar23 == 0) {
            local_360 = puVar18[6];
            local_350 = 0;
            uVar21 = *(uint *)(puVar18 + 8);
            uVar12 = (ulong)uVar21;
            if (uVar21 == 0) {
              local_350 = 0;
            }
            else {
              uVar8 = local_184._4_4_;
              uVar31 = local_184;
              local_184._4_4_ = uVar8;
              puVar17 = (undefined8 *)(**(code **)(puVar7 + 0x28))(0xb,0,uVar12 << 5,0x10);
              uVar8 = local_184._4_4_;
              uVar31 = local_184;
              local_184._4_4_ = uVar8;
              if (puVar17 != (undefined8 *)0x0) {
                uVar29 = uVar12 & 7;
                if (uVar12 - 1 < 7) {
                  uVar40 = 0;
                }
                else {
                  uVar40 = 0;
                  puVar25 = puVar17 + 0x12;
                  do {
                    uVar40 = uVar40 + 8;
                    puVar25[-0x10] = 0;
                    puVar25[-0xf] = 0;
                    puVar25[-0xc] = 0;
                    puVar25[-0xb] = 0;
                    puVar25[-8] = 0;
                    puVar25[-7] = 0;
                    puVar25[-4] = 0;
                    puVar25[-3] = 0;
                    *puVar25 = 0;
                    puVar25[1] = 0;
                    puVar25[4] = 0;
                    puVar25[5] = 0;
                    puVar25[8] = 0;
                    puVar25[9] = 0;
                    puVar25[0xc] = 0;
                    puVar25[0xd] = 0;
                    puVar25 = puVar25 + 0x20;
                  } while ((uVar12 & 0xfffffff8) != uVar40);
                }
                if ((uVar21 & 7) != 0) {
                  puVar25 = puVar17 + uVar40 * 4 + 2;
                  do {
                    uVar29 = uVar29 - 1;
                    *puVar25 = 0;
                    puVar25[1] = 0;
                    puVar25 = puVar25 + 4;
                  } while (uVar29 != 0);
                }
                local_358 = puVar17;
                local_350 = uVar21;
                local_34c = uVar21;
                if (*(int *)(puVar18 + 8) != 0) {
                  lVar34 = 0;
                  uVar12 = 0;
                  do {
                    puVar25 = (undefined8 *)(puVar18[7] + lVar34);
                    uVar32 = puVar25[1];
                    puVar26 = (undefined8 *)((long)puVar17 + lVar34);
                    lVar34 = lVar34 + 0x20;
                    puVar26[3] = puVar25[3];
                    puVar26[1] = uVar32;
                    uVar32 = *puVar25;
                    puVar26[2] = puVar25[2];
                    *puVar26 = uVar32;
                    uVar12 = uVar12 + 1;
                  } while (uVar12 < *(uint *)(puVar18 + 8));
                }
              }
            }
            local_184 = uVar31;
            uVar8 = local_184._4_4_;
            auVar44 = *(undefined1 (*) [16])(puVar18 + 4);
            uStack_378 = SUB168(*(undefined1 (*) [16])(puVar18 + 2),8);
            local_380 = SUB168(*(undefined1 (*) [16])(puVar18 + 2),0);
            uStack_368 = auVar44._8_4_;
            uStack_364 = auVar44._12_4_;
            local_370 = auVar44._0_8_;
            local_348 = *(undefined4 *)(puVar18 + 9);
            goto LAB_034333c8;
          }
          if (iVar23 != 3) {
            uVar8 = local_184._4_4_;
            if (iVar23 == 2) {
              local_360 = puVar18[6];
              local_350 = 0;
              uVar21 = *(uint *)(puVar18 + 8);
              uVar12 = (ulong)uVar21;
              if (uVar21 == 0) {
                puVar17 = (undefined8 *)0x0;
                local_350 = 0;
              }
              else {
                uVar31 = local_184;
                local_184._4_4_ = uVar8;
                puVar17 = (undefined8 *)(**(code **)(puVar7 + 0x28))(0xb,0,uVar12 << 5,0x10);
                uVar8 = local_184._4_4_;
                uVar31 = local_184;
                local_184._4_4_ = uVar8;
                if (puVar17 == (undefined8 *)0x0) {
                  uVar12 = 0;
                }
                else {
                  uVar29 = uVar12 & 7;
                  if (uVar12 - 1 < 7) {
                    uVar40 = 0;
                  }
                  else {
                    uVar40 = 0;
                    puVar25 = puVar17 + 0x12;
                    do {
                      uVar40 = uVar40 + 8;
                      puVar25[-0x10] = 0;
                      puVar25[-0xf] = 0;
                      puVar25[-0xc] = 0;
                      puVar25[-0xb] = 0;
                      puVar25[-8] = 0;
                      puVar25[-7] = 0;
                      puVar25[-4] = 0;
                      puVar25[-3] = 0;
                      *puVar25 = 0;
                      puVar25[1] = 0;
                      puVar25[4] = 0;
                      puVar25[5] = 0;
                      puVar25[8] = 0;
                      puVar25[9] = 0;
                      puVar25[0xc] = 0;
                      puVar25[0xd] = 0;
                      puVar25 = puVar25 + 0x20;
                    } while ((uVar12 & 0xfffffff8) != uVar40);
                  }
                  if ((uVar21 & 7) != 0) {
                    puVar25 = puVar17 + uVar40 * 4 + 2;
                    do {
                      uVar29 = uVar29 - 1;
                      *puVar25 = 0;
                      puVar25[1] = 0;
                      puVar25 = puVar25 + 4;
                    } while (uVar29 != 0);
                  }
                  local_358 = puVar17;
                  local_350 = uVar21;
                  local_34c = uVar21;
                  if (*(int *)(puVar18 + 8) != 0) {
                    lVar34 = 0;
                    uVar29 = 0;
                    do {
                      puVar25 = (undefined8 *)(puVar18[7] + lVar34);
                      uVar32 = puVar25[1];
                      puVar26 = (undefined8 *)((long)puVar17 + lVar34);
                      lVar34 = lVar34 + 0x20;
                      puVar26[3] = puVar25[3];
                      puVar26[1] = uVar32;
                      uVar32 = *puVar25;
                      puVar26[2] = puVar25[2];
                      *puVar26 = uVar32;
                      uVar29 = uVar29 + 1;
                    } while (uVar29 < *(uint *)(puVar18 + 8));
                  }
                }
              }
              local_184 = uVar31;
              uVar8 = local_184._4_4_;
              auVar44 = *(undefined1 (*) [16])(puVar18 + 4);
              uStack_378 = SUB168(*(undefined1 (*) [16])(puVar18 + 2),8);
              local_380 = SUB168(*(undefined1 (*) [16])(puVar18 + 2),0);
              uStack_368 = auVar44._8_4_;
              uStack_364 = auVar44._12_4_;
              local_370 = auVar44._0_8_;
              local_348 = *(undefined4 *)(puVar18 + 9);
              uVar31 = local_184;
              if (1 < (uint)uVar12) {
                puVar25 = puVar17 + uVar12 * 4 + -4;
                uVar21 = (uint)uVar12;
                if (puVar17 < puVar25) {
                  uVar12 = uVar12 * 0x20 - 0x21;
                  uVar21 = ((uint)(uVar12 >> 5) & 0x7ffffff) + 1;
                  if ((uVar21 & 3) != 0) {
                    lVar34 = -((ulong)uVar21 & 3);
                    puVar26 = puVar17;
                    do {
                      puVar17 = puVar26 + 4;
                      bVar11 = lVar34 != -1;
                      lVar34 = lVar34 + 1;
                      *puVar26 = *puVar17;
                      puVar26[1] = puVar26[5];
                      puVar26[2] = puVar26[6];
                      puVar26[3] = puVar26[7];
                      puVar26 = puVar17;
                    } while (bVar11);
                  }
                  if (0x5f < uVar12) {
                    do {
                      *puVar17 = puVar17[4];
                      puVar17[1] = puVar17[5];
                      puVar17[4] = puVar17[8];
                      puVar17[5] = puVar17[9];
                      puVar17[2] = puVar17[6];
                      puVar17[3] = puVar17[7];
                      puVar17[6] = puVar17[10];
                      puVar17[7] = puVar17[0xb];
                      puVar17[10] = puVar17[0xe];
                      puVar17[0xb] = puVar17[0xf];
                      puVar17[8] = puVar17[0xc];
                      puVar17[9] = puVar17[0xd];
                      puVar26 = puVar17 + 0x10;
                      puVar17[0xe] = puVar17[0x12];
                      puVar17[0xf] = puVar17[0x13];
                      puVar17[0xc] = *puVar26;
                      puVar17[0xd] = puVar17[0x11];
                      puVar17 = puVar26;
                    } while (puVar26 < puVar25);
                  }
                  uVar21 = local_350;
                }
                local_350 = uVar21 - 1;
                auVar57._12_4_ = fStack_3b4;
                auVar57._0_12_ = *param_4;
                uStack_208 = auVar57._8_8_;
                local_210 = SUB128(*param_4,0);
                local_184._4_4_ = uVar8;
                iVar23 = FUN_0342ffb8(param_1,&local_210,&local_3a0,&local_390,&local_340,0,0);
                uVar8 = local_184._4_4_;
                uVar31 = local_184;
                if (iVar23 == 0) goto LAB_034333c8;
              }
            }
            goto LAB_03433a18;
          }
          fVar63 = local_c8._4_4_ - fStack_39c;
          fVar41 = (float)local_c8 - local_3a0;
          fVar59 = local_c0 - fStack_398;
          uVar8 = local_184._4_4_;
          uVar31 = local_184;
          local_184._4_4_ = uVar8;
          memset(&local_210,0,0xc0);
          uVar8 = local_184._4_4_;
          uStack_140 = CONCAT44(fVar63,fVar41);
          auVar52._8_4_ = fVar59;
          auVar52._0_8_ = uStack_140;
          auVar52._12_4_ = 0;
          local_130 = uVar32;
          local_150 = CONCAT44(fStack_39c,local_3a0);
          auVar5._8_4_ = fStack_398;
          auVar5._0_8_ = local_150;
          auVar5._12_4_ = fStack_394;
          local_120 = 0;
          local_11c = 0;
          local_118 = 0x3f800000;
          local_110 = 0;
          uStack_148 = auVar5._8_8_;
          uStack_138 = (ulong)(uint)fVar59;
          lVar34 = *param_1;
          if ((DAT_048af6d0 & 1) == 0) {
            uVar31 = local_184;
            local_184._4_4_ = uVar8;
            iVar23 = __cxa_guard_acquire(&DAT_048af6d0);
            uVar8 = local_184._4_4_;
            auVar52._4_4_ = fVar63;
            auVar52._0_4_ = fVar41;
            auVar52._12_4_ = 0;
            if (iVar23 != 0) {
              _DAT_048af6c0 = auVar42._0_8_;
              uRam00000000048af6c8 = auVar42._8_8_;
              uVar31 = local_184;
              local_184._4_4_ = uVar8;
              __cxa_guard_release(&DAT_048af6d0);
              uVar8 = local_184._4_4_;
              auVar52._12_4_ = 0;
            }
          }
          local_184._4_4_ = uVar8;
          uVar8 = local_184._4_4_;
          local_b0 = CONCAT44(fStack_39c,local_3a0);
          uStack_a8 = CONCAT44(fStack_394,fStack_398);
          uStack_98 = auVar52._8_8_;
          uStack_a0 = auVar52._0_8_;
          auVar44 = NEON_frecpe(auVar52,4);
          auVar57 = NEON_frecps(auVar52,auVar44,4);
          local_b8 = 0x7f7fffff;
          uStack_b4 = 0;
          auVar43._0_8_ =
               CONCAT44(auVar44._4_4_ * (float)((ulong)_DAT_048af6c0 >> 0x20) * auVar57._4_4_,
                        auVar44._0_4_ * (float)_DAT_048af6c0 * auVar57._0_4_);
          auVar43._8_4_ = auVar44._8_4_ * (float)uRam00000000048af6c8 * auVar57._8_4_;
          auVar43._12_4_ =
               auVar44._12_4_ * (float)((ulong)uRam00000000048af6c8 >> 0x20) * auVar57._12_4_;
          uStack_88 = auVar43._8_8_;
          local_90 = auVar43._0_8_;
          uVar31 = local_184;
          local_184._4_4_ = uVar8;
          FUN_03436338(*(undefined8 *)(lVar34 + 8),&local_b0,&uStack_b4,&local_210,&local_b8);
          uVar31 = local_184;
          if (local_120 != 0) {
            if (local_11c == 0) {
              uVar8 = local_184._4_4_;
              local_184 = uVar31;
              uVar31 = local_184;
              local_184._4_4_ = uVar8;
              local_11c = FUN_03436698(&local_210);
              uVar8 = local_184._4_4_;
              uVar31 = local_184;
              local_184._4_4_ = uVar8;
            }
            else {
              local_11c = 1;
            }
            local_184 = uVar31;
            uVar8 = local_184._4_4_;
            local_11c = local_11c & 1;
            local_120 = 0;
            uVar31 = local_184;
            local_184._4_4_ = uVar8;
          }
          local_184 = uVar31;
          uVar8 = local_184._4_4_;
          if (local_11c == 0) goto LAB_034331e4;
          if (local_110 == 0) {
            lVar34 = 0;
          }
          else {
            lVar34 = *(long *)(local_110 + 0x38);
          }
          if (*(int *)(lVar34 + 0x38) == 0) goto LAB_034331e4;
          uVar12 = 0;
          goto LAB_03432d5c;
        }
        uVar12 = uVar12 - 1;
        plVar37 = plVar37 + 4;
      } while (uVar12 != 0);
      if ((*(char *)((long)param_1 + 0x21) != '\0') && (param_4[3][9] != '\0')) {
        local_340 = &PTR_FUN_047bf6c0;
        local_2f8 = 0;
        local_308 = (void *)0x0;
        local_300 = 0;
        local_310 = 0;
        uVar31 = local_184;
        memset(&local_210,0,0x8c);
        local_184 = 0x42c80000;
        local_184._4_4_ = 0;
        uVar12 = FUN_03431710(param_1,param_2,param_4,puVar18,&local_340,&local_210);
        uVar31 = local_184;
        uVar8 = local_184._4_4_;
        if ((uVar12 & 1) != 0) {
          uVar21 = (uint)uStack_248;
          if ((uint)uStack_248 != 0) {
            uVar12 = local_300 & 0xffffffff;
            if ((uint)local_300 == 0) {
              do {
                if (*(int *)(local_250 + uVar12 * 0x50 + 0x40) == 0) goto LAB_03433834;
                uVar38 = (int)uVar12 + 1;
                uVar12 = (ulong)uVar38;
              } while ((uint)uStack_248 != uVar38);
            }
            else {
              uVar29 = 0;
              do {
                if (*(int *)(local_250 + uVar29 * 0x50 + 0x40) == (uint)local_300) {
                  plVar37 = (long *)(*(long *)(local_250 + uVar29 * 0x50 + 0x38) + 0x18);
                  uVar40 = uVar12;
                  plVar33 = (long *)((long)local_308 + 0x18);
                  do {
                    lVar34 = *plVar33;
                    if (*plVar37 == 0) {
                      if ((lVar34 != 0) || (plVar37[-1] != plVar33[-1])) break;
                    }
                    else if ((lVar34 == 0) || (*plVar37 != lVar34)) break;
                    plVar33 = plVar33 + 4;
                    plVar37 = plVar37 + 4;
                    uVar40 = uVar40 - 1;
                    if (uVar40 == 0) goto LAB_03433834;
                  } while( true );
                }
                uVar29 = uVar29 + 1;
              } while (uVar29 != (uStack_248 & 0xffffffff));
            }
          }
          local_184 = uVar31;
          uVar31 = local_184;
          local_184._4_4_ = uVar8;
          puVar13 = (undefined4 *)(**(code **)(**(long **)(param_4[2] + 8) + 8))();
          uVar8 = local_184._4_4_;
          if (puVar13 != (undefined4 *)0x0) {
            *puVar13 = (undefined4)local_210;
            puVar13[1] = local_210._4_4_;
            puVar13[2] = (undefined4)uStack_208;
            puVar13[3] = uStack_208._4_4_;
            puVar13[4] = local_200;
            puVar13[5] = local_1fc;
            puVar13[6] = local_1f8;
            puVar13[7] = local_1f4;
            puVar13[8] = local_1f0;
            puVar13[9] = local_1ec;
            puVar13[10] = local_1e8;
            puVar13[0xb] = local_1e4;
            puVar13[0xc] = local_1e0;
            puVar13[0xd] = local_1dc;
            puVar13[0xe] = local_1d8;
            puVar13[0xf] = local_1d4;
            puVar13[0x10] = local_1d0;
            puVar13[0x11] = local_1cc;
            puVar13[0x12] = local_1c8;
            puVar13[0x13] = local_1c4;
            puVar13[0x14] = local_1c0;
            puVar13[0x15] = local_1bc;
            puVar13[0x16] = local_1b8;
            puVar13[0x17] = local_1b4;
            puVar13[0x18] = local_1b0;
            puVar13[0x19] = local_1ac;
            puVar13[0x1a] = local_1a8;
            puVar13[0x1b] = local_1a4;
            puVar13[0x1c] = local_1a0;
            puVar13[0x1d] = local_19c;
            puVar13[0x24] = uVar8;
            *(undefined8 *)(puVar13 + 0x20) = uStack_190;
            *(ulong *)(puVar13 + 0x22) = CONCAT84(local_184,uStack_188);
            *(undefined8 *)(puVar13 + 0x1e) = local_198;
          }
          if (uStack_248._4_4_ <= uVar21) {
            uVar31 = local_184;
            local_184._4_4_ = uVar8;
            uVar12 = FUN_034361ec(&local_250);
            uVar8 = local_184._4_4_;
            uVar31 = local_184;
            if ((uVar12 & 1) == 0) goto LAB_03433834;
          }
          local_184._4_4_ = uVar8;
          uVar8 = local_184._4_4_;
          lVar34 = local_250;
          uVar12 = local_300;
          uVar31 = local_184;
          if (uVar21 < uStack_248._4_4_) {
            uVar29 = uStack_248 & 0xffffffff;
            uStack_248 = CONCAT44(uStack_248._4_4_,(uint)uStack_248 + 1);
            if (local_250 != 0) {
              puVar17 = (undefined8 *)(local_250 + uVar29 * 0x50);
              *puVar17 = &PTR_FUN_047bf6c0;
              puVar17[6] = 0;
              plVar37 = puVar17 + 7;
              *plVar37 = 0;
              puVar39 = (uint *)(puVar17 + 8);
              puVar39[0] = 0;
              puVar39[1] = 0;
              *(undefined4 *)(puVar17 + 9) = 0;
              puVar17[6] = local_310;
              *puVar39 = 0;
              uVar38 = (uint)local_300;
              uVar40 = local_300 & 0xffffffff;
              uVar21 = *(uint *)((long)puVar17 + 0x44);
              if (uVar21 < (uint)local_300) {
                uVar21 = uVar21 + (uint)local_300;
                local_184._4_4_ = uVar8;
                lVar14 = (**(code **)(puVar7 + 0x28))(0xb,*plVar37,(ulong)uVar21 << 5,0x10);
                uVar8 = local_184._4_4_;
                if (lVar14 != 0) {
                  *plVar37 = lVar14;
                  *(uint *)((long)puVar17 + 0x44) = uVar21;
                  goto LAB_0343365c;
                }
              }
              else {
                if ((uint)local_300 != 0) {
LAB_0343365c:
                  local_184._4_4_ = uVar8;
                  uVar8 = local_184._4_4_;
                  uVar22 = uVar12 & 3;
                  if (uVar40 - 1 < 3) {
                    uVar40 = 0;
                  }
                  else {
                    lVar14 = 0;
                    uVar40 = 0;
                    do {
                      if (*plVar37 != 0) {
                        lVar27 = *plVar37 + lVar14;
                        *(undefined8 *)(lVar27 + 0x10) = 0;
                        *(undefined8 *)(lVar27 + 0x18) = 0;
                      }
                      if (*plVar37 != 0) {
                        lVar27 = *plVar37 + lVar14;
                        *(undefined8 *)(lVar27 + 0x30) = 0;
                        *(undefined8 *)(lVar27 + 0x38) = 0;
                      }
                      if (*plVar37 != 0) {
                        lVar27 = *plVar37 + lVar14;
                        *(undefined8 *)(lVar27 + 0x50) = 0;
                        *(undefined8 *)(lVar27 + 0x58) = 0;
                      }
                      if (*plVar37 != 0) {
                        lVar27 = *plVar37 + lVar14;
                        *(undefined8 *)(lVar27 + 0x70) = 0;
                        *(undefined8 *)(lVar27 + 0x78) = 0;
                      }
                      uVar40 = uVar40 + 4;
                      lVar14 = lVar14 + 0x80;
                    } while ((uVar12 & 0xfffffffc) != uVar40);
                  }
                  if ((uVar12 & 3) != 0) {
                    uVar12 = uVar40 << 5 | 0x10;
                    do {
                      if (*plVar37 != 0) {
                        puVar17 = (undefined8 *)(*plVar37 + uVar12);
                        *puVar17 = 0;
                        puVar17[1] = 0;
                      }
                      uVar22 = uVar22 - 1;
                      uVar12 = uVar12 + 0x20;
                    } while (uVar22 != 0);
                  }
                }
                local_184._4_4_ = uVar8;
                uVar8 = local_184._4_4_;
                *puVar39 = uVar38;
                if ((uint)local_300 != 0) {
                  lVar14 = 0;
                  uVar12 = 0;
                  do {
                    puVar17 = (undefined8 *)((long)local_308 + lVar14);
                    puVar25 = (undefined8 *)(*plVar37 + lVar14);
                    lVar14 = lVar14 + 0x20;
                    uVar31 = puVar17[1];
                    puVar25[3] = puVar17[3];
                    puVar25[1] = uVar31;
                    uVar31 = *puVar17;
                    puVar25[2] = puVar17[2];
                    *puVar25 = uVar31;
                    uVar12 = uVar12 + 1;
                  } while (uVar12 < (local_300 & 0xffffffff));
                }
              }
              local_184._4_4_ = uVar8;
              uVar8 = local_184._4_4_;
              lVar34 = lVar34 + uVar29 * 0x50;
              *(undefined8 *)(lVar34 + 0x18) = uStack_328;
              *(undefined8 *)(lVar34 + 0x10) = local_330;
              *(undefined8 *)(lVar34 + 0x28) = uStack_318;
              *(undefined8 *)(lVar34 + 0x20) = local_320;
              *(undefined4 *)(lVar34 + 0x48) = local_2f8;
              uVar31 = local_184;
            }
          }
        }
LAB_03433834:
        local_184._4_4_ = uVar8;
        local_184 = uVar31;
        uVar8 = local_184._4_4_;
        local_340 = &PTR_FUN_047bf6c0;
        if (local_308 != (void *)0x0) {
          local_300 = local_300 & 0xffffffff00000000;
          uVar31 = local_184;
          local_184._4_4_ = uVar8;
          (**(code **)(puVar7 + 0x30))(0xb);
          uVar8 = local_184._4_4_;
          local_308 = (void *)0x0;
          local_300 = local_300 & 0xffffffff;
        }
      }
    }
    goto LAB_03433a44;
  }
  uVar31 = local_184;
  if (puVar17 != (undefined8 *)0x0) goto LAB_03433ad4;
LAB_03433aec:
  local_184._4_4_ = uVar8;
  local_184 = uVar31;
  uVar8 = local_184._4_4_;
  lVar34 = local_238;
  *plVar36 = local_250;
  *(uint *)(plVar36 + 1) = (uint)uStack_248;
  *(uint *)((long)plVar36 + 0xc) = uStack_248._4_4_;
  uVar12 = local_230 & 0xffffffff;
  local_250 = 0;
  uStack_248 = 0;
  if ((int)local_230 == 0) {
    local_228 = 0;
    uVar31 = local_184;
    local_184._4_4_ = uVar8;
    if (local_238 == 0) goto LAB_03433b7c;
  }
  else {
    uVar29 = 0;
    uVar31 = local_184;
    do {
      local_184 = uVar31;
      plVar36 = *(long **)(lVar34 + uVar29 * 8);
      uVar31 = local_184;
      while (local_184._4_4_ = (undefined4)((ulong)uVar31 >> 0x20), plVar36 != (long *)0x0) {
        plVar36 = (long *)*plVar36;
        uVar8 = local_184._4_4_;
        local_184 = uVar31;
        uVar31 = local_184;
        local_184._4_4_ = uVar8;
        (**(code **)(puVar7 + 0x30))(0xb);
        uVar31 = local_184;
      }
      *(undefined8 *)(lVar34 + uVar29 * 8) = 0;
      uVar29 = uVar29 + 1;
    } while (uVar29 != uVar12);
  }
  local_184 = uVar31;
  uVar8 = local_184._4_4_;
  local_228 = 0;
  local_230 = local_230 & 0xffffffff00000000;
  uVar31 = local_184;
  local_184._4_4_ = uVar8;
  (**(code **)(puVar7 + 0x30))(0xb,lVar34);
  uVar31 = local_184;
  local_238 = 0;
  local_230 = local_230 & 0xffffffff;
LAB_03433b7c:
  local_184 = uVar31;
  uVar8 = local_184._4_4_;
  if (*(uint *)(param_3 + 1) == 0) {
    return;
  }
  fVar49 = *(float *)(*param_4 + 4);
  fVar59 = *(float *)(*param_4 + 8);
  fVar63 = *(float *)((long)param_1 + 0x24);
  fVar41 = fVar49;
  if (fVar49 <= -3.4028235e+38) {
    fVar41 = -3.4028235e+38;
  }
  fVar61 = *(float *)*param_4;
  fVar50 = fVar59;
  if (fVar59 <= -3.4028235e+38) {
    fVar50 = -3.4028235e+38;
  }
  fVar66 = fVar63 + fVar61;
  uVar64 = NEON_fminnm(fVar61,0x7f7fffff);
  fVar62 = fVar61 - fVar63;
  uVar65 = NEON_fminnm(fVar49,0x7f7fffff);
  uVar55 = NEON_fminnm(fVar59,0x7f7fffff);
  uVar64 = NEON_fminnm(uVar64,fVar66);
  if (fVar61 <= fVar66) {
    fVar61 = fVar66;
  }
  fVar66 = fVar63 + fVar49;
  fVar49 = fVar49 - fVar63;
  if (fVar61 <= fVar62) {
    fVar61 = fVar62;
  }
  fVar67 = fVar59 - fVar63;
  uVar65 = NEON_fminnm(uVar65,fVar66);
  if (fVar41 <= fVar66) {
    fVar41 = fVar66;
  }
  fVar62 = (float)NEON_fminnm(uVar64,fVar62);
  if (fVar41 <= fVar49) {
    fVar41 = fVar49;
  }
  uVar55 = NEON_fminnm(uVar55,fVar63 + fVar59);
  fVar59 = (float)NEON_fminnm(uVar65,fVar49);
  if (fVar50 <= fVar67) {
    fVar50 = fVar67;
  }
  lVar34 = *param_3;
  lVar14 = lVar34 + (ulong)*(uint *)(param_3 + 1) * 0x50;
  fVar63 = (float)NEON_fminnm(uVar55,fVar67);
LAB_03433c64:
  local_184._4_4_ = uVar8;
  uVar8 = local_184._4_4_;
  uVar21 = *(uint *)(lVar34 + 0x40);
  uVar12 = (ulong)uVar21;
  if (uVar21 != 0) {
    plVar36 = *(long **)(param_4[1] + 4);
    if (*(uint *)(plVar36 + 1) == 0) {
      lVar27 = *(long *)(lVar34 + 0x38);
    }
    else {
      lVar27 = *(long *)(lVar34 + 0x38);
      uVar29 = 0;
      do {
        if (*(uint *)(*plVar36 + uVar29 * 0x50 + 0x40) == uVar21) {
          plVar37 = (long *)(*(long *)(*plVar36 + uVar29 * 0x50 + 0x38) + 0x18);
          uVar40 = uVar12;
          plVar33 = (long *)(lVar27 + 0x18);
          do {
            lVar35 = *plVar33;
            if (*plVar37 == 0) {
              if ((lVar35 != 0) || (plVar37[-1] != plVar33[-1])) break;
            }
            else if ((lVar35 == 0) || (*plVar37 != lVar35)) break;
            plVar33 = plVar33 + 4;
            plVar37 = plVar37 + 4;
            uVar40 = uVar40 - 1;
            if (uVar40 == 0) goto LAB_03434b44;
          } while( true );
        }
        uVar29 = uVar29 + 1;
      } while (uVar29 != *(uint *)(plVar36 + 1));
    }
    plVar37 = (long *)(lVar27 + 0x18);
LAB_03433d08:
    local_184._4_4_ = uVar8;
    if (*plVar37 != 0) goto code_r0x03433d10;
    if (param_4[3][8] != '\0') {
      uVar31 = local_184;
      if ((DAT_048af690 & 1) == 0) {
        iVar23 = __cxa_guard_acquire(&DAT_048af690);
        uVar31 = local_184;
        uVar8 = local_184._4_4_;
        if (iVar23 != 0) {
          _DAT_048af680 = auVar42._0_8_;
          uRam00000000048af688 = auVar42._8_8_;
          local_184 = uVar31;
          uVar31 = local_184;
          local_184._4_4_ = uVar8;
          __cxa_guard_release(&DAT_048af690);
          uVar8 = local_184._4_4_;
          uVar31 = local_184;
        }
      }
      local_184._4_4_ = uVar8;
      local_184 = uVar31;
      uVar8 = local_184._4_4_;
      uVar31 = local_184;
      if ((DAT_048af6b0 & 1) == 0) {
        local_184._4_4_ = uVar8;
        iVar23 = __cxa_guard_acquire(&DAT_048af6b0);
        uVar31 = local_184;
        uVar8 = local_184._4_4_;
        if (iVar23 != 0) {
          DAT_048af6a0 = 0;
          DAT_048af6a8 = 0;
          local_184 = uVar31;
          uVar31 = local_184;
          local_184._4_4_ = uVar8;
          __cxa_guard_release(&DAT_048af6b0);
          uVar31 = local_184;
          uVar8 = local_184._4_4_;
        }
      }
      local_184._4_4_ = uVar8;
      local_184 = uVar31;
      uVar8 = local_184._4_4_;
      auVar57 = NEON_frecpe(*(undefined1 (*) [16])(lVar34 + 0x20),4);
      fVar51 = (float)((ulong)uRam00000000048af688 >> 0x20);
      auVar44 = NEON_frecps(*(undefined1 (*) [16])(lVar34 + 0x20),auVar57,4);
      fVar49 = auVar57._0_4_ * (float)_DAT_048af680 * auVar44._0_4_;
      fVar66 = auVar57._4_4_ * (float)((ulong)_DAT_048af680 >> 0x20) * auVar44._4_4_;
      fVar67 = auVar57._8_4_ * (float)uRam00000000048af688 * auVar44._8_4_;
      fVar48 = auVar57._12_4_ * fVar51 * auVar44._12_4_;
      auVar58._0_4_ = (fVar62 - *(float *)(lVar34 + 0x10)) * fVar49;
      auVar58._4_4_ = (fVar59 - *(float *)(lVar34 + 0x14)) * fVar66;
      auVar58._8_4_ = (fVar63 - *(float *)(lVar34 + 0x18)) * fVar67;
      auVar58._12_4_ = (fStack_3b4 - *(float *)(lVar34 + 0x1c)) * fVar48;
      auVar45._0_4_ = (fVar61 - *(float *)(lVar34 + 0x10)) * fVar49;
      auVar45._4_4_ = (fVar41 - *(float *)(lVar34 + 0x14)) * fVar66;
      auVar45._8_4_ = (fVar50 - *(float *)(lVar34 + 0x18)) * fVar67;
      auVar45._12_4_ = (fStack_3b4 - *(float *)(lVar34 + 0x1c)) * fVar48;
      auVar57 = NEON_fmin(auVar58,auVar45,4);
      auVar44 = NEON_fmax(auVar45,auVar58,4);
      auVar4._8_4_ = (int)DAT_048af6a8;
      auVar4._0_8_ = DAT_048af6a0;
      auVar4._12_4_ = (int)((ulong)DAT_048af6a8 >> 0x20);
      auVar57 = NEON_fmax(auVar57,auVar4,4);
      auVar3._8_4_ = (float)uRam00000000048af688;
      auVar3._0_8_ = _DAT_048af680;
      auVar3._12_4_ = fVar51;
      auVar44 = NEON_fmin(auVar44,auVar3,4);
      fVar49 = auVar57._4_4_;
      if (auVar57._4_4_ <= auVar57._8_4_) {
        fVar49 = auVar57._8_4_;
      }
      fVar66 = auVar57._0_4_;
      if (auVar57._0_4_ <= fVar49) {
        fVar66 = fVar49;
      }
      uVar55 = NEON_fminnm(auVar44._4_4_,auVar44._8_4_);
      fVar49 = (float)NEON_fminnm(auVar44._0_4_,uVar55);
      uVar31 = local_184;
      if (fVar66 <= fVar49) {
        local_128 = 0;
        local_130 = 0x3f80000000000000;
        local_184._4_4_ = uVar8;
        memset(&local_210,0,0xe0);
        uVar31 = local_184;
        local_340 = *(undefined ***)*param_4;
        uStack_338 = *(undefined4 *)(*param_4 + 8);
        fStack_334 = fStack_3b4;
        auVar46._12_4_ = fStack_3b4;
        auVar46._0_12_ = *param_2;
        lStack_388 = auVar46._8_8_;
        local_390 = SUB128(*param_2,0);
        uVar8 = local_184._4_4_;
        local_184 = uVar31;
        uVar31 = local_184;
        local_184._4_4_ = uVar8;
        iVar23 = FUN_0342ffb8(auVar46,auVar42,param_1,&local_340,&local_390,lVar34,&local_210,0,0);
        uVar31 = local_184;
        uVar8 = local_184._4_4_;
        if (iVar23 == 0) {
          uVar12 = (ulong)local_128;
          fVar49 = 0.0;
          if (local_128 != 0) {
            fVar49 = 0.0;
            pfVar16 = (float *)((ulong)&local_210 | 8);
            fVar66 = *(float *)(*param_4 + 4);
            fVar67 = *(float *)(*param_4 + 8);
            fVar48 = *(float *)*param_4;
            do {
              fVar51 = pfVar16[-2];
              fVar56 = pfVar16[-1];
              uVar12 = uVar12 - 1;
              fVar60 = *pfVar16;
              fVar49 = SQRT((fVar51 - fVar48) * (fVar51 - fVar48) +
                            (fVar56 - fVar66) * (fVar56 - fVar66) +
                            (fVar60 - fVar67) * (fVar60 - fVar67)) + fVar49;
              pfVar16 = pfVar16 + 4;
              fVar66 = fVar56;
              fVar67 = fVar60;
              fVar48 = fVar51;
            } while (uVar12 != 0);
            fVar56 = *(float *)(*param_2 + 4) - fVar56;
            fVar51 = *(float *)*param_2 - fVar51;
            fVar60 = *(float *)(*param_2 + 8) - fVar60;
            fVar49 = SQRT(fVar51 * fVar51 + fVar56 * fVar56 + fVar60 * fVar60) + fVar49;
          }
          if (fVar49 < *(float *)(param_4[3] + 4)) {
            plVar37 = *(long **)param_4[2];
            uVar38 = *(uint *)(plVar37 + 1);
            uVar21 = *(uint *)((long)plVar37 + 0xc);
            if (uVar38 < uVar21) {
LAB_03434024:
              local_184 = uVar31;
              uVar8 = local_184._4_4_;
              uVar31 = local_184;
              if (uVar38 < uVar21) {
                uVar21 = *(uint *)(plVar37 + 1);
                *(uint *)(plVar37 + 1) = uVar21 + 1;
                if (*plVar37 != 0) {
                  pvVar15 = (void *)(*plVar37 + (ulong)uVar21 * 0xf0);
                  *(undefined4 *)((long)pvVar15 + 0xe8) = 0;
                  *(undefined8 *)((long)pvVar15 + 0xe0) = 0x3f80000000000000;
                  local_184._4_4_ = uVar8;
                  memcpy(pvVar15,&local_210,0xf0);
                  uVar8 = local_184._4_4_;
                  uVar31 = local_184;
                }
              }
            }
            else {
              iVar23 = uVar21 + (uVar21 >> 1);
              if (uVar21 == 0) {
                iVar23 = 1;
              }
              uVar21 = iVar23 + uVar21;
              local_184 = uVar31;
              uVar31 = local_184;
              local_184._4_4_ = uVar8;
              lVar27 = (**(code **)(puVar7 + 0x28))(9,*plVar37,(ulong)uVar21 * 0xf0,0x10);
              uVar31 = local_184;
              uVar8 = local_184._4_4_;
              if (lVar27 != 0) {
                *plVar37 = lVar27;
                *(uint *)((long)plVar37 + 0xc) = uVar21;
                goto LAB_03434024;
              }
            }
            local_184._4_4_ = uVar8;
            local_184 = uVar31;
            uVar8 = local_184._4_4_;
            uVar21 = *(uint *)(plVar36 + 1);
            uVar38 = *(uint *)((long)plVar36 + 0xc);
            if (uVar38 <= uVar21) {
              uVar31 = local_184;
              local_184._4_4_ = uVar8;
              uVar12 = FUN_034361ec(plVar36);
              uVar8 = local_184._4_4_;
              if ((uVar12 & 1) == 0) goto LAB_03434b44;
              uVar38 = *(uint *)((long)plVar36 + 0xc);
            }
            local_184._4_4_ = uVar8;
            uVar8 = local_184._4_4_;
            if (uVar21 < uVar38) {
              uVar21 = *(uint *)(plVar36 + 1);
              lVar27 = *plVar36;
              *(uint *)(plVar36 + 1) = uVar21 + 1;
              if (lVar27 != 0) {
                puVar17 = (undefined8 *)(lVar27 + (ulong)uVar21 * 0x50);
                *puVar17 = &PTR_FUN_047bf6c0;
                plVar36 = puVar17 + 7;
                *plVar36 = 0;
                puVar39 = (uint *)(puVar17 + 8);
                puVar39[0] = 0;
                puVar39[1] = 0;
                puVar17[6] = 0;
                *(undefined4 *)(puVar17 + 9) = 0;
                puVar17[6] = *(undefined8 *)(lVar34 + 0x30);
                *puVar39 = 0;
                uVar2 = *(uint *)(lVar34 + 0x40);
                uVar12 = (ulong)uVar2;
                uVar38 = *(uint *)((long)puVar17 + 0x44);
                if (uVar38 < uVar2) {
                  uVar38 = uVar38 + uVar2;
                  uVar31 = local_184;
                  local_184._4_4_ = uVar8;
                  lVar35 = (**(code **)(puVar7 + 0x28))(0xb,*plVar36,(ulong)uVar38 << 5,0x10);
                  uVar31 = local_184;
                  uVar8 = local_184._4_4_;
                  if (lVar35 != 0) {
                    *plVar36 = lVar35;
                    *(uint *)((long)puVar17 + 0x44) = uVar38;
                    goto LAB_034348a0;
                  }
                }
                else {
                  uVar31 = local_184;
                  if (uVar2 != 0) {
LAB_034348a0:
                    local_184._4_4_ = uVar8;
                    local_184 = uVar31;
                    uVar8 = local_184._4_4_;
                    uVar29 = uVar12 & 3;
                    if (uVar12 - 1 < 3) {
                      uVar40 = 0;
                    }
                    else {
                      lVar35 = 0;
                      uVar40 = 0;
                      do {
                        if (*plVar36 != 0) {
                          lVar1 = *plVar36 + lVar35;
                          *(undefined8 *)(lVar1 + 0x10) = 0;
                          *(undefined8 *)(lVar1 + 0x18) = 0;
                        }
                        if (*plVar36 != 0) {
                          lVar1 = *plVar36 + lVar35;
                          *(undefined8 *)(lVar1 + 0x30) = 0;
                          *(undefined8 *)(lVar1 + 0x38) = 0;
                        }
                        if (*plVar36 != 0) {
                          lVar1 = *plVar36 + lVar35;
                          *(undefined8 *)(lVar1 + 0x50) = 0;
                          *(undefined8 *)(lVar1 + 0x58) = 0;
                        }
                        if (*plVar36 != 0) {
                          lVar1 = *plVar36 + lVar35;
                          *(undefined8 *)(lVar1 + 0x70) = 0;
                          *(undefined8 *)(lVar1 + 0x78) = 0;
                        }
                        uVar40 = uVar40 + 4;
                        lVar35 = lVar35 + 0x80;
                      } while ((uVar12 & 0xfffffffc) != uVar40);
                    }
                    if ((uVar2 & 3) != 0) {
                      uVar12 = uVar40 << 5 | 0x10;
                      do {
                        if (*plVar36 != 0) {
                          puVar17 = (undefined8 *)(*plVar36 + uVar12);
                          *puVar17 = 0;
                          puVar17[1] = 0;
                        }
                        uVar29 = uVar29 - 1;
                        uVar12 = uVar12 + 0x20;
                      } while (uVar29 != 0);
                    }
                  }
                  local_184._4_4_ = uVar8;
                  uVar8 = local_184._4_4_;
                  *puVar39 = uVar2;
                  uVar31 = local_184;
                  if (*(int *)(lVar34 + 0x40) != 0) {
                    lVar35 = 0;
                    uVar12 = 0;
                    do {
                      puVar17 = (undefined8 *)(*(long *)(lVar34 + 0x38) + lVar35);
                      puVar25 = (undefined8 *)(*plVar36 + lVar35);
                      lVar35 = lVar35 + 0x20;
                      uVar32 = puVar17[1];
                      puVar25[3] = puVar17[3];
                      puVar25[1] = uVar32;
                      uVar32 = *puVar17;
                      puVar25[2] = puVar17[2];
                      *puVar25 = uVar32;
                      uVar12 = uVar12 + 1;
                    } while (uVar12 < *(uint *)(lVar34 + 0x40));
                  }
                }
                local_184._4_4_ = uVar8;
                local_184 = uVar31;
                uVar8 = local_184._4_4_;
                uVar31 = *(undefined8 *)(lVar34 + 0x10);
                lVar27 = lVar27 + (ulong)uVar21 * 0x50;
                *(undefined8 *)(lVar27 + 0x18) = *(undefined8 *)(lVar34 + 0x18);
                *(undefined8 *)(lVar27 + 0x10) = uVar31;
                auVar44 = *(undefined1 (*) [16])(lVar34 + 0x20);
                *(long *)(lVar27 + 0x28) = auVar44._8_8_;
                *(long *)(lVar27 + 0x20) = auVar44._0_8_;
                *(undefined4 *)(lVar27 + 0x48) = *(undefined4 *)(lVar34 + 0x48);
              }
            }
            goto LAB_03434b44;
          }
        }
      }
      local_184._4_4_ = uVar8;
      local_184 = uVar31;
      uVar8 = local_184._4_4_;
      if ((param_4[3][8] == '\0') || ((char)param_1[4] == '\0')) goto LAB_03434b44;
      uVar21 = *(uint *)(lVar34 + 0x40);
      uVar12 = (ulong)uVar21;
      lVar27 = *(long *)(lVar34 + 0x38) + uVar12 * 0x20;
      if (*(long *)(lVar27 + -8) == 0) goto LAB_03434b44;
      local_340 = &PTR_FUN_047bf6c0;
      local_308 = (void *)0x0;
      local_300 = 0;
      local_310 = *(undefined8 *)(lVar34 + 0x30);
      uVar38 = uVar21 + 1;
      uStack_328 = SUB168(*(undefined1 (*) [16])(lVar34 + 0x10),8);
      local_330 = SUB168(*(undefined1 (*) [16])(lVar34 + 0x10),0);
      uStack_318 = SUB168(*(undefined1 (*) [16])(lVar34 + 0x20),8);
      local_320 = SUB168(*(undefined1 (*) [16])(lVar34 + 0x20),0);
      local_2f8 = *(undefined4 *)(lVar34 + 0x48);
      local_184._4_4_ = uVar8;
      if (uVar21 == 0xffffffff) {
        uVar31 = local_184;
        pvVar15 = (void *)(**(code **)(puVar7 + 0x28))(0xb,0,0x1fffffffe0,0x10);
        uVar8 = local_184._4_4_;
        if (pvVar15 != (void *)0x0) {
          local_300._0_4_ = 0;
          local_308 = pvVar15;
          local_300._4_4_ = 0xffffffff;
LAB_034343b8:
          local_184._4_4_ = uVar8;
          uVar8 = local_184._4_4_;
          uVar29 = (ulong)(uint)local_300 << 5 | 0x10;
          lVar35 = ~(ulong)(uint)local_300 + uVar12;
          while( true ) {
            if (local_308 != (void *)0x0) {
              *(undefined8 *)((long)local_308 + uVar29) = 0;
              ((undefined8 *)((long)local_308 + uVar29))[1] = 0;
            }
            if (lVar35 == 0) break;
            lVar35 = lVar35 + -1;
            uVar29 = uVar29 + 0x20;
          }
          goto LAB_034343f0;
        }
LAB_034343f4:
        local_184._4_4_ = uVar8;
        uVar8 = local_184._4_4_;
        uVar31 = local_184;
        local_184._4_4_ = uVar8;
        memcpy(local_308,*(void **)(lVar34 + 0x38),uVar12 << 5);
        uVar31 = local_184;
        uVar8 = local_184._4_4_;
      }
      else {
        uVar31 = local_184;
        local_308 = (void *)(**(code **)(puVar7 + 0x18))(0xb,(ulong)uVar38 << 5,0x10);
        uVar8 = local_184._4_4_;
        uVar31 = local_184;
        if (local_308 != (void *)0x0) {
          local_300._4_4_ = uVar38;
          if ((uint)local_300 < uVar21) goto LAB_034343b8;
LAB_034343f0:
          local_184._4_4_ = uVar8;
          uVar8 = local_184._4_4_;
          local_300 = CONCAT44(local_300._4_4_,uVar21);
          goto LAB_034343f4;
        }
      }
      local_184._4_4_ = uVar8;
      local_184 = uVar31;
      uVar8 = local_184._4_4_;
      uStack_378 = uStack_378 & 0xffffffff00000000;
      lStack_388 = 0;
      local_380 = 0;
      local_390 = (undefined **)0x0;
      local_360 = local_360 & 0xffffffff00000000;
      local_370 = 0;
      uStack_368 = 0;
      uStack_364 = 0;
      uVar31 = local_184;
      if ((uint)local_300 < 8) {
        local_210 = local_330;
        uStack_208 = CONCAT44(uStack_208._4_4_,(undefined4)uStack_328);
        local_184._4_4_ = uVar8;
        uVar12 = FUN_0341a5f0(&local_390,&local_210,*(undefined8 *)(lVar27 + -8),param_4,*param_1,
                              &local_340,8 - (uint)local_300);
        uVar8 = local_184._4_4_;
        uVar31 = local_184;
        if ((uVar12 & 1) != 0) {
          uVar21 = *(uint *)(plVar36 + 1);
          if (uVar21 != 0) {
            lVar27 = *plVar36;
            uVar12 = local_300 & 0xffffffff;
            if ((uint)local_300 == 0) {
              do {
                if (*(int *)(lVar27 + uVar12 * 0x50 + 0x40) == 0) goto LAB_03434ad8;
                uVar38 = (int)uVar12 + 1;
                uVar12 = (ulong)uVar38;
              } while (uVar21 != uVar38);
            }
            else {
              uVar29 = 0;
              do {
                if (*(int *)(lVar27 + uVar29 * 0x50 + 0x40) == (uint)local_300) {
                  plVar37 = (long *)(*(long *)(lVar27 + uVar29 * 0x50 + 0x38) + 0x18);
                  uVar40 = uVar12;
                  plVar33 = (long *)((long)local_308 + 0x18);
                  do {
                    lVar35 = *plVar33;
                    if (*plVar37 == 0) {
                      if ((lVar35 != 0) || (plVar37[-1] != plVar33[-1])) break;
                    }
                    else if ((lVar35 == 0) || (*plVar37 != lVar35)) break;
                    plVar33 = plVar33 + 4;
                    plVar37 = plVar37 + 4;
                    uVar40 = uVar40 - 1;
                    if (uVar40 == 0) goto LAB_03434ad8;
                  } while( true );
                }
                uVar29 = uVar29 + 1;
              } while (uVar29 != uVar21);
            }
          }
          local_128 = 0;
          local_130 = 0x3f80000000000000;
          local_184._4_4_ = uVar8;
          memset(&local_210,0,0xe0);
          uVar31 = local_184;
          local_250 = *(long *)*param_4;
          uStack_248 = CONCAT44(fStack_3b4,*(undefined4 *)(*param_4 + 8));
          auVar47._12_4_ = fStack_3b4;
          auVar47._0_12_ = *param_2;
          uStack_a8 = auVar47._8_8_;
          local_b0 = SUB128(*param_2,0);
          uVar8 = local_184._4_4_;
          local_184 = uVar31;
          uVar31 = local_184;
          local_184._4_4_ = uVar8;
          iVar23 = FUN_0342ffb8(auVar47,auVar42,param_1,&local_250,&local_b0,&local_340,&local_210,0
                                ,0);
          uVar31 = local_184;
          uVar8 = local_184._4_4_;
          if (iVar23 == 0) {
            uVar12 = (ulong)local_128;
            fVar49 = 0.0;
            if (local_128 != 0) {
              fVar49 = 0.0;
              pfVar16 = (float *)((ulong)&local_210 | 8);
              fVar66 = *(float *)(*param_4 + 4);
              fVar67 = *(float *)(*param_4 + 8);
              fVar48 = *(float *)*param_4;
              do {
                fVar51 = pfVar16[-2];
                fVar56 = pfVar16[-1];
                uVar12 = uVar12 - 1;
                fVar60 = *pfVar16;
                fVar49 = SQRT((fVar51 - fVar48) * (fVar51 - fVar48) +
                              (fVar56 - fVar66) * (fVar56 - fVar66) +
                              (fVar60 - fVar67) * (fVar60 - fVar67)) + fVar49;
                pfVar16 = pfVar16 + 4;
                fVar66 = fVar56;
                fVar67 = fVar60;
                fVar48 = fVar51;
              } while (uVar12 != 0);
              fVar56 = *(float *)(*param_2 + 4) - fVar56;
              fVar51 = *(float *)*param_2 - fVar51;
              fVar60 = *(float *)(*param_2 + 8) - fVar60;
              fVar49 = SQRT(fVar51 * fVar51 + fVar56 * fVar56 + fVar60 * fVar60) + fVar49;
            }
            if (fVar49 < *(float *)(param_4[3] + 4)) {
              plVar37 = *(long **)param_4[2];
              uVar38 = *(uint *)(plVar37 + 1);
              uVar21 = *(uint *)((long)plVar37 + 0xc);
              if (uVar38 < uVar21) {
LAB_0343468c:
                local_184 = uVar31;
                uVar8 = local_184._4_4_;
                uVar31 = local_184;
                if (uVar38 < uVar21) {
                  uVar21 = *(uint *)(plVar37 + 1);
                  *(uint *)(plVar37 + 1) = uVar21 + 1;
                  if (*plVar37 != 0) {
                    pvVar15 = (void *)(*plVar37 + (ulong)uVar21 * 0xf0);
                    *(undefined4 *)((long)pvVar15 + 0xe8) = 0;
                    *(undefined8 *)((long)pvVar15 + 0xe0) = 0x3f80000000000000;
                    local_184._4_4_ = uVar8;
                    memcpy(pvVar15,&local_210,0xf0);
                    uVar8 = local_184._4_4_;
                    uVar31 = local_184;
                  }
                }
              }
              else {
                iVar23 = uVar21 + (uVar21 >> 1);
                if (uVar21 == 0) {
                  iVar23 = 1;
                }
                uVar21 = iVar23 + uVar21;
                local_184 = uVar31;
                uVar31 = local_184;
                local_184._4_4_ = uVar8;
                lVar27 = (**(code **)(puVar7 + 0x28))(9,*plVar37,(ulong)uVar21 * 0xf0,0x10);
                uVar31 = local_184;
                uVar8 = local_184._4_4_;
                if (lVar27 != 0) {
                  *plVar37 = lVar27;
                  *(uint *)((long)plVar37 + 0xc) = uVar21;
                  goto LAB_0343468c;
                }
              }
              local_184._4_4_ = uVar8;
              local_184 = uVar31;
              uVar8 = local_184._4_4_;
              uVar21 = *(uint *)(plVar36 + 1);
              uVar38 = *(uint *)((long)plVar36 + 0xc);
              if (uVar38 <= uVar21) {
                uVar31 = local_184;
                local_184._4_4_ = uVar8;
                uVar12 = FUN_034361ec(plVar36);
                uVar8 = local_184._4_4_;
                uVar31 = local_184;
                if ((uVar12 & 1) == 0) goto LAB_03434ad8;
                uVar38 = *(uint *)((long)plVar36 + 0xc);
              }
              local_184._4_4_ = uVar8;
              uVar8 = local_184._4_4_;
              uVar12 = local_300;
              uVar31 = local_184;
              if (uVar21 < uVar38) {
                uVar21 = *(uint *)(plVar36 + 1);
                lVar27 = *plVar36;
                *(uint *)(plVar36 + 1) = uVar21 + 1;
                if (lVar27 != 0) {
                  puVar17 = (undefined8 *)(lVar27 + (ulong)uVar21 * 0x50);
                  *puVar17 = &PTR_FUN_047bf6c0;
                  plVar36 = puVar17 + 7;
                  *plVar36 = 0;
                  puVar39 = (uint *)(puVar17 + 8);
                  puVar39[0] = 0;
                  puVar39[1] = 0;
                  puVar17[6] = 0;
                  *(undefined4 *)(puVar17 + 9) = 0;
                  puVar17[6] = local_310;
                  *puVar39 = 0;
                  uVar2 = (uint)local_300;
                  uVar29 = local_300 & 0xffffffff;
                  uVar38 = *(uint *)((long)puVar17 + 0x44);
                  if (uVar38 < (uint)local_300) {
                    uVar38 = uVar38 + (uint)local_300;
                    local_184._4_4_ = uVar8;
                    lVar35 = (**(code **)(puVar7 + 0x28))(0xb,*plVar36,(ulong)uVar38 << 5,0x10);
                    uVar31 = local_184;
                    uVar8 = local_184._4_4_;
                    if (lVar35 != 0) {
                      *plVar36 = lVar35;
                      *(uint *)((long)puVar17 + 0x44) = uVar38;
                      goto LAB_034349c0;
                    }
                  }
                  else {
                    if ((uint)local_300 != 0) {
LAB_034349c0:
                      local_184._4_4_ = uVar8;
                      local_184 = uVar31;
                      uVar8 = local_184._4_4_;
                      uVar40 = uVar12 & 3;
                      if (uVar29 - 1 < 3) {
                        uVar29 = 0;
                      }
                      else {
                        lVar35 = 0;
                        uVar29 = 0;
                        do {
                          if (*plVar36 != 0) {
                            lVar1 = *plVar36 + lVar35;
                            *(undefined8 *)(lVar1 + 0x10) = 0;
                            *(undefined8 *)(lVar1 + 0x18) = 0;
                          }
                          if (*plVar36 != 0) {
                            lVar1 = *plVar36 + lVar35;
                            *(undefined8 *)(lVar1 + 0x30) = 0;
                            *(undefined8 *)(lVar1 + 0x38) = 0;
                          }
                          if (*plVar36 != 0) {
                            lVar1 = *plVar36 + lVar35;
                            *(undefined8 *)(lVar1 + 0x50) = 0;
                            *(undefined8 *)(lVar1 + 0x58) = 0;
                          }
                          if (*plVar36 != 0) {
                            lVar1 = *plVar36 + lVar35;
                            *(undefined8 *)(lVar1 + 0x70) = 0;
                            *(undefined8 *)(lVar1 + 0x78) = 0;
                          }
                          uVar29 = uVar29 + 4;
                          lVar35 = lVar35 + 0x80;
                        } while ((uVar12 & 0xfffffffc) != uVar29);
                      }
                      if ((uVar12 & 3) != 0) {
                        uVar12 = uVar29 << 5 | 0x10;
                        do {
                          if (*plVar36 != 0) {
                            puVar17 = (undefined8 *)(*plVar36 + uVar12);
                            *puVar17 = 0;
                            puVar17[1] = 0;
                          }
                          uVar40 = uVar40 - 1;
                          uVar12 = uVar12 + 0x20;
                        } while (uVar40 != 0);
                      }
                    }
                    local_184._4_4_ = uVar8;
                    uVar8 = local_184._4_4_;
                    *puVar39 = uVar2;
                    uVar31 = local_184;
                    if ((uint)local_300 != 0) {
                      lVar35 = 0;
                      uVar12 = 0;
                      do {
                        puVar17 = (undefined8 *)((long)local_308 + lVar35);
                        puVar25 = (undefined8 *)(*plVar36 + lVar35);
                        lVar35 = lVar35 + 0x20;
                        uVar32 = puVar17[1];
                        puVar25[3] = puVar17[3];
                        puVar25[1] = uVar32;
                        uVar32 = *puVar17;
                        puVar25[2] = puVar17[2];
                        *puVar25 = uVar32;
                        uVar12 = uVar12 + 1;
                      } while (uVar12 < (local_300 & 0xffffffff));
                    }
                  }
                  local_184._4_4_ = uVar8;
                  local_184 = uVar31;
                  uVar8 = local_184._4_4_;
                  lVar27 = lVar27 + (ulong)uVar21 * 0x50;
                  *(undefined8 *)(lVar27 + 0x18) = uStack_328;
                  *(undefined8 *)(lVar27 + 0x10) = local_330;
                  *(undefined8 *)(lVar27 + 0x28) = uStack_318;
                  *(undefined8 *)(lVar27 + 0x20) = local_320;
                  *(undefined4 *)(lVar27 + 0x48) = local_2f8;
                  uVar31 = local_184;
                }
              }
            }
          }
        }
      }
LAB_03434ad8:
      local_184._4_4_ = uVar8;
      local_184 = uVar31;
      uVar8 = local_184._4_4_;
      if (local_370 != 0) {
        uStack_368 = 0;
        uVar31 = local_184;
        local_184._4_4_ = uVar8;
        (**(code **)(puVar7 + 0x30))(9);
        uVar8 = local_184._4_4_;
        local_370 = 0;
        uStack_364 = 0;
      }
      local_184._4_4_ = uVar8;
      uVar8 = local_184._4_4_;
      if (lStack_388 != 0) {
        local_380 = local_380 & 0xffffffff00000000;
        uVar31 = local_184;
        local_184._4_4_ = uVar8;
        (**(code **)(puVar7 + 0x30))(0xb);
        uVar8 = local_184._4_4_;
        lStack_388 = 0;
        local_380 = local_380 & 0xffffffff;
      }
      goto LAB_03434b18;
    }
    goto LAB_03434b44;
  }
  goto LAB_03434b4c;
LAB_03432d5c:
  local_184._4_4_ = uVar8;
  uVar8 = local_184._4_4_;
  pfVar16 = *(float **)(*(long *)(lVar34 + 0x30) + uVar12 * 8);
  uVar31 = local_184;
  if (*(char *)(pfVar16 + 0x1f) != '\0') goto LAB_034331d4;
  fVar50 = pfVar16[6] * (local_3a0 - *pfVar16) + (fStack_39c - pfVar16[1]) * pfVar16[7] +
           (fStack_398 - pfVar16[2]) * pfVar16[8];
  fVar49 = pfVar16[9] * (local_3a0 - *pfVar16) + (fStack_39c - pfVar16[1]) * pfVar16[10] +
           (fStack_398 - pfVar16[2]) * pfVar16[0xb];
  bVar11 = false;
  bVar9 = false;
  if (-0.0001 < fVar50) {
    bVar11 = false;
    bVar9 = true;
    if (!NAN(fVar49)) {
      bVar11 = fVar49 < 0.0001;
      bVar9 = false;
    }
  }
  if (bVar11 == bVar9) {
    bVar11 = false;
    bVar9 = true;
    bVar10 = false;
    if (fVar50 < 0.0001) {
      bVar11 = false;
      bVar9 = false;
      bVar10 = true;
      if (!NAN(fVar49)) {
        bVar11 = fVar49 < -0.0001;
        bVar9 = fVar49 == -0.0001;
        bVar10 = false;
      }
    }
    if (bVar9 || bVar11 != bVar10) {
      bVar11 = false;
      bVar9 = true;
      bVar10 = false;
      if (0.0001 < fVar50) {
        bVar11 = false;
        bVar9 = false;
        bVar10 = true;
        if (!NAN(fVar49)) {
          bVar11 = fVar49 < 0.0001;
          bVar9 = fVar49 == 0.0001;
          bVar10 = false;
        }
      }
      if (!bVar9 && bVar11 == bVar10) {
        lVar14 = *(long *)(*(long *)(pfVar16 + 0x1a) + 0x38);
        if (lVar14 == lVar34) {
          lVar14 = *(long *)(*(long *)(pfVar16 + 0x1c) + 0x38);
        }
        uVar21 = *(uint *)(lVar14 + 0x38);
        if (uVar21 != 0) {
          uVar29 = 0;
          do {
            local_184._4_4_ = uVar8;
            uVar8 = local_184._4_4_;
            pfVar19 = *(float **)(*(long *)(lVar14 + 0x30) + uVar29 * 8);
            uVar31 = local_184;
            if (pfVar19 != pfVar16 && *(char *)(pfVar19 + 0x1f) == '\0') {
              fVar50 = pfVar19[6] * (local_3a0 - *pfVar19) + (fStack_39c - pfVar19[1]) * pfVar19[7]
                       + (fStack_398 - pfVar19[2]) * pfVar19[8];
              fVar49 = pfVar19[9] * (local_3a0 - *pfVar19) + (fStack_39c - pfVar19[1]) * pfVar19[10]
                       + (fStack_398 - pfVar19[2]) * pfVar19[0xb];
              bVar11 = false;
              bVar9 = false;
              if (-0.0001 < fVar50) {
                bVar11 = false;
                bVar9 = true;
                if (!NAN(fVar49)) {
                  bVar11 = fVar49 < 0.0001;
                  bVar9 = false;
                }
              }
              if (bVar11 == bVar9) {
                bVar11 = false;
                bVar9 = true;
                bVar10 = false;
                if (fVar50 < 0.0001) {
                  bVar11 = false;
                  bVar9 = false;
                  bVar10 = true;
                  if (!NAN(fVar49)) {
                    bVar11 = fVar49 < -0.0001;
                    bVar9 = fVar49 == -0.0001;
                    bVar10 = false;
                  }
                }
                if (bVar9 || bVar11 != bVar10) goto LAB_03433048;
                uVar31 = 1;
              }
              else {
                uVar31 = 0;
              }
              local_360 = puVar18[6];
              local_350 = 0;
              uVar21 = *(uint *)(puVar18 + 8);
              uVar40 = (ulong)uVar21;
              if (local_34c < uVar21) {
                uVar38 = local_34c + uVar21;
                uVar32 = local_184;
                local_184._4_4_ = uVar8;
                puVar17 = (undefined8 *)
                          (**(code **)(puVar7 + 0x28))(0xb,local_358,(ulong)uVar38 << 5,0x10);
                uVar8 = local_184._4_4_;
                auVar53._4_4_ = fVar63;
                auVar53._0_4_ = fVar41;
                auVar53._8_4_ = fVar59;
                auVar53._12_4_ = 0;
                if (puVar17 != (undefined8 *)0x0) {
                  local_358 = puVar17;
                  local_34c = uVar38;
                  goto LAB_03432f24;
                }
              }
              else if (uVar21 == 0) {
                auVar53._4_4_ = fVar63;
                auVar53._0_4_ = fVar41;
                auVar53._8_4_ = fVar59;
                auVar53._12_4_ = 0;
                local_350 = 0;
              }
              else {
                auVar53._4_4_ = fVar63;
                auVar53._0_4_ = fVar41;
                auVar53._8_4_ = fVar59;
                auVar53._12_4_ = 0;
LAB_03432f24:
                local_184._4_4_ = uVar8;
                uVar8 = local_184._4_4_;
                uVar22 = uVar40 & 3;
                if (uVar40 - 1 < 3) {
                  uVar24 = 0;
                }
                else {
                  uVar24 = 0;
                  puVar17 = local_358 + 10;
                  do {
                    if (local_358 != (undefined8 *)0x0) {
                      puVar17[-8] = 0;
                      puVar17[-7] = 0;
                      puVar17[-4] = 0;
                      puVar17[-3] = 0;
                      *puVar17 = 0;
                      puVar17[1] = 0;
                      puVar17[4] = 0;
                      puVar17[5] = 0;
                    }
                    uVar24 = uVar24 + 4;
                    puVar17 = puVar17 + 0x10;
                  } while ((uVar40 & 0xfffffffc) != uVar24);
                }
                if ((uVar21 & 3) != 0) {
                  puVar17 = local_358 + uVar24 * 4 + 2;
                  do {
                    if (local_358 != (undefined8 *)0x0) {
                      *puVar17 = 0;
                      puVar17[1] = 0;
                    }
                    uVar22 = uVar22 - 1;
                    puVar17 = puVar17 + 4;
                  } while (uVar22 != 0);
                }
                local_350 = uVar21;
                if (*(int *)(puVar18 + 8) != 0) {
                  lVar27 = 0;
                  uVar40 = 0;
                  do {
                    puVar17 = (undefined8 *)(puVar18[7] + lVar27);
                    uVar32 = puVar17[1];
                    puVar25 = (undefined8 *)((long)local_358 + lVar27);
                    lVar27 = lVar27 + 0x20;
                    puVar25[3] = puVar17[3];
                    puVar25[1] = uVar32;
                    uVar32 = *puVar17;
                    puVar25[2] = puVar17[2];
                    *puVar25 = uVar32;
                    uVar40 = uVar40 + 1;
                  } while (uVar40 < *(uint *)(puVar18 + 8));
                }
              }
              local_184._4_4_ = uVar8;
              uVar8 = local_184._4_4_;
              auVar44 = *(undefined1 (*) [16])(puVar18 + 4);
              uStack_378 = SUB168(*(undefined1 (*) [16])(puVar18 + 2),8);
              local_380 = SUB168(*(undefined1 (*) [16])(puVar18 + 2),0);
              uStack_368 = auVar44._8_4_;
              uStack_364 = auVar44._12_4_;
              local_370 = auVar44._0_8_;
              local_348 = *(undefined4 *)(puVar18 + 9);
              uStack_a8 = auVar53._8_8_;
              local_b0 = auVar53._0_8_;
              uVar32 = local_184;
              local_184._4_4_ = uVar8;
              uVar40 = FUN_03430afc(param_1,param_4,pfVar19,uVar31,&local_3a0,&local_b0,&local_c8,
                                    &local_340,&local_390);
              uVar31 = local_184;
              if ((uVar40 & 1) != 0) goto LAB_0343364c;
              uVar21 = *(uint *)(lVar14 + 0x38);
              uVar8 = local_184._4_4_;
            }
LAB_03433048:
            local_184._4_4_ = uVar8;
            local_184 = uVar31;
            uVar8 = local_184._4_4_;
            uVar29 = uVar29 + 1;
            uVar31 = local_184;
          } while (uVar29 < uVar21);
        }
      }
      goto LAB_034331d4;
    }
    uVar31 = 1;
  }
  else {
    uVar31 = 0;
  }
  local_360 = puVar18[6];
  local_350 = 0;
  uVar21 = *(uint *)(puVar18 + 8);
  uVar29 = (ulong)uVar21;
  local_184._4_4_ = uVar8;
  if (local_34c < uVar21) {
    uVar38 = local_34c + uVar21;
    uVar32 = local_184;
    puVar17 = (undefined8 *)(**(code **)(puVar7 + 0x28))(0xb,local_358,(ulong)uVar38 << 5,0x10);
    uVar32 = local_184;
    auVar54._4_4_ = fVar63;
    auVar54._0_4_ = fVar41;
    auVar54._8_4_ = fVar59;
    auVar54._12_4_ = 0;
    uVar8 = local_184._4_4_;
    if (puVar17 != (undefined8 *)0x0) {
      local_358 = puVar17;
      local_34c = uVar38;
      goto LAB_034330c0;
    }
  }
  else {
    uVar32 = local_184;
    if (uVar21 == 0) {
      auVar54._4_4_ = fVar63;
      auVar54._0_4_ = fVar41;
      auVar54._8_4_ = fVar59;
      auVar54._12_4_ = 0;
      local_350 = 0;
    }
    else {
      auVar54._4_4_ = fVar63;
      auVar54._0_4_ = fVar41;
      auVar54._8_4_ = fVar59;
      auVar54._12_4_ = 0;
LAB_034330c0:
      local_184 = uVar32;
      uVar8 = local_184._4_4_;
      uVar40 = uVar29 & 3;
      if (uVar29 - 1 < 3) {
        uVar22 = 0;
      }
      else {
        uVar22 = 0;
        puVar17 = local_358 + 10;
        do {
          if (local_358 != (undefined8 *)0x0) {
            puVar17[-8] = 0;
            puVar17[-7] = 0;
            puVar17[-4] = 0;
            puVar17[-3] = 0;
            *puVar17 = 0;
            puVar17[1] = 0;
            puVar17[4] = 0;
            puVar17[5] = 0;
          }
          uVar22 = uVar22 + 4;
          puVar17 = puVar17 + 0x10;
        } while ((uVar29 & 0xfffffffc) != uVar22);
      }
      if ((uVar21 & 3) != 0) {
        puVar17 = local_358 + uVar22 * 4 + 2;
        do {
          if (local_358 != (undefined8 *)0x0) {
            *puVar17 = 0;
            puVar17[1] = 0;
          }
          uVar40 = uVar40 - 1;
          puVar17 = puVar17 + 4;
        } while (uVar40 != 0);
      }
      local_350 = uVar21;
      uVar32 = local_184;
      if (*(int *)(puVar18 + 8) != 0) {
        lVar14 = 0;
        uVar29 = 0;
        do {
          puVar17 = (undefined8 *)(puVar18[7] + lVar14);
          uVar30 = puVar17[1];
          puVar25 = (undefined8 *)((long)local_358 + lVar14);
          lVar14 = lVar14 + 0x20;
          puVar25[3] = puVar17[3];
          puVar25[1] = uVar30;
          uVar30 = *puVar17;
          puVar25[2] = puVar17[2];
          *puVar25 = uVar30;
          uVar29 = uVar29 + 1;
        } while (uVar29 < *(uint *)(puVar18 + 8));
      }
    }
  }
  local_184._4_4_ = uVar8;
  local_184 = uVar32;
  uVar8 = local_184._4_4_;
  auVar44 = *(undefined1 (*) [16])(puVar18 + 4);
  uStack_378 = SUB168(*(undefined1 (*) [16])(puVar18 + 2),8);
  local_380 = SUB168(*(undefined1 (*) [16])(puVar18 + 2),0);
  uStack_368 = auVar44._8_4_;
  uStack_364 = auVar44._12_4_;
  local_370 = auVar44._0_8_;
  local_348 = *(undefined4 *)(puVar18 + 9);
  uStack_a8 = auVar54._8_8_;
  local_b0 = auVar54._0_8_;
  uVar32 = local_184;
  local_184._4_4_ = uVar8;
  uVar29 = FUN_03430afc(param_1,param_4,pfVar16,uVar31,&local_3a0,&local_b0,&local_c8,&local_340,
                        &local_390);
  uVar31 = local_184;
  uVar8 = local_184._4_4_;
  if ((uVar29 & 1) == 0) goto LAB_034331d4;
LAB_0343364c:
  local_184 = uVar31;
  uVar8 = local_184._4_4_;
LAB_034333c8:
  local_184._4_4_ = uVar8;
  uVar8 = local_184._4_4_;
  uVar21 = (uint)uStack_248;
  uVar31 = local_184;
  if ((uint)uStack_248 == 0) {
LAB_03433478:
    uVar12 = (ulong)local_258;
    fVar41 = 0.0;
    if (local_258 != 0) {
      fVar41 = 0.0;
      pfVar16 = (float *)((ulong)&local_340 | 8);
      fVar59 = *(float *)(*param_4 + 4);
      fVar63 = *(float *)(*param_4 + 8);
      fVar49 = *(float *)*param_4;
      do {
        fVar50 = pfVar16[-2];
        fVar61 = pfVar16[-1];
        uVar12 = uVar12 - 1;
        fVar62 = *pfVar16;
        fVar41 = SQRT((fVar50 - fVar49) * (fVar50 - fVar49) + (fVar61 - fVar59) * (fVar61 - fVar59)
                      + (fVar62 - fVar63) * (fVar62 - fVar63)) + fVar41;
        pfVar16 = pfVar16 + 4;
        fVar59 = fVar61;
        fVar63 = fVar62;
        fVar49 = fVar50;
      } while (uVar12 != 0);
      fVar61 = *(float *)(*param_2 + 4) - fVar61;
      fVar50 = *(float *)*param_2 - fVar50;
      fVar62 = *(float *)(*param_2 + 8) - fVar62;
      fVar41 = SQRT(fVar50 * fVar50 + fVar61 * fVar61 + fVar62 * fVar62) + fVar41;
    }
    if (fVar41 < *(float *)(param_4[3] + 4)) {
      plVar37 = *(long **)param_4[2];
      uVar2 = *(uint *)(plVar37 + 1);
      uVar38 = *(uint *)((long)plVar37 + 0xc);
      if (uVar2 < uVar38) {
LAB_03433564:
        local_184._4_4_ = uVar8;
        uVar8 = local_184._4_4_;
        if (uVar2 < uVar38) {
          uVar38 = *(uint *)(plVar37 + 1);
          *(uint *)(plVar37 + 1) = uVar38 + 1;
          if (*plVar37 != 0) {
            pvVar15 = (void *)(*plVar37 + (ulong)uVar38 * 0xf0);
            *(undefined4 *)((long)pvVar15 + 0xe8) = 0;
            *(undefined8 *)((long)pvVar15 + 0xe0) = 0x3f80000000000000;
            uVar31 = local_184;
            local_184._4_4_ = uVar8;
            memcpy(pvVar15,&local_340,0xf0);
            uVar8 = local_184._4_4_;
          }
        }
      }
      else {
        iVar23 = uVar38 + (uVar38 >> 1);
        if (uVar38 == 0) {
          iVar23 = 1;
        }
        uVar38 = iVar23 + uVar38;
        local_184._4_4_ = uVar8;
        lVar34 = (**(code **)(puVar7 + 0x28))(9,*plVar37,(ulong)uVar38 * 0xf0,0x10);
        uVar8 = local_184._4_4_;
        if (lVar34 != 0) {
          *plVar37 = lVar34;
          *(uint *)((long)plVar37 + 0xc) = uVar38;
          goto LAB_03433564;
        }
      }
      local_184._4_4_ = uVar8;
      uVar8 = local_184._4_4_;
      if (uStack_248._4_4_ <= uVar21) {
        uVar31 = local_184;
        local_184._4_4_ = uVar8;
        uVar12 = FUN_034361ec(&local_250);
        uVar8 = local_184._4_4_;
        uVar31 = local_184;
        if ((uVar12 & 1) == 0) goto LAB_03433a18;
      }
      local_184._4_4_ = uVar8;
      uVar8 = local_184._4_4_;
      lVar34 = local_250;
      uVar38 = local_350;
      uVar31 = local_184;
      if (uVar21 < uStack_248._4_4_) {
        uVar12 = uStack_248 & 0xffffffff;
        uStack_248 = CONCAT44(uStack_248._4_4_,(uint)uStack_248 + 1);
        if (local_250 != 0) {
          puVar17 = (undefined8 *)(local_250 + uVar12 * 0x50);
          *puVar17 = &PTR_FUN_047bf6c0;
          puVar17[6] = 0;
          plVar37 = puVar17 + 7;
          *plVar37 = 0;
          puVar39 = (uint *)(puVar17 + 8);
          puVar39[0] = 0;
          puVar39[1] = 0;
          *(undefined4 *)(puVar17 + 9) = 0;
          puVar17[6] = local_360;
          *puVar39 = 0;
          uVar29 = (ulong)local_350;
          uVar21 = *(uint *)((long)puVar17 + 0x44);
          if (uVar21 < local_350) {
            uVar21 = uVar21 + local_350;
            local_184._4_4_ = uVar8;
            lVar14 = (**(code **)(puVar7 + 0x28))(0xb,*plVar37,(ulong)uVar21 << 5,0x10);
            uVar8 = local_184._4_4_;
            if (lVar14 != 0) {
              *plVar37 = lVar14;
              *(uint *)((long)puVar17 + 0x44) = uVar21;
              goto LAB_03433860;
            }
          }
          else if (local_350 == 0) {
            *puVar39 = 0;
          }
          else {
LAB_03433860:
            local_184._4_4_ = uVar8;
            uVar8 = local_184._4_4_;
            uVar40 = uVar29 & 3;
            if (uVar29 - 1 < 3) {
              uVar22 = 0;
            }
            else {
              lVar14 = 0;
              uVar22 = 0;
              do {
                if (*plVar37 != 0) {
                  lVar27 = *plVar37 + lVar14;
                  *(undefined8 *)(lVar27 + 0x10) = 0;
                  *(undefined8 *)(lVar27 + 0x18) = 0;
                }
                if (*plVar37 != 0) {
                  lVar27 = *plVar37 + lVar14;
                  *(undefined8 *)(lVar27 + 0x30) = 0;
                  *(undefined8 *)(lVar27 + 0x38) = 0;
                }
                if (*plVar37 != 0) {
                  lVar27 = *plVar37 + lVar14;
                  *(undefined8 *)(lVar27 + 0x50) = 0;
                  *(undefined8 *)(lVar27 + 0x58) = 0;
                }
                if (*plVar37 != 0) {
                  lVar27 = *plVar37 + lVar14;
                  *(undefined8 *)(lVar27 + 0x70) = 0;
                  *(undefined8 *)(lVar27 + 0x78) = 0;
                }
                uVar22 = uVar22 + 4;
                lVar14 = lVar14 + 0x80;
              } while ((uVar29 & 0xfffffffc) != uVar22);
            }
            if ((uVar38 & 3) != 0) {
              uVar22 = uVar22 << 5 | 0x10;
              do {
                if (*plVar37 != 0) {
                  puVar17 = (undefined8 *)(*plVar37 + uVar22);
                  *puVar17 = 0;
                  puVar17[1] = 0;
                }
                uVar40 = uVar40 - 1;
                uVar22 = uVar22 + 0x20;
              } while (uVar40 != 0);
            }
            *puVar39 = uVar38;
            if (uVar38 != 0) {
              uVar40 = uVar29 & 3;
              if (uVar29 - 1 < 3) {
                uVar22 = 0;
              }
              else {
                lVar14 = 0;
                uVar22 = 0;
                do {
                  puVar17 = (undefined8 *)((long)local_358 + lVar14 + 0x60);
                  puVar25 = (undefined8 *)(*plVar37 + lVar14);
                  uVar31 = puVar17[-0xb];
                  puVar25[3] = puVar17[-9];
                  puVar25[1] = uVar31;
                  uVar31 = puVar17[-0xc];
                  puVar25[2] = puVar17[-10];
                  *puVar25 = uVar31;
                  uVar32 = puVar17[-7];
                  lVar27 = *plVar37 + lVar14;
                  uVar31 = puVar17[-6];
                  uVar30 = puVar17[-5];
                  uVar22 = uVar22 + 4;
                  *(undefined8 *)(lVar27 + 0x20) = puVar17[-8];
                  *(undefined8 *)(lVar27 + 0x28) = uVar32;
                  *(undefined8 *)(lVar27 + 0x30) = uVar31;
                  *(undefined8 *)(lVar27 + 0x38) = uVar30;
                  uVar31 = puVar17[-4];
                  uVar32 = puVar17[-3];
                  lVar27 = *plVar37 + lVar14;
                  uVar30 = puVar17[-1];
                  *(undefined8 *)(lVar27 + 0x50) = puVar17[-2];
                  *(undefined8 *)(lVar27 + 0x58) = uVar30;
                  *(undefined8 *)(lVar27 + 0x40) = uVar31;
                  *(undefined8 *)(lVar27 + 0x48) = uVar32;
                  uVar32 = puVar17[1];
                  lVar27 = *plVar37 + lVar14;
                  uVar31 = puVar17[2];
                  uVar30 = puVar17[3];
                  lVar14 = lVar14 + 0x80;
                  *(undefined8 *)(lVar27 + 0x60) = *puVar17;
                  *(undefined8 *)(lVar27 + 0x68) = uVar32;
                  *(undefined8 *)(lVar27 + 0x70) = uVar31;
                  *(undefined8 *)(lVar27 + 0x78) = uVar30;
                } while ((uVar29 & 0xfffffffc) != uVar22);
              }
              if ((uVar38 & 3) != 0) {
                lVar14 = uVar22 << 5;
                do {
                  puVar17 = (undefined8 *)((long)local_358 + lVar14);
                  puVar25 = (undefined8 *)(*plVar37 + lVar14);
                  uVar31 = *puVar17;
                  uVar32 = puVar17[1];
                  uVar40 = uVar40 - 1;
                  uVar30 = puVar17[3];
                  lVar14 = lVar14 + 0x20;
                  puVar25[2] = puVar17[2];
                  puVar25[3] = uVar30;
                  *puVar25 = uVar31;
                  puVar25[1] = uVar32;
                } while (uVar40 != 0);
              }
            }
          }
          local_184._4_4_ = uVar8;
          uVar8 = local_184._4_4_;
          lVar34 = lVar34 + uVar12 * 0x50;
          *(ulong *)(lVar34 + 0x18) = uStack_378;
          *(ulong *)(lVar34 + 0x10) = local_380;
          auVar6._8_4_ = uStack_368;
          auVar6._0_8_ = local_370;
          auVar6._12_4_ = uStack_364;
          *(long *)(lVar34 + 0x28) = auVar6._8_8_;
          *(long *)(lVar34 + 0x20) = local_370;
          *(undefined4 *)(lVar34 + 0x48) = local_348;
          uVar31 = local_184;
        }
      }
    }
  }
  else {
    uVar12 = 0;
    if (local_350 != 0) {
      uVar12 = 0;
      do {
        if (*(uint *)(local_250 + uVar12 * 0x50 + 0x40) == local_350) {
          plVar37 = (long *)(*(long *)(local_250 + uVar12 * 0x50 + 0x38) + 0x18);
          uVar29 = (ulong)local_350;
          plVar33 = local_358 + 3;
          do {
            lVar34 = *plVar33;
            if (*plVar37 == 0) {
              if ((lVar34 != 0) || (plVar37[-1] != plVar33[-1])) break;
            }
            else if ((lVar34 == 0) || (*plVar37 != lVar34)) break;
            plVar33 = plVar33 + 4;
            plVar37 = plVar37 + 4;
            uVar29 = uVar29 - 1;
            if (uVar29 == 0) goto LAB_03433a18;
          } while( true );
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 != (uStack_248 & 0xffffffff));
      goto LAB_03433478;
    }
    while (*(int *)(local_250 + uVar12 * 0x50 + 0x40) != 0) {
      uVar38 = (int)uVar12 + 1;
      uVar12 = (ulong)uVar38;
      if ((uint)uStack_248 == uVar38) goto LAB_03433478;
    }
  }
  goto LAB_03433a18;
LAB_034331d4:
  local_184._4_4_ = uVar8;
  local_184 = uVar31;
  uVar8 = local_184._4_4_;
  uVar12 = uVar12 + 1;
  if (*(uint *)(lVar34 + 0x38) <= uVar12) goto LAB_034331e4;
  goto LAB_03432d5c;
LAB_034331e4:
  local_184._4_4_ = uVar8;
  uVar8 = local_184._4_4_;
  uVar31 = local_184;
LAB_03433a18:
  local_184._4_4_ = uVar8;
  local_184 = uVar31;
  uVar8 = local_184._4_4_;
  local_390 = &PTR_FUN_047bf6c0;
  if (local_358 != (undefined8 *)0x0) {
    local_350 = 0;
    uVar31 = local_184;
    local_184._4_4_ = uVar8;
    (**(code **)(puVar7 + 0x30))(0xb);
    uVar8 = local_184._4_4_;
    local_358 = (undefined8 *)0x0;
    local_34c = 0;
  }
LAB_03433a44:
  local_184._4_4_ = uVar8;
  uVar8 = local_184._4_4_;
  puVar17 = (undefined8 *)*plVar36;
  puVar25 = puVar18 + 10;
  if (puVar18 + 10 == puVar17 + (ulong)*(uint *)(plVar36 + 1) * 10) goto LAB_03433a94;
  goto LAB_034327e0;
LAB_03433a94:
  uVar31 = local_184;
  if (puVar17 != (undefined8 *)0x0) {
    local_184._4_4_ = uVar8;
    if (*(uint *)(plVar36 + 1) == 0) {
    }
    else {
      do {
        local_184 = uVar31;
        uVar8 = local_184._4_4_;
        puVar25 = puVar17 + 10;
        uVar31 = local_184;
        local_184._4_4_ = uVar8;
        (**(code **)*puVar17)(puVar17);
        uVar31 = local_184;
        puVar17 = puVar25;
      } while (puVar18 + 10 != puVar25);
      puVar17 = (undefined8 *)*plVar36;
    }
LAB_03433ad4:
    local_184 = uVar31;
    uVar8 = local_184._4_4_;
    *(undefined4 *)(plVar36 + 1) = 0;
    uVar31 = local_184;
    local_184._4_4_ = uVar8;
    (**(code **)(puVar7 + 0x30))(0xb,puVar17);
    uVar31 = local_184;
    *plVar36 = 0;
    *(undefined4 *)((long)plVar36 + 0xc) = 0;
    uVar8 = local_184._4_4_;
  }
  goto LAB_03433aec;
code_r0x03433d10:
  uVar12 = uVar12 - 1;
  plVar37 = plVar37 + 4;
  if (uVar12 == 0) goto code_r0x03433d1c;
  goto LAB_03433d08;
code_r0x03433d1c:
  if ((*(char *)((long)param_1 + 0x21) == '\0') || (param_4[3][9] == '\0')) goto LAB_03434b44;
  local_340 = &PTR_FUN_047bf6c0;
  local_2f8 = 0;
  local_308 = (void *)0x0;
  local_300 = 0;
  local_310 = 0;
  uVar31 = local_184;
  memset(&local_210,0,0x8c);
  local_184 = 0x42c80000;
  local_184._4_4_ = 0;
  uVar12 = FUN_03431710(param_1,param_2,param_4,lVar34,&local_340,&local_210);
  uVar8 = local_184._4_4_;
  if ((uVar12 & 1) != 0) {
    uVar21 = *(uint *)(plVar36 + 1);
    if (uVar21 != 0) {
      lVar27 = *plVar36;
      uVar12 = local_300 & 0xffffffff;
      if ((uint)local_300 == 0) {
        do {
          if (*(int *)(lVar27 + uVar12 * 0x50 + 0x40) == 0) goto LAB_03434b18;
          uVar38 = (int)uVar12 + 1;
          uVar12 = (ulong)uVar38;
        } while (uVar21 != uVar38);
      }
      else {
        uVar29 = 0;
        do {
          if (*(int *)(lVar27 + uVar29 * 0x50 + 0x40) == (uint)local_300) {
            plVar37 = (long *)(*(long *)(lVar27 + uVar29 * 0x50 + 0x38) + 0x18);
            uVar40 = uVar12;
            plVar33 = (long *)((long)local_308 + 0x18);
            do {
              lVar35 = *plVar33;
              if (*plVar37 == 0) {
                if ((lVar35 != 0) || (plVar37[-1] != plVar33[-1])) break;
              }
              else if ((lVar35 == 0) || (*plVar37 != lVar35)) break;
              plVar33 = plVar33 + 4;
              plVar37 = plVar37 + 4;
              uVar40 = uVar40 - 1;
              if (uVar40 == 0) goto LAB_03434b18;
            } while( true );
          }
          uVar29 = uVar29 + 1;
        } while (uVar29 != uVar21);
      }
    }
    uVar31 = local_184;
    local_184._4_4_ = uVar8;
    puVar13 = (undefined4 *)(**(code **)(**(long **)(param_4[2] + 8) + 8))();
    uVar8 = local_184._4_4_;
    if (puVar13 != (undefined4 *)0x0) {
      *puVar13 = (undefined4)local_210;
      puVar13[1] = local_210._4_4_;
      puVar13[2] = (undefined4)uStack_208;
      puVar13[3] = uStack_208._4_4_;
      puVar13[4] = local_200;
      puVar13[5] = local_1fc;
      puVar13[6] = local_1f8;
      puVar13[7] = local_1f4;
      puVar13[8] = local_1f0;
      puVar13[9] = local_1ec;
      puVar13[10] = local_1e8;
      puVar13[0xb] = local_1e4;
      puVar13[0xc] = local_1e0;
      puVar13[0xd] = local_1dc;
      puVar13[0xe] = local_1d8;
      puVar13[0xf] = local_1d4;
      puVar13[0x10] = local_1d0;
      puVar13[0x11] = local_1cc;
      puVar13[0x12] = local_1c8;
      puVar13[0x13] = local_1c4;
      puVar13[0x14] = local_1c0;
      puVar13[0x15] = local_1bc;
      puVar13[0x16] = local_1b8;
      puVar13[0x17] = local_1b4;
      puVar13[0x18] = local_1b0;
      puVar13[0x19] = local_1ac;
      puVar13[0x1a] = local_1a8;
      puVar13[0x1b] = local_1a4;
      puVar13[0x1c] = local_1a0;
      puVar13[0x1d] = local_19c;
      puVar13[0x24] = uVar8;
      *(undefined8 *)(puVar13 + 0x20) = uStack_190;
      *(ulong *)(puVar13 + 0x22) = CONCAT84(local_184,uStack_188);
      *(undefined8 *)(puVar13 + 0x1e) = local_198;
    }
    uVar21 = *(uint *)(plVar36 + 1);
    uVar38 = *(uint *)((long)plVar36 + 0xc);
    if (uVar38 <= uVar21) {
      uVar31 = local_184;
      local_184._4_4_ = uVar8;
      uVar12 = FUN_034361ec(plVar36);
      uVar8 = local_184._4_4_;
      if ((uVar12 & 1) == 0) goto LAB_03434b18;
      uVar38 = *(uint *)((long)plVar36 + 0xc);
    }
    local_184._4_4_ = uVar8;
    uVar8 = local_184._4_4_;
    uVar12 = local_300;
    if (uVar21 < uVar38) {
      uVar21 = *(uint *)(plVar36 + 1);
      lVar27 = *plVar36;
      *(uint *)(plVar36 + 1) = uVar21 + 1;
      if (lVar27 != 0) {
        puVar17 = (undefined8 *)(lVar27 + (ulong)uVar21 * 0x50);
        *puVar17 = &PTR_FUN_047bf6c0;
        plVar36 = puVar17 + 7;
        *plVar36 = 0;
        puVar39 = (uint *)(puVar17 + 8);
        puVar39[0] = 0;
        puVar39[1] = 0;
        puVar17[6] = 0;
        *(undefined4 *)(puVar17 + 9) = 0;
        puVar17[6] = local_310;
        *puVar39 = 0;
        uVar2 = (uint)local_300;
        uVar29 = local_300 & 0xffffffff;
        uVar38 = *(uint *)((long)puVar17 + 0x44);
        if (uVar38 < (uint)local_300) {
          uVar38 = uVar38 + (uint)local_300;
          uVar31 = local_184;
          local_184._4_4_ = uVar8;
          lVar35 = (**(code **)(puVar7 + 0x28))(0xb,*plVar36,(ulong)uVar38 << 5,0x10);
          uVar31 = local_184;
          uVar8 = local_184._4_4_;
          if (lVar35 != 0) {
            *plVar36 = lVar35;
            *(uint *)((long)puVar17 + 0x44) = uVar38;
            goto LAB_03434780;
          }
        }
        else {
          uVar31 = local_184;
          if ((uint)local_300 != 0) {
LAB_03434780:
            local_184._4_4_ = uVar8;
            local_184 = uVar31;
            uVar8 = local_184._4_4_;
            uVar40 = uVar12 & 3;
            if (uVar29 - 1 < 3) {
              uVar29 = 0;
            }
            else {
              lVar35 = 0;
              uVar29 = 0;
              do {
                if (*plVar36 != 0) {
                  lVar1 = *plVar36 + lVar35;
                  *(undefined8 *)(lVar1 + 0x10) = 0;
                  *(undefined8 *)(lVar1 + 0x18) = 0;
                }
                if (*plVar36 != 0) {
                  lVar1 = *plVar36 + lVar35;
                  *(undefined8 *)(lVar1 + 0x30) = 0;
                  *(undefined8 *)(lVar1 + 0x38) = 0;
                }
                if (*plVar36 != 0) {
                  lVar1 = *plVar36 + lVar35;
                  *(undefined8 *)(lVar1 + 0x50) = 0;
                  *(undefined8 *)(lVar1 + 0x58) = 0;
                }
                if (*plVar36 != 0) {
                  lVar1 = *plVar36 + lVar35;
                  *(undefined8 *)(lVar1 + 0x70) = 0;
                  *(undefined8 *)(lVar1 + 0x78) = 0;
                }
                uVar29 = uVar29 + 4;
                lVar35 = lVar35 + 0x80;
              } while ((uVar12 & 0xfffffffc) != uVar29);
            }
            if ((uVar12 & 3) != 0) {
              uVar12 = uVar29 << 5 | 0x10;
              do {
                if (*plVar36 != 0) {
                  puVar17 = (undefined8 *)(*plVar36 + uVar12);
                  *puVar17 = 0;
                  puVar17[1] = 0;
                }
                uVar40 = uVar40 - 1;
                uVar12 = uVar12 + 0x20;
              } while (uVar40 != 0);
            }
          }
          local_184._4_4_ = uVar8;
          uVar8 = local_184._4_4_;
          *puVar39 = uVar2;
          uVar31 = local_184;
          if ((uint)local_300 != 0) {
            lVar35 = 0;
            uVar12 = 0;
            do {
              puVar17 = (undefined8 *)((long)local_308 + lVar35);
              puVar25 = (undefined8 *)(*plVar36 + lVar35);
              lVar35 = lVar35 + 0x20;
              uVar32 = puVar17[1];
              puVar25[3] = puVar17[3];
              puVar25[1] = uVar32;
              uVar32 = *puVar17;
              puVar25[2] = puVar17[2];
              *puVar25 = uVar32;
              uVar12 = uVar12 + 1;
            } while (uVar12 < (local_300 & 0xffffffff));
          }
        }
        local_184._4_4_ = uVar8;
        local_184 = uVar31;
        uVar8 = local_184._4_4_;
        lVar27 = lVar27 + (ulong)uVar21 * 0x50;
        *(undefined8 *)(lVar27 + 0x18) = uStack_328;
        *(undefined8 *)(lVar27 + 0x10) = local_330;
        *(undefined8 *)(lVar27 + 0x28) = uStack_318;
        *(undefined8 *)(lVar27 + 0x20) = local_320;
        *(undefined4 *)(lVar27 + 0x48) = local_2f8;
      }
    }
  }
LAB_03434b18:
  local_184._4_4_ = uVar8;
  uVar8 = local_184._4_4_;
  local_340 = &PTR_FUN_047bf6c0;
  if (local_308 != (void *)0x0) {
    local_300 = local_300 & 0xffffffff00000000;
    uVar31 = local_184;
    local_184._4_4_ = uVar8;
    (**(code **)(puVar7 + 0x30))(0xb);
    uVar8 = local_184._4_4_;
    local_308 = (void *)0x0;
    local_300 = local_300 & 0xffffffff;
  }
LAB_03434b44:
  local_184._4_4_ = uVar8;
  uVar8 = local_184._4_4_;
  param_1[1] = *(long *)(lVar34 + 0x30);
LAB_03434b4c:
  local_184._4_4_ = uVar8;
  uVar8 = local_184._4_4_;
  lVar34 = lVar34 + 0x50;
  if (lVar34 == lVar14) {
    return;
  }
  goto LAB_03433c64;
}


