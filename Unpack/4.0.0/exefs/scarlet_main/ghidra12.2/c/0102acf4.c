/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0102acf4; name: FUN_0102acf4
 */


void FUN_0102acf4(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  code *pcVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long **local_a8;
  long lStack_a0;
  long ****local_98;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long ***local_68;
  
  if (*(long *)(param_1 + 0x120) == 0) {
    return;
  }
  plVar9 = (long *)FUN_00cb7028();
  plVar9 = (long *)*plVar9;
  if (plVar9 == (long *)0x0) {
    return;
  }
  plVar1 = plVar9 + 5;
  do {
    lVar10 = *plVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = (int)lVar10 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  local_70 = plVar9;
  if ((int)lVar10 == -1) {
LAB_0102b484:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  if (plVar9 == (long *)0x0) {
    return;
  }
  FUN_00c9e664(&local_80,param_1 + 0xe8);
  plVar9 = (long *)plVar9[0x22];
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)lVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar10 == -1) goto LAB_0102b484;
    lVar10 = *(long *)(param_1 + 0x120);
    if (((*PTR_DAT_047daf58 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047daf58), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047dd580,PTR_DAT_047daf60,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047daf58);
    }
    lVar10 = *(long *)(lVar10 + 0xc0);
    puVar12 = (undefined8 *)PTR_DAT_047daf60;
    if (lVar10 != 0) {
      puVar12 = (undefined8 *)(lVar10 + 0x70);
    }
    plVar18 = (long *)*puVar12;
    if (plVar18 != (long *)0x0) {
      plVar20 = plVar18 + 5;
      do {
        lVar10 = *plVar20;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar5) {
          *(int *)plVar20 = (int)lVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar10 == -1) goto LAB_0102b484;
    }
    plVar20 = (long *)plVar9[0xe];
    if (plVar20 != (long *)0x0) {
      plVar16 = plVar20 + 5;
      do {
        lVar10 = *plVar16;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *(int *)plVar16 = (int)lVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar10 == -1) goto LAB_0102b484;
    }
    FUN_0102edfc(&lStack_a0,plVar20,0);
    if (*(char *)local_98 != '\0') {
      FUN_0104196c(plVar18,plVar20[6]);
      FUN_00ed69e0(plVar18);
      plVar16 = (long *)plVar20[0x88];
      if (plVar16 != (long *)0x0) {
        plVar2 = plVar16 + 5;
        do {
          lVar10 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = (int)lVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((int)lVar10 == -1) goto LAB_0102b484;
        plVar14 = (long *)plVar18[0x88];
        plVar18[0x88] = 0;
        if (plVar14 != (long *)0x0) {
          plVar3 = plVar14 + 5;
          do {
            lVar10 = *plVar3;
            iVar8 = (int)lVar10 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar5) {
              *(int *)plVar3 = iVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 == 0) {
            (**(code **)(*plVar14 + 0x10))();
          }
          else if ((int)lVar10 == 0) goto LAB_0102aeb8;
        }
        do {
          lVar10 = *plVar2;
          iVar8 = (int)lVar10 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
        else if ((int)lVar10 == 0) goto LAB_0102aeb8;
      }
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    if (plVar20 != (long *)0x0) {
      plVar16 = plVar20 + 5;
      do {
        lVar10 = *plVar16;
        iVar8 = (int)lVar10 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *(int *)plVar16 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
      else if ((int)lVar10 == 0) goto LAB_0102aeb8;
    }
    if (plVar18 != (long *)0x0) {
      plVar20 = plVar18 + 5;
      do {
        lVar10 = *plVar20;
        iVar8 = (int)lVar10 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar5) {
          *(int *)plVar20 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
      else if ((int)lVar10 == 0) goto LAB_0102aeb8;
    }
    do {
      lVar10 = *plVar1;
      iVar8 = (int)lVar10 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    else if ((int)lVar10 == 0) {
LAB_0102aeb8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  puVar7 = PTR_DAT_047daff8;
  puVar6 = PTR_DAT_047daff0;
  if (0 < (int)local_70[0x2b]) {
    lVar10 = 0;
    do {
      plVar9 = *(long **)(local_70[0x1a] + lVar10 * 8);
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 5;
        do {
          lVar21 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = (int)lVar21 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((int)lVar21 == -1) goto LAB_0102b484;
        if (local_78 == (long *)0x0) {
          lVar21 = 0;
        }
        else {
          lVar21 = local_78[9];
        }
        plVar18 = (long *)(lVar21 + 0x110);
        lVar19 = *plVar18;
        lVar11 = nn::os::GetCurrentThread();
        if (lVar11 != lVar19) {
          lVar11 = nn::os::GetCurrentThread();
LAB_0102af6c:
          if (*plVar18 == 0) goto code_r0x0102af74;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x118));
          do {
            if (*plVar18 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x118));
                while (*plVar18 == 0) {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                  if (bVar5) {
                    *plVar18 = lVar11;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') goto LAB_0102af7c;
                }
              } while( true );
            }
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar5) {
              *plVar18 = lVar11;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
LAB_0102af7c:
          bVar5 = false;
          goto LAB_0102af80;
        }
        bVar5 = true;
LAB_0102af80:
        plVar18 = *(long **)(lVar21 + 0x128);
        plVar20 = *(long **)(lVar21 + 0x130);
        if (plVar18 != plVar20) {
          do {
            lVar11 = *plVar18;
            if (lVar11 != 0) {
              puVar12 = (undefined8 *)
                        (*(code *)**(undefined8 **)(lVar11 + 8))((undefined8 *)(lVar11 + 8));
              if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
                uVar15 = FUN_0168ea04();
                *(undefined8 *)puVar7 = uVar15;
                __cxa_guard_release(puVar6);
              }
              for (; puVar12 != (undefined8 *)0x0; puVar12 = (undefined8 *)*puVar12) {
                if (puVar12 == (undefined8 *)puVar7) {
                  uVar13 = (**(code **)(*(long *)*plVar18 + 0xc0))();
                  if (((uVar13 & 1) == 0) && (*(long **)(lVar11 + 0x118) == plVar9))
                  goto LAB_0102aff0;
                  break;
                }
              }
            }
            plVar18 = plVar18 + 1;
          } while (plVar18 != plVar20);
          plVar18 = plVar20;
LAB_0102aff0:
          if (plVar18 != *(long **)(lVar21 + 0x130)) {
            (**(code **)(*(long *)*plVar18 + 0xa8))();
            *(undefined **)(lVar21 + 0x1b0) = PTR_FUN_047d9428;
            *(undefined8 *)(lVar21 + 0x1b8) = 0;
          }
        }
        plVar18 = *(long **)(lVar21 + 0x160);
        plVar20 = *(long **)(lVar21 + 0x168);
        if (plVar18 != plVar20) {
          do {
            lVar11 = *plVar18;
            if (lVar11 != 0) {
              puVar12 = (undefined8 *)
                        (*(code *)**(undefined8 **)(lVar11 + 8))((undefined8 *)(lVar11 + 8));
              if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
                uVar15 = FUN_0168ea04();
                *(undefined8 *)puVar7 = uVar15;
                __cxa_guard_release(puVar6);
              }
              for (; puVar12 != (undefined8 *)0x0; puVar12 = (undefined8 *)*puVar12) {
                if (puVar12 == (undefined8 *)puVar7) {
                  uVar13 = (**(code **)(*(long *)*plVar18 + 0xc0))();
                  if (((uVar13 & 1) == 0) && (*(long **)(lVar11 + 0x118) == plVar9))
                  goto LAB_0102b06c;
                  break;
                }
              }
            }
            plVar18 = plVar18 + 1;
          } while (plVar18 != plVar20);
          plVar18 = plVar20;
LAB_0102b06c:
          if (plVar18 != *(long **)(lVar21 + 0x168)) {
            (**(code **)(*(long *)*plVar18 + 0xa8))();
            *(undefined **)(lVar21 + 0x1b0) = PTR_FUN_047d9428;
            *(undefined8 *)(lVar21 + 0x1b8) = 0;
          }
        }
        if ((*(byte *)(lVar21 + 0x360) & 7) != 0) {
          pcVar17 = *(code **)(lVar21 + 0x1b0);
          if ((*(ulong *)(lVar21 + 0x1b8) & 1) != 0) {
            pcVar17 = *(code **)(pcVar17 +
                                *(long *)(lVar21 + 0x108 + ((long)*(ulong *)(lVar21 + 0x1b8) >> 1)))
            ;
          }
          (*pcVar17)();
        }
        if (!bVar5) {
          *(undefined8 *)(lVar21 + 0x110) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar21 + 0x118));
        }
        do {
          lVar21 = *plVar1;
          iVar8 = (int)lVar21 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
        else if ((int)lVar21 == 0) goto LAB_0102aeb8;
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)local_70[0x2b]);
  }
  lStack_a0 = 0;
  if (local_78 != (long *)0x0) {
    lStack_a0 = local_78[9];
  }
  lStack_a0 = lStack_a0 + 0x108;
  local_a8 = &local_70;
  local_98 = &local_68;
  local_68 = &local_a8;
  FUN_0102e894(lStack_a0,&lStack_a0);
  lStack_a0 = 0;
  if (local_78 != (long *)0x0) {
    lStack_a0 = local_78[9];
  }
  lStack_a0 = lStack_a0 + 0x108;
  local_a8 = &local_70;
  local_98 = &local_68;
  local_68 = &local_a8;
  FUN_0102eb0c(lStack_a0,&lStack_a0);
  if (*(long **)(*(long *)(param_1 + 0x1c8) + 0xb0) == local_70) {
    FUN_0103060c();
  }
  plVar9 = (long *)(param_1 + 0x140);
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_0102ae20;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
        while (*plVar9 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0102ae20;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0102ae20:
  FUN_0102e178(param_1 + 0x158,param_2);
  *(undefined8 *)(param_1 + 0x140) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x148));
  if (local_78 != (long *)0x0) {
    plVar9 = local_78 + 5;
    do {
      lVar10 = *plVar9;
      iVar8 = (int)lVar10 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_0102aeb8;
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x60))();
  }
  if (local_70 == (long *)0x0) {
    return;
  }
  plVar9 = local_70 + 5;
  do {
    lVar10 = *plVar9;
    iVar8 = (int)lVar10 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *(int *)plVar9 = iVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*local_70 + 0x10))();
    return;
  }
  if ((int)lVar10 != 0) {
    return;
  }
  goto LAB_0102aeb8;
code_r0x0102af74:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar5) {
    *plVar18 = lVar11;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_0102af7c;
  goto LAB_0102af6c;
}


