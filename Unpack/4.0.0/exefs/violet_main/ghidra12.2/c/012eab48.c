/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012eab48; name: FUN_012eab48
 */


void FUN_012eab48(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 local_54 [4];
  long local_50;
  undefined8 local_48;
  long *local_28;
  
  local_48 = *(undefined8 *)(param_1 + 0x1e8);
  local_50 = 0;
  if (*(long *)(param_1 + 0x360) != 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x360) + 0x10);
    local_50 = 0;
    if (lVar6 != 0) {
      local_50 = lVar6 + -8;
    }
  }
  local_54[0] = *(undefined1 *)(param_1 + 0x374);
  FUN_012ead40(&local_28,*(undefined8 *)(param_1 + 8),&local_48,&local_50,local_54,param_1 + 0x460,
               param_1 + 0x380);
  uVar3 = *(undefined4 *)(param_1 + 0x370);
  *(undefined4 *)(local_28 + 0x6e) = uVar3;
  plVar1 = local_28;
  if ((long *)local_28[0x36] != (long *)0x0) {
    plVar1 = (long *)local_28[0x36];
  }
  if (plVar1 != local_28) {
    (**(code **)(*plVar1 + 0x88))(plVar1,uVar3);
  }
  plVar1 = local_28;
  if ((long *)local_28[0x35] != (long *)0x0) {
    plVar1 = (long *)local_28[0x35];
  }
  if (plVar1 != local_28) {
    (**(code **)(*plVar1 + 0x88))(plVar1,uVar3);
  }
  puVar8 = (undefined8 *)local_28[0x70];
  for (puVar7 = (undefined8 *)local_28[0x6f]; puVar7 != puVar8; puVar7 = puVar7 + 1) {
    (**(code **)(*(long *)*puVar7 + 0x88))((long *)*puVar7,uVar3);
  }
  plVar1 = local_28 + 0x3a;
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_012eac2c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(local_28 + 0x3b));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(local_28 + 0x3b));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_012eac2c;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_012eac2c:
  lVar6 = param_1;
  if (*(long *)(param_1 + 0x1a8) != 0) {
    lVar6 = *(long *)(param_1 + 0x1a8);
  }
  lVar2 = param_1;
  if (*(long *)(param_1 + 0x1b0) != 0) {
    lVar2 = *(long *)(param_1 + 0x1b0);
  }
  if (lVar6 == lVar2) {
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
  FUN_012ead78(param_1 + 0x400,&local_28);
  local_28[0x3a] = 0;
  nn::os::SignalLightEvent((LightEventType *)(local_28 + 0x3b));
  FUN_012eadc8(&local_28);
  return;
}


