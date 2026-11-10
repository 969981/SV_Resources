/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ac6bb8; name: FUN_01ac6bb8
 */


void FUN_01ac6bb8(undefined8 *param_1)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  int *piVar16;
  long lVar17;
  int iVar18;
  ushort *puVar19;
  bool bVar20;
  short sVar21;
  long lVar22;
  float fVar23;
  float extraout_var;
  float extraout_var_00;
  float fVar25;
  float extraout_var_01;
  undefined1 auVar24 [16];
  undefined8 local_130;
  int local_100;
  ulong local_f8;
  undefined1 local_f0 [16];
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  long *local_80 [2];
  long local_48;
  
  local_d0 = param_1[0x22];
  uStack_c8 = param_1[0x23];
  local_c0 = param_1[0x24];
  plVar14 = (long *)param_1[0x25];
  local_b8 = plVar14;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  if ((code *)param_1[2] == (code *)0x0) {
    local_b0 = (undefined8 *)0x0;
    uStack_a8 = 0;
  }
  else {
    (*(code *)param_1[2])(&local_b0,param_1 + 6,&local_d0);
    plVar14 = local_b8;
  }
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  auVar6._8_8_ = local_f0._8_8_;
  auVar6._0_8_ = local_f0._0_8_;
  auVar5._8_8_ = local_f0._8_8_;
  auVar5._0_8_ = local_f0._0_8_;
  auVar24._8_8_ = local_f0._8_8_;
  auVar24._0_8_ = local_f0._0_8_;
  if (local_b0 != (undefined8 *)0x0) {
    if (*(short *)((long)local_b0 + 0x1a) != 0) {
      if (local_b0 == (undefined8 *)0x0) {
        return;
      }
      local_f0 = auVar24;
      if (*(short *)((long)local_b0 + 0x1a) != 0) {
        psVar1 = (short *)((long)local_b0 + 0x1a);
        sVar21 = *(short *)((long)local_b0 + 0x1a);
LAB_01ac6c58:
        sVar3 = *psVar1;
        if (sVar3 == sVar21) {
          cVar4 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar20) {
            *psVar1 = sVar21 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01ac6c7c;
          bVar20 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01ac6c7c:
          bVar20 = false;
        }
        if (!bVar20) goto code_r0x01ac6c84;
        lVar17 = local_b0[2];
        local_f0 = auVar5;
        if (lVar17 != 0) {
          local_e0 = (undefined8 *)0x0;
          uStack_d8 = 0;
          FUN_00d0a71c(&local_e0,&local_b0);
          lVar10 = FUN_01180e7c(param_1,&local_e0);
          puVar11 = local_e0;
          if (local_e0 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_e0 + 3);
            do {
              sVar21 = *psVar1;
              cVar4 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar20) {
                *psVar1 = sVar21 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar21 == 1) {
              piVar16 = (int *)((long)local_e0 + 0x1c);
              do {
                iVar9 = *piVar16;
                cVar4 = '\x01';
                bVar20 = (bool)ExclusiveMonitorPass(piVar16,0x10);
                if (bVar20) {
                  *piVar16 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar9 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar13 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar13;
                local_130 = *puVar11;
                FUN_00c44438(lVar13 + 0x8040,&local_130);
              }
            }
            else if (sVar21 == 0) goto LAB_01ac71e4;
          }
          if (lVar10 != 0) {
            auVar24 = FUN_0211a080(lVar10);
            local_130 = 0xe76e256fe29c8a7e;
            local_f0 = auVar24;
            puVar11 = (undefined8 *)FUN_01235878(param_1 + 0x2b,&local_130);
            puVar7 = PTR_LAB_047dcdf0;
            *(int *)(puVar11 + 2) = auVar24._4_4_;
            *puVar11 = puVar7;
            local_f8 = 0;
            uVar12 = FUN_0212df4c(local_f0,&local_130);
            if ((uVar12 & 1) == 0) {
LAB_01ac7020:
              FUN_0211a080(lVar10);
              fVar23 = extraout_var_01;
            }
            else {
              fVar23 = local_130._4_4_;
              plVar14 = (long *)(lVar17 + 0xe8);
              lVar22 = *plVar14;
              lVar13 = nn::os::GetCurrentThread();
              if (lVar13 == lVar22) {
                bVar20 = true;
              }
              else {
                lVar13 = nn::os::GetCurrentThread();
                do {
                  if (*plVar14 != 0) {
                    ClearExclusiveLocal();
                    do {
                      nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0xf0));
                      while (*plVar14 == 0) {
                        cVar4 = '\x01';
                        bVar20 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                        if (bVar20) {
                          *plVar14 = lVar13;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                        if (cVar4 == '\0') goto LAB_01ac6d9c;
                      }
                      ClearExclusiveLocal();
                    } while( true );
                  }
                  cVar4 = '\x01';
                  bVar20 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                  if (bVar20) {
                    *plVar14 = lVar13;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
LAB_01ac6d9c:
                bVar20 = false;
              }
              plVar14 = (long *)FUN_0212e030(*(undefined8 *)(lVar17 + 0x100),
                                             *(undefined8 *)(lVar17 + 0x108));
              if ((*(long **)(lVar17 + 0x108) == plVar14) || (*plVar14 == 0)) {
                plVar14 = (long *)FUN_0212e030(*(undefined8 *)(lVar17 + 0x138),
                                               *(undefined8 *)(lVar17 + 0x140));
                if (*(long **)(lVar17 + 0x140) == plVar14) {
                  lVar13 = 0;
                }
                else {
                  lVar13 = 0;
                  if (*plVar14 != 0) {
                    lVar13 = *plVar14 + -0x20;
                  }
                }
              }
              else {
                lVar13 = *plVar14 + -0x20;
              }
              if (!bVar20) {
                *(undefined8 *)(lVar17 + 0xe8) = 0;
                nn::os::SignalLightEvent((LightEventType *)(lVar17 + 0xf0));
              }
              fVar25 = 0.0;
              if (lVar13 != 0) {
                puVar11 = (undefined8 *)FUN_017d6f4c(*(undefined8 *)(lVar13 + 0x1e8));
                plVar14 = (long *)*puVar11;
                if (plVar14 != (long *)0x0) {
                  lVar22 = plVar14[6];
                  if (*(long *)(lVar22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                    nn::diag::detail::AbortImpl
                              ("m_object != nullptr","AddReference",
                               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                               ,0x3d);
                  }
                  psVar1 = (short *)(lVar22 + 0x1a);
                  do {
                    sVar21 = *psVar1;
                    cVar4 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar20) {
                      *psVar1 = sVar21 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (sVar21 == 0) {
                    uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
                    *(undefined8 *)(lVar22 + 8) = uVar15;
                    *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
                  }
                  else if (sVar21 == -1) {
                    /* WARNING: Subroutine does not return */
                    nn::diag::detail::AbortImpl
                              ("count != 0","AddReference",
                               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                               ,0x58,"Reference counter overflows.");
                  }
                  plVar2 = (long *)((long)plVar14 + 0x74);
                  if (local_100 != 2) {
                    plVar2 = plVar14 + 0xd;
                  }
                  switch((int)*plVar2) {
                  case 1:
switchD_01ac6eb8_caseD_1:
                    fVar25 = (float)FUN_017926bc(lVar13);
                    break;
                  case 2:
                    if (local_100 != 2) goto switchD_01ac6eb8_caseD_1;
                    fVar25 = (float)FUN_01fa1c04(lVar13);
                    break;
                  case 3:
                    fVar25 = (float)FUN_01fa1e80(lVar13);
                    break;
                  case 4:
                    FUN_01b2f888(local_80);
                    if (local_80[0] == (long *)0x0) goto switchD_01ac6eb8_default;
                    if (*(short *)((long)local_80[0] + 0x1a) == 0) {
                      fVar25 = 0.0;
                    }
                    else {
                      if (local_80[0] == (long *)0x0) {
                        local_48 = 0;
LAB_01ac6fb8:
                        fVar25 = 0.0;
                      }
                      else {
                        FUN_01d8542c(&local_48);
                        if (local_48 == 0) goto LAB_01ac6fb8;
                        local_a0 = 0x977a40c832048c;
                        pcStack_98 = "loc_eff_airbag_top";
                        local_90 = 0x12;
                        local_88 = (long *)0x0;
                        FUN_01df9928(local_48,&local_a0);
                        FUN_0203598c(local_48);
                        fVar25 = extraout_var - extraout_var_00;
                        if (local_88 != (long *)0x0) {
                          (**(code **)(*local_88 + 0x20))();
                        }
                      }
                      FUN_019c51a8(&local_48);
                    }
                    if (local_80[0] != (long *)0x0) {
                      plVar2 = local_80[0] + 3;
                      do {
                        sVar21 = (short)*plVar2;
                        cVar4 = '\x01';
                        bVar20 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                        if (bVar20) {
                          *(short *)plVar2 = sVar21 + -1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                      if (sVar21 == 1) {
                        piVar16 = (int *)((long)local_80[0] + 0x1c);
                        do {
                          iVar9 = *piVar16;
                          cVar4 = '\x01';
                          bVar20 = (bool)ExclusiveMonitorPass(piVar16,0x10);
                          if (bVar20) {
                            *piVar16 = -1;
                            cVar4 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar4 != '\0');
                        if (iVar9 != -1) {
                          if ((*PTR_DAT_047d3908 & 1) == 0) {
                            iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908);
                            if (iVar9 != 0) {
                              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                              __cxa_guard_release(PTR_DAT_047d3908);
                            }
                          }
                          lVar13 = *(long *)PTR_DAT_047d3910;
                          *(long *)PTR_DAT_047d3918 = lVar13;
                          local_48 = *local_80[0];
                          FUN_00c44438(lVar13 + 0x8040,&local_48);
                        }
                      }
                      else if (sVar21 == 0) goto LAB_01ac71e4;
                    }
                    break;
                  default:
switchD_01ac6eb8_default:
                    fVar25 = 0.0;
                  }
                  lVar13 = plVar14[6];
                  psVar1 = (short *)(lVar13 + 0x1a);
                  do {
                    sVar21 = *psVar1;
                    cVar4 = '\x01';
                    bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar20) {
                      *psVar1 = sVar21 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (sVar21 == 1) {
                    *(undefined8 *)(lVar13 + 0x10) = 0;
                    (**(code **)(*plVar14 + 0x50))(plVar14);
                  }
                  else if (sVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                    nn::diag::detail::AbortImpl
                              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                               ,0x60,"Reference counter underflows.");
                  }
                }
              }
              fVar23 = fVar23 + fVar25;
              if (fVar23 <= 0.0) goto LAB_01ac7020;
            }
            local_a0 = 0xa957e3270a9644aa;
            puVar11 = (undefined8 *)FUN_01235878(param_1 + 0x2b,&local_a0);
            *(float *)(puVar11 + 2) = fVar23;
            *puVar11 = puVar7;
            piVar16 = (int *)*param_1;
            puVar19 = (ushort *)((long)piVar16 - (long)*piVar16);
            if (*puVar19 < 0xb) {
              iVar18 = 0;
              iVar9 = 0;
              iVar8 = 0;
              if (8 < *puVar19) goto LAB_01ac7080;
            }
            else {
              iVar8 = 0;
              if ((ulong)puVar19[5] != 0) {
                iVar8 = *(int *)((long)piVar16 + (ulong)puVar19[5]);
              }
LAB_01ac7080:
              iVar18 = iVar8;
              if ((ulong)puVar19[4] == 0) {
                iVar9 = 0;
              }
              else {
                iVar9 = *(int *)((long)piVar16 + (ulong)puVar19[4]);
              }
            }
            if (iVar18 - iVar9 == 1) {
              *(undefined1 *)(lVar10 + 0xe0) = 1;
              *(undefined8 *)(lVar10 + 0x58) = *(undefined8 *)(lVar10 + 0x58);
              *(ulong *)(lVar10 + 0x50) = CONCAT44(fVar23,(int)*(undefined8 *)(lVar10 + 0x50));
            }
            if ((local_f8 & 1) != 0) {
              (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_f8 - 1,0);
            }
          }
          (**(code **)(*(long *)(lVar17 + -0x28) + 0x60))((long *)(lVar17 + -0x28));
        }
      }
    }
LAB_01ac70e8:
    puVar11 = local_b0;
    if (local_b0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_b0 + 3);
      do {
        sVar21 = *psVar1;
        cVar4 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar20) {
          *psVar1 = sVar21 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar21 == 1) {
        piVar16 = (int *)((long)local_b0 + 0x1c);
        do {
          iVar9 = *piVar16;
          cVar4 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar20) {
            *piVar16 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 != -1) {
          if ((*PTR_DAT_047d3908 & 1) == 0) {
            iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908);
            if (iVar9 != 0) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_130 = *puVar11;
          FUN_00c44438(lVar17 + 0x8040,&local_130);
        }
      }
      else if (sVar21 == 0) {
LAB_01ac71e4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
code_r0x01ac6c84:
  sVar21 = sVar3;
  local_f0 = auVar6;
  if (sVar3 == 0) goto LAB_01ac70e8;
  goto LAB_01ac6c58;
}


