/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f2de30; name: FUN_02f2de30
 */


void FUN_02f2de30(undefined8 param_1,long param_2,long *param_3,undefined8 param_4,
                 undefined8 param_5,int param_6)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  code *pcVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined8 *puVar19;
  long *plVar20;
  long lVar21;
  undefined8 *puVar22;
  long lVar23;
  int iVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  long local_158;
  int local_150 [2];
  undefined8 local_148;
  uint local_140;
  long *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  long local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_78;
  int iStack_74;
  
  lVar21 = *(long *)(param_2 + 8);
  lVar25 = tpidr_el0;
  lVar13 = *(long *)(lVar25 + 0x1000b8);
  if (lVar13 == 0) {
    lVar13 = FUN_00e5d3b4();
    *(long *)(lVar25 + 0x1000b8) = lVar13;
  }
  plVar20 = *(long **)(lVar13 + 0x3e0);
  if (plVar20 != (long *)0x0) {
    lVar25 = *plVar20;
    if (*(code **)(lVar25 + 0x18) != (code *)0x0) {
      (**(code **)(lVar25 + 0x18))("Solve",5,*(undefined8 *)(lVar25 + 0x28));
      if (*(code **)(lVar25 + 0x18) != (code *)0x0) {
        (**(code **)(lVar25 + 0x18))("init",4,*(undefined8 *)(lVar25 + 0x28));
      }
    }
    puVar19 = (undefined8 *)plVar20[2];
    uVar14 = (long)puVar19 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar14 <= (ulong)plVar20[3]) && (plVar20[2] = uVar14, puVar19 != (undefined8 *)0x0)) {
      *puVar19 = "LtSolve";
      puVar19[2] = "Stinit";
      uVar8 = nn::os::GetSystemTick();
      puVar19[1] = uVar8;
    }
    if (((*(byte *)(lVar25 + 0x38) & 1) != 0) && (plVar20[6] != 0)) {
      puVar19 = (undefined8 *)plVar20[2];
      uVar14 = (long)puVar19 + 0x17U & 0xfffffffffffffff8;
      if ((uVar14 <= (ulong)plVar20[3]) && (plVar20[2] = uVar14, puVar19 != (undefined8 *)0x0)) {
        *puVar19 = &DAT_03c4e575;
        puVar19[1] = *(undefined8 *)(plVar20[6] + 8);
      }
    }
  }
  local_e8 = *(undefined8 *)(lVar21 + 0x38);
  uStack_e0 = *(undefined8 *)(lVar21 + 0x150);
  uStack_118 = *(undefined8 *)(lVar21 + 0x4b0);
  local_d8 = *(undefined8 *)(param_2 + 0x10);
  local_d0 = *(undefined8 *)(param_2 + 0x18);
  uStack_108 = *(undefined8 *)(lVar21 + 0x4e8);
  local_110 = *(undefined8 *)(lVar21 + 0x4e0);
  uStack_f8 = *(undefined8 *)(lVar21 + 0x4f8);
  uStack_100 = *(undefined8 *)(lVar21 + 0x4f0);
  local_f0 = 0;
  uStack_128 = 0;
  local_98 = 0;
  if (*(long *)(lVar21 + 0x698) != 0) {
    local_98 = *(undefined8 *)(*(long *)(lVar21 + 0x698) + 0x388);
  }
  local_c0 = 0;
  *(undefined8 **)(param_2 + 0x4c0) = &local_130;
  local_78 = 0;
  plVar15 = (long *)*param_3;
  local_130 = param_1;
  local_120 = lVar21 + 0x530;
  uStack_c8 = param_4;
  local_a0 = param_5;
  iStack_74 = param_6;
  if (0xf < (int)*(uint *)plVar15[6]) {
    memset((void *)((plVar15[8] + 0x3fU & 0xffffffffffffffc0) + (long)*(int *)(*plVar15 + 0x1c)),0,
           (ulong)((*(uint *)plVar15[6] >> 4) - 1) * 0x10 + 0x10);
  }
  plVar15 = (long *)param_3[1];
  if (0xf < (int)*(uint *)plVar15[6]) {
    memset((void *)((plVar15[8] + 0x3fU & 0xffffffffffffffc0) + (long)*(int *)(*plVar15 + 0x1c)),0,
           (ulong)((*(uint *)plVar15[6] >> 4) - 1) * 0x10 + 0x10);
  }
  plVar15 = (long *)param_3[2];
  if (0xf < (int)*(uint *)plVar15[6]) {
    memset((void *)((plVar15[8] + 0x3fU & 0xffffffffffffffc0) + (long)*(int *)(*plVar15 + 0x1c)),0,
           (ulong)((*(uint *)plVar15[6] >> 4) - 1) * 0x10 + 0x10);
  }
  iVar10 = *(int *)(lVar21 + 0x5a0);
  if (0 < iVar10) {
    fVar27 = *(float *)(lVar21 + 0x5b4);
    uVar8 = NEON_fmov(0x3f800000,4);
    iVar24 = 0;
    do {
      iVar1 = *(int *)(lVar21 + 0x5a8) + (uint)(fVar27 < 1.8446726e+19);
      if (0 < iVar1) {
        iVar10 = 0;
        uVar28 = NEON_scvtf(CONCAT44(iVar24,iVar24),4);
        do {
          lVar25 = 0;
          do {
            iVar11 = iVar10;
            if (1.8446726e+19 <= fVar27) {
LAB_02f2e114:
              bVar5 = 1.8446726e+19 <= fVar27;
              bVar6 = lVar25 != 2;
              bVar7 = iVar11 == 0;
              fVar26 = (float)*(undefined8 *)(lVar21 + 0x5e0);
              local_148 = CONCAT44((float)((ulong)uVar28 >> 0x20) * fVar26 +
                                   (float)((ulong)uVar8 >> 0x20),
                                   (float)uVar28 * fVar26 + (float)uVar8);
              iVar3 = *(int *)(lVar21 + 0x5a8);
              if (bVar5 || bVar6) {
                iVar3 = *(int *)(lVar21 + 0x5a8) + -1;
              }
              bVar2 = iVar11 == 1;
              if (bVar5 || bVar6) {
                bVar2 = bVar7;
              }
              local_140 = 2;
              if (iVar3 != iVar11 || *(int *)(lVar21 + 0x5a0) + -1 != iVar24) {
                local_140 = 0;
              }
              uVar18 = 8;
              if ((bVar5 || bVar6) || !bVar7) {
                uVar18 = 0;
              }
              uVar12 = 0x10;
              if (!bVar2) {
                uVar12 = 0;
              }
              local_140 = (uint)(iVar11 == 0 && iVar24 == 0) | (uint)bVar7 << 2 | uVar18 | uVar12 |
                          local_140;
              lVar13 = *(long *)param_3[lVar25];
              local_150[0] = iVar24;
              local_138 = plVar20;
              if (*(int *)(lVar13 + 0xc) != 0) {
                local_158 = (((long *)param_3[lVar25])[8] + 0x3fU & 0xffffffffffffffc0) +
                            (long)*(int *)(lVar13 + 0x1c);
                if (iVar24 == 0) {
                  do {
                    if (plVar20 != (long *)0x0) {
                      lVar23 = *plVar20;
                      if (((*(byte *)(lVar23 + 0x38) & 1) == 0) || (plVar20[6] == 0)) {
LAB_02f2e338:
                        puVar22 = (undefined8 *)plVar20[2];
                      }
                      else {
                        puVar19 = (undefined8 *)plVar20[2];
                        puVar22 = (undefined8 *)((long)puVar19 + 0x17U & 0xfffffffffffffff8);
                        if ((undefined8 *)plVar20[3] < puVar22) goto LAB_02f2e338;
                        plVar20[2] = (long)puVar22;
                        if (puVar19 != (undefined8 *)0x0) {
                          *puVar19 = &DAT_03c4e575;
                          puVar19[1] = *(undefined8 *)(plVar20[6] + 8);
                          goto LAB_02f2e338;
                        }
                      }
                      uVar14 = (long)puVar22 + 0x17U & 0xfffffffffffffff8;
                      if ((uVar14 <= (ulong)plVar20[3]) &&
                         (plVar20[2] = uVar14, puVar22 != (undefined8 *)0x0)) {
                        *puVar22 = "StSolveJacobians0";
                        uVar9 = nn::os::GetSystemTick();
                        puVar22[1] = uVar9;
                      }
                      if (*(code **)(lVar23 + 0x20) != (code *)0x0) {
                        (**(code **)(lVar23 + 0x20))(*(undefined8 *)(lVar23 + 0x28));
                      }
                      if (*(code **)(lVar23 + 0x18) != (code *)0x0) {
                        (**(code **)(lVar23 + 0x18))
                                  ("SolveJacobians0",0xf,*(undefined8 *)(lVar23 + 0x28));
                      }
                    }
                    plVar15 = *(long **)(lVar21 + (ulong)*(byte *)(lVar13 + 0x18) * 8 + 0x658);
                    lVar13 = (**(code **)(*plVar15 + 0x20))
                                       (plVar15,param_2,&local_130,local_150,lVar13,&local_158,
                                        &local_78,&local_78);
                  } while (lVar13 != 0);
                }
                else if (iVar24 == 1) {
                  do {
                    if (plVar20 != (long *)0x0) {
                      lVar23 = *plVar20;
                      if (((*(byte *)(lVar23 + 0x38) & 1) == 0) || (plVar20[6] == 0)) {
LAB_02f2e24c:
                        puVar22 = (undefined8 *)plVar20[2];
                      }
                      else {
                        puVar19 = (undefined8 *)plVar20[2];
                        puVar22 = (undefined8 *)((long)puVar19 + 0x17U & 0xfffffffffffffff8);
                        if ((undefined8 *)plVar20[3] < puVar22) goto LAB_02f2e24c;
                        plVar20[2] = (long)puVar22;
                        if (puVar19 != (undefined8 *)0x0) {
                          *puVar19 = &DAT_03c4e575;
                          puVar19[1] = *(undefined8 *)(plVar20[6] + 8);
                          goto LAB_02f2e24c;
                        }
                      }
                      uVar14 = (long)puVar22 + 0x17U & 0xfffffffffffffff8;
                      if ((uVar14 <= (ulong)plVar20[3]) &&
                         (plVar20[2] = uVar14, puVar22 != (undefined8 *)0x0)) {
                        *puVar22 = "StSolveJacobians1";
                        uVar9 = nn::os::GetSystemTick();
                        puVar22[1] = uVar9;
                      }
                      if (*(code **)(lVar23 + 0x20) != (code *)0x0) {
                        (**(code **)(lVar23 + 0x20))(*(undefined8 *)(lVar23 + 0x28));
                      }
                      if (*(code **)(lVar23 + 0x18) != (code *)0x0) {
                        (**(code **)(lVar23 + 0x18))
                                  ("SolveJacobians1",0xf,*(undefined8 *)(lVar23 + 0x28));
                      }
                    }
                    plVar15 = *(long **)(lVar21 + (ulong)*(byte *)(lVar13 + 0x18) * 8 + 0x658);
                    lVar13 = (**(code **)(*plVar15 + 0x20))
                                       (plVar15,param_2,&local_130,local_150,lVar13,&local_158,
                                        &local_78,&local_78);
                  } while (lVar13 != 0);
                }
                else {
                  do {
                    if (iVar24 == 3) {
                      if (plVar20 != (long *)0x0) {
                        lVar23 = *plVar20;
                        if (((*(byte *)(lVar23 + 0x38) & 1) == 0) || (plVar20[6] == 0)) {
LAB_02f2e42c:
                          puVar22 = (undefined8 *)plVar20[2];
                        }
                        else {
                          puVar19 = (undefined8 *)plVar20[2];
                          puVar22 = (undefined8 *)((long)puVar19 + 0x17U & 0xfffffffffffffff8);
                          if ((undefined8 *)plVar20[3] < puVar22) goto LAB_02f2e42c;
                          plVar20[2] = (long)puVar22;
                          if (puVar19 != (undefined8 *)0x0) {
                            *puVar19 = &DAT_03c4e575;
                            puVar19[1] = *(undefined8 *)(plVar20[6] + 8);
                            goto LAB_02f2e42c;
                          }
                        }
                        uVar14 = (long)puVar22 + 0x17U & 0xfffffffffffffff8;
                        if ((uVar14 <= (ulong)plVar20[3]) &&
                           (plVar20[2] = uVar14, puVar22 != (undefined8 *)0x0)) {
                          *puVar22 = "StSolveJacobians3";
                          uVar9 = nn::os::GetSystemTick();
                          puVar22[1] = uVar9;
                        }
                        if (*(code **)(lVar23 + 0x20) != (code *)0x0) {
                          (**(code **)(lVar23 + 0x20))(*(undefined8 *)(lVar23 + 0x28));
                        }
                        pcVar16 = *(code **)(lVar23 + 0x18);
                        if (pcVar16 != (code *)0x0) {
                          uVar9 = *(undefined8 *)(lVar23 + 0x28);
                          pcVar4 = "StSolveJacobians3";
                          goto LAB_02f2e52c;
                        }
                      }
                    }
                    else {
                      if (plVar20 == (long *)0x0) goto LAB_02f2e534;
                      lVar23 = *plVar20;
                      if (((*(byte *)(lVar23 + 0x38) & 1) == 0) || (plVar20[6] == 0)) {
LAB_02f2e4d4:
                        puVar22 = (undefined8 *)plVar20[2];
                      }
                      else {
                        puVar19 = (undefined8 *)plVar20[2];
                        puVar22 = (undefined8 *)((long)puVar19 + 0x17U & 0xfffffffffffffff8);
                        if ((undefined8 *)plVar20[3] < puVar22) goto LAB_02f2e4d4;
                        plVar20[2] = (long)puVar22;
                        if (puVar19 != (undefined8 *)0x0) {
                          *puVar19 = &DAT_03c4e575;
                          puVar19[1] = *(undefined8 *)(plVar20[6] + 8);
                          goto LAB_02f2e4d4;
                        }
                      }
                      uVar14 = (long)puVar22 + 0x17U & 0xfffffffffffffff8;
                      if ((uVar14 <= (ulong)plVar20[3]) &&
                         (plVar20[2] = uVar14, puVar22 != (undefined8 *)0x0)) {
                        *puVar22 = "StSolveJacobians2";
                        uVar9 = nn::os::GetSystemTick();
                        puVar22[1] = uVar9;
                      }
                      if (*(code **)(lVar23 + 0x20) != (code *)0x0) {
                        (**(code **)(lVar23 + 0x20))(*(undefined8 *)(lVar23 + 0x28));
                      }
                      pcVar16 = *(code **)(lVar23 + 0x18);
                      if (pcVar16 == (code *)0x0) goto LAB_02f2e534;
                      uVar9 = *(undefined8 *)(lVar23 + 0x28);
                      pcVar4 = "StSolveJacobians2";
LAB_02f2e52c:
                      (*pcVar16)(pcVar4 + 2,0xf,uVar9);
                    }
LAB_02f2e534:
                    plVar15 = *(long **)(lVar21 + (ulong)*(byte *)(lVar13 + 0x18) * 8 + 0x658);
                    lVar13 = (**(code **)(*plVar15 + 0x20))
                                       (plVar15,param_2,&local_130,local_150,lVar13,&local_158,
                                        &local_78,&local_78);
                  } while (lVar13 != 0);
                }
              }
            }
            else if ((iVar10 != 0) || ((lVar25 != 2) == 0)) {
              iVar11 = iVar10 - (uint)(lVar25 != 2);
              goto LAB_02f2e114;
            }
            lVar25 = lVar25 + 1;
          } while (lVar25 != 3);
          iVar10 = iVar10 + 1;
        } while (iVar10 != iVar1);
        iVar10 = *(int *)(lVar21 + 0x5a0);
      }
      if (iVar24 < iVar10 + -1) {
        if (plVar20 != (long *)0x0) {
          lVar25 = *plVar20;
          if (((*(byte *)(lVar25 + 0x38) & 1) == 0) || (plVar20[6] == 0)) {
LAB_02f2e5e8:
            puVar22 = (undefined8 *)plVar20[2];
          }
          else {
            puVar19 = (undefined8 *)plVar20[2];
            puVar22 = (undefined8 *)((long)puVar19 + 0x17U & 0xfffffffffffffff8);
            if ((undefined8 *)plVar20[3] < puVar22) goto LAB_02f2e5e8;
            plVar20[2] = (long)puVar22;
            if (puVar19 != (undefined8 *)0x0) {
              *puVar19 = &DAT_03c4e575;
              puVar19[1] = *(undefined8 *)(plVar20[6] + 8);
              goto LAB_02f2e5e8;
            }
          }
          uVar14 = (long)puVar22 + 0x17U & 0xfffffffffffffff8;
          if ((uVar14 <= (ulong)plVar20[3]) && (plVar20[2] = uVar14, puVar22 != (undefined8 *)0x0))
          {
            *puVar22 = "StSubIntegrate";
            uVar28 = nn::os::GetSystemTick();
            puVar22[1] = uVar28;
          }
          if (*(code **)(lVar25 + 0x20) != (code *)0x0) {
            (**(code **)(lVar25 + 0x20))(*(undefined8 *)(lVar25 + 0x28));
          }
          if (*(code **)(lVar25 + 0x18) != (code *)0x0) {
            (**(code **)(lVar25 + 0x18))("SubIntegrate",0xc,*(undefined8 *)(lVar25 + 0x28));
          }
        }
        FUN_02f2ec1c(param_2,&local_130,1,param_6 + -1,*(undefined8 *)(param_2 + 0x30),plVar20);
        iVar10 = *(int *)(lVar21 + 0x5a0);
      }
      iVar24 = iVar24 + 1;
    } while (iVar24 < iVar10);
  }
  plVar15 = (long *)*param_3;
  puVar19 = (undefined8 *)*plVar15;
  *puVar19 = 0;
  *(undefined4 *)((long)puVar19 + 0xc) = 0;
  puVar19[2] = 0;
  *(undefined4 *)((long)puVar19 + 0x1c) = 0;
  *(long *)plVar15[2] = *plVar15;
  *(undefined4 *)(*plVar15 + 0x1c) = 0;
  *(undefined1 *)plVar15[4] = 0;
  *(undefined4 *)plVar15[6] = 0;
  plVar15 = (long *)param_3[1];
  puVar19 = (undefined8 *)*plVar15;
  *puVar19 = 0;
  *(undefined4 *)((long)puVar19 + 0xc) = 0;
  puVar19[2] = 0;
  *(undefined4 *)((long)puVar19 + 0x1c) = 0;
  *(long *)plVar15[2] = *plVar15;
  *(undefined4 *)(*plVar15 + 0x1c) = 0;
  *(undefined1 *)plVar15[4] = 0;
  *(undefined4 *)plVar15[6] = 0;
  plVar15 = (long *)param_3[2];
  puVar19 = (undefined8 *)*plVar15;
  *puVar19 = 0;
  *(undefined4 *)((long)puVar19 + 0xc) = 0;
  puVar19[2] = 0;
  *(undefined4 *)((long)puVar19 + 0x1c) = 0;
  *(long *)plVar15[2] = *plVar15;
  *(undefined4 *)(*plVar15 + 0x1c) = 0;
  *(undefined1 *)plVar15[4] = 0;
  *(undefined4 *)plVar15[6] = 0;
  if (plVar20 == (long *)0x0) {
    FUN_02f2f0c0(param_2,&local_130,1,param_6 + -1,0);
    *(undefined8 *)(param_2 + 0x4c0) = 0;
    return;
  }
  lVar25 = *plVar20;
  if (((*(byte *)(lVar25 + 0x38) & 1) != 0) && (plVar20[6] != 0)) {
    puVar19 = (undefined8 *)plVar20[2];
    uVar14 = (long)puVar19 + 0x17U & 0xfffffffffffffff8;
    if ((uVar14 <= (ulong)plVar20[3]) && (plVar20[2] = uVar14, puVar19 != (undefined8 *)0x0)) {
      *puVar19 = &DAT_03c4e575;
      puVar19[1] = *(undefined8 *)(plVar20[6] + 8);
    }
  }
  puVar19 = (undefined8 *)plVar20[2];
  uVar14 = (long)puVar19 + 0x17U & 0xfffffffffffffff8;
  if ((uVar14 <= (ulong)plVar20[3]) && (plVar20[2] = uVar14, puVar19 != (undefined8 *)0x0)) {
    *puVar19 = "StSubIntegrateLast";
    uVar8 = nn::os::GetSystemTick();
    puVar19[1] = uVar8;
  }
  if (*(code **)(lVar25 + 0x20) != (code *)0x0) {
    (**(code **)(lVar25 + 0x20))(*(undefined8 *)(lVar25 + 0x28));
  }
  if (*(code **)(lVar25 + 0x18) != (code *)0x0) {
    (**(code **)(lVar25 + 0x18))("SubIntegrateLast",0x10,*(undefined8 *)(lVar25 + 0x28));
  }
  FUN_02f2f0c0(param_2,&local_130,1,param_6 + -1,plVar20);
  *(undefined8 *)(param_2 + 0x4c0) = 0;
  lVar25 = *plVar20;
  if (((*(byte *)(lVar25 + 0x38) & 1) != 0) && (plVar20[6] != 0)) {
    puVar19 = (undefined8 *)plVar20[2];
    puVar17 = (undefined8 *)plVar20[3];
    puVar22 = (undefined8 *)((long)puVar19 + 0x17U & 0xfffffffffffffff8);
    if (puVar22 <= puVar17) {
      plVar20[2] = (long)puVar22;
      if (puVar19 == (undefined8 *)0x0) goto LAB_02f2e840;
      *puVar19 = &DAT_03c4e575;
      puVar19[1] = *(undefined8 *)(plVar20[6] + 8);
    }
  }
  puVar22 = (undefined8 *)plVar20[2];
  puVar17 = (undefined8 *)plVar20[3];
LAB_02f2e840:
  puVar19 = (undefined8 *)((long)puVar22 + 0x17U & 0xfffffffffffffff8);
  if ((puVar19 <= puVar17) && (plVar20[2] = (long)puVar19, puVar22 != (undefined8 *)0x0)) {
    *puVar22 = &DAT_03c3697b;
    uVar8 = nn::os::GetSystemTick();
    puVar22[1] = uVar8;
  }
  if (*(code **)(lVar25 + 0x20) != (code *)0x0) {
    (**(code **)(lVar25 + 0x20))(*(undefined8 *)(lVar25 + 0x28));
    if (*(code **)(lVar25 + 0x20) != (code *)0x0) {
      (**(code **)(lVar25 + 0x20))(*(undefined8 *)(lVar25 + 0x28));
    }
  }
  return;
}


