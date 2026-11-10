/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0198ff64; name: FUN_0198ff64
 */


void FUN_0198ff64(long param_1)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  short sVar10;
  long *plVar11;
  long lVar12;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  FUN_00d0a71c((long *)(param_1 + 0x50));
  if ((*(long *)(param_1 + 0x50) != 0) && (*(short *)(*(long *)(param_1 + 0x50) + 0x1a) != 0)) {
    lVar9 = *(long *)(param_1 + 0x50);
    if ((lVar9 == 0) || (*(short *)(lVar9 + 0x1a) == 0)) {
      plVar11 = (long *)0x0;
    }
    else {
      psVar2 = (short *)(lVar9 + 0x1a);
      sVar10 = *(short *)(lVar9 + 0x1a);
      do {
        sVar3 = *psVar2;
        if (sVar3 == sVar10) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_019903f4;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_019903f4:
          bVar5 = false;
        }
        if (bVar5) {
          plVar11 = (long *)0x0;
          if (*(long *)(lVar9 + 0x10) != 0) {
            plVar11 = (long *)(*(long *)(lVar9 + 0x10) + -0x28);
          }
          break;
        }
        plVar11 = (long *)0x0;
        sVar10 = sVar3;
      } while (sVar3 != 0);
    }
    plVar8 = plVar11 + 0x22;
    lVar12 = *plVar8;
    lVar9 = nn::os::GetCurrentThread();
    if (lVar9 != lVar12) {
      lVar9 = nn::os::GetCurrentThread();
LAB_0198ffcc:
      if (*plVar8 == 0) goto code_r0x0198ffd4;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar11 + 0x23));
      do {
        if (*plVar8 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar11 + 0x23));
            while (*plVar8 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar5) {
                *plVar8 = lVar9;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_0198ffdc;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = lVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_0198ffdc:
      bVar5 = false;
      goto LAB_0198ffe0;
    }
    bVar5 = true;
LAB_0198ffe0:
    plVar8 = (long *)FUN_01990520(plVar11[0x25],plVar11[0x26]);
    if (((long *)plVar11[0x26] == plVar8) || (*plVar8 == 0)) {
      plVar8 = (long *)FUN_01990520(plVar11[0x2c],plVar11[0x2d]);
      if ((long *)plVar11[0x2d] == plVar8) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        if (*plVar8 != 0) {
          lVar9 = *plVar8 + -0x20;
        }
      }
    }
    else {
      lVar9 = *plVar8 + -0x20;
    }
    if (!bVar5) {
      plVar11[0x22] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar11 + 0x23));
    }
    if (lVar9 != 0) {
      lVar12 = FUN_011e0dc4(plVar11 + 0x21,&local_50);
      if (lVar12 != 0) {
        local_50 = (undefined8 *)0x0;
        uStack_48 = 0;
        FUN_00c43ef0(&local_50,lVar12 + 0x98);
        local_60 = (undefined8 *)0x0;
        uStack_58 = 0;
        if (local_50[2] == lVar12 + 0x28) {
          FUN_00d1cef8(&local_60,&local_50);
        }
        puVar6 = local_50;
        if (local_50 != (undefined8 *)0x0) {
          psVar2 = (short *)(local_50 + 3);
          do {
            sVar10 = *psVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar5) {
              *psVar2 = sVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar10 == 1) {
            piVar1 = (int *)((long)local_50 + 0x1c);
            do {
              iVar7 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar12 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar12;
              local_28 = *puVar6;
              FUN_00c44438(lVar12 + 0x8040,&local_28);
            }
          }
          else if (sVar10 == 0) goto LAB_01990210;
        }
        FUN_015b761c(param_1 + 0x98,&local_60);
        puVar6 = local_60;
        if (local_60 != (undefined8 *)0x0) {
          psVar2 = (short *)(local_60 + 3);
          do {
            sVar10 = *psVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar5) {
              *psVar2 = sVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar10 == 1) {
            piVar1 = (int *)((long)local_60 + 0x1c);
            do {
              iVar7 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar12 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar12;
              local_50 = (undefined8 *)*puVar6;
              FUN_00c44438(lVar12 + 0x8040,&local_50);
            }
          }
          else if (sVar10 == 0) goto LAB_01990210;
        }
      }
      local_50 = (undefined8 *)0x0;
      uStack_48 = 0;
      FUN_00c43ef0(&local_50,lVar9 + 0x98);
      local_60 = (undefined8 *)0x0;
      uStack_58 = 0;
      if (local_50[2] == lVar9 + 0x28) {
        FUN_00c92210(&local_60,&local_50);
      }
      puVar6 = local_50;
      if (local_50 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_50 + 3);
        do {
          sVar10 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar10 == 1) {
          piVar1 = (int *)((long)local_50 + 0x1c);
          do {
            iVar7 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_28 = *puVar6;
            FUN_00c44438(lVar9 + 0x8040,&local_28);
          }
        }
        else if (sVar10 == 0) goto LAB_01990210;
      }
      FUN_00c93a38(param_1 + 0x88,&local_60);
      puVar6 = local_60;
      if (local_60 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_60 + 3);
        do {
          sVar10 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar10 == 1) {
          piVar1 = (int *)((long)local_60 + 0x1c);
          do {
            iVar7 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_50 = (undefined8 *)*puVar6;
            FUN_00c44438(lVar9 + 0x8040,&local_50);
          }
        }
        else if (sVar10 == 0) {
LAB_01990210:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      FUN_00d1af18(param_1 + 0xf0);
      *(undefined4 *)(param_1 + 0xe8) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
    (**(code **)(*plVar11 + 0x60))(plVar11);
  }
  return;
code_r0x0198ffd4:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar5) {
    *plVar8 = lVar9;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_0198ffdc;
  goto LAB_0198ffcc;
}


