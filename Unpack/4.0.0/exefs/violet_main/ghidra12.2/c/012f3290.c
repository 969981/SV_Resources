/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012f3290; name: FUN_012f3290
 */


void FUN_012f3290(long *param_1,long *param_2,undefined8 param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  bool bVar10;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  local_60 = 0;
  local_58 = 0;
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  (**(code **)(*param_2 + 0x20))(local_48,param_2);
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  plVar9 = (long *)0x0;
  if (param_2 != (long *)0x0) {
    plVar9 = param_2 + 1;
  }
  if ((long *)local_48[0][2] == plVar9) {
    FUN_00d30d98(&local_80,local_48);
  }
  puVar5 = local_48[0];
  if (local_48[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_48[0] + 3);
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
      piVar2 = (int *)((long)local_48[0] + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
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
        local_38 = *puVar5;
        FUN_00c44438(lVar7 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) goto LAB_012f3438;
  }
  FUN_011f29f0(&local_70,&local_80);
  puVar5 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_80 + 3);
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
      piVar2 = (int *)((long)local_80 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
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
        local_48[0] = (undefined8 *)*puVar5;
        FUN_00c44438(lVar7 + 0x8040,local_48);
      }
    }
    else if (sVar3 == 0) goto LAB_012f3438;
  }
  lVar8 = *param_1;
  local_58 = param_3;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 != lVar8) {
    lVar7 = nn::os::GetCurrentThread();
LAB_012f3334:
    if (*param_1 == 0) goto code_r0x012f333c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 1));
    do {
      if (*param_1 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 1));
          while (*param_1 == 0) {
            cVar4 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(param_1,0x10);
            if (bVar10) {
              *param_1 = lVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_012f3344;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar10) {
        *param_1 = lVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_012f3344:
    bVar10 = false;
    plVar9 = param_1;
    goto LAB_012f334c;
  }
  plVar9 = (long *)0x0;
  bVar10 = true;
LAB_012f334c:
  local_48[0] = (undefined8 *)CONCAT71(local_48[0]._1_7_,1);
  FUN_012f364c(param_1 + 3,local_48,&local_70);
  if (!bVar10) {
    *plVar9 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar9 + 1));
  }
  puVar5 = local_70;
  if (local_70 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_70 + 3);
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
      piVar2 = (int *)((long)local_70 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
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
        local_48[0] = (undefined8 *)*puVar5;
        FUN_00c44438(lVar7 + 0x8040,local_48);
      }
    }
    else if (sVar3 == 0) {
LAB_012f3438:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
code_r0x012f333c:
  cVar4 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar10) {
    *param_1 = lVar7;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_012f3344;
  goto LAB_012f3334;
}


