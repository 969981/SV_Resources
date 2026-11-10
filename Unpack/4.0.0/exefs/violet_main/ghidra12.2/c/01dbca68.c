/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dbca68; name: FUN_01dbca68
 */


void FUN_01dbca68(long *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  long *local_48;
  long *local_28;
  
  if ((*param_1 != 0) && (uVar8 = FUN_00cf4c90(*param_1,2), (uVar8 & 1) == 0)) {
    uVar6 = FUN_00e677bc(*param_1);
    plVar9 = (long *)*param_1;
    local_28 = plVar9;
    if (plVar9 == (long *)0x0) {
      FUN_00e671ec(&local_28);
    }
    else {
      plVar1 = plVar9 + 5;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar5 == -1) goto LAB_01dbcccc;
      FUN_00e671ec(&local_28);
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 5;
        do {
          lVar5 = *plVar1;
          iVar4 = (int)lVar5 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
        else if ((int)lVar5 == 0) goto LAB_01dbccf4;
      }
    }
    plVar9 = (long *)*param_1;
    local_48 = plVar9;
    if (plVar9 == (long *)0x0) {
      FUN_00e674ac(&local_48,0x7531,1);
    }
    else {
      plVar1 = plVar9 + 5;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar5 == -1) goto LAB_01dbcccc;
      FUN_00e674ac(&local_48,0x7531,1);
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 5;
        do {
          lVar5 = *plVar1;
          iVar4 = (int)lVar5 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
        else if ((int)lVar5 == 0) goto LAB_01dbccf4;
      }
    }
    plVar9 = (long *)*param_1;
    local_50 = plVar9;
    if (plVar9 == (long *)0x0) {
      FUN_00e671bc(&local_50);
    }
    else {
      plVar1 = plVar9 + 5;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar5 == -1) goto LAB_01dbcccc;
      FUN_00e671bc(&local_50);
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 5;
        do {
          lVar5 = *plVar1;
          iVar4 = (int)lVar5 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
        else if ((int)lVar5 == 0) goto LAB_01dbccf4;
      }
    }
    plVar9 = (long *)*param_1;
    if (plVar9 == (long *)0x0) {
      uVar7 = FUN_0168d1b0();
      FUN_00e671b4(0,uVar7);
    }
    else {
      plVar1 = plVar9 + 5;
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
LAB_01dbcccc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      uVar7 = FUN_0168d1b0();
      FUN_00e671b4(plVar9,uVar7);
      do {
        lVar5 = *plVar1;
        iVar4 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
      else if ((int)lVar5 == 0) {
LAB_01dbccf4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    FUN_01dbd608(param_2,&local_70);
    FUN_01dbd74c(*param_1,&local_70);
    FUN_00e679bc(*param_1,uVar6 & 1);
  }
  return;
}


