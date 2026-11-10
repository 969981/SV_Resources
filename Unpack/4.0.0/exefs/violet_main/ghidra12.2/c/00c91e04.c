/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c91e04; name: FUN_00c91e04
 */


void FUN_00c91e04(undefined8 *param_1,long param_2)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 **local_28;
  
  local_50 = &uStack_58;
  local_28 = &local_50;
  plVar1 = (long *)(param_2 + 0x110);
  lVar9 = *plVar1;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 != lVar9) {
    lVar8 = nn::os::GetCurrentThread();
LAB_00c91e50:
    if (*plVar1 == 0) goto code_r0x00c91e58;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x118));
    do {
      if (*plVar1 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x118));
          while (*plVar1 == 0) {
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar10) {
              *plVar1 = lVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_00c91e60;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_00c91e60:
    bVar10 = false;
    goto LAB_00c91e64;
  }
  bVar10 = true;
LAB_00c91e64:
  lVar8 = FUN_00c920dc(&local_28,param_2 + 0x128);
  if (lVar8 == 0) {
    lVar8 = FUN_00c920dc(&local_28,param_2 + 0x160);
  }
  if (!bVar10) {
    *(undefined8 *)(param_2 + 0x110) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x118));
  }
  if (lVar8 == 0) {
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    FUN_00c925e0(param_1,&local_50);
    puVar6 = local_50;
    if (local_50 == (undefined8 *)0x0) {
      return;
    }
    psVar2 = (short *)(local_50 + 3);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar10) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_50 + 0x1c);
      do {
        iVar7 = *piVar3;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar10) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == -1) {
        return;
      }
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar8 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar8;
      local_28 = (undefined8 **)*puVar6;
      goto LAB_00c92044;
    }
  }
  else {
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    FUN_00c43ef0(&local_50,lVar8 + 0x98);
    *param_1 = 0;
    param_1[1] = 0;
    if (local_50[2] == lVar8 + 0x28) {
      FUN_00c92210(param_1,&local_50);
    }
    puVar6 = local_50;
    if (local_50 == (undefined8 *)0x0) {
      return;
    }
    psVar2 = (short *)(local_50 + 3);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar10) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_50 + 0x1c);
      do {
        iVar7 = *piVar3;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar10) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == -1) {
        return;
      }
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar8 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar8;
      local_28 = (undefined8 **)*puVar6;
LAB_00c92044:
      FUN_00c44438(lVar8 + 0x8040,&local_28);
      return;
    }
  }
  if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  return;
code_r0x00c91e58:
  cVar5 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar10) {
    *plVar1 = lVar8;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_00c91e60;
  goto LAB_00c91e50;
}


