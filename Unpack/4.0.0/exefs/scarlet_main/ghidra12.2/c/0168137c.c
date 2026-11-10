/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0168137c; name: FUN_0168137c
 */


void FUN_0168137c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *local_38;
  
  FUN_01582534();
  uVar9 = FUN_0297f1a0();
  uVar10 = FUN_01582534(param_1);
  FUN_0297b2d4(uVar9,uVar10,param_2,param_3,0);
  uVar6 = (**(code **)(*param_2 + 0x98))(param_2);
  uVar7 = FUN_01689a40(param_1,uVar6);
  FUN_0124e480(param_1);
  uVar8 = FUN_0159fe8c();
  if (uVar7 == (uVar8 & 0xff)) {
    FUN_0124e480(param_1);
    FUN_01242424(&local_38);
    (**(code **)(*local_38 + 0x48))(local_38,2,1);
    if (local_38 != (long *)0x0) {
      plVar1 = local_38 + 5;
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
        (**(code **)(*local_38 + 0x10))();
      }
      else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


