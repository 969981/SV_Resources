/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dc6fe4; name: FUN_01dc6fe4
 */


void FUN_01dc6fe4(long param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *local_28;
  
  plVar4 = *(long **)(param_1 + 0x30);
  if (param_4 < *(byte *)(plVar4 + 0x12)) {
    uVar5 = (**(code **)(*plVar4 + 0x68))(plVar4,param_4);
    FUN_00f329b4(uVar5,param_1 + 0x50);
    lVar6 = FUN_010f26f8(param_1,0,param_2,param_3);
    plVar4 = *(long **)(param_1 + 0x30);
    if (lVar6 == 0) {
      (**(code **)(*plVar4 + 0x48))(plVar4,param_4);
    }
    else {
      (**(code **)(*plVar4 + 0x38))(plVar4,param_4);
      FUN_01dc6af4(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
      FUN_01dc6c18(*(undefined8 *)(param_1 + 0x40),0);
      FUN_01dc6c18(*(undefined8 *)(param_1 + 0x40),1);
      FUN_01dc6c18(*(undefined8 *)(param_1 + 0x40),2);
      FUN_01dc6c18(*(undefined8 *)(param_1 + 0x40),3);
      FUN_01dc6c18(*(undefined8 *)(param_1 + 0x40),4);
      FUN_01dc6c18(*(undefined8 *)(param_1 + 0x40),5);
    }
    FUN_00f13ad8(*(undefined8 *)(param_1 + 0x48),param_1 + 0x50);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    local_28 = *(long **)(param_1 + 0x48);
    if (local_28 != (long *)0x0) {
      plVar4 = local_28 + 5;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *(int *)plVar4 = (int)lVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((int)lVar6 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    FUN_0152f420(uVar5,&local_28,param_2,param_3);
    if (local_28 != (long *)0x0) {
      plVar4 = local_28 + 5;
      do {
        lVar6 = *plVar4;
        iVar3 = (int)lVar6 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *(int *)plVar4 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


