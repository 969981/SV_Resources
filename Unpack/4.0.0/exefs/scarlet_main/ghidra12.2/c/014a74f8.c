/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014a74f8; name: FUN_014a74f8
 */


void FUN_014a74f8(long param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  LightEventType *pLVar2;
  short *psVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  short sVar12;
  long *plVar13;
  long local_80;
  long local_78;
  long local_70;
  long *local_68;
  long *local_60;
  undefined8 uStack_58;
  long *local_50 [2];
  
  local_60 = (long *)0x0;
  uStack_58 = 0;
  FUN_00ca1a48(&local_60,param_1 + 0x30);
  FUN_014a7c08(local_50,&local_60,param_2);
  plVar13 = local_60;
  if (local_60 != (long *)0x0) {
    plVar1 = local_60 + 3;
    do {
      sVar12 = (short)*plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(short *)plVar1 = sVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 1) {
      piVar4 = (int *)((long)local_60 + 0x1c);
      do {
        iVar9 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_80 = *plVar13;
        FUN_00c44438(lVar10 + 0x8040,&local_80);
      }
    }
    else if (sVar12 == 0) goto LAB_014a7750;
  }
  if (local_50[0] != (long *)0x0) {
    if (*(short *)((long)local_50[0] + 0x1a) != 0) {
      if ((local_50[0] == (long *)0x0) || (*(short *)((long)local_50[0] + 0x1a) == 0)) {
        plVar13 = (long *)0x0;
      }
      else {
        psVar3 = (short *)((long)local_50[0] + 0x1a);
        sVar12 = *(short *)((long)local_50[0] + 0x1a);
        do {
          sVar5 = *psVar3;
          if (sVar5 == sVar12) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar7) {
              *psVar3 = sVar12 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 != '\0') goto LAB_014a78ec;
            bVar7 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_014a78ec:
            bVar7 = false;
          }
          if (bVar7) {
            plVar13 = (long *)0x0;
            if (local_50[0][2] != 0) {
              plVar13 = (long *)(local_50[0][2] + -0x28);
            }
            break;
          }
          plVar13 = (long *)0x0;
          sVar12 = sVar5;
        } while (sVar5 != 0);
      }
      FUN_014a79b8(&local_80,param_3);
      plVar1 = plVar13 + 0x1e;
      lVar10 = nn::os::GetCurrentThread();
LAB_014a7580:
      if (*plVar1 == 0) goto code_r0x014a7588;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar13 + 0x1f));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar13 + 0x1f));
            while (*plVar1 == 0) {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar7) {
                *plVar1 = lVar10;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_014a7590;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar10;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_014a7590:
      plVar8 = local_68;
      plVar13[0x27] = local_80;
      plVar13[0x28] = local_78;
      plVar13[0x29] = local_70;
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x18))(local_68);
      }
      plVar11 = (long *)plVar13[0x2a];
      plVar13[0x2a] = (long)plVar8;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))();
      }
      pLVar2 = (LightEventType *)(plVar13 + 0x1f);
      plVar13[0x1e] = 0;
      nn::os::SignalLightEvent(pLVar2);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      FUN_0104bd38(&local_80);
      lVar10 = nn::os::GetCurrentThread();
      while (*plVar1 == 0) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar10;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') goto LAB_014a75f0;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent(pLVar2);
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent(pLVar2);
            while (*plVar1 == 0) {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar7) {
                *plVar1 = lVar10;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_014a75f0;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar10;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_014a75f0:
      plVar8 = local_68;
      plVar13[0x6c] = local_80;
      plVar13[0x6d] = local_78;
      plVar13[0x6e] = local_70;
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x18))(local_68);
      }
      plVar11 = (long *)plVar13[0x6f];
      plVar13[0x6f] = (long)plVar8;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))();
      }
      *plVar1 = 0;
      nn::os::SignalLightEvent(pLVar2);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      *(undefined1 *)((long)plVar13 + 0x129) = 1;
      FUN_010eb1d0(param_1 + (long)param_3 * 0x10 + 0x40,local_50);
      lVar10 = plVar13[6];
      psVar3 = (short *)(lVar10 + 0x1a);
      do {
        sVar12 = *psVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar7) {
          *psVar3 = sVar12 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar12 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar13 + 0x50))(plVar13);
      }
      else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    if (local_50[0] != (long *)0x0) {
      plVar13 = local_50[0] + 3;
      do {
        sVar12 = (short)*plVar13;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar7) {
          *(short *)plVar13 = sVar12 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar12 == 1) {
        piVar4 = (int *)((long)local_50[0] + 0x1c);
        do {
          iVar9 = *piVar4;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar7) {
            *piVar4 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_80 = *local_50[0];
          FUN_00c44438(lVar10 + 0x8040,&local_80);
        }
      }
      else if (sVar12 == 0) {
LAB_014a7750:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
code_r0x014a7588:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar7) {
    *plVar1 = lVar10;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_014a7590;
  goto LAB_014a7580;
}


