/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e8b7dc; name: FUN_00e8b7dc
 */


void FUN_00e8b7dc(undefined8 param_1,long param_2,long param_3)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  long *plVar12;
  long *local_78;
  long *local_70;
  undefined4 local_68;
  long local_60;
  long *local_58;
  
  plVar12 = (long *)(param_2 + 0x28);
  local_58 = *(long **)(param_2 + 8);
  local_60 = *(long *)(param_2 + 0x30) - *plVar12 >> 3;
  FUN_00e8bf34(&local_78,local_58,param_3,&local_58);
  FUN_00e8bbf8(plVar12,&local_78);
  if (local_78 != (long *)0x0) {
    lVar9 = local_78[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*local_78 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_00e8baec:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_00e8bca4(&local_78,*(undefined8 *)(*plVar12 + local_60 * 8));
  plVar6 = local_78;
  plVar2 = local_78 + 0x3a;
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00e8b89c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar6 + 0x3b));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar6 + 0x3b));
        while (*plVar2 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00e8b89c;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00e8b89c:
  lVar10 = *(long *)(param_2 + 0x1b0);
  lVar9 = lVar10;
  if (*(long *)(lVar10 + 0x1a8) != 0) {
    lVar9 = *(long *)(lVar10 + 0x1a8);
  }
  if (*(long *)(lVar10 + 0x1b0) != 0) {
    lVar10 = *(long *)(lVar10 + 0x1b0);
  }
  if (lVar9 == lVar10) {
LAB_00e8bbd8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("input != output","InsertDependencyToTarget",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\engine/mt/sync_object.h"
               ,700);
  }
  FUN_00da3100(plVar6);
  plVar6[0x3a] = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar6 + 0x3b));
  if (local_78 != (long *)0x0) {
    lVar9 = local_78[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*local_78 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_00e8baec;
  }
  FUN_00e8bd64(&local_78,*(undefined8 *)(*plVar12 + local_60 * 8));
  plVar2 = local_78;
  plVar12 = local_78 + 0x3a;
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar12 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar5) {
      *plVar12 = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00e8b910;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar2 + 0x3b));
  do {
    if (*plVar12 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar2 + 0x3b));
        while (*plVar12 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = lVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00e8b910;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar5) {
      *plVar12 = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00e8b910:
  lVar10 = *(long *)(param_2 + 0x1b8);
  lVar9 = lVar10;
  if (*(long *)(lVar10 + 0x1a8) != 0) {
    lVar9 = *(long *)(lVar10 + 0x1a8);
  }
  if (*(long *)(lVar10 + 0x1b0) != 0) {
    lVar10 = *(long *)(lVar10 + 0x1b0);
  }
  if (lVar9 == lVar10) goto LAB_00e8bbd8;
  FUN_00da3100(plVar2);
  plVar2[0x3a] = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar2 + 0x3b));
  if (local_78 == (long *)0x0) {
LAB_00e8b950:
    lVar9 = local_60;
    *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x28) + local_60 * 8) + 0x138) = 1;
    FUN_00e8bc48(param_2 + 0x110,param_3,&local_60);
    FUN_00e8cbcc(param_1,param_2 + 0x178,lVar9);
    FUN_00e8d820(param_2);
    local_70 = (long *)0x0;
    pcVar11 = *(char **)(param_3 + 8);
    if (*pcVar11 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*PTR_DAT_047d4240 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar8 = *(undefined8 *)PTR_DAT_047d4248;
      *(undefined8 *)PTR_DAT_047d4250 = uVar8;
      FUN_00cf9884(&local_58,uVar8,pcVar11);
      plVar12 = local_58;
      plVar2 = local_70;
      local_70 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))();
      }
    }
    local_68 = (undefined4)param_1;
    local_70 = plVar12;
    FUN_00e8c61c(param_2 + 0x60,&local_78);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
    return;
  }
  lVar9 = local_78[6];
  psVar1 = (short *)(lVar9 + 0x1a);
  do {
    sVar3 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar3 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar3 == 1) {
    *(undefined8 *)(lVar9 + 0x10) = 0;
    (**(code **)(*local_78 + 0x50))();
    goto LAB_00e8b950;
  }
  if (sVar3 != 0) goto LAB_00e8b950;
  goto LAB_00e8baec;
}


