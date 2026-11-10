/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01619258; name: FUN_01619258
 */


void FUN_01619258(long param_1)

{
  long *plVar1;
  short *psVar2;
  long lVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  undefined1 local_54 [4];
  long local_50;
  undefined8 local_48;
  long *local_28;
  
  local_48 = *(undefined8 *)(param_1 + 0x1e8);
  local_50 = 0;
  if (*(long *)(param_1 + 0x360) != 0) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x360) + 0x10);
    local_50 = 0;
    if (lVar8 != 0) {
      local_50 = lVar8 + -8;
    }
  }
  local_54[0] = *(undefined1 *)(param_1 + 0x374);
  FUN_01619508(&local_28,*(undefined8 *)(param_1 + 8),&local_48,&local_50,local_54,param_1 + 0x460,
               param_1 + 0x380);
  plVar7 = local_28;
  FUN_01619460(local_28,*(undefined4 *)(param_1 + 0x370));
  plVar1 = plVar7 + 0x3a;
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_016192ec;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar7 + 0x3b));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar7 + 0x3b));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_016192ec;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_016192ec:
  lVar8 = param_1;
  if (*(long *)(param_1 + 0x1a8) != 0) {
    lVar8 = *(long *)(param_1 + 0x1a8);
  }
  lVar3 = param_1;
  if (*(long *)(param_1 + 0x1b0) != 0) {
    lVar3 = *(long *)(param_1 + 0x1b0);
  }
  if (lVar8 == lVar3) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("input != output","InsertDependencyToTarget",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\engine/mt/sync_object.h"
               ,700);
  }
  FUN_00da3100(plVar7);
  if (*(long *)(param_1 + 0x400) != *(long *)(param_1 + 0x408)) {
    FUN_00e220f4(plVar7,*(undefined8 *)(*(long *)(param_1 + 0x408) + -8),0);
  }
  FUN_01619438(param_1 + 0x400,&local_28);
  plVar7[0x3a] = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar7 + 0x3b));
  if (local_28 != (long *)0x0) {
    lVar8 = local_28[6];
    psVar2 = (short *)(lVar8 + 0x1a);
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
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


