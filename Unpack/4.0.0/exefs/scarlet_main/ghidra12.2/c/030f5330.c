/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030f5330; name: FUN_030f5330
 */


void FUN_030f5330(long param_1,int *param_2,uint *param_3,uint *param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  short sVar15;
  uint uVar16;
  uint uVar17;
  float *pfVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  uint *puVar23;
  uint uVar24;
  float fVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  float fVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  uint local_158 [2];
  undefined8 local_150;
  uint local_148 [2];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  uint local_118 [2];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  int local_a0;
  long local_98;
  undefined8 local_90;
  int local_88;
  long local_80;
  undefined8 local_78;
  long *local_70;
  
  lVar21 = tpidr_el0;
  lVar10 = *(long *)(lVar21 + 0x1000b8);
  if (lVar10 == 0) {
    lVar10 = FUN_00e5d3b4();
    *(long *)(lVar21 + 0x1000b8) = lVar10;
  }
  plVar20 = *(long **)(lVar10 + 0x3e0);
  if (plVar20 != (long *)0x0) {
    lVar21 = *plVar20;
    if (*(code **)(lVar21 + 0x18) != (code *)0x0) {
      (**(code **)(lVar21 + 0x18))
                ("threadSafeResetClearanceFloodFill",0x21,*(undefined8 *)(lVar21 + 0x28));
    }
    puVar5 = (undefined8 *)plVar20[2];
    uVar11 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
    if ((uVar11 <= (ulong)plVar20[3]) && (plVar20[2] = uVar11, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = "TtthreadSafeResetClearanceFloodFill";
      uVar8 = nn::os::GetSystemTick();
      puVar5[1] = uVar8;
    }
    if (((*(byte *)(lVar21 + 0x38) & 1) != 0) && (plVar20[6] != 0)) {
      puVar5 = (undefined8 *)plVar20[2];
      uVar11 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
      if ((uVar11 <= (ulong)plVar20[3]) && (plVar20[2] = uVar11, puVar5 != (undefined8 *)0x0)) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(plVar20[6] + 8);
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
  local_70 = plVar20;
  FUN_030bb7b8(&local_80,PTR_PTR_047d1a50 + 0x20,0x20);
  if ((uint)local_78 != 0x20) {
    local_78._0_4_ = 0x20;
  }
  FUN_030f6cfc(&local_98,0x40);
  FUN_030f6cfc(&local_b0,0x40);
  lVar22 = *(long *)(*(long *)(param_1 + 0x38) + (long)*param_2 * 0x100);
  local_c0 = 0;
  local_b8 = -0x8000000000000000;
  FUN_0308fff8(lVar22,&local_c0);
  local_c8 = 0;
  local_e0 = 0;
  local_d8 = -0x8000000000000000;
  fVar25 = 0.0;
  lVar21 = 8;
  local_d0 = &DAT_03d7702c;
  plVar20 = (long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x18) +
                    (long)*(int *)(*(long *)(lVar22 + 0x20) + 0x180) * 0x18);
  uVar24 = *(uint *)(plVar20 + 1);
  lVar10 = 0;
  do {
    lVar19 = lVar10;
    if ((long)(int)((uVar24 & ((int)uVar24 >> 0x1f ^ 0xffffffffU)) - 1) + 1 == lVar19)
    goto LAB_030f5560;
    lVar12 = *plVar20;
    pfVar18 = (float *)(lVar12 + lVar21);
    lVar21 = lVar21 + 0x18;
    lVar10 = lVar19 + 1;
  } while (*pfVar18 < 0.0);
  if ((int)(lVar19 + 1) != 0) {
    fVar25 = 0.0;
    do {
      iVar7 = (int)lVar19;
      lVar19 = (long)iVar7;
      lVar21 = lVar19 * 2 + (long)iVar7;
      pfVar18 = (float *)(lVar12 + 0x20 + lVar21 * 8);
      fVar29 = *(float *)(lVar12 + lVar21 * 8 + 8);
      iVar7 = iVar7 + 1;
      if (fVar25 <= fVar29) {
        fVar25 = fVar29;
      }
      do {
        lVar19 = lVar19 + 1;
        if ((int)uVar24 <= lVar19) goto LAB_030f5560;
        fVar29 = *pfVar18;
        iVar7 = iVar7 + 1;
        pfVar18 = pfVar18 + 6;
      } while (fVar29 < 0.0);
    } while (iVar7 != 0);
  }
LAB_030f5560:
  local_e8 = CONCAT44(fVar25,fVar25);
  if (param_3 != param_4) {
    puVar2 = PTR_PTR_047d1a50 + 0x20;
    do {
      uVar24 = *param_3;
      local_78 = (ulong)local_78._4_4_ << 0x20;
      if (0 < (int)local_90) {
        uVar11 = local_90 & 7;
        if ((local_90 & 0xffffffff) - 1 < 7) {
          uVar13 = 0;
        }
        else {
          uVar13 = 0;
          do {
            *(undefined4 *)(local_98 + uVar13 * 4) = 0xffffffff;
            *(undefined4 *)(local_98 + uVar13 * 4 + 4) = 0xffffffff;
            *(undefined4 *)(local_98 + uVar13 * 4 + 8) = 0xffffffff;
            *(undefined4 *)(local_98 + uVar13 * 4 + 0xc) = 0xffffffff;
            *(undefined4 *)(local_98 + uVar13 * 4 + 0x10) = 0xffffffff;
            *(undefined4 *)(local_98 + uVar13 * 4 + 0x14) = 0xffffffff;
            *(undefined4 *)(local_98 + uVar13 * 4 + 0x18) = 0xffffffff;
            lVar21 = uVar13 * 4;
            uVar13 = uVar13 + 8;
            *(undefined4 *)(local_98 + lVar21 + 0x1c) = 0xffffffff;
          } while ((local_90 & 0xfffffff8) != uVar13);
        }
        if ((local_90 & 7) != 0) {
          lVar21 = uVar13 << 2;
          do {
            *(undefined4 *)(local_98 + lVar21) = 0xffffffff;
            uVar11 = uVar11 - 1;
            lVar21 = lVar21 + 4;
          } while (uVar11 != 0);
        }
      }
      local_88 = 0;
      local_118[0] = uVar24;
      FUN_0309959c(lVar22,local_118,&local_e8,&local_110);
      iVar7 = *param_2;
      uVar11 = (long)(int)(uint)local_78 + 1;
      if ((int)(local_78._4_4_ & 0x7fffffff) <= (int)(uint)local_78) {
        FUN_0305c42c(&local_80,PTR_PTR_047d1a50 + 0x20,uVar11);
      }
      *(uint *)(local_80 + (long)(int)(uint)local_78 * 4) = uVar24 | iVar7 << 0x16;
      local_78._0_4_ = (uint)uVar11;
      uVar24 = (uint)local_78;
      while (uVar24 != 0) {
        uVar11 = (long)(int)uVar11 - 1;
        uVar24 = *(uint *)(local_80 + uVar11 * 4);
        local_78._0_4_ = (uint)uVar11;
        if (1 < (int)local_90) {
          uVar16 = (uVar24 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar24 * -0x61c8864f & 0xff00ff) << 8
          ;
          uVar16 = uVar16 >> 0x10 | uVar16 << 0x10;
          while( true ) {
            uVar16 = (int)local_90 - 1U & uVar16;
            uVar17 = *(uint *)(local_98 + (long)(int)uVar16 * 4);
            if (uVar17 == 0xffffffff) break;
            if (uVar17 == uVar24) {
              if ((int)uVar16 < (int)local_90) goto LAB_030f5f94;
              break;
            }
            uVar16 = uVar16 + 1;
          }
        }
        uVar16 = uVar24 >> 0x16;
        lVar21 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)uVar16 * 0x100);
        if (lVar21 == lVar22) {
          plVar20 = &local_c0;
        }
        else {
          uVar11 = (ulong)local_150 >> 0x20;
          local_150 = CONCAT44((int)uVar11,uVar16);
          iVar7 = FUN_030f6960(&local_e0,&local_150);
          if ((int)local_d8 == iVar7) {
            local_140 = 0;
            uStack_138 = 0x8000000000000000;
            FUN_0308fff8(lVar21,&local_140);
            lVar10 = (long)(int)local_d8;
            if ((int)(local_d8._4_4_ & 0x7fffffff) <= (int)local_d8) {
              FUN_030f6a5c(&local_e0,lVar10 + 1);
            }
            puVar23 = (uint *)(local_e0 + (long)(int)local_d8 * 0x18);
            *puVar23 = uVar16;
            puVar23[2] = 0;
            puVar23[3] = 0;
            puVar23[4] = 0;
            puVar23[5] = 0x80000000;
            FUN_030f6c2c(&local_140);
            *(undefined8 *)(puVar23 + 2) = local_140;
            puVar23[4] = (uint)uStack_138;
            puVar23[5] = uStack_138._4_4_;
            local_d8 = CONCAT44(local_d8._4_4_,(int)(lVar10 + 1));
          }
          plVar20 = (long *)(local_e0 + (long)iVar7 * 0x18 + 8);
        }
        uVar13 = (ulong)uVar24 & 0x3fffff;
        lVar10 = *(long *)(*(long *)(lVar21 + 0x20) + 0x168);
        uVar16 = *(uint *)(lVar10 + uVar13 * 4);
        uVar11 = (ulong)uVar16;
        iVar7 = (int)uVar13;
        if (-1 < (int)uVar16) {
          uVar17 = *(uint *)(*(long *)(lVar21 + 0x20) + 0x170);
          lVar19 = (long)(int)uVar17;
          if ((int)uVar17 <= (int)(uVar16 + 1)) {
            uVar17 = uVar16 + 1;
          }
          uVar14 = uVar11;
          do {
            uVar3 = uVar14 + 1;
            if (lVar19 <= (long)uVar3) goto LAB_030f5840;
            lVar12 = uVar14 * 4;
            uVar14 = uVar3;
          } while (*(int *)(lVar10 + 4 + lVar12) == iVar7);
          uVar17 = (uint)uVar3;
LAB_030f5840:
          if ((int)uVar16 < (int)uVar17) {
            do {
              uVar16 = *(uint *)(lVar21 + 0x40);
              if (0 < (int)uVar16) {
                lVar19 = 0;
                lVar10 = 0;
                do {
                  plVar4 = (long *)(*(long *)(lVar21 + 0x38) + lVar10);
                  lVar12 = *plVar4;
                  if (lVar12 != 0) {
                    if ((char)plVar4[2] != '\x01') {
                      lVar12 = FUN_03065a74(plVar4);
                    }
                    local_140 = CONCAT44(local_140._4_4_,(int)uVar11);
                    FUN_030777a0(lVar12,*plVar20 + lVar19,lVar21,&local_140);
                  }
                  lVar10 = lVar10 + 0x18;
                  lVar19 = lVar19 + 8;
                } while ((ulong)uVar16 * 0x18 != lVar10);
              }
              uVar16 = (int)uVar11 + 1;
              uVar11 = (ulong)uVar16;
            } while (uVar16 != uVar17);
          }
        }
        uVar16 = *(uint *)(lVar21 + 0x40);
        if (0 < (int)uVar16) {
          lVar19 = 0;
          lVar10 = 0;
          do {
            plVar4 = (long *)(*(long *)(lVar21 + 0x38) + lVar10);
            lVar12 = *plVar4;
            if (lVar12 != 0) {
              if ((char)plVar4[2] != '\x01') {
                lVar12 = FUN_03065a74(plVar4);
              }
              local_140 = CONCAT44(local_140._4_4_,iVar7);
              FUN_030777a0(lVar12,*plVar20 + lVar19,lVar21,&local_140);
            }
            lVar10 = lVar10 + 0x18;
            lVar19 = lVar19 + 8;
          } while ((ulong)uVar16 * 0x18 != lVar10);
        }
        lVar10 = *(long *)(lVar21 + 0x20);
        piVar9 = (int *)(*(long *)(lVar10 + 0x18) + uVar13 * 0x10);
        iVar26 = *piVar9;
        sVar15 = (short)piVar9[2];
        if (0 < sVar15) {
          lVar19 = (long)iVar26;
          do {
            lVar12 = *(long *)(lVar10 + 0x28) + lVar19 * 0x14;
            uVar17 = *(uint *)(lVar12 + 0xc);
            uVar16 = 0xffffffff;
            if (uVar17 != 0xffffffff) {
              uVar16 = uVar17 & 0x3fffff | *(int *)(lVar10 + 0x17c) << 0x16;
            }
            if ((*(byte *)(lVar12 + 0x10) & 0x40) == 0) {
              uVar17 = uVar16;
            }
            if (*(int *)(*(long *)(lVar10 + 0x28) + lVar19 * 0x14 + 8) != -1) {
              if (1 < (int)local_90) {
                uVar16 = (uVar17 * -0x61c8864f & 0xff00ff00) >> 8 |
                         (uVar17 * -0x61c8864f & 0xff00ff) << 8;
                uVar16 = uVar16 >> 0x10 | uVar16 << 0x10;
                while( true ) {
                  uVar16 = (int)local_90 - 1U & uVar16;
                  uVar6 = *(uint *)(local_98 + (long)(int)uVar16 * 4);
                  if (uVar6 == 0xffffffff) break;
                  if (uVar6 == uVar17) {
                    if ((int)uVar16 < (int)local_90) goto LAB_030f5a70;
                    break;
                  }
                  uVar16 = uVar16 + 1;
                }
              }
              local_148[0] = uVar17 & 0x3fffff;
              local_150 = 0;
              FUN_0309959c(lVar21,local_148,&local_150,&local_140);
              iVar26 = -(uint)((float)local_110 <= (float)uStack_130);
              iVar27 = -(uint)((float)((ulong)local_110 >> 0x20) <=
                              (float)((ulong)uStack_130 >> 0x20));
              iVar28 = -(uint)((float)uStack_108 <= (float)uStack_128);
              iVar30 = -(uint)((float)local_140 <= (float)uStack_100);
              iVar31 = -(uint)((float)((ulong)local_140 >> 0x20) <=
                              (float)((ulong)uStack_100 >> 0x20));
              iVar32 = -(uint)((float)uStack_138 <= (float)uStack_f8);
              if (CONCAT13((byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
                           (byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar26 >> 0x18) &
                           (byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar28 >> 0x18),
                           CONCAT12((byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                                    (byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar26 >> 0x10) &
                                    (byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar28 >> 0x10),
                                    CONCAT11((byte)((uint)iVar31 >> 8) & (byte)((uint)iVar27 >> 8) &
                                             (byte)((uint)iVar30 >> 8) & (byte)((uint)iVar26 >> 8) &
                                             (byte)((uint)iVar32 >> 8) & (byte)((uint)iVar28 >> 8),
                                             (byte)iVar31 & (byte)iVar27 &
                                             (byte)iVar30 & (byte)iVar26 &
                                             (byte)iVar32 & (byte)iVar28))) != 0) {
                lVar10 = (long)(int)(uint)local_78;
                if ((int)(local_78._4_4_ & 0x7fffffff) <= (int)(uint)local_78) {
                  FUN_0305c42c(&local_80,puVar2,lVar10 + 1);
                }
                *(uint *)(local_80 + (long)(int)(uint)local_78 * 4) = uVar17;
                local_78._0_4_ = (uint)(lVar10 + 1);
              }
              sVar15 = (short)piVar9[2];
              iVar26 = *piVar9;
              lVar10 = *(long *)(lVar21 + 0x20);
            }
LAB_030f5a70:
            lVar19 = lVar19 + 1;
          } while (lVar19 < iVar26 + sVar15);
        }
        if ((*(int *)(lVar10 + 0x108) != 0) &&
           (((*(byte *)(*(long *)(lVar10 + 0x100) + uVar13) ^ 0xff) & 5) == 0)) {
          if (0 < (int)local_a8) {
            uVar11 = local_a8 & 7;
            if ((local_a8 & 0xffffffff) - 1 < 7) {
              uVar14 = 0;
            }
            else {
              uVar14 = 0;
              do {
                *(undefined4 *)(local_b0 + uVar14 * 4) = 0xffffffff;
                *(undefined4 *)(local_b0 + uVar14 * 4 + 4) = 0xffffffff;
                *(undefined4 *)(local_b0 + uVar14 * 4 + 8) = 0xffffffff;
                *(undefined4 *)(local_b0 + uVar14 * 4 + 0xc) = 0xffffffff;
                *(undefined4 *)(local_b0 + uVar14 * 4 + 0x10) = 0xffffffff;
                *(undefined4 *)(local_b0 + uVar14 * 4 + 0x14) = 0xffffffff;
                *(undefined4 *)(local_b0 + uVar14 * 4 + 0x18) = 0xffffffff;
                lVar10 = uVar14 * 4;
                uVar14 = uVar14 + 8;
                *(undefined4 *)(local_b0 + lVar10 + 0x1c) = 0xffffffff;
              } while ((local_a8 & 0xfffffff8) != uVar14);
            }
            if ((local_a8 & 7) != 0) {
              lVar10 = uVar14 << 2;
              do {
                *(undefined4 *)(local_b0 + lVar10) = 0xffffffff;
                uVar11 = uVar11 - 1;
                lVar10 = lVar10 + 4;
              } while (uVar11 != 0);
            }
            lVar10 = *(long *)(lVar21 + 0x20);
          }
          local_a0 = 0;
          uVar16 = *(uint *)(*(long *)(lVar10 + 0x168) + uVar13 * 4);
          if (-1 < (int)uVar16) {
            iVar26 = *(int *)(lVar10 + 0x170);
            lVar12 = (long)iVar26;
            lVar19 = (long)(int)uVar16;
            if (iVar26 <= (int)(uVar16 + 1)) {
              iVar26 = uVar16 + 1;
            }
            uVar11 = (ulong)uVar16;
            do {
              uVar13 = uVar11 + 1;
              if (lVar12 <= (long)uVar13) goto LAB_030f5bac;
              lVar1 = uVar11 * 4;
              uVar11 = uVar13;
            } while (*(int *)(*(long *)(lVar10 + 0x168) + 4 + lVar1) == iVar7);
            iVar26 = (int)uVar13;
LAB_030f5bac:
            if ((int)uVar16 < iVar26) {
              do {
                if (lVar19 < *(int *)(lVar10 + 0x20)) {
                  if (*(int *)(lVar10 + 0x98) == 0) {
                    iVar7 = (int)lVar19;
                  }
                  else {
                    iVar7 = *(int *)(*(long *)(lVar10 + 0x90) + lVar19 * 4);
                  }
                  if (iVar7 == -1) {
                    piVar9 = (int *)(*(long *)(lVar10 + 0x18) + lVar19 * 0x10);
                  }
                  else {
                    piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + (long)iVar7 * 0x10);
                  }
                }
                else {
                  piVar9 = (int *)(*(long *)(lVar10 + 0xd0) +
                                  (lVar19 - *(int *)(lVar10 + 0x20)) * 0x10);
                }
                sVar15 = (short)piVar9[2];
                if (0 < sVar15) {
                  iVar7 = *piVar9;
                  lVar12 = (long)iVar7;
                  do {
                    if (lVar12 < *(int *)(lVar10 + 0x30)) {
                      if (*(int *)(lVar10 + 0x78) == 0) {
                        iVar27 = (int)lVar12;
                      }
                      else {
                        iVar27 = *(int *)(*(long *)(lVar10 + 0x70) + lVar12 * 4);
                      }
                      if (iVar27 == -1) {
                        lVar10 = *(long *)(lVar10 + 0x28) + lVar12 * 0x14;
                      }
                      else {
                        lVar10 = *(long *)(lVar10 + 0xc0) + (long)iVar27 * 0x14;
                      }
                    }
                    else {
                      lVar10 = *(long *)(lVar10 + 0xe0) + (lVar12 - *(int *)(lVar10 + 0x30)) * 0x14;
                    }
                    if (((*(byte *)(lVar10 + 0x10) >> 6 & 1) != 0) && (*(int *)(lVar10 + 8) != -1))
                    {
                      uVar16 = *(uint *)(lVar10 + 0xc);
                      uVar16 = *(uint *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x38) +
                                                                      ((ulong)(uVar16 >> 0xe) &
                                                                      0x3ff00)) + 0x20) + 0x168) +
                                        ((ulong)uVar16 & 0x3fffff) * 4) | uVar16 & 0xffc00000;
                      if (1 < (int)local_90) {
                        uVar17 = (uVar16 * -0x61c8864f & 0xff00ff00) >> 8 |
                                 (uVar16 * -0x61c8864f & 0xff00ff) << 8;
                        uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
                        while( true ) {
                          uVar17 = uVar17 & (int)local_90 - 1U;
                          uVar6 = *(uint *)(local_98 + (long)(int)uVar17 * 4);
                          if (uVar6 == 0xffffffff) break;
                          if (uVar6 == uVar16) {
                            if ((int)uVar17 < (int)local_90) goto LAB_030f5d90;
                            break;
                          }
                          uVar17 = uVar17 + 1;
                        }
                      }
                      if ((int)local_a8 <= local_a0 * 2) {
                        FUN_030f6cfc(&local_b0,(int)local_a8 << 1);
                      }
                      uVar17 = (uVar16 * -0x61c8864f & 0xff00ff00) >> 8 |
                               (uVar16 * -0x61c8864f & 0xff00ff) << 8;
                      uVar17 = (int)local_a8 - 1U & (uVar17 >> 0x10 | uVar17 << 0x10);
                      puVar23 = (uint *)(local_b0 + (long)(int)uVar17 * 4);
                      if (*puVar23 == 0xffffffff) {
                        iVar7 = 1;
                      }
                      else if (*puVar23 == uVar16) {
                        iVar7 = 0;
                      }
                      else {
                        do {
                          uVar17 = uVar17 + 1 & (int)local_a8 - 1U;
                          uVar6 = *(uint *)(local_b0 + (long)(int)uVar17 * 4);
                          if (uVar6 == 0xffffffff) {
                            iVar7 = 1;
                            goto LAB_030f5d70;
                          }
                        } while (uVar6 != uVar16);
                        iVar7 = 0;
LAB_030f5d70:
                        puVar23 = (uint *)(local_b0 + (long)(int)uVar17 * 4);
                      }
                      local_a0 = local_a0 + iVar7;
                      *puVar23 = uVar16;
                      sVar15 = (short)piVar9[2];
                      iVar7 = *piVar9;
                    }
LAB_030f5d90:
                    lVar12 = lVar12 + 1;
                    if (iVar7 + sVar15 <= lVar12) break;
                    lVar10 = *(long *)(lVar21 + 0x20);
                  } while( true );
                }
                lVar19 = lVar19 + 1;
                if (lVar19 == iVar26) break;
                lVar10 = *(long *)(lVar21 + 0x20);
              } while( true );
            }
          }
          uVar11 = local_a8 & 0xffffffff;
          if (0 < (int)local_a8) {
            uVar13 = 0;
            do {
              if (*(int *)(local_b0 + uVar13 * 4) != -1) {
                lVar21 = local_b0;
                if ((int)uVar13 < (int)local_a8) {
                  do {
                    iVar7 = (int)uVar13;
                    uVar16 = *(uint *)(lVar21 + (long)iVar7 * 4);
                    uVar14 = (ulong)iVar7;
                    lVar10 = *(long *)(*(long *)(param_1 + 0x38) +
                                      ((ulong)(uVar16 >> 0xe) & 0x3ff00));
                    if (lVar10 != 0) {
                      local_158[0] = uVar16 & 0x3fffff;
                      local_150 = 0;
                      FUN_0309959c(lVar10,local_158,&local_150,&local_140);
                      iVar26 = -(uint)((float)local_110 <= (float)uStack_130);
                      iVar27 = -(uint)((float)((ulong)local_110 >> 0x20) <=
                                      (float)((ulong)uStack_130 >> 0x20));
                      iVar28 = -(uint)((float)uStack_108 <= (float)uStack_128);
                      iVar30 = -(uint)((float)local_140 <= (float)uStack_100);
                      iVar31 = -(uint)((float)((ulong)local_140 >> 0x20) <=
                                      (float)((ulong)uStack_100 >> 0x20));
                      iVar32 = -(uint)((float)uStack_138 <= (float)uStack_f8);
                      if (CONCAT13((byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
                                   (byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar26 >> 0x18) &
                                   (byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar28 >> 0x18),
                                   CONCAT12((byte)((uint)iVar31 >> 0x10) &
                                            (byte)((uint)iVar27 >> 0x10) &
                                            (byte)((uint)iVar30 >> 0x10) &
                                            (byte)((uint)iVar26 >> 0x10) &
                                            (byte)((uint)iVar32 >> 0x10) &
                                            (byte)((uint)iVar28 >> 0x10),
                                            CONCAT11((byte)((uint)iVar31 >> 8) &
                                                     (byte)((uint)iVar27 >> 8) &
                                                     (byte)((uint)iVar30 >> 8) &
                                                     (byte)((uint)iVar26 >> 8) &
                                                     (byte)((uint)iVar32 >> 8) &
                                                     (byte)((uint)iVar28 >> 8),
                                                     (byte)iVar31 & (byte)iVar27 &
                                                     (byte)iVar30 & (byte)iVar26 &
                                                     (byte)iVar32 & (byte)iVar28))) != 0) {
                        lVar21 = (long)(int)(uint)local_78;
                        if ((int)(local_78._4_4_ & 0x7fffffff) <= (int)(uint)local_78) {
                          FUN_0305c42c(&local_80,PTR_PTR_047d1a50 + 0x20,lVar21 + 1);
                        }
                        *(uint *)(local_80 + (long)(int)(uint)local_78 * 4) = uVar16;
                        local_78._0_4_ = (uint)(lVar21 + 1);
                      }
                      uVar11 = local_a8 & 0xffffffff;
                      lVar21 = local_b0;
                    }
                    iVar27 = (int)uVar11 + -1;
                    iVar26 = iVar27;
                    if (iVar27 <= iVar7) {
                      iVar26 = iVar7;
                    }
                    uVar13 = (ulong)(iVar26 + 1);
                    uVar3 = uVar14;
                    if ((long)uVar14 <= (long)iVar27) {
                      uVar3 = (long)iVar27;
                    }
                    do {
                      if (uVar3 == uVar14) goto LAB_030f5ee0;
                      lVar10 = uVar14 * 4;
                      uVar14 = uVar14 + 1;
                    } while (*(int *)(lVar21 + lVar10 + 4) == -1);
                    uVar13 = uVar14 & 0xffffffff;
LAB_030f5ee0:
                  } while ((int)uVar13 < (int)uVar11);
                }
                break;
              }
              uVar13 = uVar13 + 1;
            } while (uVar11 != uVar13);
          }
        }
        if ((int)local_90 <= local_88 * 2) {
          FUN_030f6cfc(&local_98,(int)local_90 << 1);
        }
        uVar16 = (uVar24 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar24 * -0x61c8864f & 0xff00ff) << 8;
        uVar16 = (int)local_90 - 1U & (uVar16 >> 0x10 | uVar16 << 0x10);
        puVar23 = (uint *)(local_98 + (long)(int)uVar16 * 4);
        if (*puVar23 == 0xffffffff) {
          iVar7 = 1;
        }
        else if (*puVar23 == uVar24) {
          iVar7 = 0;
        }
        else {
          do {
            uVar16 = uVar16 + 1 & (int)local_90 - 1U;
            uVar17 = *(uint *)(local_98 + (long)(int)uVar16 * 4);
            if (uVar17 == 0xffffffff) {
              iVar7 = 1;
              goto LAB_030f5f78;
            }
          } while (uVar17 != uVar24);
          iVar7 = 0;
LAB_030f5f78:
          puVar23 = (uint *)(local_98 + (long)(int)uVar16 * 4);
        }
        local_88 = local_88 + iVar7;
        *puVar23 = uVar24;
        uVar11 = (ulong)(uint)local_78;
LAB_030f5f94:
        uVar24 = (uint)uVar11;
      }
      param_3 = param_3 + 1;
    } while (param_3 != param_4);
  }
  FUN_030900f4(lVar22,&local_c0);
  iVar7 = (int)local_d8 + -1;
  if (0 < (int)local_d8) {
    do {
      piVar9 = (int *)(local_e0 + (long)iVar7 * 0x18);
      FUN_030900f4(*(undefined8 *)(*(long *)(param_1 + 0x38) + (long)*piVar9 * 0x100),piVar9 + 2);
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  if ((local_d0 != (undefined *)0x0) && (*(int *)(local_d0 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],local_d0,0);
    local_d0 = &DAT_03d7702c;
    local_c8 = 0;
  }
  lVar21 = local_e0;
  if ((int)local_d8 != 0) {
    lVar10 = (long)(int)local_d8 * 0x18;
    do {
      lVar22 = lVar21 + lVar10;
      *(undefined4 *)(lVar22 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar22 + -4)) && (*(long *)(lVar22 + -0x10) != 0)) {
        (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                  (PTR_PTR_047d1a50 + 0x20,*(long *)(lVar22 + -0x10),
                   (ulong)*(uint *)(lVar22 + -4) << 3);
      }
      lVar10 = lVar10 + -0x18;
      *(undefined8 *)(lVar22 + -0x10) = 0;
      *(undefined4 *)(lVar22 + -4) = 0x80000000;
    } while (lVar10 != 0);
  }
  lVar21 = local_d8;
  uVar11 = (ulong)local_d8._4_4_;
  local_d8 = (ulong)local_d8._4_4_ << 0x20;
  if ((-1 < lVar21) && (local_e0 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_e0,uVar11 * 0x18);
  }
  lVar21 = local_b8;
  uVar11 = (ulong)local_b8._4_4_;
  local_b8 = (ulong)local_b8._4_4_ << 0x20;
  if ((-1 < lVar21) && (local_c0 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_c0,uVar11 << 3);
  }
  uVar11 = local_a8;
  uVar13 = (ulong)local_a8._4_4_;
  local_a8 = (ulong)local_a8._4_4_ << 0x20;
  if ((-1 < (long)uVar11) && (local_b0 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_b0,uVar13 << 2);
  }
  uVar11 = local_90;
  uVar13 = (ulong)local_90._4_4_;
  local_90 = (ulong)local_90._4_4_ << 0x20;
  if ((-1 < (long)uVar11) && (local_98 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_98,uVar13 << 2);
  }
  uVar24 = local_78._4_4_;
  uVar11 = (ulong)local_78._4_4_;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < (int)uVar24) && (local_80 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_80,uVar11 << 2);
  }
  if (local_70 != (long *)0x0) {
    lVar21 = *local_70;
    if (((*(byte *)(lVar21 + 0x38) & 1) != 0) && (local_70[6] != 0)) {
      puVar5 = (undefined8 *)local_70[2];
      uVar11 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
      if ((uVar11 <= (ulong)local_70[3]) && (local_70[2] = uVar11, puVar5 != (undefined8 *)0x0)) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(local_70[6] + 8);
      }
    }
    puVar5 = (undefined8 *)local_70[2];
    uVar11 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
    if ((uVar11 <= (ulong)local_70[3]) && (local_70[2] = uVar11, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = &DAT_03c2d363;
      uVar8 = nn::os::GetSystemTick();
      puVar5[1] = uVar8;
    }
    if (*(code **)(lVar21 + 0x20) != (code *)0x0) {
      (**(code **)(lVar21 + 0x20))(*(undefined8 *)(lVar21 + 0x28));
    }
  }
  return;
}


