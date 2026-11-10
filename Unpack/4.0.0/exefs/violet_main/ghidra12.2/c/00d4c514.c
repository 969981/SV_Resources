/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d4c514; name: FUN_00d4c514
 */


void FUN_00d4c514(undefined8 *param_1,long param_2)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  bool bVar10;
  long lVar11;
  long lVar12;
  undefined8 *local_68;
  undefined8 uStack_60;
  long *local_58;
  long *local_50;
  long local_48;
  
  if ((*(long *)(param_2 + 0x130) == 0) || (*(short *)(*(long *)(param_2 + 0x130) + 0x1a) == 0)) {
    FUN_00c9e664(&local_58,param_2 + 0xe8);
    if (local_50 == (long *)0x0) {
      lVar12 = 0;
    }
    else {
      lVar12 = local_50[9];
    }
    plVar9 = (long *)(lVar12 + 0x110);
    lVar11 = *plVar9;
    lVar8 = nn::os::GetCurrentThread();
    if (lVar8 != lVar11) {
      lVar8 = nn::os::GetCurrentThread();
LAB_00d4c570:
      if (*plVar9 == 0) goto code_r0x00d4c578;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x118));
      do {
        if (*plVar9 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x118));
            while (*plVar9 == 0) {
              cVar5 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar10) {
                *plVar9 = lVar8;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_00d4c580;
            }
          } while( true );
        }
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar10) {
          *plVar9 = lVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_00d4c580:
      bVar10 = false;
      goto LAB_00d4c584;
    }
    bVar10 = true;
LAB_00d4c584:
    plVar9 = (long *)FUN_00d4c8f0(*(undefined8 *)(lVar12 + 0x128),*(undefined8 *)(lVar12 + 0x130));
    if ((*(long **)(lVar12 + 0x130) == plVar9) || (*plVar9 == 0)) {
      plVar9 = (long *)FUN_00d4c8f0(*(undefined8 *)(lVar12 + 0x160),*(undefined8 *)(lVar12 + 0x168))
      ;
      if (*(long **)(lVar12 + 0x168) == plVar9) {
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        if (*plVar9 != 0) {
          lVar8 = *plVar9 + -0x20;
        }
      }
    }
    else {
      lVar8 = *plVar9 + -0x20;
    }
    if (!bVar10) {
      *(undefined8 *)(lVar12 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x118));
    }
    if (local_50 != (long *)0x0) {
      plVar9 = local_50 + 5;
      do {
        lVar12 = *plVar9;
        iVar7 = (int)lVar12 + -1;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar10) {
          *(int *)plVar9 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_50 + 0x10))();
      }
      else if ((int)lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x60))();
    }
    if (lVar8 == 0) goto LAB_00d4c5f4;
    local_58 = (long *)0x0;
    local_50 = (long *)0x0;
    FUN_00c43ef0(&local_58,lVar8 + 0x98);
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    if (local_58[2] == lVar8 + 0x28) {
      FUN_00d94688(&local_68,&local_58);
    }
    plVar9 = local_58;
    if (local_58 != (long *)0x0) {
      plVar2 = local_58 + 3;
      do {
        sVar4 = (short)*plVar2;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar10) {
          *(short *)plVar2 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_58 + 0x1c);
        do {
          iVar7 = *piVar3;
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar10) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_48 = *plVar9;
          FUN_00c44438(lVar12 + 0x8040,&local_48);
        }
      }
      else if (sVar4 == 0) goto LAB_00d4c728;
    }
    FUN_00d48230(param_2 + 0x130,&local_68);
    puVar6 = local_68;
    if (local_68 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_68 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar10) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_68 + 0x1c);
        do {
          iVar7 = *piVar3;
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar10) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_58 = (long *)*puVar6;
          FUN_00c44438(lVar12 + 0x8040,&local_58);
        }
      }
      else if (sVar4 == 0) {
LAB_00d4c728:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
LAB_00d4c5f4:
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00d4ca00(param_1,param_2 + 0x130);
  return;
code_r0x00d4c578:
  cVar5 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar10) {
    *plVar9 = lVar8;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_00d4c580;
  goto LAB_00d4c570;
}


