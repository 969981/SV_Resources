/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014c73c8; name: FUN_014c73c8
 */


void FUN_014c73c8(undefined8 *param_1,long param_2)

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
  bool bVar10;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 **local_28;
  
  local_50 = &local_58;
  local_28 = &local_50;
  plVar8 = (long *)(param_2 + 0x110);
  lVar9 = *plVar8;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 != lVar9) {
    lVar7 = nn::os::GetCurrentThread();
LAB_014c7414:
    if (*plVar8 == 0) goto code_r0x014c741c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x118));
    do {
      if (*plVar8 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x118));
          while (*plVar8 == 0) {
            cVar4 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar10) {
              *plVar8 = lVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_014c7424;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar10) {
        *plVar8 = lVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_014c7424:
    bVar10 = false;
    goto LAB_014c7428;
  }
  bVar10 = true;
LAB_014c7428:
  plVar8 = (long *)FUN_014c76a8(&local_28,param_2 + 0x128);
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)FUN_014c76a8(&local_28,param_2 + 0x160);
  }
  if (!bVar10) {
    *(undefined8 *)(param_2 + 0x110) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x118));
  }
  if (plVar8 == (long *)0x0) {
    local_50 = (undefined8 *)0x0;
    local_48 = 0;
    FUN_014c77d8(param_1,&local_50);
    puVar5 = local_50;
    if (local_50 == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(local_50 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_50 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == -1) {
        return;
      }
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar7 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar7;
      local_28 = (undefined8 **)*puVar5;
LAB_014c7610:
      FUN_00c44438(lVar7 + 0x8040,&local_28);
      return;
    }
  }
  else {
    (**(code **)(*plVar8 + 0x18))(&local_50,plVar8);
    *param_1 = 0;
    param_1[1] = 0;
    if ((long *)local_50[2] == plVar8 + 5) {
      FUN_014c78e4(param_1,&local_50);
    }
    puVar5 = local_50;
    if (local_50 == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(local_50 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_50 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == -1) {
        return;
      }
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar7 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar7;
      local_28 = (undefined8 **)*puVar5;
      goto LAB_014c7610;
    }
  }
  if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  return;
code_r0x014c741c:
  cVar4 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar10) {
    *plVar8 = lVar7;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_014c7424;
  goto LAB_014c7414;
}


