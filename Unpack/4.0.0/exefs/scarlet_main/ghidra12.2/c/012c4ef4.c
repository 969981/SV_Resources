/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012c4ef4; name: FUN_012c4ef4
 */


void FUN_012c4ef4(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined1 local_54 [4];
  long local_50;
  undefined8 local_48;
  long local_28;
  
  local_48 = *(undefined8 *)(param_1 + 0x1e8);
  local_50 = 0;
  if (*(long *)(param_1 + 0x360) != 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x360) + 0x10);
    local_50 = 0;
    if (lVar5 != 0) {
      local_50 = lVar5 + -8;
    }
  }
  local_54[0] = *(undefined1 *)(param_1 + 0x374);
  FUN_012c5074(&local_28,*(undefined8 *)(param_1 + 8),&local_48,&local_50,local_54,param_1 + 0x460,
               param_1 + 0x380);
  FUN_012c55e4(local_28,*(undefined4 *)(param_1 + 0x370));
  plVar1 = (long *)(local_28 + 0x1d0);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_012c4f88;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(local_28 + 0x1d8));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(local_28 + 0x1d8));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_012c4f88;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_012c4f88:
  lVar5 = param_1;
  if (*(long *)(param_1 + 0x1a8) != 0) {
    lVar5 = *(long *)(param_1 + 0x1a8);
  }
  lVar2 = param_1;
  if (*(long *)(param_1 + 0x1b0) != 0) {
    lVar2 = *(long *)(param_1 + 0x1b0);
  }
  if (lVar5 == lVar2) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("input != output","InsertDependencyToTarget",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\engine/mt/sync_object.h"
               ,700);
  }
  FUN_00da3100(local_28);
  if (*(long *)(param_1 + 0x400) != *(long *)(param_1 + 0x408)) {
    FUN_00e220f4(local_28,*(undefined8 *)(*(long *)(param_1 + 0x408) + -8),0);
  }
  FUN_012c50ac(param_1 + 0x400,&local_28);
  *(undefined8 *)(local_28 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(local_28 + 0x1d8));
  FUN_012c50fc(&local_28);
  return;
}


