/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010a13d0; name: FUN_010a13d0
 */


void FUN_010a13d0(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  
  sVar6 = FUN_00cf44f4(*(undefined8 *)(*param_2 + 0x70));
  sVar7 = FUN_00cf41a8(*(undefined8 *)(*param_2 + 0x70));
  uVar8 = FUN_00e974e0(*(undefined8 *)(*param_2 + 0x70));
  if (sVar6 == 0x2cc) {
    FUN_0143b218(*param_2,1,0);
  }
  plVar10 = *(long **)(param_1 + 400);
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar9 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  lVar9 = (**(code **)(*plVar10 + 0x30))(plVar10,uVar8);
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
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
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if ((((sVar6 == 0x378) && (sVar7 == 0)) && (lVar9 == -0x72093d1985504421)) ||
     (((sVar6 == 0x379 && (sVar7 == 0)) && (lVar9 == 0x82f905fcefde31b)))) {
    FUN_0143b218(*param_2,1,0);
    return;
  }
  return;
}


