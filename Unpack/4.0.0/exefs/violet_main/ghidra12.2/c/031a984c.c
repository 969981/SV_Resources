/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031a984c; name: FUN_031a984c
 */


undefined8
FUN_031a984c(uint *param_1,uint *param_2,long param_3,long param_4,int param_5,long *param_6)

{
  uint *__n;
  undefined **__n_00;
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined *puVar16;
  undefined *puVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  uint *puVar21;
  void *pvVar22;
  undefined **ppuVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined8 *puVar28;
  uint uVar29;
  uint uVar30;
  long *plVar31;
  ulong uVar32;
  uint uVar33;
  ulong uVar34;
  undefined8 uVar35;
  uint uVar36;
  uint uVar37;
  ulong uVar38;
  uint uVar39;
  ulong uVar40;
  uint uVar41;
  char *pcVar42;
  uint uVar43;
  uint uVar44;
  long lVar45;
  undefined1 *puVar46;
  int iVar47;
  long lVar48;
  ulong __n_01;
  uint uVar49;
  uint uVar50;
  uint *puVar51;
  ulong uVar52;
  undefined8 local_1850;
  uint local_1740;
  uint local_173c;
  uint local_1738;
  undefined1 *local_1728;
  undefined8 local_1720;
  undefined1 local_1718 [5376];
  undefined8 local_218;
  undefined **local_210;
  void *local_208;
  long local_200;
  long local_1f8;
  long local_1f0;
  uint local_1e8;
  uint local_1e4;
  uint local_1e0;
  uint local_1dc;
  long *local_1d8;
  uint local_1d0;
  char local_1cc;
  uint *local_1c0;
  int local_1b8;
  uint local_1b4;
  uint local_1b0 [4];
  long *local_1a0;
  undefined4 local_198;
  uint local_194;
  long local_190 [32];
  void *local_90;
  undefined **local_88;
  undefined **local_80;
  char local_78;
  
  local_1728 = local_1718;
  local_1720 = -0x7ffffff000000000;
  if (param_5 < 0x11) {
    iVar20 = 0;
  }
  else {
    FUN_031b0610(&local_1728,param_5);
    iVar20 = (int)local_1720;
  }
  puVar17 = PTR_PTR_047d1a50;
  puVar16 = PTR_DAT_047d1a08;
  if (iVar20 < param_5) {
    puVar28 = (undefined8 *)(local_1728 + (long)iVar20 * 0x150);
    local_1720 = CONCAT44(local_1720._4_4_,param_5);
    do {
      puVar28[4] = puVar28 + 6;
      *puVar28 = 0x100000001;
      puVar28[1] = 1;
      puVar28[2] = 0x100000000;
      *(undefined4 *)(puVar28 + 3) = 0;
      *(undefined4 *)(puVar28 + 5) = 0;
      *(undefined4 *)((long)puVar28 + 0x2c) = 0x80000010;
      puVar28[0x28] = 0;
      *(undefined1 *)(puVar28 + 0x29) = 0;
      puVar28[0x26] = 0;
      puVar28[0x27] = 0;
      puVar28 = puVar28 + 0x2a;
    } while (puVar28 != (undefined8 *)(local_1728 + (long)param_5 * 0x150));
  }
  else if (param_5 < iVar20) {
    local_1720 = CONCAT44(local_1720._4_4_,param_5);
    lVar48 = (long)iVar20 * 0x150;
    lVar45 = (long)param_5 * 0x150;
    puVar46 = local_1728;
    do {
      if (puVar46[lVar48 + -8] == '\0') {
        (**(code **)(puVar16 + 8))(0,*(undefined8 *)(puVar46 + lVar48 + -0x20),0);
      }
      puVar46[lVar48 + -8] = 0;
      puVar51 = (uint *)(puVar46 + lVar48 + -0x124);
      *(undefined8 *)(puVar46 + lVar48 + -0x18) = 0;
      *(undefined8 *)(puVar46 + lVar48 + -0x10) = 0;
      *(undefined8 *)(puVar46 + lVar48 + -0x20) = 0;
      *(undefined4 *)(puVar46 + lVar48 + -0x128) = 0;
      uVar29 = *puVar51;
      if ((-1 < (int)uVar29) && (*(long *)(puVar46 + lVar48 + -0x130) != 0)) {
        (**(code **)(*(long *)puVar17 + 0x20))
                  (puVar17,*(long *)(puVar46 + lVar48 + -0x130),(ulong)uVar29 << 4);
      }
      lVar45 = lVar45 + 0x150;
      *(undefined8 *)(puVar46 + lVar48 + -0x130) = 0;
      puVar46 = puVar46 + -0x150;
      *puVar51 = 0x80000000;
    } while (lVar48 != lVar45);
  }
  if (0 < (int)((ulong)(param_4 - param_3) >> 5)) {
    local_1850 = 0x80040200;
    uVar34 = 0;
    do {
      puVar28 = (undefined8 *)(param_3 + uVar34 * 0x20);
      puVar51 = param_2;
      if (*(int *)((long)puVar28 + 0x14) != 0) {
        puVar51 = (uint *)(local_1728 + (long)(*(int *)((long)puVar28 + 0x14) + -1) * 0x150);
      }
      plVar31 = (long *)*puVar28;
      if (plVar31 == (long *)0x0) {
        FUN_031a7e98(puVar51,param_1);
      }
      else {
        uVar29 = *(uint *)((long)puVar28 + 0xc);
        uVar38 = (ulong)uVar29;
        uVar35 = *(undefined8 *)(param_1 + 4);
        uVar1 = *(undefined8 *)param_1;
        uVar24 = param_1[6];
        uVar40 = (ulong)uVar24;
        *(undefined8 *)(puVar51 + 2) = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)(puVar51 + 4) = uVar35;
        *(undefined8 *)puVar51 = uVar1;
        puVar51[6] = uVar29;
        puVar21 = (uint *)FUN_031a8080(puVar51);
        if (*(uint **)(puVar51 + 0x50) < puVar21) {
          local_1c0 = puVar21;
          pvVar22 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_1c0,0);
          __n = *(uint **)(puVar51 + 0x4e);
          if (puVar21 <= *(uint **)(puVar51 + 0x4e)) {
            __n = puVar21;
          }
          memcpy(pvVar22,*(void **)(puVar51 + 0x4c),(size_t)__n);
          if ((char)puVar51[0x52] == '\0') {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,*(undefined8 *)(puVar51 + 0x4c),0);
          }
          *(void **)(puVar51 + 0x4c) = pvVar22;
          *(uint **)(puVar51 + 0x50) = puVar21;
          *(undefined1 *)(puVar51 + 0x52) = 0;
        }
        *(uint **)(puVar51 + 0x4e) = puVar21;
        pcVar42 = (char *)((long)&DAT_0487f14d + uVar40 * 0x38 + 7);
        if (*pcVar42 == '\0') {
          if (*(char *)((long)&DAT_0487f14d + uVar38 * 0x38 + 7) == '\0') {
            uVar52 = 0;
            if ((ulong)(ushort)(&DAT_0487f130)[uVar38 * 0x1c] != 0) {
              uVar52 = (ulong)((long)puVar21 << 3) / (ulong)(ushort)(&DAT_0487f130)[uVar38 * 0x1c];
            }
            iVar20 = (**(code **)(*plVar31 + 0x20))
                               (plVar31,*(long *)(param_1 + 0x4c),
                                *(long *)(param_1 + 0x4e) + *(long *)(param_1 + 0x4c),
                                *(long *)(puVar51 + 0x4c),*(long *)(puVar51 + 0x4c) + (long)puVar21,
                                uVar52,uVar40);
            if (iVar20 < 0) goto LAB_031aa980;
          }
          else {
            uVar33 = param_1[2];
            if (uVar33 != 0) {
              lVar45 = uVar40 * 0x38;
              uVar36 = 0;
              uVar26 = param_1[1];
              uVar37 = uVar26;
              do {
                if (uVar37 != 0) {
                  uVar37 = *param_1;
                  uVar33 = 0;
                  do {
                    if (uVar37 != 0) {
                      uVar26 = 0;
                      do {
                        uVar37 = param_1[3] >> (ulong)(uVar26 & 0x1f);
                        uVar10 = param_1[4] >> (ulong)(uVar26 & 0x1f);
                        uVar43 = puVar51[3] >> (ulong)(uVar26 & 0x1f);
                        if (uVar37 < 2) {
                          uVar37 = 1;
                        }
                        if (uVar10 < 2) {
                          uVar10 = 1;
                        }
                        if (uVar43 < 2) {
                          uVar43 = 1;
                        }
                        uVar30 = 0;
                        if ((byte)(&DAT_0487f132)[(ulong)puVar51[6] * 0x38] != 0) {
                          uVar30 = (uVar43 - 1) /
                                   (uint)(byte)(&DAT_0487f132)[(ulong)puVar51[6] * 0x38];
                        }
                        uVar43 = puVar51[4] >> (ulong)(uVar26 & 0x1f);
                        if (uVar43 < 2) {
                          uVar43 = 1;
                        }
                        uVar30 = uVar30 + 1;
                        uVar41 = 0;
                        if ((byte)(&DAT_0487f133)[(ulong)puVar51[6] * 0x38] != 0) {
                          uVar41 = (uVar43 - 1) /
                                   (uint)(byte)(&DAT_0487f133)[(ulong)puVar51[6] * 0x38];
                        }
                        uVar43 = uVar41 + 1;
                        uVar4 = (&DAT_0487f130)[(ulong)param_1[6] * 0x1c];
                        uVar12 = 0;
                        if ((byte)(&DAT_0487f132)[(ulong)param_1[6] * 0x38] != 0) {
                          uVar12 = (uVar37 - 1) /
                                   (uint)(byte)(&DAT_0487f132)[(ulong)param_1[6] * 0x38];
                        }
                        uVar7 = uVar30 * (byte)(&DAT_0487f132)[uVar38 * 0x38];
                        uVar49 = uVar43 * (byte)(&DAT_0487f133)[uVar38 * 0x38];
                        if (*pcVar42 == '\0') {
                          uVar27 = (uint)(ushort)(&DAT_0487f130)[uVar40 * 0x1c];
                        }
                        else {
                          iVar20 = (uint)(byte)(&DAT_0487f133)[lVar45] *
                                   (uint)(byte)(&DAT_0487f132)[lVar45] *
                                   (uint)(byte)(&DAT_0487f134)[lVar45];
                          uVar27 = 0;
                          if (iVar20 != 0) {
                            uVar27 = (int)((uint)(ushort)(&DAT_0487f130)[uVar40 * 0x1c] + iVar20 +
                                          -1) / iVar20;
                          }
                        }
                        local_194 = 0x80000010;
                        uVar5 = (&DAT_0487f130)[uVar38 * 0x1c];
                        local_198 = 0;
                        local_78 = '\0';
                        local_88 = (undefined **)0x0;
                        local_80 = (undefined **)0x0;
                        local_90 = (void *)0x0;
                        local_1c0 = (uint *)0x100000001;
                        local_1b8 = 1;
                        local_1b0[1] = 1;
                        local_1b4 = uVar7;
                        local_1b0[0] = uVar49;
                        local_1b0[2] = uVar24;
                        local_1a0 = local_190;
                        ppuVar23 = (undefined **)FUN_031a8080(&local_1c0);
                        if (local_80 < ppuVar23) {
                          local_210 = ppuVar23;
                          pvVar22 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_210,0);
                          __n_00 = local_88;
                          if (ppuVar23 <= local_88) {
                            __n_00 = ppuVar23;
                          }
                          memcpy(pvVar22,local_90,(size_t)__n_00);
                          if (local_78 == '\0') {
                            (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_90,0);
                          }
                          local_78 = '\0';
                          local_90 = pvVar22;
                          local_80 = ppuVar23;
                        }
                        uVar50 = 0;
                        local_88 = ppuVar23;
                        do {
                          if (uVar49 != 0) {
                            uVar44 = 0;
                            do {
                              lVar48 = (ulong)param_1[6] * 0x38;
                              uVar39 = uVar26 + (uVar33 + param_1[1] * uVar36) * *param_1;
                              uVar25 = uVar44;
                              if (uVar10 - 1 <= uVar44) {
                                uVar25 = uVar10 - 1;
                              }
                              uVar11 = local_1b4;
                              if (local_1b4 < 2) {
                                uVar11 = 1;
                              }
                              uVar13 = 0;
                              if ((byte)(&DAT_0487f132)[(ulong)local_1b0[2] * 0x38] != 0) {
                                uVar13 = (uVar11 - 1) /
                                         (uint)(byte)(&DAT_0487f132)[(ulong)local_1b0[2] * 0x38];
                              }
                              uVar11 = param_1[3] >> (ulong)(uVar26 & 0x1f);
                              if (uVar11 < 2) {
                                uVar11 = 1;
                              }
                              uVar6 = param_1[4] >> (ulong)(uVar26 & 0x1f);
                              if (uVar6 < 2) {
                                uVar6 = 1;
                              }
                              uVar14 = 0;
                              if ((byte)(&DAT_0487f132)[lVar48] != 0) {
                                uVar14 = (uVar11 - 1) / (uint)(byte)(&DAT_0487f132)[lVar48];
                              }
                              uVar11 = 0;
                              if ((byte)(&DAT_0487f133)[lVar48] != 0) {
                                uVar11 = (uVar6 - 1) / (uint)(byte)(&DAT_0487f133)[lVar48];
                              }
                              memcpy((void *)((long)local_90 +
                                             (ulong)(((uVar13 + 1) *
                                                      (uint)(ushort)(&DAT_0487f130)
                                                                    [(ulong)local_1b0[2] * 0x1c] >>
                                                     3) * uVar44) + *local_1a0),
                                     (void *)((ulong)((uVar25 + (uVar11 + 1) * uVar50) *
                                                     ((uVar14 + 1) *
                                                      (uint)(ushort)(&DAT_0487f130)
                                                                    [(ulong)param_1[6] * 0x1c] >> 3)
                                                     ) +
                                             *(long *)(param_1 + 0x4c) +
                                             *(long *)(*(long *)(param_1 + 8) +
                                                      (-(ulong)(uVar39 >> 0x1f) & 0xfffffff000000000
                                                      | (ulong)uVar39 << 4))),
                                     (ulong)((uVar12 + 1) * (uint)uVar4 >> 3));
                              uVar39 = uVar37;
                              if (uVar37 < uVar7) {
                                do {
                                  lVar48 = (ulong)param_1[6] * 0x38;
                                  uVar13 = uVar26 + (uVar33 + param_1[1] * uVar36) * *param_1;
                                  uVar11 = local_1b4;
                                  if (local_1b4 < 2) {
                                    uVar11 = 1;
                                  }
                                  uVar6 = 0;
                                  if ((byte)(&DAT_0487f132)[(ulong)local_1b0[2] * 0x38] != 0) {
                                    uVar6 = (uVar11 - 1) /
                                            (uint)(byte)(&DAT_0487f132)[(ulong)local_1b0[2] * 0x38];
                                  }
                                  uVar11 = param_1[3] >> (ulong)(uVar26 & 0x1f);
                                  uVar14 = param_1[4] >> (ulong)(uVar26 & 0x1f);
                                  if (uVar11 < 2) {
                                    uVar11 = 1;
                                  }
                                  if (uVar14 < 2) {
                                    uVar14 = 1;
                                  }
                                  uVar15 = 0;
                                  if ((byte)(&DAT_0487f132)[lVar48] != 0) {
                                    uVar15 = (uVar11 - 1) / (uint)(byte)(&DAT_0487f132)[lVar48];
                                  }
                                  uVar11 = 0;
                                  if ((byte)(&DAT_0487f133)[lVar48] != 0) {
                                    uVar11 = (uVar14 - 1) / (uint)(byte)(&DAT_0487f133)[lVar48];
                                  }
                                  memcpy((void *)((long)local_90 +
                                                 (ulong)(((uVar6 + 1) *
                                                          (uint)(ushort)(&DAT_0487f130)
                                                                        [(ulong)local_1b0[2] * 0x1c]
                                                         >> 3) * uVar44 +
                                                        (uVar39 * (ushort)(&DAT_0487f130)
                                                                          [(ulong)local_1b0[2] *
                                                                           0x1c] >> 3)) + *local_1a0
                                                 ),
                                         (void *)((ulong)((uVar25 + (uVar11 + 1) * uVar50) *
                                                          ((uVar15 + 1) *
                                                           (uint)(ushort)(&DAT_0487f130)
                                                                         [(ulong)param_1[6] * 0x1c]
                                                          >> 3) + ((uVar37 - 1) *
                                                                   (uint)(ushort)(&DAT_0487f130)
                                                                                 [(ulong)param_1[6]
                                                                                  * 0x1c] >> 3)) +
                                                 *(long *)(param_1 + 0x4c) +
                                                 *(long *)(*(long *)(param_1 + 8) +
                                                          (-(ulong)(uVar13 >> 0x1f) &
                                                           0xfffffff000000000 | (ulong)uVar13 << 4))
                                                 ),(ulong)(uVar27 >> 3));
                                  uVar39 = uVar39 + 1;
                                } while (uVar39 != uVar7);
                              }
                              uVar44 = uVar44 + 1;
                            } while (uVar44 != uVar49);
                          }
                          local_210 = &PTR_LAB_046a13c8;
                          local_200 = (long)local_88 + (long)local_90;
                          local_208 = local_90;
                          lVar48 = (ulong)puVar51[6] * 0x38;
                          uVar44 = puVar51[3] >> (ulong)(uVar26 & 0x1f);
                          uVar25 = puVar51[4] >> (ulong)(uVar26 & 0x1f);
                          if (uVar44 < 2) {
                            uVar44 = 1;
                          }
                          if (uVar25 < 2) {
                            uVar25 = 1;
                          }
                          uVar39 = 0;
                          if ((byte)(&DAT_0487f132)[lVar48] != 0) {
                            uVar39 = (uVar44 - 1) / (uint)(byte)(&DAT_0487f132)[lVar48];
                          }
                          uVar44 = 0;
                          if ((byte)(&DAT_0487f133)[lVar48] != 0) {
                            uVar44 = (uVar25 - 1) / (uint)(byte)(&DAT_0487f133)[lVar48];
                          }
                          uVar25 = uVar26 + (uVar33 + puVar51[1] * uVar36) * *puVar51;
                          local_1f8 = (ulong)((uVar44 + 1) * uVar50 *
                                             ((uVar39 + 1) *
                                              (uint)(ushort)(&DAT_0487f130)
                                                            [(ulong)puVar51[6] * 0x1c] >> 3)) +
                                      *(long *)(puVar51 + 0x4c) +
                                      *(long *)(*(long *)(puVar51 + 8) +
                                               (-(ulong)(uVar25 >> 0x1f) & 0xfffffff000000000 |
                                               (ulong)uVar25 << 4));
                          local_1f0 = local_1f8 + (ulong)(uVar43 * uVar30 * (uint)(uVar5 >> 3));
                          local_1cc = '\0';
                          local_1e8 = uVar30;
                          local_1e4 = uVar43;
                          local_1e0 = uVar24;
                          local_1dc = uVar29;
                          local_1d8 = plVar31;
                          if (param_6 == (long *)0x0) {
                            uVar52 = uVar40;
                            uVar32 = uVar38;
LAB_031aa7cc:
                            bVar2 = (&DAT_0487f132)[uVar32 * 0x38];
                            uVar44 = local_1e8 * bVar2 - 1;
                            uVar25 = 0;
                            if ((byte)(&DAT_0487f132)[uVar52 * 0x38] != 0) {
                              uVar25 = uVar44 / (byte)(&DAT_0487f132)[uVar52 * 0x38];
                            }
                            uVar39 = local_1e4;
                            if (uVar43 <= local_1e4) {
                              uVar39 = uVar43;
                            }
                            uVar11 = 0;
                            if (bVar2 != 0) {
                              uVar11 = uVar44 / bVar2;
                            }
                            local_1d0 = uVar43;
                            iVar20 = (**(code **)(*local_1d8 + 0x20))
                                               (local_1d8,local_208,
                                                (long)local_208 +
                                                (ulong)(uVar39 * (byte)(&DAT_0487f133)
                                                                       [uVar32 * 0x38] *
                                                       ((uVar25 + 1) *
                                                        (uint)(ushort)(&DAT_0487f130)[uVar52 * 0x1c]
                                                       >> 3)),local_1f8,
                                                local_1f8 +
                                                (ulong)(((uVar11 + 1) *
                                                         (uint)(ushort)(&DAT_0487f130)
                                                                       [uVar32 * 0x1c] >> 3) *
                                                       uVar39),local_1e8,uVar39,uVar52,(int)uVar32);
                            if (-1 < iVar20) goto LAB_031aa84c;
LAB_031aa888:
                            bVar18 = false;
                            goto LAB_031aa894;
                          }
                          uVar52 = (**(code **)(*plVar31 + 0x18))();
                          if ((uVar52 & 1) == 0) {
                            uVar52 = (ulong)local_1e0;
                            uVar32 = (ulong)local_1dc;
                            goto LAB_031aa7cc;
                          }
                          uVar44 = 0;
                          if (uVar30 != 0) {
                            uVar44 = 0x80 / uVar30;
                          }
                          if (0x80 < uVar30) {
                            uVar44 = 1;
                          }
                          uVar25 = 0;
                          if (uVar44 != 0) {
                            uVar25 = uVar43 / uVar44;
                          }
                          if (0x1f < uVar25) {
                            uVar25 = 0x20;
                          }
                          if (uVar43 < uVar44) {
                            uVar25 = 1;
                          }
                          local_1d0 = 0;
                          if (uVar25 != 0) {
                            local_1d0 = uVar41 / uVar25;
                          }
                          local_1d0 = local_1d0 + 1;
                          uVar44 = 0;
                          if (local_1d0 != 0) {
                            uVar44 = uVar41 / local_1d0;
                          }
                          (**(code **)(*param_6 + 0x18))(param_6,&local_218,1,8);
                          (**(code **)(*param_6 + 0x28))(param_6,local_218,&local_210,0x40);
                          (**(code **)(*param_6 + 0x38))(param_6,local_218,uVar44 + 1,0);
                          (**(code **)(*param_6 + 0x50))(param_6,&local_218,1,0,8);
                          (**(code **)(*param_6 + 0xa8))(param_6,local_218);
LAB_031aa84c:
                          if (local_1cc != '\0') goto LAB_031aa888;
                          uVar50 = uVar50 + 1;
                          uVar44 = param_1[5] >> (ulong)(uVar26 & 0x1f);
                          if (uVar44 < 2) {
                            uVar44 = 1;
                          }
                        } while (uVar50 < uVar44);
                        bVar18 = true;
LAB_031aa894:
                        if (local_78 == '\0') {
                          (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_90,0);
                        }
                        local_78 = 0;
                        local_90 = (void *)0x0;
                        local_88 = (undefined **)0x0;
                        local_80 = (undefined **)0x0;
                        local_198 = 0;
                        if ((-1 < (int)local_194) && (local_1a0 != (long *)0x0)) {
                          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                                    (PTR_PTR_047d1a50,local_1a0,(ulong)local_194 << 4);
                        }
                        if (!bVar18) goto LAB_031aa980;
                        uVar37 = *param_1;
                        uVar26 = uVar26 + 1;
                      } while (uVar26 < uVar37);
                      uVar26 = param_1[1];
                    }
                    uVar33 = uVar33 + 1;
                  } while (uVar33 < uVar26);
                  uVar33 = param_1[2];
                  uVar37 = uVar26;
                }
                uVar36 = uVar36 + 1;
              } while (uVar36 < uVar33);
            }
          }
        }
        else {
          uVar29 = param_1[2];
          if (uVar29 != 0) {
            lVar45 = uVar38 * 0x38;
            uVar24 = param_1[1];
            local_1740 = 0;
            uVar33 = uVar24;
            do {
              if (uVar33 != 0) {
                uVar29 = *param_1;
                local_173c = 0;
                do {
                  if (uVar29 != 0) {
                    uVar24 = 0;
                    do {
                      uVar36 = (uint)(byte)(&DAT_0487f132)[uVar40 * 0x38];
                      uVar29 = puVar51[3] >> (ulong)(uVar24 & 0x1f);
                      uVar33 = puVar51[4] >> (ulong)(uVar24 & 0x1f);
                      if (uVar29 < 2) {
                        uVar29 = 1;
                      }
                      if (uVar33 < 2) {
                        uVar33 = 1;
                      }
                      bVar2 = (&DAT_0487f133)[(ulong)param_1[6] * 0x38];
                      uVar37 = (uint)(byte)(&DAT_0487f133)[uVar40 * 0x38];
                      uVar26 = param_1[3] >> (ulong)(uVar24 & 0x1f);
                      if (uVar26 < 2) {
                        uVar26 = 1;
                      }
                      uVar10 = 0;
                      if ((byte)(&DAT_0487f132)[(ulong)param_1[6] * 0x38] != 0) {
                        uVar10 = (uVar26 - 1) /
                                 (uint)(byte)(&DAT_0487f132)[(ulong)param_1[6] * 0x38];
                      }
                      iVar20 = uVar10 + 1;
                      uVar26 = 0;
                      if ((byte)(&DAT_0487f132)[(ulong)puVar51[6] * 0x38] != 0) {
                        uVar26 = (uVar29 - 1) /
                                 (uint)(byte)(&DAT_0487f132)[(ulong)puVar51[6] * 0x38];
                      }
                      uVar43 = param_1[4] >> (ulong)(uVar24 & 0x1f);
                      if (uVar43 < 2) {
                        uVar43 = 1;
                      }
                      if (*(char *)((long)&DAT_0487f14d + lVar45 + 7) == '\0') {
                        uVar30 = (uint)(ushort)(&DAT_0487f130)[uVar38 * 0x1c];
                      }
                      else {
                        iVar8 = (uint)(byte)(&DAT_0487f133)[lVar45] *
                                (uint)(byte)(&DAT_0487f132)[lVar45] *
                                (uint)(byte)(&DAT_0487f134)[lVar45];
                        uVar30 = 0;
                        if (iVar8 != 0) {
                          uVar30 = (int)((uint)(ushort)(&DAT_0487f130)[uVar38 * 0x1c] + iVar8 + -1)
                                   / iVar8;
                        }
                      }
                      uVar52 = (ulong)((uVar26 + 1) *
                                       (uint)(ushort)(&DAT_0487f130)[(ulong)puVar51[6] * 0x1c] >> 3)
                      ;
                      uVar4 = (&DAT_0487f130)[uVar40 * 0x1c];
                      local_1b4 = 0x80000100;
                      iVar8 = (uVar30 >> 3) * uVar37;
                      iVar19 = iVar20 * uVar36 * iVar8;
                      local_1b8 = 0;
                      local_1c0 = local_1b0;
                      if (0x100 < iVar19) {
                        FUN_00cb58c0(&local_1c0,PTR_PTR_047d1a50,iVar19);
                      }
                      if (local_1b8 != iVar19) {
                        local_1b8 = iVar19;
                      }
                      uVar26 = 0;
                      if (bVar2 != 0) {
                        uVar26 = (uVar43 - 1) / (uint)bVar2;
                      }
                      local_1738 = 0;
                      do {
                        if (uVar26 != 0xffffffff) {
                          uVar43 = 0;
                          uVar41 = uVar33;
                          do {
                            uVar7 = uVar33 - uVar43 * uVar37;
                            uVar12 = uVar41;
                            if (uVar37 <= uVar41) {
                              uVar12 = uVar37;
                            }
                            uVar49 = uVar24 + (local_173c + param_1[1] * local_1740) * *param_1;
                            if (uVar37 <= uVar7) {
                              uVar7 = uVar37;
                            }
                            uVar32 = (ulong)param_1[6];
                            lVar48 = uVar32 * 0x38;
                            bVar2 = (&DAT_0487f133)[lVar48];
                            uVar27 = param_1[3] >> (ulong)(uVar24 & 0x1f);
                            if (uVar27 < 2) {
                              uVar27 = 1;
                            }
                            uVar50 = param_1[4] >> (ulong)(uVar24 & 0x1f);
                            bVar3 = (&DAT_0487f132)[lVar48];
                            if (uVar50 < 2) {
                              uVar50 = 1;
                            }
                            uVar44 = 0;
                            if (bVar2 != 0) {
                              uVar44 = (uVar50 - 1) / (uint)bVar2;
                            }
                            uVar50 = 0;
                            if (bVar3 != 0) {
                              uVar50 = (uVar27 - 1) / (uint)bVar3;
                            }
                            uVar5 = (&DAT_0487f130)[uVar32 * 0x1c];
                            uVar25 = (uint)uVar5;
                            uVar39 = (uint)bVar3;
                            if (*(char *)((long)&DAT_0487f14d + lVar48 + 7) != '\0') {
                              iVar19 = uVar39 * bVar2 * (uint)(byte)(&DAT_0487f134)[uVar32 * 0x38];
                              uVar25 = 0;
                              if (iVar19 != 0) {
                                uVar25 = (int)((uint)uVar5 + iVar19 + -1) / iVar19;
                              }
                            }
                            uVar11 = 0;
                            if (uVar39 != 0) {
                              uVar11 = uVar27 / uVar39;
                            }
                            lVar48 = (ulong)((uVar44 + 1) * local_1738 *
                                            ((uVar50 + 1) * (uint)uVar5 >> 3)) +
                                     *(long *)(param_1 + 0x4c) +
                                     *(long *)(*(long *)(param_1 + 8) +
                                              (-(ulong)(uVar49 >> 0x1f) & 0xfffffff000000000 |
                                              (ulong)uVar49 << 4)) +
                                     (ulong)(uVar39 * bVar2 * uVar43 * uVar25 * uVar11 >> 3);
                            iVar19 = (**(code **)(*plVar31 + 0x20))
                                               (plVar31,lVar48,
                                                lVar48 + (ulong)(iVar20 * (uint)(uVar4 >> 3)),
                                                local_1c0,(long)local_1c0 + (long)local_1b8,iVar20,
                                                uVar40,uVar38);
                            if (iVar19 < 0) {
                              bVar18 = false;
                              goto LAB_031aa048;
                            }
                            if (iVar20 != 0) {
                              uVar27 = uVar33 - uVar43 * uVar37;
                              uVar49 = uVar37;
                              if (uVar27 <= uVar37) {
                                uVar49 = uVar27;
                              }
                              if (uVar49 != 0) {
                                iVar19 = 0;
                                uVar49 = 0;
                                do {
                                  lVar48 = (ulong)puVar51[6] * 0x38;
                                  uVar27 = puVar51[3] >> (ulong)(uVar24 & 0x1f);
                                  uVar50 = puVar51[4] >> (ulong)(uVar24 & 0x1f);
                                  if (uVar27 < 2) {
                                    uVar27 = 1;
                                  }
                                  if (uVar50 < 2) {
                                    uVar50 = 1;
                                  }
                                  uVar44 = 0;
                                  if ((byte)(&DAT_0487f132)[lVar48] != 0) {
                                    uVar44 = (uVar27 - 1) / (uint)(byte)(&DAT_0487f132)[lVar48];
                                  }
                                  uVar27 = 0;
                                  if ((byte)(&DAT_0487f133)[lVar48] != 0) {
                                    uVar27 = (uVar50 - 1) / (uint)(byte)(&DAT_0487f133)[lVar48];
                                  }
                                  uVar50 = uVar24 + (local_173c + puVar51[1] * local_1740) *
                                                    *puVar51;
                                  uVar32 = 0;
                                  iVar9 = uVar49 * uVar36;
                                  pvVar22 = (void *)((ulong)((uVar43 * uVar37 +
                                                             (uVar27 + 1) * local_1738) *
                                                             ((uVar44 + 1) *
                                                              (uint)(ushort)(&DAT_0487f130)
                                                                            [(ulong)puVar51[6] *
                                                                             0x1c] >> 3) +
                                                            (iVar9 * (uint)(ushort)(&DAT_0487f130)
                                                                                   [(ulong)puVar51[6
                                                  ] * 0x1c] >> 3)) +
                                                  *(long *)(puVar51 + 0x4c) +
                                                  *(long *)(*(long *)(puVar51 + 8) +
                                                           (-(ulong)(uVar50 >> 0x1f) &
                                                            0xfffffff000000000 | (ulong)uVar50 << 4)
                                                           ));
                                  uVar27 = uVar36;
                                  if (uVar29 - iVar9 <= uVar36) {
                                    uVar27 = uVar29 - iVar9;
                                  }
                                  __n_01 = (ulong)(uVar27 * (uVar30 >> 3));
                                  if (uVar7 != 1) {
                                    iVar47 = iVar19;
                                    do {
                                      memcpy(pvVar22,(void *)((long)local_1c0 + (long)iVar47),__n_01
                                            );
                                      pvVar22 = (void *)((long)pvVar22 + uVar52);
                                      memcpy(pvVar22,(void *)((long)local_1c0 +
                                                             (long)(iVar8 + iVar47)),__n_01);
                                      uVar32 = uVar32 + 2;
                                      pvVar22 = (void *)((long)pvVar22 + uVar52);
                                      iVar47 = iVar47 + iVar8 * 2;
                                    } while (((ulong)uVar12 & 0xfffffffe) != uVar32);
                                  }
                                  if ((uVar7 & 1) != 0) {
                                    memcpy(pvVar22,(void *)((long)local_1c0 +
                                                           (long)((iVar9 + (int)uVar32) * iVar8)),
                                           __n_01);
                                  }
                                  bVar18 = uVar49 != uVar10;
                                  uVar49 = uVar49 + 1;
                                  iVar19 = iVar19 + iVar8 * uVar36;
                                } while (bVar18);
                              }
                            }
                            bVar18 = uVar43 != uVar26;
                            uVar43 = uVar43 + 1;
                            uVar41 = uVar41 - uVar37;
                          } while (bVar18);
                        }
                        uVar43 = param_1[5] >> (ulong)(uVar24 & 0x1f);
                        local_1738 = local_1738 + 1;
                        if (uVar43 < 2) {
                          uVar43 = 1;
                        }
                      } while (local_1738 < uVar43);
                      bVar18 = true;
LAB_031aa048:
                      local_1b8 = 0;
                      if ((-1 < (int)local_1b4) && (local_1c0 != (uint *)0x0)) {
                        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))();
                      }
                      if (!bVar18) goto LAB_031aa980;
                      uVar29 = *param_1;
                      uVar24 = uVar24 + 1;
                    } while (uVar24 < uVar29);
                    uVar24 = param_1[1];
                  }
                  local_173c = local_173c + 1;
                } while (local_173c < uVar24);
                uVar29 = param_1[2];
                uVar33 = uVar24;
              }
              local_1740 = local_1740 + 1;
            } while (local_1740 < uVar29);
          }
        }
      }
      uVar34 = uVar34 + 1;
      param_1 = puVar51;
    } while (uVar34 != ((ulong)(param_4 - param_3) >> 5 & 0xffffffff));
  }
  local_1850 = 0;
LAB_031aa980:
  puVar17 = PTR_PTR_047d1a50;
  puVar16 = PTR_DAT_047d1a08;
  if ((int)local_1720 != 0) {
    lVar48 = (long)(int)local_1720 * 0x150;
    lVar45 = 0;
    puVar46 = local_1728;
    do {
      if (puVar46[lVar48 + -8] == '\0') {
        (**(code **)(puVar16 + 8))(0,*(undefined8 *)(puVar46 + lVar48 + -0x20),0);
      }
      puVar46[lVar48 + -8] = 0;
      puVar51 = (uint *)(puVar46 + lVar48 + -0x124);
      *(undefined8 *)(puVar46 + lVar48 + -0x18) = 0;
      *(undefined8 *)(puVar46 + lVar48 + -0x10) = 0;
      *(undefined8 *)(puVar46 + lVar48 + -0x20) = 0;
      *(undefined4 *)(puVar46 + lVar48 + -0x128) = 0;
      uVar29 = *puVar51;
      if ((-1 < (int)uVar29) && (*(long *)(puVar46 + lVar48 + -0x130) != 0)) {
        (**(code **)(*(long *)puVar17 + 0x20))
                  (puVar17,*(long *)(puVar46 + lVar48 + -0x130),(ulong)uVar29 << 4);
      }
      lVar45 = lVar45 + 0x150;
      *(undefined8 *)(puVar46 + lVar48 + -0x130) = 0;
      puVar46 = puVar46 + -0x150;
      *puVar51 = 0x80000000;
    } while (lVar48 != lVar45);
  }
  lVar45 = local_1720;
  uVar34 = (ulong)local_1720._4_4_;
  local_1720 = (ulong)local_1720._4_4_ << 0x20;
  if ((-1 < lVar45) && (local_1728 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_1728,uVar34 * 0x150);
  }
  return local_1850;
}


