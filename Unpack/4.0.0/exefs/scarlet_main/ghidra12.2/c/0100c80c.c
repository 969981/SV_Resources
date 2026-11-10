/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0100c80c; name: FUN_0100c80c
 */


void FUN_0100c80c(long param_1)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  short sVar7;
  char cVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  bool bVar16;
  short sVar17;
  ulong uVar18;
  long *local_80;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  plVar1 = (long *)(param_1 + 0x280);
  lVar14 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x288) == 0) {
    cVar8 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar16) {
      *plVar1 = lVar14;
      *(undefined8 *)(param_1 + 0x288) = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_0100c850;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x290));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x288) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x290));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x288) == 0) {
          cVar8 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar16) {
            *plVar1 = lVar14;
            *(undefined8 *)(param_1 + 0x288) = 0;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_0100c850;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar16) {
      *plVar1 = lVar14;
      *(undefined8 *)(param_1 + 0x288) = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_0100c850:
  lVar14 = FUN_00d8f934(param_1);
  puVar11 = PTR_LAB_047d3de8;
  puVar10 = PTR_DAT_047d3918;
  puVar9 = PTR_DAT_047d3910;
  if (lVar14 != 0) {
    uVar18 = 0;
    do {
      FUN_0100cb6c(local_78,param_1,uVar18 & 0xffffffff);
      puVar12 = local_78[0];
      if (local_78[0] != (undefined8 *)0x0) {
        if (*(short *)((long)local_78[0] + 0x1a) != 0) {
          psVar2 = (short *)((long)local_78[0] + 0x1a);
          sVar17 = *(short *)((long)local_78[0] + 0x1a);
          do {
            sVar7 = *psVar2;
            if (sVar7 == sVar17) {
              cVar8 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar16) {
                *psVar2 = sVar17 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 != '\0') goto LAB_0100c9a0;
              bVar16 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_0100c9a0:
              bVar16 = false;
            }
            if (bVar16) {
              local_80 = (long *)0x0;
              if (local_78[0][2] != 0) {
                local_80 = (long *)(local_78[0][2] + -0x28);
              }
              goto LAB_0100c9cc;
            }
            sVar17 = sVar7;
          } while (sVar7 != 0);
        }
        local_80 = (long *)0x0;
LAB_0100c9cc:
        psVar2 = (short *)(local_78[0] + 3);
        do {
          sVar17 = *psVar2;
          cVar8 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar16) {
            *psVar2 = sVar17 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar17 == 1) {
          piVar3 = (int *)((long)local_78[0] + 0x1c);
          do {
            iVar13 = *piVar3;
            cVar8 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar16) {
              *piVar3 = -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar13 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
              FUN_00100190(puVar11,puVar9,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar14 = *(long *)puVar9;
            *(long *)puVar10 = lVar14;
            local_68 = *puVar12;
            FUN_00c44438(lVar14 + 0x8040,&local_68);
          }
        }
        else if (sVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
        if (local_80 != (long *)0x0) {
          *(undefined1 *)((long)local_80 + 0x71) = 0;
          lVar14 = local_80[6];
          psVar2 = (short *)(lVar14 + 0x1a);
          do {
            sVar17 = *psVar2;
            cVar8 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar16) {
              *psVar2 = sVar17 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (sVar17 == 1) {
            *(undefined8 *)(lVar14 + 0x10) = 0;
            (**(code **)(*local_80 + 0x50))();
          }
          else if (sVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
      uVar18 = uVar18 + 1;
      uVar15 = FUN_00d8f934(param_1);
    } while (uVar18 < uVar15);
  }
  do {
    lVar14 = *plVar1;
    lVar6 = *(long *)(param_1 + 0x288);
    cVar8 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar16) {
      *plVar1 = lVar14;
      *(long *)(param_1 + 0x288) = lVar6;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  do {
    lVar4 = *plVar1;
    lVar5 = *(long *)(param_1 + 0x288);
    if (lVar4 != lVar14 || lVar5 != lVar6) {
      bVar16 = false;
      ClearExclusiveLocal();
      goto LAB_0100c8e4;
    }
    cVar8 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar16) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x284) = lVar6;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  bVar16 = true;
LAB_0100c8e4:
  if (!bVar16) {
    do {
      lVar14 = *plVar1;
      lVar6 = *(long *)(param_1 + 0x288);
      if (lVar14 != lVar4 || lVar6 != lVar5) {
        bVar16 = false;
        ClearExclusiveLocal();
        goto joined_r0x0100cad4;
      }
      cVar8 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar16) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x284) = lVar5;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar16 = true;
joined_r0x0100cad4:
    if (!bVar16) {
      do {
        lVar4 = *plVar1;
        lVar5 = *(long *)(param_1 + 0x288);
        if (lVar4 != lVar14 || lVar5 != lVar6) {
          bVar16 = false;
          ClearExclusiveLocal();
          lVar14 = lVar4;
          lVar6 = lVar5;
          goto joined_r0x0100cad4;
        }
        cVar8 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar16) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x284) = lVar6;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      bVar16 = true;
      lVar14 = lVar4;
      lVar6 = lVar5;
      goto joined_r0x0100cad4;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x290));
  return;
}


