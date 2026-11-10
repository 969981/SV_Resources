/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030f3f50; name: FUN_030f3f50
 */


void FUN_030f3f50(long param_1,int *param_2,uint *param_3,uint *param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  short sVar15;
  uint uVar16;
  long *plVar17;
  uint uVar18;
  float *pfVar19;
  long lVar20;
  long lVar21;
  int *piVar22;
  long *plVar23;
  float fVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  float fVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  uint local_128 [2];
  undefined8 local_120;
  uint local_118 [2];
  float local_110;
  float fStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  uint local_e8 [2];
  undefined1 local_e0 [40];
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  int local_a0;
  long local_98;
  undefined8 local_90;
  int local_88;
  long local_80;
  undefined8 local_78;
  long *plStack_70;
  
  lVar21 = tpidr_el0;
  lVar8 = *(long *)(lVar21 + 0x1000b8);
  if (lVar8 == 0) {
    lVar8 = FUN_00e5d3b4();
    *(long *)(lVar21 + 0x1000b8) = lVar8;
  }
  plVar23 = *(long **)(lVar8 + 0x3e0);
  if (plVar23 != (long *)0x0) {
    lVar21 = *plVar23;
    if (*(code **)(lVar21 + 0x18) != (code *)0x0) {
      (**(code **)(lVar21 + 0x18))("resetClearanceFloodFill",0x17,*(undefined8 *)(lVar21 + 0x28));
    }
    puVar4 = (undefined8 *)plVar23[2];
    uVar9 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= (ulong)plVar23[3]) && (plVar23[2] = uVar9, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = "TtresetClearanceFloodFill";
      uVar7 = nn::os::GetSystemTick();
      puVar4[1] = uVar7;
    }
    if (((*(byte *)(lVar21 + 0x38) & 1) != 0) && (plVar23[6] != 0)) {
      puVar4 = (undefined8 *)plVar23[2];
      uVar9 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar23[3]) && (plVar23[2] = uVar9, puVar4 != (undefined8 *)0x0)) {
        *puVar4 = &DAT_03c4e575;
        puVar4[1] = *(undefined8 *)(plVar23[6] + 8);
      }
    }
  }
  local_80 = 0;
  local_78._0_4_ = 0;
  local_78._4_4_ = 0x80000000;
  local_88 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0x8000000000000000;
  local_b0 = 0;
  local_a8 = 0x8000000000000000;
  plStack_70 = plVar23;
  FUN_030bb7b8(&local_80,PTR_PTR_047d1a50 + 0x20,0x20);
  if ((uint)local_78 != 0x20) {
    local_78._0_4_ = 0x20;
  }
  FUN_030f6cfc(&local_98,0x40);
  FUN_030f6cfc(&local_b0,0x40);
  fVar24 = 0.0;
  lVar21 = 8;
  lVar10 = *(long *)(*(long *)(param_1 + 0x38) + (long)*param_2 * 0x100);
  plVar17 = (long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x18) +
                    (long)*(int *)(*(long *)(lVar10 + 0x20) + 0x180) * 0x18);
  uVar6 = *(uint *)(plVar17 + 1);
  lVar8 = 0;
  do {
    lVar20 = lVar8;
    if ((long)(int)((uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) - 1) + 1 == lVar20)
    goto LAB_030f4160;
    lVar11 = *plVar17;
    pfVar19 = (float *)(lVar11 + lVar21);
    lVar21 = lVar21 + 0x18;
    lVar8 = lVar20 + 1;
  } while (*pfVar19 < 0.0);
  if ((int)(lVar20 + 1) != 0) {
    fVar24 = 0.0;
    do {
      iVar25 = (int)lVar20;
      lVar20 = (long)iVar25;
      lVar21 = lVar20 * 2 + (long)iVar25;
      pfVar19 = (float *)(lVar11 + 0x20 + lVar21 * 8);
      fVar28 = *(float *)(lVar11 + lVar21 * 8 + 8);
      iVar25 = iVar25 + 1;
      if (fVar24 <= fVar28) {
        fVar24 = fVar28;
      }
      do {
        lVar20 = lVar20 + 1;
        if ((int)uVar6 <= lVar20) goto LAB_030f4160;
        fVar28 = *pfVar19;
        iVar25 = iVar25 + 1;
        pfVar19 = pfVar19 + 6;
      } while (fVar28 < 0.0);
    } while (iVar25 != 0);
  }
LAB_030f4160:
  local_b8 = CONCAT44(fVar24,fVar24);
  if (param_3 != param_4) {
    puVar2 = PTR_PTR_047d1a50 + 0x20;
    do {
      uVar6 = *param_3;
      local_78 = (ulong)local_78._4_4_ << 0x20;
      if (0 < (int)local_90) {
        uVar9 = local_90 & 7;
        if ((local_90 & 0xffffffff) - 1 < 7) {
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          do {
            *(undefined4 *)(local_98 + uVar12 * 4) = 0xffffffff;
            *(undefined4 *)(local_98 + uVar12 * 4 + 4) = 0xffffffff;
            *(undefined4 *)(local_98 + uVar12 * 4 + 8) = 0xffffffff;
            *(undefined4 *)(local_98 + uVar12 * 4 + 0xc) = 0xffffffff;
            *(undefined4 *)(local_98 + uVar12 * 4 + 0x10) = 0xffffffff;
            *(undefined4 *)(local_98 + uVar12 * 4 + 0x14) = 0xffffffff;
            *(undefined4 *)(local_98 + uVar12 * 4 + 0x18) = 0xffffffff;
            lVar21 = uVar12 * 4;
            uVar12 = uVar12 + 8;
            *(undefined4 *)(local_98 + lVar21 + 0x1c) = 0xffffffff;
          } while ((local_90 & 0xfffffff8) != uVar12);
        }
        if ((local_90 & 7) != 0) {
          lVar21 = uVar12 << 2;
          do {
            *(undefined4 *)(local_98 + lVar21) = 0xffffffff;
            uVar9 = uVar9 - 1;
            lVar21 = lVar21 + 4;
          } while (uVar9 != 0);
        }
      }
      local_88 = 0;
      local_e8[0] = uVar6;
      FUN_0309959c(lVar10,local_e8,&local_b8,local_e0);
      iVar25 = *param_2;
      uVar9 = (long)(int)(uint)local_78 + 1;
      if ((int)(local_78._4_4_ & 0x7fffffff) <= (int)(uint)local_78) {
        FUN_0305c42c(&local_80,PTR_PTR_047d1a50 + 0x20,uVar9);
      }
      *(uint *)(local_80 + (long)(int)(uint)local_78 * 4) = uVar6 | iVar25 << 0x16;
      local_78._0_4_ = (uint)uVar9;
      if ((uint)uVar9 != 0) {
LAB_030f42bc:
        lVar21 = (long)(int)uVar9 + -1;
        uVar6 = *(uint *)(local_80 + lVar21 * 4);
        local_78._0_4_ = (uint)lVar21;
        uVar18 = (int)local_90 - 1;
        if (1 < (int)local_90) {
          uVar16 = (uVar6 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar6 * -0x61c8864f & 0xff00ff) << 8;
          uVar16 = uVar16 >> 0x10 | uVar16 << 0x10;
          while( true ) {
            uVar16 = uVar18 & uVar16;
            uVar5 = *(uint *)(local_98 + (long)(int)uVar16 * 4);
            if (uVar5 == 0xffffffff) break;
            if (uVar5 == uVar6) {
              if ((int)uVar16 < (int)local_90) goto LAB_030f4b04;
              break;
            }
            uVar16 = uVar16 + 1;
          }
        }
        lVar21 = *(long *)(*(long *)(param_1 + 0x38) + ((ulong)(uVar6 >> 0xe) & 0x3ff00));
        if (lVar21 != 0) {
          uVar12 = (ulong)uVar6 & 0x3fffff;
          lVar8 = *(long *)(*(long *)(lVar21 + 0x20) + 0x168);
          uVar18 = *(uint *)(lVar8 + uVar12 * 4);
          uVar9 = (ulong)uVar18;
          fVar24 = (float)uVar12;
          if (-1 < (int)uVar18) {
            uVar16 = *(uint *)(*(long *)(lVar21 + 0x20) + 0x170);
            lVar20 = (long)(int)uVar16;
            if ((int)uVar16 <= (int)(uVar18 + 1)) {
              uVar16 = uVar18 + 1;
            }
            uVar13 = uVar9;
            do {
              uVar3 = uVar13 + 1;
              if (lVar20 <= (long)uVar3) goto LAB_030f4380;
              lVar11 = uVar13 * 4;
              uVar13 = uVar3;
            } while (*(float *)(lVar8 + 4 + lVar11) == fVar24);
            uVar16 = (uint)uVar3;
LAB_030f4380:
            if ((int)uVar18 < (int)uVar16) {
              do {
                if (*(int *)(lVar21 + 0x40) != 0) {
                  plVar17 = *(long **)(lVar21 + 0x38);
                  lVar8 = (long)*(int *)(lVar21 + 0x40) * 0x18;
                  do {
                    lVar20 = *plVar17;
                    if (lVar20 != 0) {
                      if ((char)plVar17[2] != '\x01') {
                        lVar20 = FUN_03065a74(plVar17);
                      }
                      local_110 = (float)uVar9;
                      FUN_03077488(lVar20,lVar21,&local_110);
                    }
                    plVar17 = plVar17 + 3;
                    lVar8 = lVar8 + -0x18;
                  } while (lVar8 != 0);
                }
                uVar18 = (int)(float)uVar9 + 1;
                uVar9 = (ulong)uVar18;
              } while (uVar18 != uVar16);
            }
          }
          if (*(int *)(lVar21 + 0x40) != 0) {
            plVar17 = *(long **)(lVar21 + 0x38);
            lVar8 = (long)*(int *)(lVar21 + 0x40) * 0x18;
            do {
              lVar20 = *plVar17;
              if (lVar20 != 0) {
                if ((char)plVar17[2] != '\x01') {
                  lVar20 = FUN_03065a74(plVar17);
                }
                local_110 = fVar24;
                FUN_03077488(lVar20,lVar21,&local_110);
              }
              plVar17 = plVar17 + 3;
              lVar8 = lVar8 + -0x18;
            } while (lVar8 != 0);
          }
          lVar8 = *(long *)(lVar21 + 0x20);
          piVar22 = (int *)(*(long *)(lVar8 + 0x18) + uVar12 * 0x10);
          iVar25 = *piVar22;
          sVar15 = (short)piVar22[2];
          if (0 < sVar15) {
            lVar20 = (long)iVar25;
            do {
              lVar11 = *(long *)(lVar8 + 0x28) + lVar20 * 0x14;
              uVar16 = *(uint *)(lVar11 + 0xc);
              uVar18 = 0xffffffff;
              if (uVar16 != 0xffffffff) {
                uVar18 = uVar16 & 0x3fffff | *(int *)(lVar8 + 0x17c) << 0x16;
              }
              if ((*(byte *)(lVar11 + 0x10) & 0x40) == 0) {
                uVar16 = uVar18;
              }
              if (*(int *)(*(long *)(lVar8 + 0x28) + lVar20 * 0x14 + 8) != -1) {
                if (1 < (int)local_90) {
                  uVar18 = (uVar16 * -0x61c8864f & 0xff00ff00) >> 8 |
                           (uVar16 * -0x61c8864f & 0xff00ff) << 8;
                  uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
                  while( true ) {
                    uVar18 = (int)local_90 - 1U & uVar18;
                    uVar5 = *(uint *)(local_98 + (long)(int)uVar18 * 4);
                    if (uVar5 == 0xffffffff) break;
                    if (uVar5 == uVar16) {
                      if ((int)uVar18 < (int)local_90) goto LAB_030f4574;
                      break;
                    }
                    uVar18 = uVar18 + 1;
                  }
                }
                local_118[0] = uVar16 & 0x3fffff;
                local_120 = 0;
                FUN_0309959c(lVar21,local_118,&local_120,&local_110);
                iVar25 = -(uint)(local_e0._0_4_ <= (float)uStack_100);
                iVar26 = -(uint)(local_e0._4_4_ <= (float)((ulong)uStack_100 >> 0x20));
                iVar27 = -(uint)(local_e0._8_4_ <= (float)uStack_f8);
                iVar29 = -(uint)(local_110 <= local_e0._16_4_);
                iVar30 = -(uint)(fStack_10c <= local_e0._20_4_);
                iVar31 = -(uint)((float)uStack_108 <= local_e0._24_4_);
                if (CONCAT13((byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar26 >> 0x18) &
                             (byte)((uint)iVar29 >> 0x18) & (byte)((uint)iVar25 >> 0x18) &
                             (byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar27 >> 0x18),
                             CONCAT12((byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar26 >> 0x10) &
                                      (byte)((uint)iVar29 >> 0x10) & (byte)((uint)iVar25 >> 0x10) &
                                      (byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar27 >> 0x10),
                                      CONCAT11((byte)((uint)iVar30 >> 8) & (byte)((uint)iVar26 >> 8)
                                               & (byte)((uint)iVar29 >> 8) &
                                                 (byte)((uint)iVar25 >> 8) &
                                               (byte)((uint)iVar31 >> 8) & (byte)((uint)iVar27 >> 8)
                                               ,(byte)iVar30 & (byte)iVar26 &
                                                (byte)iVar29 & (byte)iVar25 &
                                                (byte)iVar31 & (byte)iVar27))) != 0) {
                  lVar8 = (long)(int)(uint)local_78;
                  if ((int)(local_78._4_4_ & 0x7fffffff) <= (int)(uint)local_78) {
                    FUN_0305c42c(&local_80,puVar2,lVar8 + 1);
                  }
                  *(uint *)(local_80 + (long)(int)(uint)local_78 * 4) = uVar16;
                  local_78._0_4_ = (uint)(lVar8 + 1);
                }
                sVar15 = (short)piVar22[2];
                iVar25 = *piVar22;
                lVar8 = *(long *)(lVar21 + 0x20);
              }
LAB_030f4574:
              lVar20 = lVar20 + 1;
            } while (lVar20 < iVar25 + sVar15);
          }
          if ((*(int *)(lVar8 + 0x108) != 0) &&
             (((*(byte *)(*(long *)(lVar8 + 0x100) + uVar12) ^ 0xff) & 5) == 0)) {
            if (0 < (int)local_a8) {
              uVar9 = local_a8 & 7;
              if ((local_a8 & 0xffffffff) - 1 < 7) {
                uVar13 = 0;
              }
              else {
                uVar13 = 0;
                do {
                  *(undefined4 *)(local_b0 + uVar13 * 4) = 0xffffffff;
                  *(undefined4 *)(local_b0 + uVar13 * 4 + 4) = 0xffffffff;
                  *(undefined4 *)(local_b0 + uVar13 * 4 + 8) = 0xffffffff;
                  *(undefined4 *)(local_b0 + uVar13 * 4 + 0xc) = 0xffffffff;
                  *(undefined4 *)(local_b0 + uVar13 * 4 + 0x10) = 0xffffffff;
                  *(undefined4 *)(local_b0 + uVar13 * 4 + 0x14) = 0xffffffff;
                  *(undefined4 *)(local_b0 + uVar13 * 4 + 0x18) = 0xffffffff;
                  lVar8 = uVar13 * 4;
                  uVar13 = uVar13 + 8;
                  *(undefined4 *)(local_b0 + lVar8 + 0x1c) = 0xffffffff;
                } while ((local_a8 & 0xfffffff8) != uVar13);
              }
              if ((local_a8 & 7) != 0) {
                lVar8 = uVar13 << 2;
                do {
                  *(undefined4 *)(local_b0 + lVar8) = 0xffffffff;
                  uVar9 = uVar9 - 1;
                  lVar8 = lVar8 + 4;
                } while (uVar9 != 0);
              }
              lVar8 = *(long *)(lVar21 + 0x20);
            }
            local_a0 = 0;
            uVar18 = *(uint *)(*(long *)(lVar8 + 0x168) + uVar12 * 4);
            if (-1 < (int)uVar18) {
              iVar25 = *(int *)(lVar8 + 0x170);
              lVar11 = (long)iVar25;
              lVar20 = (long)(int)uVar18;
              if (iVar25 <= (int)(uVar18 + 1)) {
                iVar25 = uVar18 + 1;
              }
              uVar9 = (ulong)uVar18;
              do {
                uVar12 = uVar9 + 1;
                if (lVar11 <= (long)uVar12) goto LAB_030f4714;
                lVar1 = uVar9 * 4;
                uVar9 = uVar12;
              } while (*(float *)(*(long *)(lVar8 + 0x168) + 4 + lVar1) == fVar24);
              iVar25 = (int)uVar12;
LAB_030f4714:
              if ((int)uVar18 < iVar25) {
                do {
                  if (lVar20 < *(int *)(lVar8 + 0x20)) {
                    if (*(int *)(lVar8 + 0x98) == 0) {
                      iVar26 = (int)lVar20;
                    }
                    else {
                      iVar26 = *(int *)(*(long *)(lVar8 + 0x90) + lVar20 * 4);
                    }
                    if (iVar26 == -1) {
                      piVar22 = (int *)(*(long *)(lVar8 + 0x18) + lVar20 * 0x10);
                    }
                    else {
                      piVar22 = (int *)(*(long *)(lVar8 + 0xb0) + (long)iVar26 * 0x10);
                    }
                  }
                  else {
                    piVar22 = (int *)(*(long *)(lVar8 + 0xd0) +
                                     (lVar20 - *(int *)(lVar8 + 0x20)) * 0x10);
                  }
                  sVar15 = (short)piVar22[2];
                  if (0 < sVar15) {
                    iVar26 = *piVar22;
                    lVar11 = (long)iVar26;
                    do {
                      if (lVar11 < *(int *)(lVar8 + 0x30)) {
                        if (*(int *)(lVar8 + 0x78) == 0) {
                          iVar27 = (int)lVar11;
                        }
                        else {
                          iVar27 = *(int *)(*(long *)(lVar8 + 0x70) + lVar11 * 4);
                        }
                        if (iVar27 == -1) {
                          lVar8 = *(long *)(lVar8 + 0x28) + lVar11 * 0x14;
                        }
                        else {
                          lVar8 = *(long *)(lVar8 + 0xc0) + (long)iVar27 * 0x14;
                        }
                      }
                      else {
                        lVar8 = *(long *)(lVar8 + 0xe0) + (lVar11 - *(int *)(lVar8 + 0x30)) * 0x14;
                      }
                      if (((*(byte *)(lVar8 + 0x10) >> 6 & 1) != 0) && (*(int *)(lVar8 + 8) != -1))
                      {
                        uVar18 = *(uint *)(lVar8 + 0xc);
                        uVar18 = *(uint *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x38) +
                                                                        ((ulong)(uVar18 >> 0xe) &
                                                                        0x3ff00)) + 0x20) + 0x168) +
                                          ((ulong)uVar18 & 0x3fffff) * 4) | uVar18 & 0xffc00000;
                        if (1 < (int)local_90) {
                          uVar16 = (uVar18 * -0x61c8864f & 0xff00ff00) >> 8 |
                                   (uVar18 * -0x61c8864f & 0xff00ff) << 8;
                          uVar16 = uVar16 >> 0x10 | uVar16 << 0x10;
                          while( true ) {
                            uVar16 = uVar16 & (int)local_90 - 1U;
                            uVar5 = *(uint *)(local_98 + (long)(int)uVar16 * 4);
                            if (uVar5 == 0xffffffff) break;
                            if (uVar5 == uVar18) {
                              if ((int)uVar16 < (int)local_90) goto LAB_030f4908;
                              break;
                            }
                            uVar16 = uVar16 + 1;
                          }
                        }
                        if ((int)local_a8 <= local_a0 * 2) {
                          FUN_030f6cfc(&local_b0,(int)local_a8 << 1);
                        }
                        uVar16 = (uVar18 * -0x61c8864f & 0xff00ff00) >> 8 |
                                 (uVar18 * -0x61c8864f & 0xff00ff) << 8;
                        uVar16 = (int)local_a8 - 1U & (uVar16 >> 0x10 | uVar16 << 0x10);
                        puVar14 = (uint *)(local_b0 + (long)(int)uVar16 * 4);
                        if (*puVar14 == 0xffffffff) {
                          iVar26 = 1;
                        }
                        else if (*puVar14 == uVar18) {
                          iVar26 = 0;
                        }
                        else {
                          do {
                            uVar16 = uVar16 + 1 & (int)local_a8 - 1U;
                            uVar5 = *(uint *)(local_b0 + (long)(int)uVar16 * 4);
                            if (uVar5 == 0xffffffff) {
                              iVar26 = 1;
                              goto LAB_030f48e8;
                            }
                          } while (uVar5 != uVar18);
                          iVar26 = 0;
LAB_030f48e8:
                          puVar14 = (uint *)(local_b0 + (long)(int)uVar16 * 4);
                        }
                        local_a0 = local_a0 + iVar26;
                        *puVar14 = uVar18;
                        sVar15 = (short)piVar22[2];
                        iVar26 = *piVar22;
                      }
LAB_030f4908:
                      lVar11 = lVar11 + 1;
                      if (iVar26 + sVar15 <= lVar11) break;
                      lVar8 = *(long *)(lVar21 + 0x20);
                    } while( true );
                  }
                  lVar20 = lVar20 + 1;
                  if (lVar20 == iVar25) break;
                  lVar8 = *(long *)(lVar21 + 0x20);
                } while( true );
              }
            }
            uVar9 = local_a8 & 0xffffffff;
            if (0 < (int)local_a8) {
              uVar12 = 0;
              do {
                lVar21 = local_b0;
                if (*(int *)(local_b0 + uVar12 * 4) != -1) goto LAB_030f4a54;
                uVar12 = uVar12 + 1;
              } while (uVar9 != uVar12);
            }
          }
          goto LAB_030f4a5c;
        }
        if ((int)local_90 <= local_88 * 2) {
          FUN_030f6cfc(&local_98,(int)local_90 << 1);
          uVar18 = (int)local_90 - 1;
        }
        uVar16 = (uVar6 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar6 * -0x61c8864f & 0xff00ff) << 8;
        uVar16 = uVar18 & (uVar16 >> 0x10 | uVar16 << 0x10);
        puVar14 = (uint *)(local_98 + (long)(int)uVar16 * 4);
        if (*puVar14 == 0xffffffff) goto LAB_030f4ae0;
        if (*puVar14 != uVar6) {
          do {
            uVar16 = uVar16 + 1 & uVar18;
            uVar5 = *(uint *)(local_98 + (long)(int)uVar16 * 4);
            if (uVar5 == 0xffffffff) goto LAB_030f4ae8;
          } while (uVar5 != uVar6);
          goto LAB_030f4ad8;
        }
        goto LAB_030f4ab4;
      }
LAB_030f4b0c:
      param_3 = param_3 + 1;
    } while (param_3 != param_4);
  }
  uVar9 = local_a8;
  uVar12 = (ulong)local_a8._4_4_;
  local_a8 = (ulong)local_a8._4_4_ << 0x20;
  if ((-1 < (long)uVar9) && (local_b0 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_b0,uVar12 << 2);
  }
  uVar9 = local_90;
  uVar12 = (ulong)local_90._4_4_;
  local_90 = (ulong)local_90._4_4_ << 0x20;
  if ((-1 < (long)uVar9) && (local_98 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_98,uVar12 << 2);
  }
  uVar6 = local_78._4_4_;
  uVar9 = (ulong)local_78._4_4_;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < (int)uVar6) && (local_80 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_80,uVar9 << 2);
  }
  if (plVar23 != (long *)0x0) {
    lVar21 = *plVar23;
    if (((*(byte *)(lVar21 + 0x38) & 1) != 0) && (plVar23[6] != 0)) {
      puVar4 = (undefined8 *)plVar23[2];
      uVar9 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar23[3]) && (plVar23[2] = uVar9, puVar4 != (undefined8 *)0x0)) {
        *puVar4 = &DAT_03c4e575;
        puVar4[1] = *(undefined8 *)(plVar23[6] + 8);
      }
    }
    puVar4 = (undefined8 *)plVar23[2];
    uVar9 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= (ulong)plVar23[3]) && (plVar23[2] = uVar9, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = &DAT_03c2d363;
      uVar7 = nn::os::GetSystemTick();
      puVar4[1] = uVar7;
    }
    if (*(code **)(lVar21 + 0x20) != (code *)0x0) {
      (**(code **)(lVar21 + 0x20))(*(undefined8 *)(lVar21 + 0x28));
    }
  }
  return;
LAB_030f4a54:
  iVar25 = (int)uVar12;
  if (iVar25 < (int)uVar9) {
    uVar13 = (ulong)iVar25;
    uVar18 = *(uint *)(lVar21 + (long)iVar25 * 4);
    lVar8 = *(long *)(*(long *)(param_1 + 0x38) + ((ulong)(uVar18 >> 0xe) & 0x3ff00));
    if (lVar8 != 0) {
      local_128[0] = uVar18 & 0x3fffff;
      local_120 = 0;
      FUN_0309959c(lVar8,local_128,&local_120,&local_110);
      iVar26 = -(uint)(local_e0._0_4_ <= (float)uStack_100);
      iVar27 = -(uint)(local_e0._4_4_ <= (float)((ulong)uStack_100 >> 0x20));
      iVar29 = -(uint)(local_e0._8_4_ <= (float)uStack_f8);
      iVar30 = -(uint)(local_110 <= local_e0._16_4_);
      iVar31 = -(uint)(fStack_10c <= local_e0._20_4_);
      iVar32 = -(uint)((float)uStack_108 <= local_e0._24_4_);
      if (CONCAT13((byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
                   (byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar26 >> 0x18) &
                   (byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar29 >> 0x18),
                   CONCAT12((byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                            (byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar26 >> 0x10) &
                            (byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar29 >> 0x10),
                            CONCAT11((byte)((uint)iVar31 >> 8) & (byte)((uint)iVar27 >> 8) &
                                     (byte)((uint)iVar30 >> 8) & (byte)((uint)iVar26 >> 8) &
                                     (byte)((uint)iVar32 >> 8) & (byte)((uint)iVar29 >> 8),
                                     (byte)iVar31 & (byte)iVar27 & (byte)iVar30 & (byte)iVar26 &
                                     (byte)iVar32 & (byte)iVar29))) != 0) {
        lVar21 = (long)(int)(uint)local_78;
        if ((int)(local_78._4_4_ & 0x7fffffff) <= (int)(uint)local_78) {
          FUN_0305c42c(&local_80,PTR_PTR_047d1a50 + 0x20,lVar21 + 1);
        }
        *(uint *)(local_80 + (long)(int)(uint)local_78 * 4) = uVar18;
        local_78._0_4_ = (uint)(lVar21 + 1);
      }
      uVar9 = local_a8 & 0xffffffff;
      lVar21 = local_b0;
    }
    iVar27 = (int)uVar9 + -1;
    iVar26 = iVar27;
    if (iVar27 <= iVar25) {
      iVar26 = iVar25;
    }
    uVar12 = (ulong)(iVar26 + 1);
    uVar3 = uVar13;
    if ((long)uVar13 <= (long)iVar27) {
      uVar3 = (long)iVar27;
    }
    do {
      if (uVar3 == uVar13) goto LAB_030f4a54;
      lVar8 = uVar13 * 4;
      uVar13 = uVar13 + 1;
    } while (*(int *)(lVar21 + lVar8 + 4) == -1);
    uVar12 = uVar13 & 0xffffffff;
    goto LAB_030f4a54;
  }
LAB_030f4a5c:
  if ((int)local_90 <= local_88 * 2) {
    FUN_030f6cfc(&local_98,(int)local_90 << 1);
  }
  uVar18 = (uVar6 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar6 * -0x61c8864f & 0xff00ff) << 8;
  uVar16 = (int)local_90 - 1U & (uVar18 >> 0x10 | uVar18 << 0x10);
  puVar14 = (uint *)(local_98 + (long)(int)uVar16 * 4);
  if (*puVar14 == 0xffffffff) {
LAB_030f4ae0:
    iVar25 = 1;
    goto LAB_030f4af4;
  }
  if (*puVar14 == uVar6) {
LAB_030f4ab4:
    iVar25 = 0;
    goto LAB_030f4af4;
  }
  do {
    uVar16 = uVar16 + 1 & (int)local_90 - 1U;
    uVar18 = *(uint *)(local_98 + (long)(int)uVar16 * 4);
    if (uVar18 == 0xffffffff) goto LAB_030f4ae8;
  } while (uVar18 != uVar6);
LAB_030f4ad8:
  iVar25 = 0;
LAB_030f4aec:
  puVar14 = (uint *)(local_98 + (long)(int)uVar16 * 4);
LAB_030f4af4:
  local_88 = local_88 + iVar25;
  *puVar14 = uVar6;
LAB_030f4b04:
  uVar9 = (ulong)(uint)local_78;
  if ((uint)local_78 == 0) goto LAB_030f4b0c;
  goto LAB_030f42bc;
LAB_030f4ae8:
  iVar25 = 1;
  goto LAB_030f4aec;
}


