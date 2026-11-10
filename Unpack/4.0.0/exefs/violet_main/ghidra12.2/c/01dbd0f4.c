/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dbd0f4; name: FUN_01dbd0f4
 */


void FUN_01dbd0f4(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long **pplVar9;
  undefined8 uVar10;
  long *plVar11;
  long *local_58;
  long *local_38;
  
  if (*param_1 == 0) {
    return;
  }
  uVar7 = FUN_00e677bc();
  uVar8 = FUN_00cf4c90(*param_1,2);
  if ((uVar8 & 1) == 0) {
    plVar11 = (long *)*param_1;
    local_58 = plVar11;
    if (plVar11 == (long *)0x0) {
      pplVar9 = &local_58;
      uVar10 = 1;
      goto LAB_01dbd298;
    }
    plVar1 = plVar11 + 5;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar6 == -1) goto LAB_01dbd2a0;
    FUN_00e672f4(&local_58,param_2,param_3,param_4,param_5,1);
    if (plVar11 == (long *)0x0) goto LAB_01dbd1ac;
    plVar1 = plVar11 + 5;
    do {
      iVar5 = (int)*plVar1;
      iVar4 = iVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    plVar11 = (long *)*param_1;
    local_38 = plVar11;
    if (plVar11 == (long *)0x0) {
      pplVar9 = &local_38;
      uVar10 = 0;
LAB_01dbd298:
      FUN_00e672f4(pplVar9,param_2,param_3,param_4,param_5,uVar10);
      goto LAB_01dbd1ac;
    }
    plVar1 = plVar11 + 5;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar6 == -1) {
LAB_01dbd2a0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    FUN_00e672f4(&local_38,param_2,param_3,param_4,param_5,0);
    if (plVar11 == (long *)0x0) goto LAB_01dbd1ac;
    plVar1 = plVar11 + 5;
    do {
      iVar5 = (int)*plVar1;
      iVar4 = iVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (iVar4 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  else if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
LAB_01dbd1ac:
  FUN_00e679bc(*param_1,uVar7 & 1);
  return;
}


