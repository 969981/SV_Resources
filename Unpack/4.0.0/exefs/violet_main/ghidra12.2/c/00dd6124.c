/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dd6124; name: FUN_00dd6124
 */


void FUN_00dd6124(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  bool bVar16;
  long *plVar17;
  uint *puVar18;
  uint uVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 *puVar24;
  uint uVar25;
  long lVar26;
  uint uVar27;
  int *piVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  char *pcVar34;
  undefined4 *puVar35;
  undefined8 *local_c0;
  uint local_b4;
  long *local_a0 [4];
  long *local_80;
  undefined4 local_74;
  uint local_70 [4];
  
  plVar13 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
  (**(code **)(*plVar13 + 0x30))(plVar13,param_1 + 0x40,3);
  if ((*(uint *)(param_1 + 0x1c4) & 1) != 0) {
    plVar13 = (long *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x1c4) = *(uint *)(param_1 + 0x1c4) & 0xfffffffe;
    FUN_00ca7394(plVar13,0);
    plVar15 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
    (**(code **)(*plVar15 + 0x50))(plVar15,plVar13,1);
    pcVar34 = *(char **)(param_1 + 0xd8);
    pcVar5 = *(char **)(param_1 + 0xe0);
    if (pcVar34 == pcVar5) {
      uVar19 = 0;
    }
    else {
      uVar19 = 0;
      do {
        if (*pcVar34 != '\0') {
          lVar30 = *(long *)(*(long *)(param_1 + 0x188) + (ulong)*(uint *)(pcVar34 + 4) * 8);
          local_c0 = *(undefined8 **)(lVar30 + 0x30);
          puVar22 = *(undefined8 **)(lVar30 + 0x38);
          uVar29 = ((long)puVar22 - (long)local_c0 >> 3) * 0x38e38e39;
          if ((int)uVar29 != 0) {
            if (local_c0 == puVar22) {
              bVar9 = false;
            }
            else {
              puVar21 = local_c0;
              do {
                piVar28 = (int *)*puVar21;
                while (piVar28 != (int *)puVar21[1]) {
                  iVar12 = *piVar28;
                  piVar28 = piVar28 + 2;
                  if (iVar12 == 4) {
                    bVar9 = true;
                    goto LAB_00dd730c;
                  }
                }
                puVar21 = puVar21 + 9;
              } while (puVar21 != puVar22);
              bVar9 = false;
LAB_00dd730c:
              puVar21 = local_c0;
              do {
                piVar28 = (int *)*puVar21;
                while (piVar28 != (int *)puVar21[1]) {
                  iVar12 = *piVar28;
                  piVar28 = piVar28 + 2;
                  if (iVar12 == 3) {
                    bVar16 = true;
                    goto LAB_00dd7348;
                  }
                }
                puVar21 = puVar21 + 9;
              } while (puVar21 != puVar22);
            }
            bVar16 = false;
LAB_00dd7348:
            local_b4 = (int)((ulong)(*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50)) >> 3) *
                       0x38e38e39;
            uVar29 = uVar29 & 0xffffffff;
            if ((bVar9) && (bVar16)) {
              uVar33 = 0;
              do {
                FUN_00ca7394(plVar13);
                puVar35 = (undefined4 *)local_c0[uVar33 * 9];
                puVar7 = (undefined4 *)(local_c0 + uVar33 * 9)[1];
                if (puVar35 == puVar7) {
LAB_00dd7bd8:
                  FUN_00ca7394(plVar13,local_b4);
                }
                else {
                  uVar32 = (ulong)local_b4;
                  bVar9 = false;
                  lVar26 = *plVar13;
                  lVar31 = lVar26 + uVar32 * 0x48;
                  piVar28 = (int *)(lVar31 + 0x40);
                  do {
                    local_70[0] = FUN_00dd9680(*puVar35,uVar19);
                    uVar11 = puVar35[1];
                    local_a0[0] = (long *)CONCAT44(local_a0[0]._4_4_,uVar11);
                    bVar9 = (bool)(bVar9 | local_70[0] != 0);
                    FUN_00c85118(lVar31,local_70,local_a0);
                    iVar12 = FUN_00c75660(uVar11);
                    puVar35 = puVar35 + 2;
                    *piVar28 = *piVar28 + iVar12;
                  } while (puVar35 != puVar7);
                  if (!bVar9) goto LAB_00dd7bd8;
                  uVar11 = *(undefined4 *)((long)local_c0 + uVar33 * 0x48 + 0x44);
                  lVar31 = local_c0[uVar33 * 9 + 7];
                  if (lVar31 != 0) {
                    piVar28 = (int *)(lVar31 + 0x28);
                    do {
                      iVar12 = *piVar28;
                      cVar8 = '\x01';
                      bVar9 = (bool)ExclusiveMonitorPass(piVar28,0x10);
                      if (bVar9) {
                        *piVar28 = iVar12 + 1;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    if (iVar12 == -1) goto LAB_00dd7c50;
                  }
                  plVar17 = (long *)(lVar26 + uVar32 * 0x48 + 0x38);
                  plVar15 = (long *)*plVar17;
                  *plVar17 = lVar31;
                  if (plVar15 != (long *)0x0) {
                    plVar17 = plVar15 + 5;
                    do {
                      lVar31 = *plVar17;
                      iVar12 = (int)lVar31 + -1;
                      cVar8 = '\x01';
                      bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                      if (bVar9) {
                        *(int *)plVar17 = iVar12;
                        cVar8 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar8 != '\0');
                    if (iVar12 == 0) {
                      (**(code **)(*plVar15 + 0x10))();
                    }
                    else if ((int)lVar31 == 0) goto LAB_00dd7c78;
                  }
                  *(undefined4 *)(lVar26 + uVar32 * 0x48 + 0x44) = uVar11;
                  local_b4 = local_b4 + 1;
                }
                uVar33 = uVar33 + 1;
                if (uVar33 == uVar29) goto LAB_00dd72b0;
                local_c0 = *(undefined8 **)(lVar30 + 0x30);
              } while( true );
            }
            puVar1 = (uint *)(&DAT_03cac070 + (ulong)uVar19 * 4);
            puVar2 = (uint *)(&DAT_03caae90 + (ulong)uVar19 * 4);
            puVar3 = (uint *)(&DAT_03caa9d0 + (ulong)uVar19 * 4);
            uVar33 = 0;
            do {
              FUN_00ca7394(plVar13);
              piVar28 = (int *)local_c0[uVar33 * 9];
              piVar6 = (int *)(local_c0 + uVar33 * 9)[1];
              if (piVar28 == piVar6) {
LAB_00dd7660:
                FUN_00ca7394(plVar13,local_b4);
              }
              else {
                lVar26 = *plVar13;
                uVar32 = (ulong)local_b4;
                lVar31 = lVar26 + uVar32 * 0x48;
                iVar12 = *piVar28;
                piVar4 = (int *)(lVar31 + 0x40);
                puVar18 = puVar2;
                if (((iVar12 == 1) || (puVar18 = puVar1, iVar12 == 2)) ||
                   (puVar18 = puVar3, iVar12 - 3U < 2)) {
                  uVar27 = *puVar18;
                }
                else {
                  uVar27 = 0;
                }
                iVar12 = piVar28[1];
                bVar9 = uVar27 != 0;
                local_a0[0] = (long *)CONCAT44(local_a0[0]._4_4_,iVar12);
                local_70[0] = uVar27;
                FUN_00c85118(lVar31,local_70,local_a0);
                iVar12 = FUN_00c75660(iVar12);
                *piVar4 = *piVar4 + iVar12;
                if (piVar28 + 2 != piVar6) {
                  iVar12 = piVar28[2];
                  puVar18 = puVar2;
                  if (((iVar12 == 1) || (puVar18 = puVar1, iVar12 == 2)) ||
                     (puVar18 = puVar3, iVar12 - 3U < 2)) {
                    uVar25 = *puVar18;
                  }
                  else {
                    uVar25 = 0;
                  }
                  iVar12 = piVar28[3];
                  bVar9 = uVar27 != 0 || uVar25 != 0;
                  local_a0[0] = (long *)CONCAT44(local_a0[0]._4_4_,iVar12);
                  local_70[0] = uVar25;
                  FUN_00c85118(lVar31,local_70,local_a0);
                  iVar12 = FUN_00c75660(iVar12);
                  *piVar4 = *piVar4 + iVar12;
                  if (piVar28 + 4 != piVar6) {
                    iVar12 = piVar28[4];
                    puVar18 = puVar2;
                    if (((iVar12 == 1) || (puVar18 = puVar1, iVar12 == 2)) ||
                       (puVar18 = puVar3, iVar12 - 3U < 2)) {
                      uVar10 = *puVar18;
                    }
                    else {
                      uVar10 = 0;
                    }
                    iVar12 = piVar28[5];
                    bVar9 = (uVar27 != 0 || uVar25 != 0) || uVar10 != 0;
                    local_a0[0] = (long *)CONCAT44(local_a0[0]._4_4_,iVar12);
                    local_70[0] = uVar10;
                    FUN_00c85118(lVar31,local_70,local_a0);
                    iVar12 = FUN_00c75660(iVar12);
                    *piVar4 = *piVar4 + iVar12;
                    if (piVar28 + 6 != piVar6) {
                      iVar12 = piVar28[6];
                      puVar18 = puVar2;
                      if (((iVar12 == 1) || (puVar18 = puVar1, iVar12 == 2)) ||
                         (puVar18 = puVar3, iVar12 - 3U < 2)) {
                        local_70[0] = *puVar18;
                      }
                      else {
                        local_70[0] = 0;
                      }
                      iVar12 = piVar28[7];
                      bVar9 = ((uVar27 != 0 || uVar25 != 0) || uVar10 != 0) || local_70[0] != 0;
                      local_a0[0] = (long *)CONCAT44(local_a0[0]._4_4_,iVar12);
                      FUN_00c85118(lVar31,local_70,local_a0);
                      iVar12 = FUN_00c75660(iVar12);
                      *piVar4 = *piVar4 + iVar12;
                      piVar28 = piVar28 + 8;
                      if (piVar28 != piVar6) {
                        do {
                          iVar12 = *piVar28;
                          puVar18 = puVar2;
                          if (((iVar12 == 1) || (puVar18 = puVar1, iVar12 == 2)) ||
                             (puVar18 = puVar3, iVar12 - 3U < 2)) {
                            local_70[0] = *puVar18;
                          }
                          else {
                            local_70[0] = 0;
                          }
                          iVar12 = piVar28[1];
                          local_a0[0] = (long *)CONCAT44(local_a0[0]._4_4_,iVar12);
                          bVar9 = (bool)(bVar9 | local_70[0] != 0);
                          FUN_00c85118(lVar31,local_70,local_a0);
                          iVar12 = FUN_00c75660(iVar12);
                          *piVar4 = *piVar4 + iVar12;
                          piVar28 = piVar28 + 2;
                        } while (piVar28 != piVar6);
                      }
                    }
                  }
                }
                if (!bVar9) goto LAB_00dd7660;
                uVar11 = *(undefined4 *)((long)local_c0 + uVar33 * 0x48 + 0x44);
                lVar31 = local_c0[uVar33 * 9 + 7];
                if (lVar31 != 0) {
                  piVar28 = (int *)(lVar31 + 0x28);
                  do {
                    iVar12 = *piVar28;
                    cVar8 = '\x01';
                    bVar9 = (bool)ExclusiveMonitorPass(piVar28,0x10);
                    if (bVar9) {
                      *piVar28 = iVar12 + 1;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if (iVar12 == -1) goto LAB_00dd7c50;
                }
                plVar17 = (long *)(lVar26 + uVar32 * 0x48 + 0x38);
                plVar15 = (long *)*plVar17;
                *plVar17 = lVar31;
                if (plVar15 != (long *)0x0) {
                  plVar17 = plVar15 + 5;
                  do {
                    lVar31 = *plVar17;
                    iVar12 = (int)lVar31 + -1;
                    cVar8 = '\x01';
                    bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                    if (bVar9) {
                      *(int *)plVar17 = iVar12;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
                  if (iVar12 == 0) {
                    (**(code **)(*plVar15 + 0x10))();
                  }
                  else if ((int)lVar31 == 0) goto LAB_00dd7c78;
                }
                *(undefined4 *)(lVar26 + uVar32 * 0x48 + 0x44) = uVar11;
                local_b4 = local_b4 + 1;
              }
              uVar33 = uVar33 + 1;
              if (uVar33 == uVar29) break;
              local_c0 = *(undefined8 **)(lVar30 + 0x30);
            } while( true );
          }
LAB_00dd72b0:
          uVar19 = uVar19 + 1;
        }
        pcVar34 = pcVar34 + 8;
      } while (pcVar34 != pcVar5);
    }
    *(uint *)(param_1 + 0x1c0) = uVar19;
  }
  lVar30 = *(long *)(param_1 + 0x50);
  uVar29 = (*(long *)(param_1 + 0x58) - lVar30 >> 3) * 0x38e38e39;
  lVar26 = *(long *)(param_1 + 0x40);
  if ((int)uVar29 != 0) {
    uVar33 = uVar29 & 0xffffffff;
    FUN_00c75684(*(undefined8 *)(lVar26 + 200),0,lVar30 + 0x38);
    if (((uVar33 != 1) && (FUN_00c75684(*(undefined8 *)(lVar26 + 200),1,lVar30 + 0x80), uVar33 != 2)
        ) && ((FUN_00c75684(*(undefined8 *)(lVar26 + 200),2,lVar30 + 200), uVar33 != 3 &&
              ((FUN_00c75684(*(undefined8 *)(lVar26 + 200),3,lVar30 + 0x110), uVar33 != 4 &&
               (FUN_00c75684(*(undefined8 *)(lVar26 + 200),4,lVar30 + 0x158), uVar33 != 5)))))) {
      lVar31 = lVar30 + 0x1a0;
      uVar32 = 5;
      do {
        FUN_00c75684(*(undefined8 *)(lVar26 + 200),uVar32 & 0xffffffff,lVar31);
        uVar32 = uVar32 + 1;
        lVar31 = lVar31 + 0x48;
      } while (uVar33 != uVar32);
    }
  }
  FUN_00c752dc(lVar26,lVar30,uVar29 & 0xffffffff);
  uVar19 = *(uint *)(param_1 + 0x1c4);
  if ((uVar19 >> 1 & 1) != 0) {
    local_a0[0] = DAT_0485a0a0;
    if (DAT_0485a0a0 != (long *)0x0) {
      plVar13 = DAT_0485a0a0 + 5;
      do {
        lVar30 = *plVar13;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar9) {
          *(int *)plVar13 = (int)lVar30 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((int)lVar30 == -1) {
LAB_00dd7c50:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    uVar11 = (**(code **)(*(long *)(*(long *)(param_1 + 0x38) + 0x30) + 0x40))();
    lVar30 = param_1 + 0x90;
    FUN_00ca7394(lVar30,0);
    plVar13 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
    uVar29 = (**(code **)(*plVar13 + 0x48))(plVar13,2);
    if ((uVar29 & 1) == 0) {
      FUN_00dd96a8(param_1,local_a0,uVar11);
    }
    else {
      plVar13 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
      uVar29 = (**(code **)(*plVar13 + 0x48))(plVar13,3);
      if ((uVar29 & 1) == 0) {
        plVar13 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
        uVar29 = (**(code **)(*plVar13 + 0x48))(plVar13,4);
        if ((uVar29 & 1) == 0) {
          FUN_00ca7394(lVar30,2);
          lVar30 = *(long *)(param_1 + 0x90);
          local_74 = 1;
          local_70[0] = 0x22;
          FUN_00c85118(lVar30,&local_74,local_70);
          *(int *)(lVar30 + 0x40) = *(int *)(lVar30 + 0x40) + 0xc;
          FUN_00ebd51c(lVar30,local_a0,uVar11,1);
          lVar26 = *(long *)(param_1 + 0x90);
          local_74 = 2;
          local_70[0] = 0x22;
          lVar30 = lVar26 + 0x48;
          FUN_00c85118(lVar30,&local_74,local_70);
          *(int *)(lVar26 + 0x88) = *(int *)(lVar26 + 0x88) + 0xc;
        }
        else {
          FUN_00ca7394(lVar30,3);
          lVar30 = *(long *)(param_1 + 0x90);
          local_74 = 1;
          local_70[0] = 0x22;
          FUN_00c85118(lVar30,&local_74,local_70);
          *(int *)(lVar30 + 0x40) = *(int *)(lVar30 + 0x40) + 0xc;
          FUN_00ebd51c(lVar30,local_a0,uVar11,1);
          lVar30 = *(long *)(param_1 + 0x90);
          local_74 = 2;
          local_70[0] = 0x22;
          FUN_00c85118(lVar30 + 0x48,&local_74,local_70);
          *(int *)(lVar30 + 0x88) = *(int *)(lVar30 + 0x88) + 0xc;
          FUN_00ebd51c(lVar30 + 0x48,local_a0,uVar11,1);
          lVar26 = *(long *)(param_1 + 0x90);
          local_74 = 4;
          local_70[0] = 0x22;
          lVar30 = lVar26 + 0x90;
          FUN_00c85118(lVar30,&local_74,local_70);
          *(int *)(lVar26 + 0xd0) = *(int *)(lVar26 + 0xd0) + 0xc;
        }
        FUN_00ebd51c(lVar30,local_a0,uVar11,1);
      }
      else {
        FUN_00dd9724(param_1,local_a0,uVar11);
      }
    }
    if (local_a0[0] != (long *)0x0) {
      plVar13 = local_a0[0] + 5;
      do {
        lVar30 = *plVar13;
        iVar12 = (int)lVar30 + -1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar9) {
          *(int *)plVar13 = iVar12;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*local_a0[0] + 0x10))();
      }
      else if ((int)lVar30 == 0) {
LAB_00dd7c78:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    uVar19 = *(uint *)(param_1 + 0x1c4);
  }
  if ((uVar19 >> 2 & 1) != 0) {
    *(uint *)(param_1 + 0x1c4) = uVar19 & 0xfffffffb;
    lVar30 = *(long *)(param_1 + 0xd8);
    local_70[0] = 0;
    uVar29 = *(long *)(param_1 + 0xe0) - lVar30;
    if ((int)(uVar29 >> 3) == 0) {
      uVar25 = 1;
      uVar27 = 1;
      uVar19 = 1;
    }
    else {
      uVar33 = 0;
      uVar19 = 1;
      uVar27 = 1;
      uVar25 = 1;
      do {
        if (*(char *)(lVar30 + uVar33 * 8) != '\0') {
          uVar10 = *(uint *)(lVar30 + uVar33 * 8 + 4);
          *(byte *)((long)local_70 + uVar33) =
               (byte)(*(ulong *)(*(long *)(param_1 + 0x148) + ((ulong)(uVar10 >> 3) & 0x1ffffff8))
                     >> ((ulong)uVar10 & 0x3f)) & 1;
          lVar26 = *(long *)(*(long *)(param_1 + 0x188) + (ulong)uVar10 * 8);
          puVar22 = *(undefined8 **)(lVar26 + 0x30);
          puVar21 = *(undefined8 **)(lVar26 + 0x38);
          if (puVar22 == puVar21) {
            uVar27 = 0;
            uVar19 = 0;
          }
          else {
            puVar24 = puVar22;
            do {
              piVar28 = (int *)*puVar24;
              while (piVar28 != (int *)puVar24[1]) {
                iVar12 = *piVar28;
                piVar28 = piVar28 + 2;
                if (iVar12 == 2) {
                  uVar10 = 1;
                  goto LAB_00dd62dc;
                }
              }
              puVar24 = puVar24 + 9;
            } while (puVar24 != puVar21);
            uVar10 = 0;
LAB_00dd62dc:
            uVar19 = uVar19 & uVar10;
            puVar24 = puVar22;
            do {
              piVar28 = (int *)*puVar24;
              while (piVar28 != (int *)puVar24[1]) {
                iVar12 = *piVar28;
                piVar28 = piVar28 + 2;
                if (iVar12 == 4) {
                  uVar10 = 1;
                  goto LAB_00dd631c;
                }
              }
              puVar24 = puVar24 + 9;
            } while (puVar24 != puVar21);
            uVar10 = 0;
LAB_00dd631c:
            uVar27 = uVar27 & uVar10;
            do {
              piVar28 = (int *)*puVar22;
              while (piVar28 != (int *)puVar22[1]) {
                iVar12 = *piVar28;
                piVar28 = piVar28 + 2;
                if (iVar12 == 3) {
                  uVar10 = 1;
                  goto LAB_00dd6358;
                }
              }
              puVar22 = puVar22 + 9;
            } while (puVar22 != puVar21);
          }
          uVar10 = 0;
LAB_00dd6358:
          uVar25 = uVar25 & uVar10;
        }
        uVar33 = uVar33 + 1;
      } while (uVar33 != (uVar29 >> 3 & 0xffffffff));
    }
    lVar30 = *(long *)(param_1 + 0xd0);
    plVar13 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
    uVar10 = (**(code **)(*plVar13 + 0x48))(plVar13,2);
    plVar13 = *(long **)(*(long *)(lVar30 + 0x30) + 0x110);
    plVar15 = *(long **)(*(long *)(lVar30 + 0x30) + 0x118);
    plVar17 = plVar13;
    if ((plVar13 != plVar15) && (*plVar13 != -0x58074e8447efbca3)) {
      do {
        plVar17 = plVar17 + 0xc;
        if (plVar15 == plVar17) {
          plVar17 = plVar15;
          goto LAB_00dd63e4;
        }
      } while (*plVar17 != -0x58074e8447efbca3);
    }
LAB_00dd63e4:
    if (plVar15 != plVar17) {
      iVar12 = (int)((ulong)((long)plVar17 - (long)plVar13) >> 5) * -0x55555555;
      lVar26 = plVar13[(long)iVar12 * 0xc + 4];
      lVar31 = plVar13[(long)iVar12 * 0xc + 5];
      lVar23 = lVar26;
      if (lVar26 != lVar31) {
        lVar20 = lVar26;
        if (*(uint *)(lVar26 + 0x20) != (uVar10 & 1)) {
          do {
            lVar23 = lVar20 + 0x28;
            if (lVar31 == lVar23) {
              lVar23 = lVar31;
              goto LAB_00dd6428;
            }
            puVar1 = (uint *)(lVar20 + 0x48);
            lVar20 = lVar23;
          } while (*puVar1 != (uVar10 & 1));
        }
      }
LAB_00dd6428:
      if (lVar31 != lVar23) {
        lVar20 = (long)iVar12;
        uVar29 = (ulong)*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x5a) -
                 (ulong)*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x59);
        lVar31 = *(long *)(lVar30 + 0x80);
        if ((ulong)(*(long *)(lVar30 + 0x88) - lVar31 >> 2) <= uVar29) goto LAB_00dd7c48;
        *(uint *)(lVar31 + uVar29 * 4) =
             (int)((ulong)(lVar23 - lVar26) >> 3) * -0x33333333 <<
             (ulong)(*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x5b) & 0x1f) |
             *(uint *)(lVar31 + uVar29 * 4) &
             (*(uint *)((long)plVar13 + lVar20 * 0x60 + 0x5c) ^ 0xffffffff);
      }
    }
    lVar30 = *(long *)(param_1 + 0xd0);
    plVar13 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
    uVar10 = (**(code **)(*plVar13 + 0x48))(plVar13,4);
    plVar13 = *(long **)(*(long *)(lVar30 + 0x30) + 0x110);
    plVar15 = *(long **)(*(long *)(lVar30 + 0x30) + 0x118);
    plVar17 = plVar13;
    if ((plVar13 != plVar15) && (*plVar13 != -0x71d3529ee2b24559)) {
      do {
        plVar17 = plVar17 + 0xc;
        if (plVar15 == plVar17) {
          plVar17 = plVar15;
          goto LAB_00dd64f0;
        }
      } while (*plVar17 != -0x71d3529ee2b24559);
    }
LAB_00dd64f0:
    if (plVar15 != plVar17) {
      iVar12 = (int)((ulong)((long)plVar17 - (long)plVar13) >> 5) * -0x55555555;
      lVar26 = plVar13[(long)iVar12 * 0xc + 4];
      lVar31 = plVar13[(long)iVar12 * 0xc + 5];
      lVar23 = lVar26;
      if (lVar26 != lVar31) {
        lVar20 = lVar26;
        if (*(uint *)(lVar26 + 0x20) != (uVar10 & 1)) {
          do {
            lVar23 = lVar20 + 0x28;
            if (lVar31 == lVar23) {
              lVar23 = lVar31;
              goto LAB_00dd6534;
            }
            puVar1 = (uint *)(lVar20 + 0x48);
            lVar20 = lVar23;
          } while (*puVar1 != (uVar10 & 1));
        }
      }
LAB_00dd6534:
      if (lVar31 != lVar23) {
        lVar20 = (long)iVar12;
        uVar29 = (ulong)*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x5a) -
                 (ulong)*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x59);
        lVar31 = *(long *)(lVar30 + 0x80);
        if ((ulong)(*(long *)(lVar30 + 0x88) - lVar31 >> 2) <= uVar29) goto LAB_00dd7c48;
        *(uint *)(lVar31 + uVar29 * 4) =
             (int)((ulong)(lVar23 - lVar26) >> 3) * -0x33333333 <<
             (ulong)(*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x5b) & 0x1f) |
             *(uint *)(lVar31 + uVar29 * 4) &
             (*(uint *)((long)plVar13 + lVar20 * 0x60 + 0x5c) ^ 0xffffffff);
      }
    }
    lVar30 = *(long *)(param_1 + 0xd0);
    plVar13 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
    uVar10 = (**(code **)(*plVar13 + 0x48))(plVar13,3);
    plVar13 = *(long **)(*(long *)(lVar30 + 0x30) + 0x110);
    plVar15 = *(long **)(*(long *)(lVar30 + 0x30) + 0x118);
    plVar17 = plVar13;
    if ((plVar13 != plVar15) && (*plVar13 != -0x1060da8d018c3120)) {
      do {
        plVar17 = plVar17 + 0xc;
        if (plVar15 == plVar17) {
          plVar17 = plVar15;
          goto LAB_00dd65fc;
        }
      } while (*plVar17 != -0x1060da8d018c3120);
    }
LAB_00dd65fc:
    if (plVar15 != plVar17) {
      iVar12 = (int)((ulong)((long)plVar17 - (long)plVar13) >> 5) * -0x55555555;
      lVar26 = plVar13[(long)iVar12 * 0xc + 4];
      lVar31 = plVar13[(long)iVar12 * 0xc + 5];
      lVar23 = lVar26;
      if (lVar26 != lVar31) {
        lVar20 = lVar26;
        if (*(uint *)(lVar26 + 0x20) != (uVar10 & 1)) {
          do {
            lVar23 = lVar20 + 0x28;
            if (lVar31 == lVar23) {
              lVar23 = lVar31;
              goto LAB_00dd6640;
            }
            puVar1 = (uint *)(lVar20 + 0x48);
            lVar20 = lVar23;
          } while (*puVar1 != (uVar10 & 1));
        }
      }
LAB_00dd6640:
      if (lVar31 != lVar23) {
        lVar20 = (long)iVar12;
        uVar29 = (ulong)*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x5a) -
                 (ulong)*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x59);
        lVar31 = *(long *)(lVar30 + 0x80);
        if ((ulong)(*(long *)(lVar30 + 0x88) - lVar31 >> 2) <= uVar29) {
LAB_00dd7c48:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        *(uint *)(lVar31 + uVar29 * 4) =
             (int)((ulong)(lVar23 - lVar26) >> 3) * -0x33333333 <<
             (ulong)(*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x5b) & 0x1f) |
             *(uint *)(lVar31 + uVar29 * 4) &
             (*(uint *)((long)plVar13 + lVar20 * 0x60 + 0x5c) ^ 0xffffffff);
      }
    }
    lVar30 = *(long *)(param_1 + 0xd0);
    plVar13 = *(long **)(*(long *)(lVar30 + 0x30) + 0x110);
    plVar15 = *(long **)(*(long *)(lVar30 + 0x30) + 0x118);
    plVar17 = plVar13;
    if ((plVar13 != plVar15) && (*plVar13 != 0x7dd9cac5a6fdf22a)) {
      do {
        plVar17 = plVar17 + 0xc;
        if (plVar15 == plVar17) {
          plVar17 = plVar15;
          goto LAB_00dd66f4;
        }
      } while (*plVar17 != 0x7dd9cac5a6fdf22a);
    }
LAB_00dd66f4:
    if (plVar15 != plVar17) {
      iVar12 = (int)((ulong)((long)plVar17 - (long)plVar13) >> 5) * -0x55555555;
      lVar26 = plVar13[(long)iVar12 * 0xc + 4];
      lVar31 = plVar13[(long)iVar12 * 0xc + 5];
      lVar23 = lVar26;
      if ((lVar26 != lVar31) && (lVar20 = lVar26, *(int *)(lVar26 + 0x20) != 0)) {
        do {
          lVar23 = lVar20 + 0x28;
          if (lVar31 == lVar23) {
            lVar23 = lVar31;
            goto LAB_00dd6730;
          }
          piVar28 = (int *)(lVar20 + 0x48);
          lVar20 = lVar23;
        } while (*piVar28 != 0);
      }
LAB_00dd6730:
      if (lVar31 != lVar23) {
        lVar20 = (long)iVar12;
        uVar29 = (ulong)*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x5a) -
                 (ulong)*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x59);
        lVar31 = *(long *)(lVar30 + 0x80);
        if ((ulong)(*(long *)(lVar30 + 0x88) - lVar31 >> 2) <= uVar29) goto LAB_00dd7c40;
        *(uint *)(lVar31 + uVar29 * 4) =
             (int)((ulong)(lVar23 - lVar26) >> 3) * -0x33333333 <<
             (ulong)(*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x5b) & 0x1f) |
             *(uint *)(lVar31 + uVar29 * 4) &
             (*(uint *)((long)plVar13 + lVar20 * 0x60 + 0x5c) ^ 0xffffffff);
        lVar30 = *(long *)(param_1 + 0xd0);
        plVar13 = *(long **)(*(long *)(lVar30 + 0x30) + 0x110);
        plVar15 = *(long **)(*(long *)(lVar30 + 0x30) + 0x118);
      }
    }
    plVar17 = plVar13;
    if ((plVar13 != plVar15) && (*plVar13 != 0x105d7f844484169b)) {
      do {
        plVar17 = plVar17 + 0xc;
        if (plVar15 == plVar17) {
          plVar17 = plVar15;
          goto LAB_00dd67ec;
        }
      } while (*plVar17 != 0x105d7f844484169b);
    }
LAB_00dd67ec:
    if (plVar15 != plVar17) {
      iVar12 = (int)((ulong)((long)plVar17 - (long)plVar13) >> 5) * -0x55555555;
      lVar26 = plVar13[(long)iVar12 * 0xc + 4];
      lVar31 = plVar13[(long)iVar12 * 0xc + 5];
      lVar23 = lVar26;
      if ((lVar26 != lVar31) && (lVar20 = lVar26, *(uint *)(lVar26 + 0x20) != uVar19)) {
        do {
          lVar23 = lVar20 + 0x28;
          if (lVar31 == lVar23) {
            lVar23 = lVar31;
            goto LAB_00dd6830;
          }
          puVar1 = (uint *)(lVar20 + 0x48);
          lVar20 = lVar23;
        } while (*puVar1 != uVar19);
      }
LAB_00dd6830:
      if (lVar31 != lVar23) {
        lVar20 = (long)iVar12;
        uVar29 = (ulong)*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x5a) -
                 (ulong)*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x59);
        lVar31 = *(long *)(lVar30 + 0x80);
        if ((ulong)(*(long *)(lVar30 + 0x88) - lVar31 >> 2) <= uVar29) goto LAB_00dd7c40;
        *(uint *)(lVar31 + uVar29 * 4) =
             (int)((ulong)(lVar23 - lVar26) >> 3) * -0x33333333 <<
             (ulong)(*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x5b) & 0x1f) |
             *(uint *)(lVar31 + uVar29 * 4) &
             (*(uint *)((long)plVar13 + lVar20 * 0x60 + 0x5c) ^ 0xffffffff);
        lVar30 = *(long *)(param_1 + 0xd0);
        plVar13 = *(long **)(*(long *)(lVar30 + 0x30) + 0x110);
        plVar15 = *(long **)(*(long *)(lVar30 + 0x30) + 0x118);
      }
    }
    plVar17 = plVar13;
    if ((plVar13 != plVar15) && (*plVar13 != 0x7679b13314492731)) {
      do {
        plVar17 = plVar17 + 0xc;
        if (plVar15 == plVar17) {
          plVar17 = plVar15;
          goto LAB_00dd68ec;
        }
      } while (*plVar17 != 0x7679b13314492731);
    }
LAB_00dd68ec:
    if (plVar15 != plVar17) {
      iVar12 = (int)((ulong)((long)plVar17 - (long)plVar13) >> 5) * -0x55555555;
      lVar26 = plVar13[(long)iVar12 * 0xc + 4];
      lVar31 = plVar13[(long)iVar12 * 0xc + 5];
      lVar23 = lVar26;
      if ((lVar26 != lVar31) && (lVar20 = lVar26, *(uint *)(lVar26 + 0x20) != uVar27)) {
        do {
          lVar23 = lVar20 + 0x28;
          if (lVar31 == lVar23) {
            lVar23 = lVar31;
            goto LAB_00dd6930;
          }
          puVar1 = (uint *)(lVar20 + 0x48);
          lVar20 = lVar23;
        } while (*puVar1 != uVar27);
      }
LAB_00dd6930:
      if (lVar31 != lVar23) {
        lVar20 = (long)iVar12;
        uVar29 = (ulong)*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x5a) -
                 (ulong)*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x59);
        lVar31 = *(long *)(lVar30 + 0x80);
        if ((ulong)(*(long *)(lVar30 + 0x88) - lVar31 >> 2) <= uVar29) goto LAB_00dd7c40;
        *(uint *)(lVar31 + uVar29 * 4) =
             (int)((ulong)(lVar23 - lVar26) >> 3) * -0x33333333 <<
             (ulong)(*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x5b) & 0x1f) |
             *(uint *)(lVar31 + uVar29 * 4) &
             (*(uint *)((long)plVar13 + lVar20 * 0x60 + 0x5c) ^ 0xffffffff);
        lVar30 = *(long *)(param_1 + 0xd0);
        plVar13 = *(long **)(*(long *)(lVar30 + 0x30) + 0x110);
        plVar15 = *(long **)(*(long *)(lVar30 + 0x30) + 0x118);
      }
    }
    plVar17 = plVar13;
    if ((plVar13 != plVar15) && (*plVar13 != -0x169e4b4138e7face)) {
      do {
        plVar17 = plVar17 + 0xc;
        if (plVar15 == plVar17) {
          plVar17 = plVar15;
          goto LAB_00dd69ec;
        }
      } while (*plVar17 != -0x169e4b4138e7face);
    }
LAB_00dd69ec:
    if (plVar15 != plVar17) {
      iVar12 = (int)((ulong)((long)plVar17 - (long)plVar13) >> 5) * -0x55555555;
      lVar26 = plVar13[(long)iVar12 * 0xc + 4];
      lVar31 = plVar13[(long)iVar12 * 0xc + 5];
      lVar23 = lVar26;
      if ((lVar26 != lVar31) && (lVar20 = lVar26, *(uint *)(lVar26 + 0x20) != uVar25)) {
        do {
          lVar23 = lVar20 + 0x28;
          if (lVar31 == lVar23) {
            lVar23 = lVar31;
            goto LAB_00dd6a30;
          }
          puVar1 = (uint *)(lVar20 + 0x48);
          lVar20 = lVar23;
        } while (*puVar1 != uVar25);
      }
LAB_00dd6a30:
      if (lVar31 != lVar23) {
        lVar20 = (long)iVar12;
        uVar29 = (ulong)*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x5a) -
                 (ulong)*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x59);
        lVar31 = *(long *)(lVar30 + 0x80);
        if ((ulong)(*(long *)(lVar30 + 0x88) - lVar31 >> 2) <= uVar29) goto LAB_00dd7c40;
        *(uint *)(lVar31 + uVar29 * 4) =
             (int)((ulong)(lVar23 - lVar26) >> 3) * -0x33333333 <<
             (ulong)(*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x5b) & 0x1f) |
             *(uint *)(lVar31 + uVar29 * 4) &
             (*(uint *)((long)plVar13 + lVar20 * 0x60 + 0x5c) ^ 0xffffffff);
        lVar30 = *(long *)(param_1 + 0xd0);
        plVar13 = *(long **)(*(long *)(lVar30 + 0x30) + 0x110);
        plVar15 = *(long **)(*(long *)(lVar30 + 0x30) + 0x118);
      }
    }
    plVar17 = plVar13;
    if ((plVar13 != plVar15) && (*plVar13 != 0x695f32fe9cd51278)) {
      do {
        plVar17 = plVar17 + 0xc;
        if (plVar15 == plVar17) {
          plVar17 = plVar15;
          goto LAB_00dd6af0;
        }
      } while (*plVar17 != 0x695f32fe9cd51278);
    }
LAB_00dd6af0:
    if (plVar15 != plVar17) {
      iVar12 = (int)((ulong)((long)plVar17 - (long)plVar13) >> 5) * -0x55555555;
      lVar26 = plVar13[(long)iVar12 * 0xc + 4];
      lVar31 = plVar13[(long)iVar12 * 0xc + 5];
      lVar23 = lVar26;
      if (lVar26 != lVar31) {
        lVar20 = lVar26;
        if (*(uint *)(lVar26 + 0x20) != (local_70[0] & 0xff)) {
          do {
            lVar23 = lVar20 + 0x28;
            if (lVar31 == lVar23) {
              lVar23 = lVar31;
              goto LAB_00dd6b30;
            }
            puVar1 = (uint *)(lVar20 + 0x48);
            lVar20 = lVar23;
          } while (*puVar1 != (local_70[0] & 0xff));
        }
      }
LAB_00dd6b30:
      if (lVar31 != lVar23) {
        lVar20 = (long)iVar12;
        uVar29 = (ulong)*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x5a) -
                 (ulong)*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x59);
        lVar31 = *(long *)(lVar30 + 0x80);
        if ((ulong)(*(long *)(lVar30 + 0x88) - lVar31 >> 2) <= uVar29) goto LAB_00dd7c40;
        *(uint *)(lVar31 + uVar29 * 4) =
             (int)((ulong)(lVar23 - lVar26) >> 3) * -0x33333333 <<
             (ulong)(*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x5b) & 0x1f) |
             *(uint *)(lVar31 + uVar29 * 4) &
             (*(uint *)((long)plVar13 + lVar20 * 0x60 + 0x5c) ^ 0xffffffff);
        lVar30 = *(long *)(param_1 + 0xd0);
        plVar13 = *(long **)(*(long *)(lVar30 + 0x30) + 0x110);
        plVar15 = *(long **)(*(long *)(lVar30 + 0x30) + 0x118);
      }
    }
    plVar17 = plVar13;
    if ((plVar13 != plVar15) && (*plVar13 != 0x695f33fe9cd5142b)) {
      do {
        plVar17 = plVar17 + 0xc;
        if (plVar15 == plVar17) {
          plVar17 = plVar15;
          goto LAB_00dd6bf0;
        }
      } while (*plVar17 != 0x695f33fe9cd5142b);
    }
LAB_00dd6bf0:
    if (plVar15 != plVar17) {
      iVar12 = (int)((ulong)((long)plVar17 - (long)plVar13) >> 5) * -0x55555555;
      lVar26 = plVar13[(long)iVar12 * 0xc + 4];
      lVar31 = plVar13[(long)iVar12 * 0xc + 5];
      lVar23 = lVar26;
      if (lVar26 != lVar31) {
        uVar19 = local_70[0] >> 8 & 0xff;
        lVar20 = lVar26;
        if (*(uint *)(lVar26 + 0x20) != uVar19) {
          do {
            lVar23 = lVar20 + 0x28;
            if (lVar31 == lVar23) {
              lVar23 = lVar31;
              goto LAB_00dd6c30;
            }
            puVar1 = (uint *)(lVar20 + 0x48);
            lVar20 = lVar23;
          } while (*puVar1 != uVar19);
        }
      }
LAB_00dd6c30:
      if (lVar31 != lVar23) {
        lVar20 = (long)iVar12;
        uVar29 = (ulong)*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x5a) -
                 (ulong)*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x59);
        lVar31 = *(long *)(lVar30 + 0x80);
        if ((ulong)(*(long *)(lVar30 + 0x88) - lVar31 >> 2) <= uVar29) goto LAB_00dd7c40;
        *(uint *)(lVar31 + uVar29 * 4) =
             (int)((ulong)(lVar23 - lVar26) >> 3) * -0x33333333 <<
             (ulong)(*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x5b) & 0x1f) |
             *(uint *)(lVar31 + uVar29 * 4) &
             (*(uint *)((long)plVar13 + lVar20 * 0x60 + 0x5c) ^ 0xffffffff);
        lVar30 = *(long *)(param_1 + 0xd0);
        plVar13 = *(long **)(*(long *)(lVar30 + 0x30) + 0x110);
        plVar15 = *(long **)(*(long *)(lVar30 + 0x30) + 0x118);
      }
    }
    plVar17 = plVar13;
    if ((plVar13 != plVar15) && (*plVar13 != 0x695f34fe9cd515de)) {
      do {
        plVar17 = plVar17 + 0xc;
        if (plVar15 == plVar17) {
          plVar17 = plVar15;
          goto LAB_00dd6cf0;
        }
      } while (*plVar17 != 0x695f34fe9cd515de);
    }
LAB_00dd6cf0:
    if (plVar15 != plVar17) {
      iVar12 = (int)((ulong)((long)plVar17 - (long)plVar13) >> 5) * -0x55555555;
      lVar26 = plVar13[(long)iVar12 * 0xc + 4];
      lVar31 = plVar13[(long)iVar12 * 0xc + 5];
      lVar23 = lVar26;
      if (lVar26 != lVar31) {
        uVar19 = local_70[0] >> 0x10 & 0xff;
        lVar20 = lVar26;
        if (*(uint *)(lVar26 + 0x20) != uVar19) {
          do {
            lVar23 = lVar20 + 0x28;
            if (lVar31 == lVar23) {
              lVar23 = lVar31;
              goto LAB_00dd6d30;
            }
            puVar1 = (uint *)(lVar20 + 0x48);
            lVar20 = lVar23;
          } while (*puVar1 != uVar19);
        }
      }
LAB_00dd6d30:
      if (lVar31 != lVar23) {
        lVar20 = (long)iVar12;
        uVar29 = (ulong)*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x5a) -
                 (ulong)*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x59);
        lVar31 = *(long *)(lVar30 + 0x80);
        if ((ulong)(*(long *)(lVar30 + 0x88) - lVar31 >> 2) <= uVar29) goto LAB_00dd7c40;
        *(uint *)(lVar31 + uVar29 * 4) =
             (int)((ulong)(lVar23 - lVar26) >> 3) * -0x33333333 <<
             (ulong)(*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x5b) & 0x1f) |
             *(uint *)(lVar31 + uVar29 * 4) &
             (*(uint *)((long)plVar13 + lVar20 * 0x60 + 0x5c) ^ 0xffffffff);
        lVar30 = *(long *)(param_1 + 0xd0);
        plVar13 = *(long **)(*(long *)(lVar30 + 0x30) + 0x110);
        plVar15 = *(long **)(*(long *)(lVar30 + 0x30) + 0x118);
      }
    }
    plVar17 = plVar13;
    if ((plVar13 != plVar15) && (*plVar13 != 0x695f35fe9cd51791)) {
      do {
        plVar17 = plVar17 + 0xc;
        if (plVar15 == plVar17) {
          plVar17 = plVar15;
          goto LAB_00dd6df0;
        }
      } while (*plVar17 != 0x695f35fe9cd51791);
    }
LAB_00dd6df0:
    if (plVar15 != plVar17) {
      iVar12 = (int)((ulong)((long)plVar17 - (long)plVar13) >> 5) * -0x55555555;
      lVar26 = plVar13[(long)iVar12 * 0xc + 4];
      lVar31 = plVar13[(long)iVar12 * 0xc + 5];
      lVar23 = lVar26;
      if ((lVar26 != lVar31) && (lVar20 = lVar26, *(uint *)(lVar26 + 0x20) != local_70[0] >> 0x18))
      {
        do {
          lVar23 = lVar20 + 0x28;
          if (lVar31 == lVar23) {
            lVar23 = lVar31;
            goto LAB_00dd6e30;
          }
          puVar1 = (uint *)(lVar20 + 0x48);
          lVar20 = lVar23;
        } while (*puVar1 != local_70[0] >> 0x18);
      }
LAB_00dd6e30:
      if (lVar31 != lVar23) {
        lVar20 = (long)iVar12;
        uVar29 = (ulong)*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x5a) -
                 (ulong)*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x59);
        lVar31 = *(long *)(lVar30 + 0x80);
        if ((ulong)(*(long *)(lVar30 + 0x88) - lVar31 >> 2) <= uVar29) {
LAB_00dd7c40:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        *(uint *)(lVar31 + uVar29 * 4) =
             (int)((ulong)(lVar23 - lVar26) >> 3) * -0x33333333 <<
             (ulong)(*(byte *)((long)plVar13 + lVar20 * 0x60 + 0x5b) & 0x1f) |
             *(uint *)(lVar31 + uVar29 * 4) &
             (*(uint *)((long)plVar13 + lVar20 * 0x60 + 0x5c) ^ 0xffffffff);
        lVar30 = *(long *)(param_1 + 0xd0);
      }
    }
    uVar29 = FUN_00d100a8(lVar30);
    if ((uVar29 & 1) != 0) {
      FUN_00d10690(*(undefined8 *)(*(long *)(param_1 + 0x40) + 200),1,
                   *(long *)(param_1 + 0xd0) + 0xf0);
      local_a0[0] = (long *)((ulong)local_a0[0] & 0xffffffffffffff00);
      FUN_00d10690(*(undefined8 *)(*(long *)(param_1 + 0x40) + 200),2,local_a0);
      if ((char)local_a0[0] != '\0') {
        if (local_80 != (long *)0x0) {
          (**(code **)(*local_80 + 0x20))();
        }
        local_a0[0] = (long *)((ulong)local_a0[0] & 0xffffffffffffff00);
      }
    }
  }
  plVar13 = (long *)(param_1 + 0x90);
  uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 200);
  if ((int)((ulong)(*(long *)(param_1 + 0x98) - *plVar13) >> 3) * 0x38e38e39 != 0) {
    FUN_00dd7d48(uVar14,0,*plVar13 + 0x38);
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 200);
    if (((int)((ulong)(*(long *)(param_1 + 0x98) - *(long *)(param_1 + 0x90)) >> 3) * 0x38e38e39 &
        0xfffffffeU) != 0) {
      FUN_00dd7d48(uVar14,1,*(long *)(param_1 + 0x90) + 0x80);
      uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 200);
      if (2 < (uint)((int)((ulong)(*(long *)(param_1 + 0x98) - *(long *)(param_1 + 0x90)) >> 3) *
                    0x38e38e39)) {
        FUN_00dd7d48(uVar14,2,*(long *)(param_1 + 0x90) + 200);
        uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 200);
        if (((int)((ulong)(*(long *)(param_1 + 0x98) - *(long *)(param_1 + 0x90)) >> 3) * 0x38e38e39
            & 0xfffffffcU) != 0) {
          FUN_00dd7d48(uVar14,3,*(long *)(param_1 + 0x90) + 0x110);
          uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 200);
          if (4 < (uint)((int)((ulong)(*(long *)(param_1 + 0x98) - *(long *)(param_1 + 0x90)) >> 3)
                        * 0x38e38e39)) {
            FUN_00dd7d48(uVar14,4,*(long *)(param_1 + 0x90) + 0x158);
            uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 200);
            if (5 < ((int)((ulong)(*(long *)(param_1 + 0x98) - *(long *)(param_1 + 0x90)) >> 3) *
                     0x38e38e39 & 0xfffffffeU)) {
              FUN_00dd7d48(uVar14,5,*(long *)(param_1 + 0x90) + 0x1a0);
              lVar30 = *(long *)(param_1 + 0x90);
              uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 200);
              if (6 < (uint)((int)((ulong)(*(long *)(param_1 + 0x98) - lVar30) >> 3) * 0x38e38e39))
              {
                uVar29 = 6;
                lVar26 = 0x1e8;
                do {
                  FUN_00dd7d48(uVar14,uVar29 & 0xffffffff,lVar30 + lVar26);
                  lVar30 = *(long *)(param_1 + 0x90);
                  uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 200);
                  uVar29 = uVar29 + 1;
                  lVar26 = lVar26 + 0x48;
                } while (uVar29 < (uint)((int)((ulong)(*(long *)(param_1 + 0x98) - lVar30) >> 3) *
                                        0x38e38e39));
              }
            }
          }
        }
      }
    }
  }
  FUN_00dd8920(uVar14,param_1 + 0x48,1);
  lVar30 = *(long *)(param_1 + 0x40);
  uVar11 = (**(code **)(*(long *)(*(long *)(param_1 + 0x38) + 0x30) + 0x40))();
  FUN_00c4db90(*(undefined8 *)(lVar30 + 200),uVar11,0,0,0,0);
  if ((*(uint *)(param_1 + 0x1c4) >> 1 & 1) == 0) {
    return;
  }
  *(uint *)(param_1 + 0x1c4) = *(uint *)(param_1 + 0x1c4) & 0xfffffffd;
  plVar15 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
  (**(code **)(*plVar15 + 0x50))(plVar15,plVar13,2);
  plVar15 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00dd78d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar15 + 0x50))(plVar15,plVar13,4);
  return;
}


