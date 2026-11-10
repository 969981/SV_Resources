/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01098dd0; name: FUN_01098dd0
 */


undefined8 FUN_01098dd0(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *local_68;
  long lStack_60;
  long *local_58;
  
  lVar9 = *(long *)(param_2 + 0x120);
  plVar7 = (long *)(param_2 + 0x68);
  plVar8 = *(long **)(*plVar7 + param_3 * 0x48 + 0x20);
  if (plVar8 == (long *)0x0) {
    local_58 = (long *)0x0;
  }
  else {
    plVar1 = plVar8 + 5;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) {
LAB_01098fd0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    local_68 = plVar7;
    lStack_60 = param_3;
    local_58 = plVar8;
    if ((int)lVar5 == -1) goto LAB_01098fd0;
  }
  plVar1 = (long *)(lVar9 + 0x30);
  lVar10 = *plVar1;
  local_68 = plVar7;
  lStack_60 = param_3;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 != lVar10) {
    lVar5 = nn::os::GetCurrentThread();
LAB_01098e6c:
    if (*plVar1 == 0) goto code_r0x01098e74;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x38));
    do {
      if (*plVar1 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x38));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01098e7c;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01098e7c:
    uVar6 = FUN_01097704(param_1,lVar9,&local_68);
    *(undefined8 *)(lVar9 + 0x30) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x38));
    goto LAB_01098ea0;
  }
  uVar6 = FUN_0109c094(param_1,lVar9,&local_68);
LAB_01098ea0:
  if (local_58 != (long *)0x0) {
    plVar1 = local_58 + 5;
    do {
      lVar9 = *plVar1;
      iVar4 = (int)lVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
    else if ((int)lVar9 == 0) goto LAB_01098f60;
  }
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 5;
    do {
      lVar9 = *plVar1;
      iVar4 = (int)lVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    else if ((int)lVar9 == 0) {
LAB_01098f60:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *(undefined8 *)(*plVar7 + param_3 * 0x48 + 0x10) = uVar6;
  return uVar6;
code_r0x01098e74:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar3) {
    *plVar1 = lVar5;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_01098e7c;
  goto LAB_01098e6c;
}


