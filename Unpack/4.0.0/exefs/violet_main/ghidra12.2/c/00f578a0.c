/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f578a0; name: FUN_00f578a0
 */


void FUN_00f578a0(long param_1)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  code *UNRECOVERED_JUMPTABLE;
  long lVar15;
  short sVar16;
  long *plVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  
  if (((*(char *)(param_1 + 0xff) == '\0') && (uVar11 = FUN_00f5744c(), (uVar11 & 1) != 0)) &&
     (*(char *)(param_1 + 0xfc) != '\0')) {
    if (*(char *)(param_1 + 0x100) != '\0') {
      lVar15 = *(long *)(param_1 + 0x28);
      if ((lVar15 != 0) && (*(short *)(lVar15 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar15 + 0x1a);
        sVar16 = *(short *)(lVar15 + 0x1a);
LAB_00f57a64:
        sVar4 = *psVar1;
        if (sVar4 == sVar16) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar16 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00f57a88;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00f57a88:
          bVar6 = false;
        }
        if (!bVar6) goto code_r0x00f57a90;
        lVar15 = *(long *)(lVar15 + 0x10);
        if (lVar15 != 0) {
          plVar12 = (long *)(lVar15 + -0x28);
          iVar10 = *(int *)(lVar15 + 0x40);
          lVar15 = *(long *)(lVar15 + 8);
          psVar1 = (short *)(lVar15 + 0x1a);
          do {
            sVar16 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 != 1) {
            if (sVar16 == 1) {
              *(undefined8 *)(lVar15 + 0x10) = 0;
              (**(code **)(*plVar12 + 0x50))();
            }
            else if (sVar16 == 0) goto LAB_00f57dfc;
            goto LAB_00f578ec;
          }
          goto LAB_00f57b54;
        }
      }
LAB_00f578ec:
      lVar15 = *(long *)(param_1 + 0x38);
      if ((lVar15 != 0) && (*(short *)(lVar15 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar15 + 0x1a);
        sVar16 = *(short *)(lVar15 + 0x1a);
LAB_00f57aac:
        sVar4 = *psVar1;
        if (sVar4 == sVar16) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar16 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00f57ad0;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00f57ad0:
          bVar6 = false;
        }
        if (!bVar6) goto code_r0x00f57ad8;
        lVar15 = *(long *)(lVar15 + 0x10);
        if (lVar15 != 0) {
          plVar12 = (long *)(lVar15 + -0x28);
          iVar10 = *(int *)(lVar15 + 0x40);
          lVar15 = *(long *)(lVar15 + 8);
          psVar1 = (short *)(lVar15 + 0x1a);
          do {
            sVar16 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 != 1) {
            if (sVar16 == 1) {
              *(undefined8 *)(lVar15 + 0x10) = 0;
              (**(code **)(*plVar12 + 0x50))();
            }
            else if (sVar16 == 0) goto LAB_00f57dfc;
            goto LAB_00f578f4;
          }
LAB_00f57b54:
          if (sVar16 == 1) {
            *(undefined8 *)(lVar15 + 0x10) = 0;
            UNRECOVERED_JUMPTABLE = *(code **)(*plVar12 + 0x50);
            goto LAB_00f5801c;
          }
          goto LAB_00f57d6c;
        }
      }
    }
LAB_00f578f4:
    switch(*(undefined4 *)(param_1 + 0x50)) {
    case 1:
      lVar15 = *(long *)(param_1 + 0x58);
      if ((lVar15 != 0) && (*(short *)(lVar15 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar15 + 0x1a);
        sVar16 = *(short *)(lVar15 + 0x1a);
LAB_00f57ee4:
        sVar4 = *psVar1;
        if (sVar4 == sVar16) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar16 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00f57f08;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00f57f08:
          bVar6 = false;
        }
        if (!bVar6) goto code_r0x00f57f10;
        lVar15 = *(long *)(lVar15 + 0x10);
        if (lVar15 == 0) goto LAB_00f57924;
        plVar12 = (long *)(lVar15 + -0x28);
        if (**(char **)(param_1 + 0x70) == '\0') {
          if (((*(char *)(param_1 + 0xa0) == '\0') ||
              (lVar13 = *(long *)(param_1 + 0x28), lVar13 == 0)) || (*(short *)(lVar13 + 0x1a) == 0)
             ) goto LAB_00f57fe8;
          psVar1 = (short *)(lVar13 + 0x1a);
          sVar16 = *(short *)(lVar13 + 0x1a);
          goto LAB_00f580b8;
        }
        lVar13 = FUN_01104bd8(lVar15 + 0xe0,&local_90);
        if ((lVar13 == 0) || (plVar18 = *(long **)(lVar13 + 0x138), plVar18 == (long *)0x0))
        goto LAB_00f57ff8;
        plVar17 = plVar18 + 5;
        do {
          lVar14 = *plVar17;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = (int)lVar14 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((int)lVar14 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
        if (*(int *)(lVar13 + 0x130) == 2) {
          if (((*(char *)(param_1 + 0xa0) != '\0') &&
              (lVar13 = *(long *)(param_1 + 0x28), lVar13 != 0)) && (*(short *)(lVar13 + 0x1a) != 0)
             ) {
            psVar1 = (short *)(lVar13 + 0x1a);
            sVar16 = *(short *)(lVar13 + 0x1a);
            do {
              sVar4 = *psVar1;
              if (sVar4 == sVar16) {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar6) {
                  *psVar1 = sVar16 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 != '\0') goto LAB_00f583d8;
                bVar6 = true;
              }
              else {
                ClearExclusiveLocal();
LAB_00f583d8:
                bVar6 = false;
              }
              if (bVar6) {
                lVar13 = *(long *)(lVar13 + 0x10);
                if (lVar13 != 0) {
                  plVar2 = (long *)(lVar13 + 0x18);
                  lVar14 = nn::os::GetCurrentThread();
                  do {
                    if (*plVar2 != 0) {
                      ClearExclusiveLocal();
                      do {
                        nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x20));
                        while (*plVar2 == 0) {
                          cVar5 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                          if (bVar6) {
                            *plVar2 = lVar14;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                          if (cVar5 == '\0') goto LAB_00f58460;
                        }
                        ClearExclusiveLocal();
                      } while( true );
                    }
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                    if (bVar6) {
                      *plVar2 = lVar14;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
LAB_00f58460:
                  cVar5 = *(char *)(lVar13 + 0x3c);
                  *(undefined8 *)(lVar13 + 0x18) = 0;
                  nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x20));
                  if (cVar5 == '\0') {
                    (**(code **)(*(long *)(lVar15 + -0x28) + 0x18))(&local_90,plVar12);
                    local_c0 = (undefined8 *)0x0;
                    uStack_b8 = 0;
                    if (local_90[2] == lVar15) {
                      FUN_00c9ea00(&local_c0,&local_90);
                    }
                    puVar9 = local_90;
                    puVar8 = PTR_DAT_047d3910;
                    puVar7 = PTR_DAT_047d3908;
                    if (local_90 != (undefined8 *)0x0) {
                      psVar1 = (short *)(local_90 + 3);
                      do {
                        sVar16 = *psVar1;
                        cVar5 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                        if (bVar6) {
                          *psVar1 = sVar16 + -1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if (sVar16 == 1) {
                        piVar3 = (int *)((long)local_90 + 0x1c);
                        do {
                          iVar10 = *piVar3;
                          cVar5 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                          if (bVar6) {
                            *piVar3 = -1;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        if (iVar10 != -1) {
                          if (((*puVar7 & 1) == 0) &&
                             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                            __cxa_guard_release(PTR_DAT_047d3908);
                          }
                          lVar14 = *(long *)puVar8;
                          *(long *)PTR_DAT_047d3918 = lVar14;
                          local_70 = (undefined8 *)*puVar9;
                          FUN_00c44438(lVar14 + 0x8040,&local_70);
                        }
                      }
                      else if (sVar16 == 0) goto LAB_00f58c60;
                    }
                    FUN_01420578(*(undefined8 *)(param_1 + 0x90),(long *)(lVar13 + -0x28),&local_c0,
                                 param_1 + 0x68,0);
                    puVar9 = local_c0;
                    if (local_c0 != (undefined8 *)0x0) {
                      psVar1 = (short *)(local_c0 + 3);
                      do {
                        sVar16 = *psVar1;
                        cVar5 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                        if (bVar6) {
                          *psVar1 = sVar16 + -1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if (sVar16 == 1) {
                        piVar3 = (int *)((long)local_c0 + 0x1c);
                        do {
                          iVar10 = *piVar3;
                          cVar5 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                          if (bVar6) {
                            *piVar3 = -1;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        if (iVar10 != -1) {
                          if (((*puVar7 & 1) == 0) &&
                             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                            __cxa_guard_release(PTR_DAT_047d3908);
                          }
                          lVar14 = *(long *)puVar8;
                          *(long *)PTR_DAT_047d3918 = lVar14;
                          local_90 = (undefined8 *)*puVar9;
                          FUN_00c44438(lVar14 + 0x8040,&local_90);
                        }
                      }
                      else if (sVar16 == 0) goto LAB_00f58c60;
                    }
                  }
                  lVar14 = *(long *)(lVar13 + 8);
                  psVar1 = (short *)(lVar14 + 0x1a);
                  do {
                    sVar16 = *psVar1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar6) {
                      *psVar1 = sVar16 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (sVar16 == 1) {
                    *(undefined8 *)(lVar14 + 0x10) = 0;
                    (**(code **)(*(long *)(lVar13 + -0x28) + 0x50))();
                  }
                  else if (sVar16 == 0) goto LAB_00f57dfc;
                }
                break;
              }
              sVar16 = sVar4;
            } while (sVar4 != 0);
          }
          if (((*(char *)(param_1 + 0xa1) != '\0') &&
              (lVar13 = *(long *)(param_1 + 0x38), lVar13 != 0)) && (*(short *)(lVar13 + 0x1a) != 0)
             ) {
            psVar1 = (short *)(lVar13 + 0x1a);
            sVar16 = *(short *)(lVar13 + 0x1a);
            do {
              sVar4 = *psVar1;
              if (sVar4 == sVar16) {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar6) {
                  *psVar1 = sVar16 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 != '\0') goto LAB_00f58420;
                bVar6 = true;
              }
              else {
                ClearExclusiveLocal();
LAB_00f58420:
                bVar6 = false;
              }
              if (bVar6) {
                lVar13 = *(long *)(lVar13 + 0x10);
                if (lVar13 != 0) {
                  plVar2 = (long *)(lVar13 + 0x18);
                  lVar14 = nn::os::GetCurrentThread();
                  do {
                    if (*plVar2 != 0) {
                      ClearExclusiveLocal();
                      do {
                        nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x20));
                        while (*plVar2 == 0) {
                          cVar5 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                          if (bVar6) {
                            *plVar2 = lVar14;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                          if (cVar5 == '\0') goto LAB_00f58514;
                        }
                        ClearExclusiveLocal();
                      } while( true );
                    }
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                    if (bVar6) {
                      *plVar2 = lVar14;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
LAB_00f58514:
                  cVar5 = *(char *)(lVar13 + 0x3c);
                  *(undefined8 *)(lVar13 + 0x18) = 0;
                  nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x20));
                  if (cVar5 == '\0') {
                    (**(code **)(*(long *)(lVar15 + -0x28) + 0x18))(&local_90,plVar12);
                    local_d0 = (undefined8 *)0x0;
                    uStack_c8 = 0;
                    if (local_90[2] == lVar15) {
                      FUN_00c9ea00(&local_d0,&local_90);
                    }
                    puVar9 = local_90;
                    if (local_90 != (undefined8 *)0x0) {
                      psVar1 = (short *)(local_90 + 3);
                      do {
                        sVar16 = *psVar1;
                        cVar5 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                        if (bVar6) {
                          *psVar1 = sVar16 + -1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if (sVar16 == 1) {
                        piVar3 = (int *)((long)local_90 + 0x1c);
                        do {
                          iVar10 = *piVar3;
                          cVar5 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                          if (bVar6) {
                            *piVar3 = -1;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        if (iVar10 != -1) {
                          if (((*PTR_DAT_047d3908 & 1) == 0) &&
                             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                            __cxa_guard_release(PTR_DAT_047d3908);
                          }
                          lVar15 = *(long *)PTR_DAT_047d3910;
                          *(long *)PTR_DAT_047d3918 = lVar15;
                          local_70 = (undefined8 *)*puVar9;
                          FUN_00c44438(lVar15 + 0x8040,&local_70);
                        }
                      }
                      else if (sVar16 == 0) goto LAB_00f58c60;
                    }
                    FUN_01420578(*(undefined8 *)(param_1 + 0x90),(long *)(lVar13 + -0x28),&local_d0,
                                 param_1 + 0x68,1);
                    puVar9 = local_d0;
                    if (local_d0 != (undefined8 *)0x0) {
                      psVar1 = (short *)(local_d0 + 3);
                      do {
                        sVar16 = *psVar1;
                        cVar5 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                        if (bVar6) {
                          *psVar1 = sVar16 + -1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if (sVar16 == 1) {
                        piVar3 = (int *)((long)local_d0 + 0x1c);
                        do {
                          iVar10 = *piVar3;
                          cVar5 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                          if (bVar6) {
                            *piVar3 = -1;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        if (iVar10 != -1) {
                          if (((*PTR_DAT_047d3908 & 1) == 0) &&
                             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                            __cxa_guard_release(PTR_DAT_047d3908);
                          }
                          lVar15 = *(long *)PTR_DAT_047d3910;
                          *(long *)PTR_DAT_047d3918 = lVar15;
                          local_90 = (undefined8 *)*puVar9;
                          FUN_00c44438(lVar15 + 0x8040,&local_90);
                        }
                      }
                      else if (sVar16 == 0) goto LAB_00f58c60;
                    }
                  }
                  lVar15 = *(long *)(lVar13 + 8);
                  psVar1 = (short *)(lVar15 + 0x1a);
                  do {
                    sVar16 = *psVar1;
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar6) {
                      *psVar1 = sVar16 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (sVar16 == 1) {
                    *(undefined8 *)(lVar15 + 0x10) = 0;
                    (**(code **)(*(long *)(lVar13 + -0x28) + 0x50))();
                  }
                  else if (sVar16 == 0) goto LAB_00f57dfc;
                }
                break;
              }
              sVar16 = sVar4;
            } while (sVar4 != 0);
          }
        }
        do {
          lVar15 = *plVar17;
          iVar10 = (int)lVar15 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = iVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 != 0) {
          if ((int)lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
          goto LAB_00f57ff8;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar18 + 0x10);
        goto LAB_00f5809c;
      }
LAB_00f57924:
      *(undefined4 *)(param_1 + 0x50) = 0;
      break;
    case 2:
      if (((*(char *)(param_1 + 0xa0) != '\0') && (lVar15 = *(long *)(param_1 + 0x28), lVar15 != 0))
         && (*(short *)(lVar15 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar15 + 0x1a);
        sVar16 = *(short *)(lVar15 + 0x1a);
LAB_00f57b7c:
        sVar4 = *psVar1;
        if (sVar4 == sVar16) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar16 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00f57ba0;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00f57ba0:
          bVar6 = false;
        }
        if (!bVar6) goto code_r0x00f57ba8;
        lVar15 = *(long *)(lVar15 + 0x10);
        if (lVar15 != 0) {
          plVar12 = (long *)(lVar15 + 0x18);
          lVar13 = nn::os::GetCurrentThread();
          do {
            if (*plVar12 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x20));
                while (*plVar12 == 0) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                  if (bVar6) {
                    *plVar12 = lVar13;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_00f57bdc;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar6) {
              *plVar12 = lVar13;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_00f57bdc:
          cVar5 = *(char *)(lVar15 + 0x3c);
          *(undefined8 *)(lVar15 + 0x18) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x20));
          if (cVar5 == '\0') {
            uVar20 = *(undefined8 *)(param_1 + 0x98);
            uVar19 = *(undefined8 *)(param_1 + 0x90);
            *(undefined4 *)(lVar15 + 0x44) = 2;
            *(undefined8 *)(lVar15 + 0xe0) = uVar20;
            *(undefined8 *)(lVar15 + 0xd8) = uVar19;
          }
          lVar13 = *(long *)(lVar15 + 8);
          psVar1 = (short *)(lVar13 + 0x1a);
          do {
            sVar16 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar16 == 1) {
            *(undefined8 *)(lVar13 + 0x10) = 0;
            (**(code **)(*(long *)(lVar15 + -0x28) + 0x50))((long *)(lVar15 + -0x28));
          }
          else if (sVar16 == 0) goto LAB_00f57dfc;
        }
      }
LAB_00f579c8:
      if (((*(char *)(param_1 + 0xa1) != '\0') && (lVar15 = *(long *)(param_1 + 0x38), lVar15 != 0))
         && (*(short *)(lVar15 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar15 + 0x1a);
        sVar16 = *(short *)(lVar15 + 0x1a);
        do {
          sVar4 = *psVar1;
          if (sVar4 == sVar16) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar16 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 != '\0') goto LAB_00f57a0c;
            bVar6 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00f57a0c:
            bVar6 = false;
          }
          if (bVar6) {
            lVar15 = *(long *)(lVar15 + 0x10);
            if (lVar15 == 0) {
              return;
            }
            plVar12 = (long *)(lVar15 + -0x28);
            plVar17 = (long *)(lVar15 + 0x18);
            lVar13 = nn::os::GetCurrentThread();
            do {
              if (*plVar17 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x20));
                  while (*plVar17 == 0) {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                    if (bVar6) {
                      *plVar17 = lVar13;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                    if (cVar5 == '\0') goto LAB_00f57c44;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *plVar17 = lVar13;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
LAB_00f57c44:
            cVar5 = *(char *)(lVar15 + 0x3c);
            *(undefined8 *)(lVar15 + 0x18) = 0;
            nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x20));
            if (cVar5 == '\0') {
              uVar19 = *(undefined8 *)(param_1 + 0x90);
              *(undefined8 *)(lVar15 + 0x1b0) = *(undefined8 *)(param_1 + 0x98);
              *(undefined8 *)(lVar15 + 0x1a8) = uVar19;
              *(undefined4 *)(lVar15 + 0x44) = 2;
            }
            lVar15 = *(long *)(lVar15 + 8);
            psVar1 = (short *)(lVar15 + 0x1a);
            do {
              sVar16 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
LAB_00f57d64:
            if (sVar16 == 1) {
              *(undefined8 *)(lVar15 + 0x10) = 0;
              UNRECOVERED_JUMPTABLE = *(code **)(*plVar12 + 0x50);
LAB_00f5801c:
                    /* WARNING: Could not recover jumptable at 0x00f58038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE)(plVar12);
              return;
            }
LAB_00f57d6c:
            if (sVar16 != 0) {
              return;
            }
            goto LAB_00f57dfc;
          }
          sVar16 = sVar4;
        } while (sVar4 != 0);
      }
      break;
    case 3:
      FUN_02a1cde0(param_1);
      return;
    case 4:
      if (((*(char *)(param_1 + 0xa0) != '\0') && (lVar15 = *(long *)(param_1 + 0x28), lVar15 != 0))
         && (*(short *)(lVar15 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar15 + 0x1a);
        sVar16 = *(short *)(lVar15 + 0x1a);
LAB_00f57c9c:
        sVar4 = *psVar1;
        if (sVar4 == sVar16) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar16 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00f57cc0;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00f57cc0:
          bVar6 = false;
        }
        if (!bVar6) goto code_r0x00f57cc8;
        lVar15 = *(long *)(lVar15 + 0x10);
        if (lVar15 != 0) {
          plVar17 = (long *)(lVar15 + -0x28);
          plVar12 = (long *)(lVar15 + 0x18);
          lVar13 = nn::os::GetCurrentThread();
          do {
            if (*plVar12 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x20));
                while (*plVar12 == 0) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                  if (bVar6) {
                    *plVar12 = lVar13;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_00f57d9c;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar6) {
              *plVar12 = lVar13;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_00f57d9c:
          cVar5 = *(char *)(lVar15 + 0x3c);
          *(undefined8 *)(lVar15 + 0x18) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x20));
          if (cVar5 == '\0') {
            FUN_01f87bd4(*(undefined8 *)(param_1 + 0x90),
                         (int)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20),plVar17,0);
          }
          lVar15 = *(long *)(lVar15 + 8);
          psVar1 = (short *)(lVar15 + 0x1a);
          do {
            sVar16 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar16 == 1) {
            *(undefined8 *)(lVar15 + 0x10) = 0;
            (**(code **)(*plVar17 + 0x50))(plVar17);
          }
          else if (sVar16 == 0) goto LAB_00f57dfc;
        }
      }
LAB_00f57960:
      if (((*(char *)(param_1 + 0xa1) != '\0') && (lVar15 = *(long *)(param_1 + 0x38), lVar15 != 0))
         && (*(short *)(lVar15 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar15 + 0x1a);
        sVar16 = *(short *)(lVar15 + 0x1a);
LAB_00f57980:
        sVar4 = *psVar1;
        if (sVar4 == sVar16) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar16 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00f579a4;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00f579a4:
          bVar6 = false;
        }
        if (!bVar6) goto code_r0x00f579ac;
        lVar15 = *(long *)(lVar15 + 0x10);
        if (lVar15 == 0) {
          return;
        }
        plVar12 = (long *)(lVar15 + -0x28);
        plVar17 = (long *)(lVar15 + 0x18);
        lVar13 = nn::os::GetCurrentThread();
        do {
          if (*plVar17 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0x20));
              while (*plVar17 == 0) {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar6) {
                  *plVar17 = lVar13;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') goto LAB_00f57cfc;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = lVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
LAB_00f57cfc:
        cVar5 = *(char *)(lVar15 + 0x3c);
        *(undefined8 *)(lVar15 + 0x18) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar15 + 0x20));
        if ((cVar5 == '\0') &&
           (1 < (int)((ulong)(*(long *)(lVar15 + 0x280) - *(long *)(lVar15 + 0x278)) >> 4) *
                -0x3030303)) {
          FUN_01f87bd4(*(undefined8 *)(param_1 + 0x90),
                       (int)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20),plVar12,1);
        }
        lVar15 = *(long *)(lVar15 + 8);
        psVar1 = (short *)(lVar15 + 0x1a);
        do {
          sVar16 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        goto LAB_00f57d64;
      }
      break;
    default:
      if (*(char *)(param_1 + 0xff) == '\0') {
        *(undefined1 *)(param_1 + 0xfe) = 0;
        *(undefined2 *)(param_1 + 0xfc) = 0x100;
      }
    }
  }
  return;
code_r0x00f57a90:
  sVar16 = sVar4;
  if (sVar4 == 0) goto LAB_00f578ec;
  goto LAB_00f57a64;
code_r0x00f57ad8:
  sVar16 = sVar4;
  if (sVar4 == 0) goto LAB_00f578f4;
  goto LAB_00f57aac;
code_r0x00f57cc8:
  sVar16 = sVar4;
  if (sVar4 == 0) goto LAB_00f57960;
  goto LAB_00f57c9c;
code_r0x00f579ac:
  sVar16 = sVar4;
  if (sVar4 == 0) {
    return;
  }
  goto LAB_00f57980;
code_r0x00f57ba8:
  sVar16 = sVar4;
  if (sVar4 == 0) goto LAB_00f579c8;
  goto LAB_00f57b7c;
code_r0x00f57f10:
  sVar16 = sVar4;
  if (sVar4 == 0) goto LAB_00f57924;
  goto LAB_00f57ee4;
  while (sVar16 = sVar4, sVar4 != 0) {
LAB_00f580b8:
    sVar4 = *psVar1;
    if (sVar4 == sVar16) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_00f580dc;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00f580dc:
      bVar6 = false;
    }
    if (bVar6) {
      lVar13 = *(long *)(lVar13 + 0x10);
      if (lVar13 != 0) {
        plVar18 = (long *)(lVar13 + -0x28);
        plVar17 = (long *)(lVar13 + 0x18);
        lVar14 = nn::os::GetCurrentThread();
        do {
          if (*plVar17 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x20));
              while (*plVar17 == 0) {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar6) {
                  *plVar17 = lVar14;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') goto LAB_00f58160;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = lVar14;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
LAB_00f58160:
        cVar5 = *(char *)(lVar13 + 0x3c);
        *(undefined8 *)(lVar13 + 0x18) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x20));
        if (cVar5 == '\0') {
          (**(code **)(*(long *)(lVar15 + -0x28) + 0x18))(&local_90,plVar12);
          local_a0 = (undefined8 *)0x0;
          uStack_98 = 0;
          if (local_90[2] == lVar15) {
            FUN_00c9ea00(&local_a0,&local_90);
          }
          if (local_90 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_90 + 3);
            do {
              sVar16 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar16 == 1) {
              piVar3 = (int *)((long)local_90 + 0x1c);
              do {
                iVar10 = *piVar3;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar6) {
                  *piVar3 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar10 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar14 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar14;
                local_70 = (undefined8 *)*local_90;
                FUN_00c44438(lVar14 + 0x8040,&local_70);
              }
            }
            else if (sVar16 == 0) goto LAB_00f58c60;
          }
          uVar19 = *(undefined8 *)(param_1 + 0x90);
          local_70 = (undefined8 *)0x0;
          uStack_68 = 0;
          FUN_00d0a71c(&local_70,&local_a0);
          local_90 = (undefined8 *)&DAT_cbf29ce484222645;
          puStack_88 = &DAT_03c886bc;
          local_80 = 0;
          local_78 = (long *)0x0;
          FUN_01420578(uVar19,plVar18,&local_70,&local_90,0);
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
          }
          puVar9 = local_70;
          if (local_70 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_70 + 3);
            do {
              sVar16 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar16 == 1) {
              piVar3 = (int *)((long)local_70 + 0x1c);
              do {
                iVar10 = *piVar3;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar6) {
                  *piVar3 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar10 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar14 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar14;
                local_90 = (undefined8 *)*puVar9;
                FUN_00c44438(lVar14 + 0x8040,&local_90);
              }
            }
            else if (sVar16 == 0) goto LAB_00f58c60;
          }
          puVar9 = local_a0;
          if (local_a0 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_a0 + 3);
            do {
              sVar16 = *psVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar16 == 1) {
              piVar3 = (int *)((long)local_a0 + 0x1c);
              do {
                iVar10 = *piVar3;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar6) {
                  *piVar3 = -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar10 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar14 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar14;
                local_90 = (undefined8 *)*puVar9;
                FUN_00c44438(lVar14 + 0x8040,&local_90);
              }
            }
            else if (sVar16 == 0) goto LAB_00f58c60;
          }
        }
        lVar13 = *(long *)(lVar13 + 8);
        psVar1 = (short *)(lVar13 + 0x1a);
        do {
          sVar16 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar16 == 1) {
          *(undefined8 *)(lVar13 + 0x10) = 0;
          (**(code **)(*plVar18 + 0x50))(plVar18);
        }
        else if (sVar16 == 0) goto LAB_00f57dfc;
      }
      break;
    }
  }
LAB_00f57fe8:
  if (((*(char *)(param_1 + 0xa1) == '\0') || (lVar13 = *(long *)(param_1 + 0x38), lVar13 == 0)) ||
     (*(short *)(lVar13 + 0x1a) == 0)) goto LAB_00f57ff8;
  psVar1 = (short *)(lVar13 + 0x1a);
  sVar16 = *(short *)(lVar13 + 0x1a);
  do {
    sVar4 = *psVar1;
    if (sVar4 == sVar16) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_00f58124;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00f58124:
      bVar6 = false;
    }
    if (bVar6) {
      lVar13 = *(long *)(lVar13 + 0x10);
      if (lVar13 == 0) goto LAB_00f57ff8;
      plVar18 = (long *)(lVar13 + -0x28);
      plVar17 = (long *)(lVar13 + 0x18);
      lVar14 = nn::os::GetCurrentThread();
      do {
        if (*plVar17 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x20));
            while (*plVar17 == 0) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar6) {
                *plVar17 = lVar14;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_00f58260;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar6) {
          *plVar17 = lVar14;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_00f58260:
      cVar5 = *(char *)(lVar13 + 0x3c);
      *(undefined8 *)(lVar13 + 0x18) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x20));
      if (cVar5 == '\0') {
        (**(code **)(*(long *)(lVar15 + -0x28) + 0x18))(&local_90,plVar12);
        local_b0 = (undefined8 *)0x0;
        uStack_a8 = 0;
        if (local_90[2] == lVar15) {
          FUN_00c9ea00(&local_b0,&local_90);
        }
        puVar9 = local_90;
        if (local_90 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_90 + 3);
          do {
            sVar16 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar16 == 1) {
            piVar3 = (int *)((long)local_90 + 0x1c);
            do {
              iVar10 = *piVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar6) {
                *piVar3 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar10 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar15 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar15;
              local_70 = (undefined8 *)*puVar9;
              FUN_00c44438(lVar15 + 0x8040,&local_70);
            }
          }
          else if (sVar16 == 0) goto LAB_00f58c60;
        }
        uVar19 = *(undefined8 *)(param_1 + 0x90);
        local_70 = (undefined8 *)0x0;
        uStack_68 = 0;
        FUN_00d0a71c(&local_70,&local_b0);
        local_90 = (undefined8 *)&DAT_cbf29ce484222645;
        puStack_88 = &DAT_03c886bc;
        local_80 = 0;
        local_78 = (long *)0x0;
        FUN_01420578(uVar19,plVar18,&local_70,&local_90,1);
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x20))();
        }
        puVar9 = local_70;
        if (local_70 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_70 + 3);
          do {
            sVar16 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar16 == 1) {
            piVar3 = (int *)((long)local_70 + 0x1c);
            do {
              iVar10 = *piVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar6) {
                *piVar3 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar10 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar15 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar15;
              local_90 = (undefined8 *)*puVar9;
              FUN_00c44438(lVar15 + 0x8040,&local_90);
            }
          }
          else if (sVar16 == 0) goto LAB_00f58c60;
        }
        puVar9 = local_b0;
        if (local_b0 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_b0 + 3);
          do {
            sVar16 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar16 == 1) {
            piVar3 = (int *)((long)local_b0 + 0x1c);
            do {
              iVar10 = *piVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar6) {
                *piVar3 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar10 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar15 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar15;
              local_90 = (undefined8 *)*puVar9;
              FUN_00c44438(lVar15 + 0x8040,&local_90);
            }
          }
          else if (sVar16 == 0) {
LAB_00f58c60:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
      }
      lVar15 = *(long *)(lVar13 + 8);
      psVar1 = (short *)(lVar15 + 0x1a);
      do {
        sVar16 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar16 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar16 == 1) {
        *(undefined8 *)(lVar15 + 0x10) = 0;
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar18 + 0x50);
LAB_00f5809c:
        (*UNRECOVERED_JUMPTABLE)(plVar18);
      }
      else if (sVar16 == 0) {
LAB_00f57dfc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      goto LAB_00f57ff8;
    }
    sVar16 = sVar4;
    if (sVar4 == 0) {
LAB_00f57ff8:
      (**(code **)(*plVar12 + 0x60))(plVar12);
      return;
    }
  } while( true );
}


