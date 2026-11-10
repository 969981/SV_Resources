/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010f42fc; name: FUN_010f42fc
 */


void FUN_010f42fc(undefined8 *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  bool bVar11;
  long lVar12;
  undefined8 *local_68;
  undefined8 uStack_60;
  long *local_58;
  long *local_50;
  long local_48;
  
  if ((*(long *)(param_2 + 0x120) == 0) || (*(short *)(*(long *)(param_2 + 0x120) + 0x1a) == 0)) {
    FUN_00c9e664(&local_58,param_2 + 0xe8);
    if (local_50 == (long *)0x0) {
      lVar12 = 0;
    }
    else {
      lVar12 = local_50[9];
      plVar8 = local_50 + 5;
      do {
        lVar7 = *plVar8;
        iVar6 = (int)lVar7 + -1;
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar11) {
          *(int *)plVar8 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_50 + 0x10))();
      }
      else if ((int)lVar7 == 0) {
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
    if (lVar12 == 0) goto LAB_010f4334;
    plVar8 = (long *)(lVar12 + 0x110);
    lVar9 = *plVar8;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 != lVar9) {
      lVar7 = nn::os::GetCurrentThread();
LAB_010f43c4:
      if (*plVar8 == 0) goto code_r0x010f43cc;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x118));
      do {
        if (*plVar8 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x118));
            while (*plVar8 == 0) {
              cVar4 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar11) {
                *plVar8 = lVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_010f43d4;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar11) {
          *plVar8 = lVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_010f43d4:
      bVar11 = false;
      goto LAB_010f43d8;
    }
    bVar11 = true;
LAB_010f43d8:
    plVar8 = (long *)FUN_010f49e0(*(undefined8 *)(lVar12 + 0x128),*(undefined8 *)(lVar12 + 0x130));
    if ((*(long **)(lVar12 + 0x130) == plVar8) || (*plVar8 == 0)) {
      plVar8 = (long *)FUN_010f49e0(*(undefined8 *)(lVar12 + 0x160),*(undefined8 *)(lVar12 + 0x168))
      ;
      if (*(long **)(lVar12 + 0x168) == plVar8) {
        plVar10 = (long *)0x0;
      }
      else {
        plVar10 = (long *)0x0;
        if (*plVar8 != 0) {
          plVar10 = (long *)(*plVar8 + -0x20);
        }
      }
    }
    else {
      plVar10 = (long *)(*plVar8 + -0x20);
    }
    if (!bVar11) {
      *(undefined8 *)(lVar12 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x118));
    }
    if (plVar10 == (long *)0x0) goto LAB_010f4334;
    (**(code **)(*plVar10 + 0x18))(&local_58,plVar10);
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    if ((long *)local_58[2] == plVar10 + 5) {
      FUN_010f50e4(&local_68,&local_58);
    }
    plVar8 = local_58;
    if (local_58 != (long *)0x0) {
      plVar10 = local_58 + 3;
      do {
        sVar3 = (short)*plVar10;
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar11) {
          *(short *)plVar10 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_58 + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar11) {
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
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_48 = *plVar8;
          FUN_00c44438(lVar12 + 0x8040,&local_48);
        }
      }
      else if (sVar3 == 0) goto LAB_010f44f8;
    }
    FUN_00f3c15c(param_2 + 0x120,&local_68);
    puVar5 = local_68;
    if (local_68 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_68 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar11) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_68 + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar11) {
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
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_58 = (long *)*puVar5;
          FUN_00c44438(lVar12 + 0x8040,&local_58);
        }
      }
      else if (sVar3 == 0) {
LAB_010f44f8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
LAB_010f4334:
  *param_1 = 0;
  param_1[1] = 0;
  FUN_010f46c4(param_1,param_2 + 0x120);
  return;
code_r0x010f43cc:
  cVar4 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar11) {
    *plVar8 = lVar7;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_010f43d4;
  goto LAB_010f43c4;
}


