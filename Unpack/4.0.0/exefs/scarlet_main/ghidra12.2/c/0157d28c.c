/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0157d28c; name: FUN_0157d28c
 */


bool FUN_0157d28c(long param_1,undefined4 *param_2,undefined2 *param_3,undefined4 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined2 local_68 [4];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  plVar8 = *(long **)(*(long *)(param_1 + 0x78) + 0x1a8);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 5;
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
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    do {
      lVar6 = *plVar1;
      iVar4 = (int)lVar6 + -1;
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
    else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  lVar6 = FUN_0157d3f0(plVar8,param_4,param_3[1]);
  if (lVar6 != 0) {
    local_68[0] = *param_3;
    local_60 = FUN_01021c7c(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_3 + 4));
    local_50 = FUN_01021c7c(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_3 + 10));
    local_58 = FUN_01021c7c(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_3 + 0x10));
    local_48 = FUN_01021c7c(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_3 + 0x16));
    uVar7 = FUN_01021f2c(param_1);
    uVar5 = FUN_01022038(uVar7,lVar6,local_68);
    *param_2 = uVar5;
  }
  return lVar6 != 0;
}


