/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015a3b20; name: FUN_015a3b20
 */


void FUN_015a3b20(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auStack_48 [24];
  
  FUN_00c4e5a0(auStack_48,0);
  plVar7 = (long *)*param_2;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
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
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  plVar7 = (long *)*param_1;
  uVar2 = param_1[1];
  uVar9 = param_1[2];
  uVar8 = FUN_00c4e564(plVar7);
  if ((uVar8 & 1) == 0) {
    (**(code **)(*plVar7 + 0x18))(plVar7,param_2,uVar2,uVar9);
  }
  else {
    FUN_00c48fe8(plVar7,param_2,uVar2,uVar9);
  }
  FUN_00c4e70c(auStack_48);
  return;
}


