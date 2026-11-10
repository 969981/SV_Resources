/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c9e664; name: FUN_00c9e664
 */


void FUN_00c9e664(long *param_1,long *param_2)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  short sVar11;
  bool bVar12;
  long lVar13;
  long *plVar14;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50 [2];
  undefined8 local_28;
  
  *param_1 = 0;
  lVar10 = *param_2;
  param_1[1] = lVar10;
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x28);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = iVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  lVar10 = *param_2;
  if (lVar10 != 0) {
    plVar14 = (long *)(lVar10 + 0x30);
    lVar13 = *plVar14;
    lVar8 = nn::os::GetCurrentThread();
    if (lVar8 != lVar13) {
      lVar8 = nn::os::GetCurrentThread();
LAB_00c9e6d0:
      if (*plVar14 == 0) goto code_r0x00c9e6d8;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x38));
      do {
        if (*plVar14 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x38));
            while (*plVar14 == 0) {
              cVar4 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar12) {
                *plVar14 = lVar8;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_00c9e6e0;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar12) {
          *plVar14 = lVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_00c9e6e0:
      bVar12 = false;
      goto LAB_00c9e6e4;
    }
    plVar14 = (long *)0x0;
    bVar12 = true;
LAB_00c9e6e4:
    plVar9 = *(long **)(lVar10 + 0x48);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))(local_50);
      local_60 = (undefined8 *)0x0;
      uStack_58 = 0;
      if ((long *)local_50[0][2] == plVar9 + 5) {
        FUN_00c9ea00(&local_60,local_50);
      }
      puVar6 = local_50[0];
      if (local_50[0] != (undefined8 *)0x0) {
        psVar2 = (short *)(local_50[0] + 3);
        do {
          sVar11 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar11 == 1) {
          piVar1 = (int *)((long)local_50[0] + 0x1c);
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
            lVar10 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar10;
            local_28 = *puVar6;
            FUN_00c44438(lVar10 + 0x8040,&local_28);
          }
        }
        else if (sVar11 == 0) goto LAB_00c9e80c;
      }
      if ((local_60 == (undefined8 *)0x0) || (*(short *)((long)local_60 + 0x1a) == 0)) {
        lVar10 = 0;
      }
      else {
        psVar2 = (short *)((long)local_60 + 0x1a);
        sVar11 = *(short *)((long)local_60 + 0x1a);
        do {
          sVar3 = *psVar2;
          if (sVar3 == sVar11) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar5) {
              *psVar2 = sVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_00c9e934;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00c9e934:
            bVar5 = false;
          }
          if (bVar5) {
            lVar10 = 0;
            if (local_60[2] != 0) {
              lVar10 = local_60[2] + -0x28;
            }
            break;
          }
          lVar10 = 0;
          sVar11 = sVar3;
        } while (sVar3 != 0);
      }
      plVar9 = (long *)*param_1;
      *param_1 = 0;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x60))();
      }
      puVar6 = local_60;
      *param_1 = lVar10;
      if (local_60 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_60 + 3);
        do {
          sVar11 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar11 == 1) {
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
            lVar10 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar10;
            local_50[0] = (undefined8 *)*puVar6;
            FUN_00c44438(lVar10 + 0x8040,local_50);
          }
        }
        else if (sVar11 == 0) {
LAB_00c9e80c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
    if (!bVar12) {
      *plVar14 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar14 + 1));
    }
  }
  return;
code_r0x00c9e6d8:
  cVar4 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar14,0x10);
  if (bVar12) {
    *plVar14 = lVar8;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00c9e6e0;
  goto LAB_00c9e6d0;
}


