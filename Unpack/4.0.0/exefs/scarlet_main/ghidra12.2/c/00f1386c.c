/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f1386c; name: FUN_00f1386c
 */


undefined8
FUN_00f1386c(undefined8 param_1,undefined4 param_2,undefined4 param_3,long *param_4,ulong param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  short sVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *local_18;
  
  plVar8 = (long *)*param_4;
  local_18 = plVar8;
  if (plVar8 == (long *)0x0) {
    FUN_00f139bc(param_1,&local_18,param_2,param_3);
  }
  else {
    plVar1 = plVar8 + 5;
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
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    FUN_00f139bc(param_1,&local_18,param_2,param_3);
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 5;
      do {
        lVar9 = *plVar1;
        iVar4 = (int)lVar9 + -1;
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
      else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  if (((*(byte *)(*(long *)(*(long *)(*param_4 + 0x70) + 0x10) + 4) >> 2 & 1) == 0) &&
     (sVar5 = FUN_00cf44f4(), sVar5 == 0)) {
    uVar6 = 0;
  }
  else {
    if ((param_5 & 1) == 0) {
      lVar9 = *param_4;
      uVar7 = FUN_00cf4cfc(*(undefined8 *)(lVar9 + 0x70));
      if ((uVar7 & 1) != 0) {
        return 0;
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar9 + 0x70) + 0x10) + 4) >> 2 & 1) != 0) {
        return 0;
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}


