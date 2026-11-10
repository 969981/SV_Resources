/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010974dc; name: FUN_010974dc
 */


undefined8 FUN_010974dc(undefined8 param_1,long param_2,long param_3)

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
  
  lVar9 = *(long *)(param_2 + 0x118);
  plVar7 = (long *)(param_2 + 0x68);
  plVar8 = *(long **)(*plVar7 + param_3 * 0x48 + 0x18);
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
LAB_010976dc:
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
    if ((int)lVar5 == -1) goto LAB_010976dc;
  }
  plVar1 = (long *)(lVar9 + 0x30);
  lVar10 = *plVar1;
  local_68 = plVar7;
  lStack_60 = param_3;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 != lVar10) {
    lVar5 = nn::os::GetCurrentThread();
LAB_01097578:
    if (*plVar1 == 0) goto code_r0x01097580;
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
            if (cVar2 == '\0') goto LAB_01097588;
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
LAB_01097588:
    uVar6 = FUN_01097704(param_1,lVar9,&local_68);
    *(undefined8 *)(lVar9 + 0x30) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x38));
    goto LAB_010975ac;
  }
  uVar6 = FUN_0109c094(param_1,lVar9,&local_68);
LAB_010975ac:
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
    else if ((int)lVar9 == 0) goto LAB_0109766c;
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
LAB_0109766c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *(undefined8 *)(*plVar7 + param_3 * 0x48 + 8) = uVar6;
  return uVar6;
code_r0x01097580:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar3) {
    *plVar1 = lVar5;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_01097588;
  goto LAB_01097578;
}


