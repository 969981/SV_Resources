/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a8ff2c; name: FUN_01a8ff2c
 */


void FUN_01a8ff2c(long param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  plVar1 = (long *)(param_1 + 0x240);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_01a8ff6c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x248));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x248));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01a8ff6c;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_01a8ff6c:
  pcVar10 = *(code **)(param_1 + 0x148);
  if (pcVar10 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    (*pcVar10)(param_1 + 0x160);
  }
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,param_1 + 0x160);
    uVar11 = param_3[3];
    *(undefined8 *)(param_1 + 0x148) = param_3[1];
    *(undefined8 *)(param_1 + 0x158) = uVar11;
    uVar11 = *param_3;
    *(undefined8 *)(param_1 + 0x150) = param_3[2];
    *(undefined8 *)(param_1 + 0x140) = uVar11;
  }
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_00c43ef0(&local_58,param_2 + 0x98);
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  lVar9 = 0;
  if (param_2 != 0) {
    lVar9 = param_2 + 0x28;
  }
  if (local_58[2] == lVar9) {
    FUN_00d94688(&local_68,&local_58);
  }
  puVar7 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_58 + 3);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_58 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_48 = *puVar7;
        FUN_00c44438(lVar9 + 0x8040,&local_48);
      }
    }
    else if (sVar4 == 0) goto LAB_01a900b4;
  }
  FUN_00d48230(param_1 + 0x130,&local_68);
  puVar7 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_68 + 3);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_68 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_58 = (undefined8 *)*puVar7;
        FUN_00c44438(lVar9 + 0x8040,&local_58);
      }
    }
    else if (sVar4 == 0) {
LAB_01a900b4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  *(undefined8 *)(param_1 + 0x240) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x248));
  return;
}


