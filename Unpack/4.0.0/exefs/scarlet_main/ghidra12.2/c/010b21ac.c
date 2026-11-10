/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010b21ac; name: FUN_010b21ac
 */


void FUN_010b21ac(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  code *pcVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  bool bVar20;
  long *local_70;
  long *local_68;
  
  for (plVar18 = *(long **)(param_1 + 0x188); plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
    plVar16 = *(long **)(plVar18[6] + 0x70);
    if (plVar16 != (long *)0x0) {
      plVar11 = plVar16 + 5;
      do {
        lVar19 = *plVar11;
        cVar3 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar20) {
          *(int *)plVar11 = (int)lVar19 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar19 == -1) {
LAB_010b2bd8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      if ((plVar16[0x22] != 0) && (plVar9 = *(long **)(plVar16[0x22] + 0x70), plVar9 != (long *)0x0)
         ) {
        plVar1 = plVar9 + 5;
        do {
          lVar19 = *plVar1;
          cVar3 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar20) {
            *(int *)plVar1 = (int)lVar19 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((int)lVar19 == -1) goto LAB_010b2bd8;
        plVar14 = (long *)plVar9[0x88];
        plVar9[0x88] = 0;
        if (plVar14 != (long *)0x0) {
          plVar2 = plVar14 + 5;
          do {
            lVar19 = *plVar2;
            iVar8 = (int)lVar19 + -1;
            cVar3 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar20) {
              *(int *)plVar2 = iVar8;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
          else if ((int)lVar19 == 0) goto LAB_010b2bb0;
        }
        do {
          lVar19 = *plVar1;
          iVar8 = (int)lVar19 + -1;
          cVar3 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar20) {
            *(int *)plVar1 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
        else if ((int)lVar19 == 0) goto LAB_010b2bb0;
      }
      do {
        lVar19 = *plVar11;
        iVar8 = (int)lVar19 + -1;
        cVar3 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar20) {
          *(int *)plVar11 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
      else if ((int)lVar19 == 0) goto LAB_010b2bb0;
    }
  }
  FUN_00c9e664(&local_70,param_1 + 0xe8);
  if (local_70 != (long *)0x0) {
    if (local_68 == (long *)0x0) {
      lVar19 = 0;
    }
    else {
      lVar19 = local_68[9];
    }
    plVar18 = (long *)(lVar19 + 0x110);
    lVar17 = *plVar18;
    lVar10 = nn::os::GetCurrentThread();
    if (lVar10 != lVar17) {
      lVar10 = nn::os::GetCurrentThread();
      bVar20 = false;
LAB_010b292c:
      if (*plVar18 == 0) goto code_r0x010b2934;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x118));
      bVar20 = false;
      do {
        if (*plVar18 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x118));
            while (*plVar18 == 0) {
              cVar3 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar20) {
                *plVar18 = lVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
              bVar20 = false;
              if (cVar3 == '\0') goto LAB_010b2340;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar4) {
          *plVar18 = lVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_010b2340;
    }
    bVar20 = true;
LAB_010b2340:
    puVar7 = PTR_FUN_047d9428;
    puVar6 = PTR_DAT_047d8d18;
    puVar5 = PTR_DAT_047d8d10;
    plVar16 = *(long **)(lVar19 + 0x130);
    for (plVar18 = *(long **)(lVar19 + 0x128); plVar18 != plVar16; plVar18 = plVar18 + 1) {
      lVar10 = *plVar18;
      if (lVar10 != 0) {
        plVar11 = (long *)(*(code *)**(undefined8 **)(lVar10 + 8))((undefined8 *)(lVar10 + 8));
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
          uVar13 = FUN_018bf298();
          *(undefined8 *)puVar6 = uVar13;
          __cxa_guard_release(puVar5);
        }
        for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
          if (plVar11 == (long *)puVar6) {
            uVar12 = (**(code **)(*(long *)*plVar18 + 0xc0))();
            if (((uVar12 & 1) == 0) && (*(long *)(lVar10 + 0x100) == *(long *)(param_1 + 0x120))) {
              (**(code **)(*(long *)*plVar18 + 0xa8))();
              *(undefined **)(lVar19 + 0x1b0) = puVar7;
              *(undefined8 *)(lVar19 + 0x1b8) = 0;
            }
            break;
          }
        }
      }
    }
    plVar16 = *(long **)(lVar19 + 0x168);
    for (plVar18 = *(long **)(lVar19 + 0x160); plVar18 != plVar16; plVar18 = plVar18 + 1) {
      lVar10 = *plVar18;
      if (lVar10 != 0) {
        plVar11 = (long *)(*(code *)**(undefined8 **)(lVar10 + 8))((undefined8 *)(lVar10 + 8));
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
          uVar13 = FUN_018bf298();
          *(undefined8 *)puVar6 = uVar13;
          __cxa_guard_release(puVar5);
        }
        for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
          if (plVar11 == (long *)puVar6) {
            uVar12 = (**(code **)(*(long *)*plVar18 + 0xc0))();
            if (((uVar12 & 1) == 0) && (*(long *)(lVar10 + 0x100) == *(long *)(param_1 + 0x120))) {
              (**(code **)(*(long *)*plVar18 + 0xa8))();
              *(undefined **)(lVar19 + 0x1b0) = puVar7;
              *(undefined8 *)(lVar19 + 0x1b8) = 0;
            }
            break;
          }
        }
      }
    }
    if ((*(byte *)(lVar19 + 0x360) & 7) != 0) {
      pcVar15 = *(code **)(lVar19 + 0x1b0);
      if ((*(ulong *)(lVar19 + 0x1b8) & 1) != 0) {
        pcVar15 = *(code **)(pcVar15 +
                            *(long *)(lVar19 + 0x108 + ((long)*(ulong *)(lVar19 + 0x1b8) >> 1)));
      }
      (*pcVar15)();
    }
    if (!bVar20) {
      *(undefined8 *)(lVar19 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x118));
    }
    if (local_68 == (long *)0x0) {
      lVar19 = 0;
    }
    else {
      lVar19 = local_68[9];
    }
    plVar18 = (long *)(lVar19 + 0x110);
    lVar17 = *plVar18;
    lVar10 = nn::os::GetCurrentThread();
    if (lVar10 != lVar17) {
      lVar10 = nn::os::GetCurrentThread();
      bVar20 = false;
LAB_010b290c:
      if (*plVar18 == 0) goto code_r0x010b2914;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x118));
      bVar20 = false;
      do {
        if (*plVar18 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x118));
            while (*plVar18 == 0) {
              cVar3 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar20) {
                *plVar18 = lVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
              bVar20 = false;
              if (cVar3 == '\0') goto LAB_010b24c8;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar4) {
          *plVar18 = lVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_010b24c8;
    }
    bVar20 = true;
LAB_010b24c8:
    puVar6 = PTR_DAT_047daff8;
    puVar5 = PTR_DAT_047daff0;
    plVar16 = *(long **)(lVar19 + 0x130);
    for (plVar18 = *(long **)(lVar19 + 0x128); plVar18 != plVar16; plVar18 = plVar18 + 1) {
      lVar10 = *plVar18;
      if (lVar10 != 0) {
        plVar11 = (long *)(*(code *)**(undefined8 **)(lVar10 + 8))((undefined8 *)(lVar10 + 8));
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
          uVar13 = FUN_0168ea04();
          *(undefined8 *)puVar6 = uVar13;
          __cxa_guard_release(puVar5);
        }
        for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
          if (plVar11 == (long *)puVar6) {
            uVar12 = (**(code **)(*(long *)*plVar18 + 0xc0))();
            if (((uVar12 & 1) == 0) && (*(long *)(lVar10 + 0x100) == *(long *)(param_1 + 0x120))) {
              (**(code **)(*(long *)*plVar18 + 0xa8))();
              *(undefined **)(lVar19 + 0x1b0) = puVar7;
              *(undefined8 *)(lVar19 + 0x1b8) = 0;
            }
            break;
          }
        }
      }
    }
    plVar16 = *(long **)(lVar19 + 0x168);
    for (plVar18 = *(long **)(lVar19 + 0x160); plVar18 != plVar16; plVar18 = plVar18 + 1) {
      lVar10 = *plVar18;
      if (lVar10 != 0) {
        plVar11 = (long *)(*(code *)**(undefined8 **)(lVar10 + 8))((undefined8 *)(lVar10 + 8));
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
          uVar13 = FUN_0168ea04();
          *(undefined8 *)puVar6 = uVar13;
          __cxa_guard_release(puVar5);
        }
        for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
          if (plVar11 == (long *)puVar6) {
            uVar12 = (**(code **)(*(long *)*plVar18 + 0xc0))();
            if (((uVar12 & 1) == 0) && (*(long *)(lVar10 + 0x100) == *(long *)(param_1 + 0x120))) {
              (**(code **)(*(long *)*plVar18 + 0xa8))();
              *(undefined **)(lVar19 + 0x1b0) = puVar7;
              *(undefined8 *)(lVar19 + 0x1b8) = 0;
            }
            break;
          }
        }
      }
    }
    if ((*(byte *)(lVar19 + 0x360) & 7) != 0) {
      pcVar15 = *(code **)(lVar19 + 0x1b0);
      if ((*(ulong *)(lVar19 + 0x1b8) & 1) != 0) {
        pcVar15 = *(code **)(pcVar15 +
                            *(long *)(lVar19 + 0x108 + ((long)*(ulong *)(lVar19 + 0x1b8) >> 1)));
      }
      (*pcVar15)();
    }
    if (!bVar20) {
      *(undefined8 *)(lVar19 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x118));
    }
    if (local_68 == (long *)0x0) {
      lVar19 = 0;
    }
    else {
      lVar19 = local_68[9];
    }
    plVar18 = (long *)(lVar19 + 0x110);
    lVar17 = *plVar18;
    lVar10 = nn::os::GetCurrentThread();
    if (lVar10 != lVar17) {
      lVar10 = nn::os::GetCurrentThread();
      bVar20 = false;
LAB_010b294c:
      if (*plVar18 == 0) goto code_r0x010b2954;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x118));
      bVar20 = false;
      do {
        if (*plVar18 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x118));
            while (*plVar18 == 0) {
              cVar3 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar20) {
                *plVar18 = lVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
              bVar20 = false;
              if (cVar3 == '\0') goto LAB_010b2648;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar4) {
          *plVar18 = lVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_010b2648;
    }
    bVar20 = true;
LAB_010b2648:
    plVar16 = *(long **)(lVar19 + 0x130);
    for (plVar18 = *(long **)(lVar19 + 0x128); plVar18 != plVar16; plVar18 = plVar18 + 1) {
      if ((((*plVar18 != 0) && (lVar10 = FUN_010b2c04(*plVar18 + 8), lVar10 != 0)) &&
          (uVar12 = (**(code **)(*(long *)*plVar18 + 0xc0))(), (uVar12 & 1) == 0)) &&
         (*(long *)(lVar10 + 0x120) == *(long *)(param_1 + 0x120))) {
        (**(code **)(*(long *)*plVar18 + 0xa8))();
        *(undefined **)(lVar19 + 0x1b0) = puVar7;
        *(undefined8 *)(lVar19 + 0x1b8) = 0;
      }
    }
    plVar16 = *(long **)(lVar19 + 0x168);
    for (plVar18 = *(long **)(lVar19 + 0x160); plVar18 != plVar16; plVar18 = plVar18 + 1) {
      if (((*plVar18 != 0) && (lVar10 = FUN_010b2c04(*plVar18 + 8), lVar10 != 0)) &&
         ((uVar12 = (**(code **)(*(long *)*plVar18 + 0xc0))(), (uVar12 & 1) == 0 &&
          (*(long *)(lVar10 + 0x120) == *(long *)(param_1 + 0x120))))) {
        (**(code **)(*(long *)*plVar18 + 0xa8))();
        *(undefined **)(lVar19 + 0x1b0) = puVar7;
        *(undefined8 *)(lVar19 + 0x1b8) = 0;
      }
    }
    if ((*(byte *)(lVar19 + 0x360) & 7) != 0) {
      pcVar15 = *(code **)(lVar19 + 0x1b0);
      if ((*(ulong *)(lVar19 + 0x1b8) & 1) != 0) {
        pcVar15 = *(code **)(pcVar15 +
                            *(long *)(lVar19 + 0x108 + ((long)*(ulong *)(lVar19 + 0x1b8) >> 1)));
      }
      (*pcVar15)();
    }
    if (!bVar20) {
      *(undefined8 *)(lVar19 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x118));
    }
    if (local_68 == (long *)0x0) {
      lVar19 = 0;
    }
    else {
      lVar19 = local_68[9];
    }
    plVar18 = (long *)(lVar19 + 0x110);
    lVar17 = *plVar18;
    lVar10 = nn::os::GetCurrentThread();
    if (lVar10 != lVar17) {
      lVar10 = nn::os::GetCurrentThread();
      bVar20 = false;
LAB_010b296c:
      if (*plVar18 == 0) goto code_r0x010b2974;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x118));
      bVar20 = false;
      do {
        if (*plVar18 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x118));
            while (*plVar18 == 0) {
              cVar3 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar20) {
                *plVar18 = lVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
              bVar20 = false;
              if (cVar3 == '\0') goto LAB_010b2788;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar4) {
          *plVar18 = lVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_010b2788;
    }
    bVar20 = true;
LAB_010b2788:
    plVar16 = *(long **)(lVar19 + 0x130);
    for (plVar18 = *(long **)(lVar19 + 0x128); plVar18 != plVar16; plVar18 = plVar18 + 1) {
      if (((*plVar18 != 0) && (lVar10 = FUN_010b2d24(*plVar18 + 8), lVar10 != 0)) &&
         ((uVar12 = (**(code **)(*(long *)*plVar18 + 0xc0))(), (uVar12 & 1) == 0 &&
          (*(long *)(lVar10 + 0x120) == *(long *)(param_1 + 0x120))))) {
        (**(code **)(*(long *)*plVar18 + 0xa8))();
        *(undefined **)(lVar19 + 0x1b0) = puVar7;
        *(undefined8 *)(lVar19 + 0x1b8) = 0;
      }
    }
    plVar16 = *(long **)(lVar19 + 0x168);
    for (plVar18 = *(long **)(lVar19 + 0x160); plVar18 != plVar16; plVar18 = plVar18 + 1) {
      if ((((*plVar18 != 0) && (lVar10 = FUN_010b2d24(*plVar18 + 8), lVar10 != 0)) &&
          (uVar12 = (**(code **)(*(long *)*plVar18 + 0xc0))(), (uVar12 & 1) == 0)) &&
         (*(long *)(lVar10 + 0x120) == *(long *)(param_1 + 0x120))) {
        (**(code **)(*(long *)*plVar18 + 0xa8))();
        *(undefined **)(lVar19 + 0x1b0) = puVar7;
        *(undefined8 *)(lVar19 + 0x1b8) = 0;
      }
    }
    if ((*(byte *)(lVar19 + 0x360) & 7) != 0) {
      pcVar15 = *(code **)(lVar19 + 0x1b0);
      if ((*(ulong *)(lVar19 + 0x1b8) & 1) != 0) {
        pcVar15 = *(code **)(pcVar15 +
                            *(long *)(lVar19 + 0x108 + ((long)*(ulong *)(lVar19 + 0x1b8) >> 1)));
      }
      (*pcVar15)();
    }
    if (!bVar20) {
      *(undefined8 *)(lVar19 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x118));
    }
  }
  if (local_68 != (long *)0x0) {
    plVar18 = local_68 + 5;
    do {
      lVar19 = *plVar18;
      iVar8 = (int)lVar19 + -1;
      cVar3 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar20) {
        *(int *)plVar18 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar19 == 0) {
LAB_010b2bb0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x60))();
  }
  return;
code_r0x010b2934:
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar4) {
    *plVar18 = lVar10;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_010b2340;
  goto LAB_010b292c;
code_r0x010b2914:
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar4) {
    *plVar18 = lVar10;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_010b24c8;
  goto LAB_010b290c;
code_r0x010b2954:
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar4) {
    *plVar18 = lVar10;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_010b2648;
  goto LAB_010b294c;
code_r0x010b2974:
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar4) {
    *plVar18 = lVar10;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_010b2788;
  goto LAB_010b296c;
}


