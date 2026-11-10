/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f6f1e0; name: FUN_00f6f1e0
 */


undefined8 FUN_00f6f1e0(long param_1)

{
  long **pplVar1;
  int *piVar2;
  long *plVar3;
  short *psVar4;
  long *plVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  long **pplVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined4 uVar19;
  short sVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  long *plVar24;
  long *plVar25;
  bool bVar26;
  long *plVar27;
  long lVar28;
  long *plVar29;
  undefined8 *local_d8;
  undefined8 uStack_d0;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [8];
  long *local_b0;
  undefined8 uStack_a8;
  int iStack_a0;
  undefined4 local_9c;
  long *local_98;
  long *local_90;
  undefined8 uStack_88;
  long *local_80;
  long **local_78;
  long *local_70;
  long *local_68;
  
  uVar15 = 1;
  switch(*(undefined4 *)(param_1 + 0x138)) {
  case 0:
    uVar19 = 1;
LAB_00f6f858:
    *(undefined4 *)(param_1 + 0x138) = uVar19;
    break;
  case 1:
    lVar28 = *(long *)(*(long *)(param_1 + 0x130) + 0x50);
    if ((lVar28 == 0) || ((*(byte *)(lVar28 + 0x1e8) & 1) != 0)) {
      uVar19 = 2;
      goto LAB_00f6f858;
    }
    break;
  case 2:
    lVar28 = param_1 + 0xe8;
    FUN_00c9e664(&local_78,lVar28);
    if (local_70 == (long *)0x0) {
      lVar16 = 0;
    }
    else {
      lVar16 = local_70[9];
    }
    plVar25 = (long *)(*(code *)**(undefined8 **)(lVar16 + 0x28))((undefined8 *)(lVar16 + 0x28));
    if (((*PTR_DAT_047d6520 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar14 != 0)) {
      uVar15 = FUN_0151c130();
      *(undefined8 *)PTR_DAT_047d6528 = uVar15;
      __cxa_guard_release(PTR_DAT_047d6520);
    }
    for (; plVar25 != (long *)0x0; plVar25 = (long *)*plVar25) {
      if (plVar25 == (long *)PTR_DAT_047d6528) goto LAB_00f6f294;
    }
    lVar16 = 0;
LAB_00f6f294:
    if (local_70 != (long *)0x0) {
      plVar25 = local_70 + 5;
      do {
        lVar21 = *plVar25;
        iVar14 = (int)lVar21 + -1;
        cVar7 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar26) {
          *(int *)plVar25 = iVar14;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar14 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
      else if ((int)lVar21 == 0) goto LAB_00f708d0;
    }
    if (local_78 != (long **)0x0) {
      (*(code *)(*local_78)[0xc])();
    }
    if (lVar16 == 0) {
LAB_00f6f308:
      local_b8 = (undefined1  [8])0x0;
      if (*(long *)(param_1 + 0xe8) == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = *(long *)(*(long *)(param_1 + 0xe8) + 0x48);
      }
      plVar25 = (long *)(lVar16 + 0x3c0);
      lVar23 = *plVar25;
      lVar21 = nn::os::GetCurrentThread();
      if (lVar21 != lVar23) {
        lVar21 = nn::os::GetCurrentThread();
LAB_00f6f334:
        if (*plVar25 == 0) goto code_r0x00f6f33c;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0x3c8));
        do {
          if (*plVar25 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0x3c8));
              while (*plVar25 == 0) {
                cVar7 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar26) {
                  *plVar25 = lVar21;
                  cVar7 = ExclusiveMonitorsStatus();
                }
                if (cVar7 == '\0') goto LAB_00f6f344;
              }
            } while( true );
          }
          cVar7 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar26) {
            *plVar25 = lVar21;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
LAB_00f6f344:
        bVar26 = false;
        goto LAB_00f6f348;
      }
      plVar25 = (long *)0x0;
      bVar26 = true;
LAB_00f6f348:
      plVar29 = *(long **)(lVar16 + 0x3e0);
      for (plVar27 = *(long **)(lVar16 + 0x3d8); plVar27 != plVar29; plVar27 = plVar27 + 2) {
        lVar16 = *plVar27;
        if ((lVar16 != 0) && (*(short *)(lVar16 + 0x1a) != 0)) {
          psVar4 = (short *)(lVar16 + 0x1a);
          sVar20 = *(short *)(lVar16 + 0x1a);
          do {
            sVar6 = *psVar4;
            if (sVar6 == sVar20) {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(psVar4,0x10);
              if (bVar8) {
                *psVar4 = sVar20 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 != '\0') goto LAB_00f7008c;
              bVar8 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_00f7008c:
              bVar8 = false;
            }
            if (bVar8) {
              lVar16 = *(long *)(lVar16 + 0x10);
              if (lVar16 != 0) {
                plVar24 = (long *)(lVar16 + 0xe8);
                lVar23 = *plVar24;
                lVar21 = nn::os::GetCurrentThread();
                if (lVar21 != lVar23) {
                  lVar21 = nn::os::GetCurrentThread();
                  goto LAB_00f700c4;
                }
                bVar8 = true;
                goto LAB_00f700d8;
              }
              break;
            }
            sVar20 = sVar6;
          } while (sVar6 != 0);
        }
LAB_00f6f360:
      }
      if (!bVar26) {
        *plVar25 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar25 + 1));
      }
      lVar21 = *(long *)(param_1 + 0x148);
      local_78 = (long **)(local_b8 + 4);
      local_70 = (long *)local_b8;
      for (lVar16 = *(long *)(param_1 + 0x140); lVar16 != lVar21; lVar16 = lVar16 + 0x40) {
        FUN_00f71cd0(&local_78,lVar16);
      }
      local_b8._4_4_ = SUB84((ulong)local_b8 >> 0x20,0);
      if (local_b8._0_4_ == local_b8._4_4_) {
        FUN_00c9e664(&local_78,lVar28);
        if (local_70 == (long *)0x0) {
          lVar16 = 0;
        }
        else {
          lVar16 = local_70[9];
        }
        plVar25 = (long *)(lVar16 + 0x3c0);
        lVar23 = *plVar25;
        lVar21 = nn::os::GetCurrentThread();
        if (lVar21 != lVar23) {
          lVar21 = nn::os::GetCurrentThread();
LAB_00f6f3d0:
          if (*plVar25 == 0) goto code_r0x00f6f3d8;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0x3c8));
          do {
            if (*plVar25 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0x3c8));
                while (*plVar25 == 0) {
                  cVar7 = '\x01';
                  bVar26 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                  if (bVar26) {
                    *plVar25 = lVar21;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                  if (cVar7 == '\0') goto LAB_00f6f3e0;
                }
              } while( true );
            }
            cVar7 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar25,0x10);
            if (bVar26) {
              *plVar25 = lVar21;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
LAB_00f6f3e0:
          lVar21 = *(long *)(lVar16 + 0x3e0);
          lVar23 = *(long *)(lVar16 + 0x3d8);
          *(undefined8 *)(lVar16 + 0x3c0) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar16 + 0x3c8));
          goto LAB_00f6f3f8;
        }
        lVar21 = *(long *)(lVar16 + 0x3e0);
        lVar23 = *(long *)(lVar16 + 0x3d8);
LAB_00f6f3f8:
        plVar25 = local_70;
        if (local_70 != (long *)0x0) {
          plVar27 = local_70 + 5;
          do {
            lVar16 = *plVar27;
            iVar14 = (int)lVar16 + -1;
            cVar7 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar26) {
              *(int *)plVar27 = iVar14;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar14 == 0) {
            (**(code **)(*plVar25 + 0x10))();
          }
          else if ((int)lVar16 == 0) {
LAB_00f708d0:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        if (local_78 != (long **)0x0) {
          (*(code *)(*local_78)[0xc])();
        }
        puVar9 = PTR_DAT_047d3910;
        iVar14 = (int)((ulong)(lVar21 - lVar23) >> 4);
        if (iVar14 != 0) {
          iVar22 = 0;
          do {
            FUN_00c9e664(&local_78,lVar28);
            if (local_70 == (long *)0x0) {
              lVar16 = 0;
            }
            else {
              lVar16 = local_70[9];
            }
            FUN_00f70dc8(&local_90,lVar16,iVar22);
            plVar25 = local_70;
            if (local_70 != (long *)0x0) {
              plVar27 = local_70 + 5;
              do {
                lVar16 = *plVar27;
                iVar13 = (int)lVar16 + -1;
                cVar7 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar26) {
                  *(int *)plVar27 = iVar13;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar13 == 0) {
                (**(code **)(*plVar25 + 0x10))();
              }
              else if ((int)lVar16 == 0) goto LAB_00f708d0;
            }
            if (local_78 != (long **)0x0) {
              (*(code *)(*local_78)[0xc])();
            }
            if (local_90 != (long *)0x0) {
              if (*(short *)((long)local_90 + 0x1a) != 0) {
                uVar15 = *(undefined8 *)(param_1 + 0x120);
                FUN_00c9e664(&iStack_a0,lVar28);
                if (local_98 == (long *)0x0) {
                  plVar25 = (long *)0x0;
                }
                else {
                  plVar25 = (long *)local_98[9];
                }
                (**(code **)(*plVar25 + 0x18))(&local_78,plVar25);
                local_c8 = (undefined8 *)0x0;
                uStack_c0 = 0;
                plVar27 = (long *)0x0;
                if (plVar25 != (long *)0x0) {
                  plVar27 = plVar25 + 5;
                }
                if (local_78[2] == plVar27) {
                  FUN_00c9ea00(&local_c8,&local_78);
                }
                pplVar11 = local_78;
                if (local_78 != (long **)0x0) {
                  pplVar1 = local_78 + 3;
                  do {
                    sVar20 = *(short *)pplVar1;
                    cVar7 = '\x01';
                    bVar26 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
                    if (bVar26) {
                      *(short *)pplVar1 = sVar20 + -1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (sVar20 == 1) {
                    piVar2 = (int *)((long)local_78 + 0x1c);
                    do {
                      iVar13 = *piVar2;
                      cVar7 = '\x01';
                      bVar26 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                      if (bVar26) {
                        *piVar2 = -1;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
                    if (iVar13 != -1) {
                      if (((*PTR_DAT_047d3908 & 1) == 0) &&
                         (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
                        FUN_00100190(PTR_LAB_047d3de8,puVar9,&PTR_LOOP_04483000);
                        __cxa_guard_release(PTR_DAT_047d3908);
                      }
                      lVar16 = *(long *)puVar9;
                      *(long *)PTR_DAT_047d3918 = lVar16;
                      local_b0 = *pplVar11;
                      FUN_00c44438(lVar16 + 0x8040,&local_b0);
                    }
                  }
                  else if (sVar20 == 0) goto LAB_00f6fd4c;
                }
                local_d8 = (undefined8 *)0x0;
                uStack_d0 = 0;
                FUN_00d0a71c(&local_d8,&local_90);
                FUN_00f712f0(uVar15,&local_c8,&local_d8);
                puVar17 = local_d8;
                if (local_d8 != (undefined8 *)0x0) {
                  psVar4 = (short *)(local_d8 + 3);
                  do {
                    sVar20 = *psVar4;
                    cVar7 = '\x01';
                    bVar26 = (bool)ExclusiveMonitorPass(psVar4,0x10);
                    if (bVar26) {
                      *psVar4 = sVar20 + -1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (sVar20 == 1) {
                    piVar2 = (int *)((long)local_d8 + 0x1c);
                    do {
                      iVar13 = *piVar2;
                      cVar7 = '\x01';
                      bVar26 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                      if (bVar26) {
                        *piVar2 = -1;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
                    if (iVar13 != -1) {
                      if (((*PTR_DAT_047d3908 & 1) == 0) &&
                         (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
                        FUN_00100190(PTR_LAB_047d3de8,puVar9,&PTR_LOOP_04483000);
                        __cxa_guard_release(PTR_DAT_047d3908);
                      }
                      lVar16 = *(long *)puVar9;
                      *(long *)PTR_DAT_047d3918 = lVar16;
                      local_78 = (long **)*puVar17;
                      FUN_00c44438(lVar16 + 0x8040,&local_78);
                    }
                  }
                  else if (sVar20 == 0) goto LAB_00f6fd4c;
                }
                puVar17 = local_c8;
                if (local_c8 != (undefined8 *)0x0) {
                  psVar4 = (short *)(local_c8 + 3);
                  do {
                    sVar20 = *psVar4;
                    cVar7 = '\x01';
                    bVar26 = (bool)ExclusiveMonitorPass(psVar4,0x10);
                    if (bVar26) {
                      *psVar4 = sVar20 + -1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (sVar20 == 1) {
                    piVar2 = (int *)((long)local_c8 + 0x1c);
                    do {
                      iVar13 = *piVar2;
                      cVar7 = '\x01';
                      bVar26 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                      if (bVar26) {
                        *piVar2 = -1;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar7 != '\0');
                    if (iVar13 != -1) {
                      if (((*PTR_DAT_047d3908 & 1) == 0) &&
                         (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
                        FUN_00100190(PTR_LAB_047d3de8,puVar9,&PTR_LOOP_04483000);
                        __cxa_guard_release(PTR_DAT_047d3908);
                      }
                      lVar16 = *(long *)puVar9;
                      *(long *)PTR_DAT_047d3918 = lVar16;
                      local_78 = (long **)*puVar17;
                      FUN_00c44438(lVar16 + 0x8040,&local_78);
                    }
                  }
                  else if (sVar20 == 0) goto LAB_00f6fd4c;
                }
                if (local_98 != (long *)0x0) {
                  plVar25 = local_98 + 5;
                  do {
                    lVar16 = *plVar25;
                    iVar13 = (int)lVar16 + -1;
                    cVar7 = '\x01';
                    bVar26 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                    if (bVar26) {
                      *(int *)plVar25 = iVar13;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (iVar13 == 0) {
                    (**(code **)(*local_98 + 0x10))();
                  }
                  else if ((int)lVar16 == 0) goto LAB_00f708d0;
                }
                if ((long *)CONCAT44(local_9c,iStack_a0) != (long *)0x0) {
                  (**(code **)(*(long *)CONCAT44(local_9c,iStack_a0) + 0x60))();
                }
              }
              plVar25 = local_90;
              if (local_90 != (long *)0x0) {
                plVar27 = local_90 + 3;
                do {
                  sVar20 = (short)*plVar27;
                  cVar7 = '\x01';
                  bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                  if (bVar26) {
                    *(short *)plVar27 = sVar20 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (sVar20 == 1) {
                  piVar2 = (int *)((long)local_90 + 0x1c);
                  do {
                    iVar13 = *piVar2;
                    cVar7 = '\x01';
                    bVar26 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar26) {
                      *piVar2 = -1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (iVar13 != -1) {
                    if (((*PTR_DAT_047d3908 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
                      FUN_00100190(PTR_LAB_047d3de8,puVar9,&PTR_LOOP_04483000);
                      __cxa_guard_release(PTR_DAT_047d3908);
                    }
                    lVar16 = *(long *)puVar9;
                    *(long *)PTR_DAT_047d3918 = lVar16;
                    local_78 = (long **)*plVar25;
                    FUN_00c44438(lVar16 + 0x8040,&local_78);
                  }
                }
                else if (sVar20 == 0) goto LAB_00f6fd4c;
              }
            }
            iVar22 = iVar22 + 1;
          } while (iVar22 != iVar14);
        }
        puVar10 = PTR_DAT_047d4e08;
        puVar9 = PTR_DAT_047d4e00;
        lVar21 = *(long *)(param_1 + 0x148);
        for (lVar16 = *(long *)(param_1 + 0x140); lVar16 != lVar21; lVar16 = lVar16 + 0x40) {
          if (((*PTR_DAT_047d4df8 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar14 != 0)) {
            FUN_00100190(PTR_LAB_047d4e10,puVar9,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d4df8);
          }
          uVar15 = *(undefined8 *)puVar9;
          *(undefined8 *)puVar10 = uVar15;
          FUN_00f7170c(&local_80,uVar15,lVar16,lVar16 + 0x20);
          if (local_80 != (long *)0x0) {
            uVar15 = *(undefined8 *)(param_1 + 0x120);
            FUN_00c9e664(&iStack_a0,lVar28);
            if (local_98 == (long *)0x0) {
              plVar25 = (long *)0x0;
            }
            else {
              plVar25 = (long *)local_98[9];
            }
            (**(code **)(*plVar25 + 0x18))(&local_78,plVar25);
            local_90 = (long *)0x0;
            uStack_88 = 0;
            plVar27 = (long *)0x0;
            if (plVar25 != (long *)0x0) {
              plVar27 = plVar25 + 5;
            }
            if (local_78[2] == plVar27) {
              FUN_00c9ea00(&local_90,&local_78);
            }
            pplVar11 = local_78;
            if (local_78 != (long **)0x0) {
              pplVar1 = local_78 + 3;
              do {
                sVar20 = *(short *)pplVar1;
                cVar7 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
                if (bVar26) {
                  *(short *)pplVar1 = sVar20 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (sVar20 == 1) {
                piVar2 = (int *)((long)local_78 + 0x1c);
                do {
                  iVar14 = *piVar2;
                  cVar7 = '\x01';
                  bVar26 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar26) {
                    *piVar2 = -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar14 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar23 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar23;
                  local_b0 = *pplVar11;
                  FUN_00c44438(lVar23 + 0x8040,&local_b0);
                }
              }
              else if (sVar20 == 0) {
LAB_00f6fd4c:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x33,"Reference counter underflows.");
              }
            }
            plVar27 = local_80;
            plVar29 = local_80 + 5;
            (**(code **)(*local_80 + 0x18))(&local_78,local_80);
            local_b0 = (long *)0x0;
            uStack_a8 = 0;
            plVar25 = (long *)0x0;
            if (plVar27 != (long *)0x0) {
              plVar25 = plVar29;
            }
            if (local_78[2] == plVar25) {
              FUN_00cbc6dc(&local_b0,&local_78);
            }
            pplVar11 = local_78;
            if (local_78 != (long **)0x0) {
              pplVar1 = local_78 + 3;
              do {
                sVar20 = *(short *)pplVar1;
                cVar7 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
                if (bVar26) {
                  *(short *)pplVar1 = sVar20 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (sVar20 == 1) {
                piVar2 = (int *)((long)local_78 + 0x1c);
                do {
                  iVar14 = *piVar2;
                  cVar7 = '\x01';
                  bVar26 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar26) {
                    *piVar2 = -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar14 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar23 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar23;
                  local_68 = *pplVar11;
                  FUN_00c44438(lVar23 + 0x8040,&local_68);
                }
              }
              else if (sVar20 == 0) goto LAB_00f6fd4c;
            }
            local_78 = (long **)0x0;
            local_70 = (long *)0x0;
            FUN_011453dc(&local_78,&local_b0);
            FUN_00f712f0(uVar15,&local_90,&local_78);
            pplVar11 = local_78;
            if (local_78 != (long **)0x0) {
              pplVar1 = local_78 + 3;
              do {
                sVar20 = *(short *)pplVar1;
                cVar7 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
                if (bVar26) {
                  *(short *)pplVar1 = sVar20 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (sVar20 == 1) {
                piVar2 = (int *)((long)local_78 + 0x1c);
                do {
                  iVar14 = *piVar2;
                  cVar7 = '\x01';
                  bVar26 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar26) {
                    *piVar2 = -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar14 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar23 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar23;
                  local_68 = *pplVar11;
                  FUN_00c44438(lVar23 + 0x8040,&local_68);
                }
              }
              else if (sVar20 == 0) goto LAB_00f6fd4c;
            }
            plVar25 = local_b0;
            if (local_b0 != (long *)0x0) {
              plVar27 = local_b0 + 3;
              do {
                sVar20 = (short)*plVar27;
                cVar7 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar26) {
                  *(short *)plVar27 = sVar20 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (sVar20 == 1) {
                piVar2 = (int *)((long)local_b0 + 0x1c);
                do {
                  iVar14 = *piVar2;
                  cVar7 = '\x01';
                  bVar26 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar26) {
                    *piVar2 = -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar14 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar23 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar23;
                  local_68 = (long *)*plVar25;
                  FUN_00c44438(lVar23 + 0x8040,&local_68);
                }
              }
              else if (sVar20 == 0) goto LAB_00f6fd4c;
            }
            plVar25 = local_90;
            if (local_90 != (long *)0x0) {
              plVar27 = local_90 + 3;
              do {
                sVar20 = (short)*plVar27;
                cVar7 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar26) {
                  *(short *)plVar27 = sVar20 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (sVar20 == 1) {
                piVar2 = (int *)((long)local_90 + 0x1c);
                do {
                  iVar14 = *piVar2;
                  cVar7 = '\x01';
                  bVar26 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar26) {
                    *piVar2 = -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar14 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar23 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar23;
                  local_b0 = (long *)*plVar25;
                  FUN_00c44438(lVar23 + 0x8040,&local_b0);
                }
              }
              else if (sVar20 == 0) goto LAB_00f6fd4c;
            }
            if (local_98 != (long *)0x0) {
              plVar25 = local_98 + 5;
              do {
                lVar23 = *plVar25;
                iVar14 = (int)lVar23 + -1;
                cVar7 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar26) {
                  *(int *)plVar25 = iVar14;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar14 == 0) {
                (**(code **)(*local_98 + 0x10))();
              }
              else if ((int)lVar23 == 0) goto LAB_00f708d0;
            }
            if ((long *)CONCAT44(local_9c,iStack_a0) != (long *)0x0) {
              (**(code **)(*(long *)CONCAT44(local_9c,iStack_a0) + 0x60))();
            }
            if (local_80 != (long *)0x0) {
              lVar23 = local_80[6];
              psVar4 = (short *)(lVar23 + 0x1a);
              do {
                sVar20 = *psVar4;
                cVar7 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(psVar4,0x10);
                if (bVar26) {
                  *psVar4 = sVar20 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (sVar20 == 1) {
                *(undefined8 *)(lVar23 + 0x10) = 0;
                (**(code **)(*local_80 + 0x50))();
              }
              else if (sVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x60,"Reference counter underflows.");
              }
            }
          }
        }
        FUN_00f70f74(*(undefined8 *)(param_1 + 0x120));
        *(undefined4 *)(param_1 + 0x138) = 3;
        goto switchD_00f6f228_caseD_3;
      }
    }
    else {
      FUN_00cebc38(&local_78,lVar16);
      if (*(char *)(local_78 + 0x88) == '\x02') {
        sVar20 = *(short *)(local_78 + 0x84);
        (*(code *)(*local_78)[0xc])();
        if (sVar20 == 0) goto LAB_00f6f308;
      }
      else {
        if (local_78 == (long **)0x0) {
          return 0;
        }
        (*(code *)(*local_78)[0xc])();
      }
    }
    break;
  case 3:
switchD_00f6f228_caseD_3:
    local_90 = (long *)((ulong)local_90 & 0xffffffff00000000);
    iStack_a0 = 0;
    if (*(long *)(param_1 + 0xe8) == 0) {
      lVar28 = 0;
    }
    else {
      lVar28 = *(long *)(*(long *)(param_1 + 0xe8) + 0x48);
    }
    plVar25 = (long *)(lVar28 + 0x3c0);
    lVar21 = *plVar25;
    lVar16 = nn::os::GetCurrentThread();
    if (lVar16 != lVar21) {
      lVar16 = nn::os::GetCurrentThread();
LAB_00f6f7d4:
      if (*plVar25 == 0) goto code_r0x00f6f7dc;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar28 + 0x3c8));
      do {
        if (*plVar25 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar28 + 0x3c8));
            while (*plVar25 == 0) {
              cVar7 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(plVar25,0x10);
              if (bVar26) {
                *plVar25 = lVar16;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_00f6f7e4;
            }
          } while( true );
        }
        cVar7 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar26) {
          *plVar25 = lVar16;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_00f6f7e4:
      bVar26 = false;
      goto LAB_00f6f7e8;
    }
    plVar25 = (long *)0x0;
    bVar26 = true;
LAB_00f6f7e8:
    puVar10 = PTR_DAT_047d9068;
    puVar9 = PTR_DAT_047d9060;
    plVar29 = *(long **)(lVar28 + 0x3e0);
    for (plVar27 = *(long **)(lVar28 + 0x3d8); plVar27 != plVar29; plVar27 = plVar27 + 2) {
      lVar28 = *plVar27;
      if ((lVar28 != 0) && (*(short *)(lVar28 + 0x1a) != 0)) {
        psVar4 = (short *)(lVar28 + 0x1a);
        sVar20 = *(short *)(lVar28 + 0x1a);
        do {
          sVar6 = *psVar4;
          if (sVar6 == sVar20) {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar4,0x10);
            if (bVar8) {
              *psVar4 = sVar20 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 != '\0') goto LAB_00f70384;
            bVar8 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00f70384:
            bVar8 = false;
          }
          if (bVar8) {
            lVar28 = *(long *)(lVar28 + 0x10);
            if (lVar28 != 0) {
              plVar24 = (long *)(lVar28 + 0xe8);
              lVar21 = *plVar24;
              lVar16 = nn::os::GetCurrentThread();
              if (lVar16 != lVar21) {
                lVar16 = nn::os::GetCurrentThread();
                goto LAB_00f703c4;
              }
              bVar8 = true;
              goto LAB_00f703d8;
            }
            break;
          }
          sVar20 = sVar6;
        } while (sVar6 != 0);
      }
LAB_00f6f810:
    }
    if (!bVar26) {
      *plVar25 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar25 + 1));
    }
    lVar16 = *(long *)(param_1 + 0x148);
    local_78 = &local_90;
    local_70 = (long *)&iStack_a0;
    for (lVar28 = *(long *)(param_1 + 0x140); lVar28 != lVar16; lVar28 = lVar28 + 0x40) {
      FUN_00f71b8c(&local_78,lVar28);
    }
    if (iStack_a0 == (int)local_90) {
      uVar19 = 4;
      goto LAB_00f6f858;
    }
    break;
  case 4:
    local_90 = (long *)((ulong)local_90 & 0xffffffff00000000);
    iStack_a0 = 0;
    if (*(long *)(param_1 + 0xe8) == 0) {
      lVar28 = 0;
    }
    else {
      lVar28 = *(long *)(*(long *)(param_1 + 0xe8) + 0x48);
    }
    plVar25 = (long *)(lVar28 + 0x3c0);
    lVar21 = *plVar25;
    lVar16 = nn::os::GetCurrentThread();
    if (lVar16 != lVar21) {
      lVar16 = nn::os::GetCurrentThread();
LAB_00f6f70c:
      if (*plVar25 == 0) goto code_r0x00f6f714;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar28 + 0x3c8));
      do {
        if (*plVar25 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar28 + 0x3c8));
            while (*plVar25 == 0) {
              cVar7 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(plVar25,0x10);
              if (bVar26) {
                *plVar25 = lVar16;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_00f6f71c;
            }
          } while( true );
        }
        cVar7 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar26) {
          *plVar25 = lVar16;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_00f6f71c:
      bVar26 = false;
      goto LAB_00f6f720;
    }
    plVar25 = (long *)0x0;
    bVar26 = true;
LAB_00f6f720:
    plVar29 = *(long **)(lVar28 + 0x3e0);
    for (plVar27 = *(long **)(lVar28 + 0x3d8); plVar27 != plVar29; plVar27 = plVar27 + 2) {
      lVar28 = *plVar27;
      if ((lVar28 != 0) && (*(short *)(lVar28 + 0x1a) != 0)) {
        psVar4 = (short *)(lVar28 + 0x1a);
        sVar20 = *(short *)(lVar28 + 0x1a);
        do {
          sVar6 = *psVar4;
          if (sVar6 == sVar20) {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar4,0x10);
            if (bVar8) {
              *psVar4 = sVar20 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 != '\0') goto LAB_00f70550;
            bVar8 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00f70550:
            bVar8 = false;
          }
          if (bVar8) {
            lVar28 = *(long *)(lVar28 + 0x10);
            if (lVar28 != 0) {
              plVar24 = (long *)(lVar28 + 0xe8);
              lVar21 = *plVar24;
              lVar16 = nn::os::GetCurrentThread();
              if (lVar16 != lVar21) {
                lVar16 = nn::os::GetCurrentThread();
                goto LAB_00f70588;
              }
              bVar8 = true;
              goto LAB_00f7059c;
            }
            break;
          }
          sVar20 = sVar6;
        } while (sVar6 != 0);
      }
LAB_00f6f738:
    }
    if (!bVar26) {
      *plVar25 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar25 + 1));
    }
    lVar16 = *(long *)(param_1 + 0x148);
    local_78 = &local_90;
    local_70 = (long *)&iStack_a0;
    for (lVar28 = *(long *)(param_1 + 0x140); lVar28 != lVar16; lVar28 = lVar28 + 0x40) {
      FUN_00f71e18(&local_78,lVar28);
    }
    if (iStack_a0 == (int)local_90) {
      return 1;
    }
    break;
  case 5:
    goto switchD_00f6f228_caseD_5;
  }
  uVar15 = 0;
switchD_00f6f228_caseD_5:
  return uVar15;
code_r0x00f6f714:
  cVar7 = '\x01';
  bVar26 = (bool)ExclusiveMonitorPass(plVar25,0x10);
  if (bVar26) {
    *plVar25 = lVar16;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00f6f71c;
  goto LAB_00f6f70c;
LAB_00f70588:
  if (*plVar24 == 0) goto code_r0x00f70590;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar28 + 0xf0));
  do {
    if (*plVar24 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar28 + 0xf0));
        while (*plVar24 == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar8) {
            *plVar24 = lVar16;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_00f70598;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar8) {
      *plVar24 = lVar16;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_00f70598:
  bVar8 = false;
LAB_00f7059c:
  plVar24 = *(long **)(lVar28 + 0x100);
  plVar5 = *(long **)(lVar28 + 0x108);
  if (plVar24 != plVar5) {
    lVar16 = *plVar24;
    if (((lVar16 != 0) && (uVar18 = FUN_010e14c4(lVar16 + 8), (uVar18 & 1) != 0)) &&
       (uVar18 = (**(code **)(*(long *)*plVar24 + 0xc0))(), (uVar18 & 1) == 0)) {
      uVar12 = FUN_02168c90(lVar16 + -0x20);
      local_90 = (long *)CONCAT44(local_90._4_4_,(int)local_90 + (uVar12 & 1));
      iStack_a0 = iStack_a0 + 1;
    }
    plVar3 = plVar24 + 1;
    if (plVar3 != plVar5) {
      lVar16 = *plVar3;
      if (((lVar16 != 0) && (uVar18 = FUN_010e14c4(lVar16 + 8), (uVar18 & 1) != 0)) &&
         (uVar18 = (**(code **)(*(long *)*plVar3 + 0xc0))(), (uVar18 & 1) == 0)) {
        uVar12 = FUN_02168c90(lVar16 + -0x20);
        local_90 = (long *)CONCAT44(local_90._4_4_,(int)local_90 + (uVar12 & 1));
        iStack_a0 = iStack_a0 + 1;
      }
      plVar3 = plVar24 + 2;
      if (plVar3 != plVar5) {
        lVar16 = *plVar3;
        if (((lVar16 != 0) && (uVar18 = FUN_010e14c4(lVar16 + 8), (uVar18 & 1) != 0)) &&
           (uVar18 = (**(code **)(*(long *)*plVar3 + 0xc0))(), (uVar18 & 1) == 0)) {
          uVar12 = FUN_02168c90(lVar16 + -0x20);
          local_90 = (long *)CONCAT44(local_90._4_4_,(int)local_90 + (uVar12 & 1));
          iStack_a0 = iStack_a0 + 1;
        }
        plVar3 = plVar24 + 3;
        if (plVar3 != plVar5) {
          lVar16 = *plVar3;
          if (((lVar16 != 0) && (uVar18 = FUN_010e14c4(lVar16 + 8), (uVar18 & 1) != 0)) &&
             (uVar18 = (**(code **)(*(long *)*plVar3 + 0xc0))(), (uVar18 & 1) == 0)) {
            uVar12 = FUN_02168c90(lVar16 + -0x20);
            local_90 = (long *)CONCAT44(local_90._4_4_,(int)local_90 + (uVar12 & 1));
            iStack_a0 = iStack_a0 + 1;
          }
          for (plVar24 = plVar24 + 4; plVar24 != plVar5; plVar24 = plVar24 + 1) {
            lVar16 = *plVar24;
            if (((lVar16 != 0) && (uVar18 = FUN_010e14c4(lVar16 + 8), (uVar18 & 1) != 0)) &&
               (uVar18 = (**(code **)(*(long *)*plVar24 + 0xc0))(), (uVar18 & 1) == 0)) {
              uVar12 = FUN_02168c90(lVar16 + -0x20);
              local_90 = (long *)CONCAT44(local_90._4_4_,(int)local_90 + (uVar12 & 1));
              iStack_a0 = iStack_a0 + 1;
            }
          }
        }
      }
    }
  }
  plVar24 = *(long **)(lVar28 + 0x138);
  plVar5 = *(long **)(lVar28 + 0x140);
  if (plVar24 != plVar5) {
    lVar16 = *plVar24;
    if (((lVar16 != 0) && (uVar18 = FUN_010e14c4(lVar16 + 8), (uVar18 & 1) != 0)) &&
       (uVar18 = (**(code **)(*(long *)*plVar24 + 0xc0))(), (uVar18 & 1) == 0)) {
      uVar12 = FUN_02168c90(lVar16 + -0x20);
      local_90 = (long *)CONCAT44(local_90._4_4_,(int)local_90 + (uVar12 & 1));
      iStack_a0 = iStack_a0 + 1;
    }
    plVar3 = plVar24 + 1;
    if (plVar3 != plVar5) {
      lVar16 = *plVar3;
      if (((lVar16 != 0) && (uVar18 = FUN_010e14c4(lVar16 + 8), (uVar18 & 1) != 0)) &&
         (uVar18 = (**(code **)(*(long *)*plVar3 + 0xc0))(), (uVar18 & 1) == 0)) {
        uVar12 = FUN_02168c90(lVar16 + -0x20);
        local_90 = (long *)CONCAT44(local_90._4_4_,(int)local_90 + (uVar12 & 1));
        iStack_a0 = iStack_a0 + 1;
      }
      plVar3 = plVar24 + 2;
      if (plVar3 != plVar5) {
        lVar16 = *plVar3;
        if (((lVar16 != 0) && (uVar18 = FUN_010e14c4(lVar16 + 8), (uVar18 & 1) != 0)) &&
           (uVar18 = (**(code **)(*(long *)*plVar3 + 0xc0))(), (uVar18 & 1) == 0)) {
          uVar12 = FUN_02168c90(lVar16 + -0x20);
          local_90 = (long *)CONCAT44(local_90._4_4_,(int)local_90 + (uVar12 & 1));
          iStack_a0 = iStack_a0 + 1;
        }
        plVar3 = plVar24 + 3;
        if (plVar3 != plVar5) {
          lVar16 = *plVar3;
          if (((lVar16 != 0) && (uVar18 = FUN_010e14c4(lVar16 + 8), (uVar18 & 1) != 0)) &&
             (uVar18 = (**(code **)(*(long *)*plVar3 + 0xc0))(), (uVar18 & 1) == 0)) {
            uVar12 = FUN_02168c90(lVar16 + -0x20);
            local_90 = (long *)CONCAT44(local_90._4_4_,(int)local_90 + (uVar12 & 1));
            iStack_a0 = iStack_a0 + 1;
          }
          for (plVar24 = plVar24 + 4; plVar24 != plVar5; plVar24 = plVar24 + 1) {
            lVar16 = *plVar24;
            if (((lVar16 != 0) && (uVar18 = FUN_010e14c4(lVar16 + 8), (uVar18 & 1) != 0)) &&
               (uVar18 = (**(code **)(*(long *)*plVar24 + 0xc0))(), (uVar18 & 1) == 0)) {
              uVar12 = FUN_02168c90(lVar16 + -0x20);
              local_90 = (long *)CONCAT44(local_90._4_4_,(int)local_90 + (uVar12 & 1));
              iStack_a0 = iStack_a0 + 1;
            }
          }
        }
      }
    }
  }
  if (!bVar8) {
    *(undefined8 *)(lVar28 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar28 + 0xf0));
  }
  (**(code **)(*(long *)(lVar28 + -0x28) + 0x60))();
  goto LAB_00f6f738;
code_r0x00f70590:
  cVar7 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar24,0x10);
  if (bVar8) {
    *plVar24 = lVar16;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00f70598;
  goto LAB_00f70588;
code_r0x00f6f33c:
  cVar7 = '\x01';
  bVar26 = (bool)ExclusiveMonitorPass(plVar25,0x10);
  if (bVar26) {
    *plVar25 = lVar21;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00f6f344;
  goto LAB_00f6f334;
LAB_00f700c4:
  if (*plVar24 == 0) goto code_r0x00f700cc;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0xf0));
  do {
    if (*plVar24 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0xf0));
        while (*plVar24 == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar8) {
            *plVar24 = lVar21;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_00f700d4;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar8) {
      *plVar24 = lVar21;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_00f700d4:
  bVar8 = false;
LAB_00f700d8:
  plVar24 = *(long **)(lVar16 + 0x100);
  plVar5 = *(long **)(lVar16 + 0x108);
  if (plVar24 != plVar5) {
    lVar21 = *plVar24;
    if (((lVar21 != 0) && (uVar18 = FUN_010e14c4(lVar21 + 8), (uVar18 & 1) != 0)) &&
       (uVar18 = (**(code **)(*(long *)*plVar24 + 0xc0))(), (uVar18 & 1) == 0)) {
      uVar12 = FUN_02168c80(lVar21 + -0x20);
      local_b8._4_4_ = local_b8._4_4_ + (uVar12 & 1);
      local_b8._0_4_ = local_b8._0_4_ + 1;
    }
    plVar3 = plVar24 + 1;
    if (plVar3 != plVar5) {
      lVar21 = *plVar3;
      if (((lVar21 != 0) && (uVar18 = FUN_010e14c4(lVar21 + 8), (uVar18 & 1) != 0)) &&
         (uVar18 = (**(code **)(*(long *)*plVar3 + 0xc0))(), (uVar18 & 1) == 0)) {
        uVar12 = FUN_02168c80(lVar21 + -0x20);
        local_b8._4_4_ = local_b8._4_4_ + (uVar12 & 1);
        local_b8._0_4_ = local_b8._0_4_ + 1;
      }
      plVar3 = plVar24 + 2;
      if (plVar3 != plVar5) {
        lVar21 = *plVar3;
        if (((lVar21 != 0) && (uVar18 = FUN_010e14c4(lVar21 + 8), (uVar18 & 1) != 0)) &&
           (uVar18 = (**(code **)(*(long *)*plVar3 + 0xc0))(), (uVar18 & 1) == 0)) {
          uVar12 = FUN_02168c80(lVar21 + -0x20);
          local_b8._4_4_ = local_b8._4_4_ + (uVar12 & 1);
          local_b8._0_4_ = local_b8._0_4_ + 1;
        }
        for (plVar24 = plVar24 + 3; plVar24 != plVar5; plVar24 = plVar24 + 1) {
          lVar21 = *plVar24;
          if (((lVar21 != 0) && (uVar18 = FUN_010e14c4(lVar21 + 8), (uVar18 & 1) != 0)) &&
             (uVar18 = (**(code **)(*(long *)*plVar24 + 0xc0))(), (uVar18 & 1) == 0)) {
            uVar12 = FUN_02168c80(lVar21 + -0x20);
            local_b8._4_4_ = local_b8._4_4_ + (uVar12 & 1);
            local_b8._0_4_ = local_b8._0_4_ + 1;
          }
        }
      }
    }
  }
  plVar24 = *(long **)(lVar16 + 0x138);
  plVar5 = *(long **)(lVar16 + 0x140);
  if (plVar24 != plVar5) {
    lVar21 = *plVar24;
    if (((lVar21 != 0) && (uVar18 = FUN_010e14c4(lVar21 + 8), (uVar18 & 1) != 0)) &&
       (uVar18 = (**(code **)(*(long *)*plVar24 + 0xc0))(), (uVar18 & 1) == 0)) {
      uVar12 = FUN_02168c80(lVar21 + -0x20);
      local_b8._4_4_ = local_b8._4_4_ + (uVar12 & 1);
      local_b8._0_4_ = local_b8._0_4_ + 1;
    }
    plVar3 = plVar24 + 1;
    if (plVar3 != plVar5) {
      lVar21 = *plVar3;
      if (((lVar21 != 0) && (uVar18 = FUN_010e14c4(lVar21 + 8), (uVar18 & 1) != 0)) &&
         (uVar18 = (**(code **)(*(long *)*plVar3 + 0xc0))(), (uVar18 & 1) == 0)) {
        uVar12 = FUN_02168c80(lVar21 + -0x20);
        local_b8._4_4_ = local_b8._4_4_ + (uVar12 & 1);
        local_b8._0_4_ = local_b8._0_4_ + 1;
      }
      plVar3 = plVar24 + 2;
      if (plVar3 != plVar5) {
        lVar21 = *plVar3;
        if (((lVar21 != 0) && (uVar18 = FUN_010e14c4(lVar21 + 8), (uVar18 & 1) != 0)) &&
           (uVar18 = (**(code **)(*(long *)*plVar3 + 0xc0))(), (uVar18 & 1) == 0)) {
          uVar12 = FUN_02168c80(lVar21 + -0x20);
          local_b8._4_4_ = local_b8._4_4_ + (uVar12 & 1);
          local_b8._0_4_ = local_b8._0_4_ + 1;
        }
        for (plVar24 = plVar24 + 3; plVar24 != plVar5; plVar24 = plVar24 + 1) {
          lVar21 = *plVar24;
          if (((lVar21 != 0) && (uVar18 = FUN_010e14c4(lVar21 + 8), (uVar18 & 1) != 0)) &&
             (uVar18 = (**(code **)(*(long *)*plVar24 + 0xc0))(), (uVar18 & 1) == 0)) {
            uVar12 = FUN_02168c80(lVar21 + -0x20);
            local_b8._4_4_ = local_b8._4_4_ + (uVar12 & 1);
            local_b8._0_4_ = local_b8._0_4_ + 1;
          }
        }
      }
    }
  }
  if (!bVar8) {
    *(undefined8 *)(lVar16 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar16 + 0xf0));
  }
  (**(code **)(*(long *)(lVar16 + -0x28) + 0x60))();
  goto LAB_00f6f360;
code_r0x00f700cc:
  cVar7 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar24,0x10);
  if (bVar8) {
    *plVar24 = lVar21;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00f700d4;
  goto LAB_00f700c4;
code_r0x00f6f3d8:
  cVar7 = '\x01';
  bVar26 = (bool)ExclusiveMonitorPass(plVar25,0x10);
  if (bVar26) {
    *plVar25 = lVar21;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00f6f3e0;
  goto LAB_00f6f3d0;
code_r0x00f6f7dc:
  cVar7 = '\x01';
  bVar26 = (bool)ExclusiveMonitorPass(plVar25,0x10);
  if (bVar26) {
    *plVar25 = lVar16;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00f6f7e4;
  goto LAB_00f6f7d4;
LAB_00f703c4:
  if (*plVar24 == 0) goto code_r0x00f703cc;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar28 + 0xf0));
  do {
    if (*plVar24 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar28 + 0xf0));
        while (*plVar24 == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar8) {
            *plVar24 = lVar16;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_00f703d4;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar8) {
      *plVar24 = lVar16;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_00f703d4:
  bVar8 = false;
LAB_00f703d8:
  plVar5 = *(long **)(lVar28 + 0x108);
  for (plVar24 = *(long **)(lVar28 + 0x100); plVar24 != plVar5; plVar24 = plVar24 + 1) {
    lVar16 = *plVar24;
    if (lVar16 != 0) {
      puVar17 = (undefined8 *)(*(code *)**(undefined8 **)(lVar16 + 8))((undefined8 *)(lVar16 + 8));
      if (((*puVar9 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar9), iVar14 != 0)) {
        uVar15 = FUN_01de2ec4();
        *(undefined8 *)puVar10 = uVar15;
        __cxa_guard_release(puVar9);
      }
      for (; puVar17 != (undefined8 *)0x0; puVar17 = (undefined8 *)*puVar17) {
        if (puVar17 == (undefined8 *)puVar10) {
          uVar18 = (**(code **)(*(long *)*plVar24 + 0xc0))();
          if ((uVar18 & 1) == 0) {
            local_90 = (long *)CONCAT44(local_90._4_4_,
                                        (int)local_90 + (uint)*(byte *)(lVar16 + 0xfa));
            iStack_a0 = iStack_a0 + 1;
          }
          break;
        }
      }
    }
  }
  plVar5 = *(long **)(lVar28 + 0x140);
  for (plVar24 = *(long **)(lVar28 + 0x138); plVar24 != plVar5; plVar24 = plVar24 + 1) {
    lVar16 = *plVar24;
    if (lVar16 != 0) {
      puVar17 = (undefined8 *)(*(code *)**(undefined8 **)(lVar16 + 8))((undefined8 *)(lVar16 + 8));
      if (((*puVar9 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar9), iVar14 != 0)) {
        uVar15 = FUN_01de2ec4();
        *(undefined8 *)puVar10 = uVar15;
        __cxa_guard_release(puVar9);
      }
      for (; puVar17 != (undefined8 *)0x0; puVar17 = (undefined8 *)*puVar17) {
        if (puVar17 == (undefined8 *)puVar10) {
          uVar18 = (**(code **)(*(long *)*plVar24 + 0xc0))();
          if ((uVar18 & 1) == 0) {
            local_90 = (long *)CONCAT44(local_90._4_4_,
                                        (int)local_90 + (uint)*(byte *)(lVar16 + 0xfa));
            iStack_a0 = iStack_a0 + 1;
          }
          break;
        }
      }
    }
  }
  if (!bVar8) {
    *(undefined8 *)(lVar28 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar28 + 0xf0));
  }
  (**(code **)(*(long *)(lVar28 + -0x28) + 0x60))();
  goto LAB_00f6f810;
code_r0x00f703cc:
  cVar7 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar24,0x10);
  if (bVar8) {
    *plVar24 = lVar16;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00f703d4;
  goto LAB_00f703c4;
}


