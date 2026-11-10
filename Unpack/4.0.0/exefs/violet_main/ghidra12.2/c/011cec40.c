/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011cec40; name: FUN_011cec40
 */


void FUN_011cec40(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  byte bVar7;
  long lVar8;
  long *plVar9;
  undefined1 auStack_28 [8];
  
  FUN_00d0a71c(param_1 + 0x48);
  FUN_011cf1c4(param_1 + 0x58,param_2 + 0x10);
  FUN_011ceeb0(param_1 + 0x68,param_2 + 0x20);
  lVar8 = FUN_011ced88(auStack_28,*(undefined8 *)(param_1 + 8));
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x28);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar9 = *(long **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 5;
    do {
      lVar6 = *plVar2;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *(long *)(param_1 + 0x78) = lVar8;
  FUN_00d0a71c(lVar8 + 0x30,param_2);
  FUN_011cf1c4(lVar8 + 0x40,param_2 + 0x10);
  FUN_011ceeb0(lVar8 + 0x50,param_2 + 0x20);
  bVar7 = FUN_00d62818(*(undefined8 *)(param_1 + 0x78));
  *(byte *)(param_1 + 0x40) = bVar7 & 1;
  return;
}


