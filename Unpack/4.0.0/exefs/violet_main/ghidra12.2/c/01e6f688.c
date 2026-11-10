/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e6f688; name: FUN_01e6f688
 */


void FUN_01e6f688(undefined8 *param_1,long *param_2,long *param_3,undefined1 *param_4)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  byte bVar7;
  ulong uVar8;
  long *plVar9;
  long *local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  long *local_28;
  
  param_2 = (long *)*param_2;
  local_28 = param_2;
  if (param_2 == (long *)0x0) {
    FUN_01e6fa10(param_1,&local_28,param_4);
  }
  else {
    plVar9 = param_2 + 5;
    do {
      lVar6 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) goto LAB_01e6f9e8;
    FUN_01e6fa10(param_1,&local_28,param_4);
    if (param_2 != (long *)0x0) {
      plVar9 = param_2 + 5;
      do {
        lVar6 = *plVar9;
        iVar5 = (int)lVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *(int *)plVar9 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
      }
      else if ((int)lVar6 == 0) goto LAB_01e6f8f8;
    }
  }
  bVar2 = *(byte *)(*param_3 + 0x90);
  bVar7 = FUN_01e6fd34(*param_1);
  if (bVar7 < bVar2) {
    param_4[1] = 1;
  }
  bVar2 = *(byte *)(*param_3 + 0x90);
  bVar7 = FUN_01e6fd4c(*param_1);
  if (bVar2 < bVar7) {
    *param_4 = 1;
  }
  plVar9 = (long *)*param_3;
  local_48 = plVar9;
  if (plVar9 == (long *)0x0) {
    uVar8 = FUN_01e6fd64(param_1,&local_48);
  }
  else {
    plVar1 = plVar9 + 5;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) goto LAB_01e6f9e8;
    uVar8 = FUN_01e6fd64(param_1,&local_48);
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 5;
      do {
        lVar6 = *plVar1;
        iVar5 = (int)lVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
      else if ((int)lVar6 == 0) goto LAB_01e6f8f8;
    }
  }
  if ((uVar8 & 1) != 0) {
    param_4[9] = 1;
  }
  plVar9 = (long *)*param_3;
  local_50 = plVar9;
  if (plVar9 == (long *)0x0) {
    FUN_01e6fee4(param_1,&local_50,param_4);
  }
  else {
    plVar1 = plVar9 + 5;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) goto LAB_01e6f9e8;
    FUN_01e6fee4(param_1,&local_50,param_4);
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 5;
      do {
        lVar6 = *plVar1;
        iVar5 = (int)lVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
      else if ((int)lVar6 == 0) goto LAB_01e6f8f8;
    }
  }
  plVar9 = (long *)*param_3;
  local_58 = plVar9;
  if (plVar9 == (long *)0x0) {
    FUN_01e700ec(param_1,&local_58,param_4);
  }
  else {
    plVar1 = plVar9 + 5;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) goto LAB_01e6f9e8;
    FUN_01e700ec(param_1,&local_58,param_4);
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 5;
      do {
        lVar6 = *plVar1;
        iVar5 = (int)lVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
      else if ((int)lVar6 == 0) goto LAB_01e6f8f8;
    }
  }
  param_3 = (long *)*param_3;
  local_60 = param_3;
  if (param_3 == (long *)0x0) {
    uVar8 = FUN_01e70304(param_1,&local_60);
  }
  else {
    plVar9 = param_3 + 5;
    do {
      lVar6 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) {
LAB_01e6f9e8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    uVar8 = FUN_01e70304(param_1,&local_60);
    if (param_3 != (long *)0x0) {
      plVar9 = param_3 + 5;
      do {
        lVar6 = *plVar9;
        iVar5 = (int)lVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *(int *)plVar9 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*param_3 + 0x10))(param_3);
      }
      else if ((int)lVar6 == 0) {
LAB_01e6f8f8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  if ((uVar8 & 1) == 0) {
    param_4[2] = 1;
  }
  return;
}


