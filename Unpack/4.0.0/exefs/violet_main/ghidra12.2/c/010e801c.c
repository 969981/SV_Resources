/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010e801c; name: FUN_010e801c
 */


void FUN_010e801c(long param_1)

{
  short *psVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  short sVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  bool bVar14;
  short sVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  long *local_80 [3];
  long *local_68;
  
  if (((*(int *)(param_1 + 0x128) == 4) && (lVar9 = *(long *)(param_1 + 400), lVar9 != 0)) &&
     (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar15 = *(short *)(lVar9 + 0x1a);
    do {
      sVar5 = *psVar1;
      if (sVar5 == sVar15) {
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar14) {
          *psVar1 = sVar15 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_010e80a8;
        bVar14 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_010e80a8:
        bVar14 = false;
      }
      if (bVar14) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          return;
        }
        plVar19 = (long *)(lVar9 + -0x28);
        if (*(int *)(lVar9 + 0x108) == 3) {
          FUN_00d8fb98(local_80,PTR_DAT_047d9c48);
          puVar8 = (undefined8 *)FUN_00cb7028(plVar19,local_80);
          plVar16 = (long *)*puVar8;
          if (plVar16 != (long *)0x0) {
            plVar20 = plVar16 + 5;
            do {
              lVar9 = *plVar20;
              cVar6 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar14) {
                *(int *)plVar20 = (int)lVar9 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((int)lVar9 == -1) {
LAB_010e8460:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","IncrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                         ,0x53,"Reference counter overflows.");
            }
          }
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
          plVar4 = (long *)plVar16[0x1b];
          for (plVar20 = (long *)plVar16[0x1a]; plVar20 != plVar4; plVar20 = plVar20 + 1) {
            lVar10 = *plVar20;
            for (lVar9 = *(long *)(lVar10 + 0x70); lVar9 != lVar10 + 0x68;
                lVar9 = *(long *)(lVar9 + 8)) {
              lVar11 = *(long *)(lVar9 + 0x10);
              if ((int)((ulong)(*(long *)(lVar11 + 0x58) - *(long *)(lVar11 + 0x50)) >> 3) != 0) {
                uVar21 = 0;
                do {
                  plVar17 = *(long **)(*(long *)(lVar11 + 0x50) + uVar21 * 8);
                  if (plVar17 != (long *)0x0) {
                    plVar2 = plVar17 + 5;
                    do {
                      lVar11 = *plVar2;
                      cVar6 = '\x01';
                      bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                      if (bVar14) {
                        *(int *)plVar2 = (int)lVar11 + 1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if ((int)lVar11 == -1) goto LAB_010e8460;
                  }
                  local_80[0] = *(long **)(*(long *)(param_1 + 0x130) + 0x40);
                  if (local_80[0] != (long *)0x0) {
                    plVar2 = local_80[0] + 5;
                    do {
                      lVar11 = *plVar2;
                      cVar6 = '\x01';
                      bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                      if (bVar14) {
                        *(int *)plVar2 = (int)lVar11 + 1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if ((int)lVar11 == -1) goto LAB_010e8460;
                    if (local_80[0] != (long *)0x0) {
                      plVar2 = plVar17 + 0xe;
                      lVar11 = nn::os::GetCurrentThread();
                      do {
                        lVar12 = *plVar2;
                        lVar13 = plVar17[0xf];
                        cVar6 = '\x01';
                        bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                        if (bVar14) {
                          *plVar2 = lVar12;
                          plVar17[0xf] = lVar13;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
LAB_010e81dc:
                      while ((lVar12 != 0 && (lVar11 != lVar12))) {
                        nn::os::WaitLightEvent((LightEventType *)(plVar17 + 0x10));
                        do {
                          lVar12 = *plVar2;
                          lVar13 = plVar17[0xf];
                          cVar6 = '\x01';
                          bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                          if (bVar14) {
                            *plVar2 = lVar12;
                            plVar17[0xf] = lVar13;
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                      }
                      do {
                        lVar3 = *plVar2;
                        if (lVar3 != lVar12 || plVar17[0xf] != lVar13) {
                          bVar14 = false;
                          ClearExclusiveLocal();
                          goto LAB_010e8218;
                        }
                        cVar6 = '\x01';
                        bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                        if (bVar14) {
                          *plVar2 = lVar12;
                          *(long *)((long)plVar17 + 0x74) = lVar13 + 1;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      bVar14 = true;
LAB_010e8218:
                      if (!bVar14) {
                        lVar12 = lVar3;
                        lVar13 = plVar17[0xf];
                        goto LAB_010e81dc;
                      }
                      if ((int)((ulong)(plVar17[7] - plVar17[6]) >> 3) != 0) {
                        FUN_00d101e0(*(undefined8 *)(*(long *)plVar17[6] + 200),1,0,local_80);
                        if ((plVar17[7] - plVar17[6] & 0x7fffffff0U) != 0) {
                          FUN_00d101e0(*(undefined8 *)(*(long *)(plVar17[6] + 8) + 200),1,0,local_80
                                      );
                          lVar11 = plVar17[6];
                          if (0x10 < (plVar17[7] - lVar11 & 0x7fffffff8U)) {
                            uVar18 = 2;
                            do {
                              FUN_00d101e0(*(undefined8 *)(*(long *)(lVar11 + uVar18 * 8) + 200),1,0
                                           ,local_80);
                              lVar11 = plVar17[6];
                              uVar18 = uVar18 + 1;
                            } while (uVar18 < ((ulong)(plVar17[7] - lVar11) >> 3 & 0xffffffff));
                          }
                        }
                      }
                      do {
                        lVar11 = *plVar2;
                        lVar12 = plVar17[0xf];
                        cVar6 = '\x01';
                        bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                        if (bVar14) {
                          *plVar2 = lVar11;
                          plVar17[0xf] = lVar12;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      do {
                        lVar13 = *plVar2;
                        lVar3 = plVar17[0xf];
                        if (lVar13 != lVar11 || lVar3 != lVar12) {
                          bVar14 = false;
                          ClearExclusiveLocal();
                          goto joined_r0x010e82d8;
                        }
                        cVar6 = '\x01';
                        bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                        if (bVar14) {
                          *plVar2 = lVar11;
                          *(long *)((long)plVar17 + 0x74) = lVar12 + -1;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      bVar14 = true;
joined_r0x010e82d8:
                      if (!bVar14) {
                        do {
                          lVar11 = *plVar2;
                          lVar12 = plVar17[0xf];
                          if (lVar11 != lVar13 || lVar12 != lVar3) {
                            bVar14 = false;
                            ClearExclusiveLocal();
                            lVar13 = lVar11;
                            lVar3 = lVar12;
                            goto joined_r0x010e82d8;
                          }
                          cVar6 = '\x01';
                          bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                          if (bVar14) {
                            *plVar2 = lVar13;
                            *(long *)((long)plVar17 + 0x74) = lVar3 + -1;
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                        bVar14 = true;
                        lVar13 = lVar11;
                        lVar3 = lVar12;
                        goto joined_r0x010e82d8;
                      }
                      nn::os::SignalLightEvent((LightEventType *)(plVar17 + 0x10));
                      if (local_80[0] != (long *)0x0) {
                        plVar2 = local_80[0] + 5;
                        do {
                          lVar11 = *plVar2;
                          iVar7 = (int)lVar11 + -1;
                          cVar6 = '\x01';
                          bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                          if (bVar14) {
                            *(int *)plVar2 = iVar7;
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                        if (iVar7 == 0) {
                          (**(code **)(*local_80[0] + 0x10))();
                        }
                        else if ((int)lVar11 == 0) goto LAB_010e8488;
                      }
                    }
                  }
                  if (plVar17 != (long *)0x0) {
                    plVar2 = plVar17 + 5;
                    do {
                      lVar11 = *plVar2;
                      iVar7 = (int)lVar11 + -1;
                      cVar6 = '\x01';
                      bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                      if (bVar14) {
                        *(int *)plVar2 = iVar7;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (iVar7 == 0) {
                      (**(code **)(*plVar17 + 0x10))(plVar17);
                    }
                    else if ((int)lVar11 == 0) goto LAB_010e8488;
                  }
                  lVar11 = *(long *)(lVar9 + 0x10);
                  uVar21 = uVar21 + 1;
                } while (uVar21 < ((ulong)(*(long *)(lVar11 + 0x58) - *(long *)(lVar11 + 0x50)) >> 3
                                  & 0xffffffff));
              }
            }
          }
          if (plVar16 != (long *)0x0) {
            plVar20 = plVar16 + 5;
            do {
              lVar9 = *plVar20;
              iVar7 = (int)lVar9 + -1;
              cVar6 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar14) {
                *(int *)plVar20 = iVar7;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
            else if ((int)lVar9 == 0) {
LAB_010e8488:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
        }
        (**(code **)(*plVar19 + 0x60))(plVar19);
        return;
      }
      sVar15 = sVar5;
    } while (sVar5 != 0);
  }
  return;
}


