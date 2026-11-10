/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028ec320; name: FUN_028ec320
 */


void FUN_028ec320(long param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  plVar18 = (long *)(param_1 + 0x3c0);
  lVar12 = *plVar18;
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 != lVar12) {
    lVar11 = nn::os::GetCurrentThread();
LAB_028ec364:
    if (*plVar18 == 0) goto code_r0x028ec36c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3c8));
    do {
      if (*plVar18 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3c8));
          while (*plVar18 == 0) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar7) {
              *plVar18 = lVar11;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_028ec374;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar7) {
        *plVar18 = lVar11;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_028ec374:
    bVar7 = false;
    goto LAB_028ec378;
  }
  plVar18 = (long *)0x0;
  bVar7 = true;
LAB_028ec378:
  puVar8 = PTR_LAB_047d3de8;
  puVar13 = *(undefined8 **)(param_1 + 0x3d8);
  puVar14 = *(undefined8 **)(param_1 + 0x3e0);
  if (puVar13 == puVar14) {
LAB_028ec4b0:
    if ((puVar13 != puVar14) && (puVar17 = puVar13 + 2, puVar17 != puVar14)) {
      plVar3 = (long *)0x0;
      if (param_2 != (long *)0x0) {
        plVar3 = param_2 + 5;
      }
      do {
        (**(code **)(*param_2 + 0x18))(local_78,param_2);
        local_88 = (undefined8 *)0x0;
        uStack_80 = 0;
        if ((long *)local_78[0][2] == plVar3) {
          FUN_00c9ea00(&local_88,local_78);
        }
        puVar15 = local_78[0];
        if (local_78[0] != (undefined8 *)0x0) {
          psVar1 = (short *)(local_78[0] + 3);
          do {
            sVar4 = *psVar1;
            cVar6 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar4 == 1) {
            piVar2 = (int *)((long)local_78[0] + 0x1c);
            do {
              iVar10 = *piVar2;
              cVar6 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar10 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar11 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar11;
              local_68 = *puVar15;
              FUN_00c44438(lVar11 + 0x8040,&local_68);
            }
          }
          else if (sVar4 == 0) goto LAB_028ec79c;
        }
        puVar15 = local_88;
        puVar16 = (undefined8 *)*puVar17;
        if (local_88 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_88 + 3);
          do {
            sVar4 = *psVar1;
            cVar6 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar4 == 1) {
            piVar2 = (int *)((long)local_88 + 0x1c);
            do {
              iVar10 = *piVar2;
              cVar6 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar10 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar11 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar11;
              local_78[0] = (undefined8 *)*puVar15;
              FUN_00c44438(lVar11 + 0x8040,local_78);
            }
          }
          else if (sVar4 == 0) goto LAB_028ec79c;
        }
        if (puVar16 != puVar15) {
          FUN_00d0a34c(puVar13,puVar17);
          puVar13 = puVar13 + 2;
        }
        puVar17 = puVar17 + 2;
      } while (puVar17 != puVar14);
    }
  }
  else {
    plVar3 = (long *)0x0;
    if (param_2 != (long *)0x0) {
      plVar3 = param_2 + 5;
    }
    do {
      (**(code **)(*param_2 + 0x18))(local_78,param_2);
      local_88 = (undefined8 *)0x0;
      uStack_80 = 0;
      if ((long *)local_78[0][2] == plVar3) {
        FUN_00c9ea00(&local_88,local_78);
      }
      puVar17 = local_78[0];
      if (local_78[0] != (undefined8 *)0x0) {
        psVar1 = (short *)(local_78[0] + 3);
        do {
          sVar4 = *psVar1;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar4 == 1) {
          piVar2 = (int *)((long)local_78[0] + 0x1c);
          do {
            iVar10 = *piVar2;
            cVar6 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(puVar8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_68 = *puVar17;
            FUN_00c44438(lVar11 + 0x8040,&local_68);
          }
        }
        else if (sVar4 == 0) goto LAB_028ec79c;
      }
      puVar17 = local_88;
      puVar15 = (undefined8 *)*puVar13;
      if (local_88 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_88 + 3);
        do {
          sVar4 = *psVar1;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar4 == 1) {
          piVar2 = (int *)((long)local_88 + 0x1c);
          do {
            iVar10 = *piVar2;
            cVar6 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(puVar8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_78[0] = (undefined8 *)*puVar17;
            FUN_00c44438(lVar11 + 0x8040,local_78);
          }
        }
        else if (sVar4 == 0) goto LAB_028ec79c;
      }
      if (puVar15 == puVar17) goto LAB_028ec4b0;
      puVar13 = puVar13 + 2;
    } while (puVar13 != puVar14);
    puVar13 = puVar14;
  }
  puVar14 = *(undefined8 **)(param_1 + 0x3e0);
  lVar11 = (long)puVar14 - (long)puVar13;
  if (lVar11 != 0) {
    puVar17 = (undefined8 *)((long)puVar13 + lVar11);
    puVar8 = PTR_LAB_047d3de8;
    puVar9 = PTR_LAB_047d3de8;
    if (puVar17 != puVar14) {
      FUN_00d0a34c(puVar13,puVar17);
      puVar13 = puVar13 + 2;
      if (puVar17 + 2 != puVar14) {
        do {
          FUN_00d0a34c(puVar13,puVar13 + (lVar11 >> 4) * 2);
          puVar13 = puVar13 + 2;
        } while (puVar14 + (lVar11 >> 4) * -2 != puVar13);
      }
      puVar14 = *(undefined8 **)(param_1 + 0x3e0);
      puVar8 = PTR_LAB_047d3de8;
      puVar9 = PTR_LAB_047d3de8;
    }
    while (PTR_LAB_047d3de8 = puVar9, puVar9 = PTR_LAB_047d3de8, PTR_LAB_047d3de8 = puVar8,
          puVar14 != puVar13) {
      puVar14 = puVar14 + -2;
      puVar17 = (undefined8 *)*puVar14;
      if (puVar17 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar17 + 3);
        do {
          sVar4 = *psVar1;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar4 == 1) {
          piVar2 = (int *)((long)puVar17 + 0x1c);
          do {
            iVar10 = *piVar2;
            cVar6 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          puVar8 = PTR_LAB_047d3de8;
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(puVar9,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_78[0] = (undefined8 *)*puVar17;
            FUN_00c44438(lVar11 + 0x8040,local_78);
            puVar8 = PTR_LAB_047d3de8;
          }
        }
        else {
          puVar8 = PTR_LAB_047d3de8;
          if (sVar4 == 0) {
LAB_028ec79c:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
      }
    }
    *(undefined8 **)(param_1 + 0x3e0) = puVar13;
  }
  if (!bVar7) {
    *plVar18 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar18 + 1));
  }
  return;
code_r0x028ec36c:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar7) {
    *plVar18 = lVar11;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_028ec374;
  goto LAB_028ec364;
}


