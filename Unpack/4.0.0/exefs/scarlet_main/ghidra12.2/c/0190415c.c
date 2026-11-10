/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0190415c; name: FUN_0190415c
 */


void FUN_0190415c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  LightEventType *pLVar2;
  long *plVar3;
  int *piVar4;
  short *psVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  short sVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  bool bVar19;
  float fVar20;
  undefined8 local_70;
  undefined4 local_64;
  
  lVar15 = *param_1;
  plVar1 = (long *)(lVar15 + 0xa0);
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar7 = '\x01';
    bVar19 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar19) {
      *plVar1 = lVar10;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_019041a0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0xa8));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar15 + 0xa8));
        while (*plVar1 == 0) {
          cVar7 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar19) {
            *plVar1 = lVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_019041a0;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar19 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar19) {
      *plVar1 = lVar10;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_019041a0:
  plVar16 = *(long **)(lVar15 + 0x40);
  plVar11 = *(long **)(lVar15 + 0x48);
  if (plVar16 != plVar11) {
    do {
      if (*plVar16 == 0) {
LAB_019041e0:
        plVar17 = plVar16 + 2;
        if (plVar17 == plVar11) {
          plVar11 = plVar16;
          plVar13 = plVar17;
          goto LAB_0190425c;
        }
        FUN_00d0a34c(plVar16,plVar17);
        plVar13 = plVar16 + 4;
        if (plVar13 != plVar11) {
          FUN_00d0a34c(plVar17,plVar13);
          if (plVar16 + 6 == plVar11) {
            plVar17 = plVar13;
          }
          else {
            do {
              plVar17 = plVar13 + 2;
              FUN_00d0a34c(plVar13,plVar17);
              plVar3 = plVar13 + 4;
              plVar13 = plVar17;
            } while (plVar3 != plVar11);
          }
        }
        plVar13 = *(long **)(lVar15 + 0x48);
        while( true ) {
          plVar11 = plVar17;
          if (plVar13 == plVar17) break;
LAB_0190425c:
          plVar17 = plVar11;
          plVar13 = plVar13 + -2;
          puVar18 = (undefined8 *)*plVar13;
          if (puVar18 != (undefined8 *)0x0) {
            psVar5 = (short *)(puVar18 + 3);
            do {
              sVar14 = *psVar5;
              cVar7 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(psVar5,0x10);
              if (bVar19) {
                *psVar5 = sVar14 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (sVar14 == 1) {
              piVar4 = (int *)((long)puVar18 + 0x1c);
              do {
                iVar9 = *piVar4;
                cVar7 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                if (bVar19) {
                  *piVar4 = -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar9 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar10 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar10;
                local_70 = *puVar18;
                FUN_00c44438(lVar10 + 0x8040,&local_70);
              }
            }
            else if (sVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
        }
        *(long **)(lVar15 + 0x48) = plVar17;
      }
      else {
        if (*(short *)(*plVar16 + 0x1a) == 0) {
          plVar11 = *(long **)(lVar15 + 0x48);
          goto LAB_019041e0;
        }
        plVar17 = *(long **)(lVar15 + 0x48);
        plVar16 = plVar16 + 2;
      }
      plVar11 = plVar17;
    } while (plVar16 != plVar17);
  }
  pLVar2 = (LightEventType *)(lVar15 + 0xa8);
  *(undefined8 *)(lVar15 + 0xa0) = 0;
  nn::os::SignalLightEvent(pLVar2);
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar7 = '\x01';
    bVar19 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar19) {
      *plVar1 = lVar10;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_019042d8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar2);
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0) {
          cVar7 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar19) {
            *plVar1 = lVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_019042d8;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar19 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar19) {
      *plVar1 = lVar10;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_019042d8:
  if (*(long *)(lVar15 + 0x1b8) != *(long *)(lVar15 + 0x1b0)) {
    lVar10 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
    fVar20 = *(float *)(lVar15 + 0x164) + (float)((double)*(long *)(lVar10 + 8) / 1000000000.0);
    *(float *)(lVar15 + 0x164) = fVar20;
    if (*(float *)(lVar15 + 0x168) < fVar20) {
      FUN_01904e28(lVar15 + 0x88,*(undefined8 *)(lVar15 + 0x1b0),lVar15 + 0x1e8,0,1);
      *(undefined4 *)(lVar15 + 0x168) = *(undefined4 *)(*(long *)(lVar15 + 0x1b0) + 0x10);
      *(undefined4 *)(lVar15 + 0x164) = 0;
      FUN_01904894(lVar15 + 0x1b0);
    }
  }
  *plVar1 = 0;
  nn::os::SignalLightEvent(pLVar2);
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar7 = '\x01';
    bVar19 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar19) {
      *plVar1 = lVar10;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_01904308;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar2);
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0) {
          cVar7 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar19) {
            *plVar1 = lVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_01904308;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar19 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar19) {
      *plVar1 = lVar10;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_01904308:
  plVar16 = (long *)(lVar15 + 0x130);
  if (plVar16 != *(long **)(lVar15 + 0x128)) {
    plVar11 = *(long **)(lVar15 + 0x128);
    do {
      plVar17 = *(long **)(lVar15 + 0x40);
      plVar13 = *(long **)(lVar15 + 0x48);
      if (plVar17 == plVar13) {
LAB_019045d4:
        plVar17 = (long *)FUN_01904804(lVar15 + 0x128,plVar11);
      }
      else {
        bVar19 = false;
        do {
          lVar10 = *plVar17;
          if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
            psVar5 = (short *)(lVar10 + 0x1a);
            sVar14 = *(short *)(lVar10 + 0x1a);
            do {
              sVar6 = *psVar5;
              if (sVar6 == sVar14) {
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(psVar5,0x10);
                if (bVar8) {
                  *psVar5 = sVar14 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
                if (cVar7 != '\0') goto LAB_019046ec;
                bVar8 = true;
              }
              else {
                ClearExclusiveLocal();
LAB_019046ec:
                bVar8 = false;
              }
              if (bVar8) {
                lVar10 = *(long *)(lVar10 + 0x10);
                if (lVar10 != 0) {
                  lVar12 = 0;
                  if (*(long **)(lVar10 + 8) != (long *)0x0) {
                    lVar12 = **(long **)(lVar10 + 8);
                  }
                  bVar19 = (bool)(bVar19 | plVar11[4] == lVar12);
                  (**(code **)(*(long *)(lVar10 + -0x28) + 0x60))();
                }
                break;
              }
              sVar14 = sVar6;
            } while (sVar6 != 0);
          }
          plVar17 = plVar17 + 2;
        } while (plVar17 != plVar13);
        if (!bVar19) goto LAB_019045d4;
        plVar17 = (long *)plVar11[1];
        if (plVar17 == (long *)0x0) {
          plVar17 = (long *)plVar11[2];
          if (*(long **)plVar11[2] != plVar11) {
            lVar10 = plVar11[2];
            while( true ) {
              plVar17 = *(long **)(lVar10 + 0x10);
              if (*plVar17 == lVar10) break;
              lVar10 = *(long *)(lVar10 + 0x10);
            }
          }
        }
        else {
          plVar11 = (long *)*plVar17;
          if (plVar11 != (long *)0x0) {
            plVar13 = (long *)*plVar11;
            plVar17 = plVar11;
            if (plVar13 != (long *)0x0) {
              plVar11 = (long *)*plVar13;
              plVar17 = plVar13;
              if (plVar11 != (long *)0x0) {
                plVar17 = plVar11;
                for (plVar11 = (long *)*plVar11; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11)
                {
                  plVar17 = plVar11;
                }
              }
            }
          }
        }
      }
      plVar11 = plVar17;
    } while (plVar16 != plVar17);
  }
  *plVar1 = 0;
  nn::os::SignalLightEvent(pLVar2);
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar7 = '\x01';
    bVar19 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar19) {
      *plVar1 = lVar10;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_0190433c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar2);
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0) {
          cVar7 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar19) {
            *plVar1 = lVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_0190433c;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar19 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar19) {
      *plVar1 = lVar10;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_0190433c:
  if (*(long *)(lVar15 + 0x1b8) == *(long *)(lVar15 + 0x1b0)) {
    if (*(long *)(lVar15 + 0x158) == *(long *)(lVar15 + 0x48) - *(long *)(lVar15 + 0x40) >> 4) {
      plVar11 = *(long **)(lVar15 + 0x128);
      while (plVar17 = plVar11, plVar17 != plVar16) {
        if ((char)plVar17[5] == '\0') goto LAB_0190435c;
        plVar11 = (long *)plVar17[1];
        if (plVar11 == (long *)0x0) {
          plVar11 = (long *)plVar17[2];
          if (*(long **)plVar17[2] != plVar17) {
            lVar10 = plVar17[2];
            while( true ) {
              plVar11 = *(long **)(lVar10 + 0x10);
              if (*plVar11 == lVar10) break;
              lVar10 = *(long *)(lVar10 + 0x10);
            }
          }
        }
        else {
          plVar17 = (long *)*plVar11;
          if (plVar17 != (long *)0x0) {
            plVar13 = (long *)*plVar17;
            plVar11 = plVar17;
            if (plVar13 != (long *)0x0) {
              plVar17 = (long *)*plVar13;
              plVar11 = plVar13;
              if (plVar17 != (long *)0x0) {
                for (plVar13 = (long *)*plVar17; plVar11 = plVar17, plVar13 != (long *)0x0;
                    plVar13 = (long *)*plVar13) {
                  plVar17 = plVar13;
                }
              }
            }
          }
        }
      }
      local_64 = *(undefined4 *)(lVar15 + 0x16c);
      lVar10 = FUN_01904af0(*(long *)(lVar15 + 0x40),*(long *)(lVar15 + 0x48),&local_64);
      if (*(long *)(lVar15 + 0x48) == lVar10) {
        FUN_019047c4(lVar15);
      }
    }
  }
LAB_0190435c:
  *plVar1 = 0;
  nn::os::SignalLightEvent(pLVar2);
  return;
}


