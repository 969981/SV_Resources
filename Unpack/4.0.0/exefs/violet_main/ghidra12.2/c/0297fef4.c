/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0297fef4; name: FUN_0297fef4
 */


void FUN_0297fef4(undefined8 param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long *local_28;
  
  uVar7 = (**(code **)(*param_2 + 0x98))(param_2);
  cVar5 = FUN_01689a40(param_1,uVar7);
  FUN_0124e480(param_1);
  cVar6 = FUN_0159fe8c();
  uVar8 = FUN_01243584(param_1);
  uVar7 = (**(code **)(*param_2 + 0x98))(param_2);
  if (cVar6 != cVar5) {
    FUN_01636f5c(uVar8,uVar7,param_2,0x119);
    return;
  }
  FUN_0297ee68(uVar8,uVar7,0x239);
  FUN_0124e480(param_1);
  FUN_01242424(&local_28);
  (**(code **)(*local_28 + 0x48))(local_28,10,1);
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 5;
    do {
      lVar4 = *plVar1;
      iVar3 = (int)lVar4 + -1;
      cVar5 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar2) {
        *(int *)plVar1 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  uVar8 = FUN_01243584(param_1);
  FUN_0298003c(uVar8,1);
  return;
}


