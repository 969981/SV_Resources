/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029764e0; name: FUN_029764e0
 */


int FUN_029764e0(long param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  plVar7 = *(long **)(param_1 + 0x128);
  if (plVar7 == (long *)0x0) {
LAB_0297653c:
    uVar4 = 0;
    if (param_2[3] != 0) {
      uVar4 = (param_2[2] * *param_2 * ((uint)(param_2[1] << 1) / 5 + 2)) / (uint)param_2[3];
    }
    return uVar4 / 0x32 + 2;
  }
  plVar8 = plVar7 + 5;
  do {
    lVar9 = *plVar8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *(int *)plVar8 = (int)lVar9 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if ((int)lVar9 != -1) {
    lVar9 = plVar7[6];
    do {
      lVar5 = *plVar8;
      iVar6 = (int)lVar5 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *(int *)plVar8 = iVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_029765f0;
    if (lVar9 == 0) goto LAB_0297653c;
    plVar8 = *(long **)(param_1 + 0x128);
    plVar7 = plVar8 + 5;
    do {
      lVar9 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = (int)lVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((int)lVar9 != -1) {
      iVar6 = (*(code *)plVar8[6])(plVar8 + 10,param_2);
      plVar7 = plVar8 + 5;
      do {
        lVar9 = *plVar7;
        iVar3 = (int)lVar9 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        return iVar6;
      }
      if ((int)lVar9 != 0) {
        return iVar6;
      }
LAB_029765f0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != 0","IncrementReferenceInternal",
             "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
             ,0x53,"Reference counter overflows.");
}


