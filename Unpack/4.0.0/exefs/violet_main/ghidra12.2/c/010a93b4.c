/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010a93b4; name: FUN_010a93b4
 */


void FUN_010a93b4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long *local_28;
  
  FUN_010a958c(&local_28,*(undefined8 *)(param_1 + 8));
  FUN_010a95f8(param_1 + 0x90,&local_28);
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 5;
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
      (**(code **)(*local_28 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_010a949c(*(undefined8 *)(param_1 + 0x90));
  uVar7 = *(undefined8 *)(param_1 + 0x90);
  uVar6 = FUN_0136b004(*(undefined8 *)(param_1 + 0x30));
  FUN_010a94c8(uVar7,0,uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x90);
  uVar6 = FUN_010a91f8(*(undefined8 *)(param_1 + 0x30));
  FUN_010a94c8(uVar7,1,uVar6);
  FUN_010a94c8(*(undefined8 *)(param_1 + 0x90),2,*(undefined2 *)(*(long *)(param_1 + 0x30) + 0x8e));
  return;
}


