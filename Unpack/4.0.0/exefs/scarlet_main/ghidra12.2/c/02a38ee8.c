/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a38ee8; name: FUN_02a38ee8
 */


void FUN_02a38ee8(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  short sVar9;
  long lVar10;
  long lVar11;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 *local_50 [2];
  undefined8 local_28;
  
  if (*(long *)(param_1 + 0xd8) == 0) {
    lVar11 = *(long *)(param_1 + 0xb0);
    plVar8 = (long *)(lVar11 + 0x110);
    lVar10 = *plVar8;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 == lVar10) {
      bVar5 = true;
    }
    else {
      lVar7 = nn::os::GetCurrentThread();
      do {
        if (*plVar8 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x118));
            while (*plVar8 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar5) {
                *plVar8 = lVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_02a38f54;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = lVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_02a38f54:
      bVar5 = false;
    }
    plVar8 = (long *)FUN_01fabf90(*(undefined8 *)(lVar11 + 0x128),*(undefined8 *)(lVar11 + 0x130));
    if ((*(long **)(lVar11 + 0x130) == plVar8) || (*plVar8 == 0)) {
      plVar8 = (long *)FUN_01fabf90(*(undefined8 *)(lVar11 + 0x160),*(undefined8 *)(lVar11 + 0x168))
      ;
      if (*(long **)(lVar11 + 0x168) == plVar8) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        if (*plVar8 != 0) {
          lVar7 = *plVar8 + -0x20;
        }
      }
    }
    else {
      lVar7 = *plVar8 + -0x20;
    }
    if (!bVar5) {
      *(undefined8 *)(lVar11 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x118));
    }
    if (lVar7 != 0) {
      *(long *)(param_1 + 0xd8) = lVar7;
      local_70 = 0xa35f47236b0e0a9b;
      pcStack_68 = "static";
      local_60 = 6;
      local_58 = (long *)0x0;
      FUN_015859fc(local_50,lVar7,&local_70);
      plVar8 = (long *)0x0;
      if (local_50[0] != (undefined8 *)0x0) {
        if (*(short *)((long)local_50[0] + 0x1a) != 0) {
          psVar1 = (short *)((long)local_50[0] + 0x1a);
          sVar9 = *(short *)((long)local_50[0] + 0x1a);
          do {
            sVar3 = *psVar1;
            if (sVar3 == sVar9) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar9 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 != '\0') goto LAB_02a390fc;
              bVar5 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_02a390fc:
              bVar5 = false;
            }
            if (bVar5) {
              plVar8 = (long *)0x0;
              if (local_50[0][2] != 0) {
                plVar8 = (long *)(local_50[0][2] + -0x28);
              }
              goto LAB_02a39124;
            }
            sVar9 = sVar3;
          } while (sVar3 != 0);
        }
        plVar8 = (long *)0x0;
LAB_02a39124:
        psVar1 = (short *)(local_50[0] + 3);
        do {
          sVar9 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar9 == 1) {
          piVar2 = (int *)((long)local_50[0] + 0x1c);
          do {
            iVar6 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar7 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar7;
            local_28 = *local_50[0];
            FUN_00c44438(lVar7 + 0x8040,&local_28);
          }
        }
        else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      if (plVar8 != (long *)0x0) {
        lVar7 = plVar8[6];
        psVar1 = (short *)(lVar7 + 0x1a);
        *(undefined1 *)((long)plVar8 + 0x71) = 0;
        do {
          sVar9 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar9 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*plVar8 + 0x50))(plVar8);
        }
        else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
  }
  return;
}


