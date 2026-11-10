/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ade040; name: FUN_00ade040
 */


int FUN_00ade040(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  iVar6 = FUN_00addde0();
  uVar8 = *param_3;
  if (uVar8 < *param_4) {
    uVar10 = param_3[1];
    param_3[1] = 0;
    *param_3 = *param_4;
    param_3[1] = 0;
    uVar9 = param_4[1];
    param_4[1] = 0;
    param_3[1] = uVar9;
    plVar7 = (long *)param_4[1];
    *param_4 = uVar8;
    param_4[1] = 0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 5;
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
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar5 == 0) goto LAB_00ade1d0;
    }
    param_4[1] = uVar10;
    uVar8 = *param_2;
    if (*param_3 <= uVar8) {
      return iVar6 + 1;
    }
    uVar10 = param_2[1];
    param_2[1] = 0;
    *param_2 = *param_3;
    param_2[1] = 0;
    uVar9 = param_3[1];
    param_3[1] = 0;
    param_2[1] = uVar9;
    plVar7 = (long *)param_3[1];
    *param_3 = uVar8;
    param_3[1] = 0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 5;
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
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar5 == 0) goto LAB_00ade1d0;
    }
    param_3[1] = uVar10;
    uVar8 = *param_1;
    if (uVar8 < *param_2) {
      uVar10 = param_1[1];
      param_1[1] = 0;
      *param_1 = *param_2;
      param_1[1] = 0;
      uVar9 = param_2[1];
      param_2[1] = 0;
      param_1[1] = uVar9;
      plVar7 = (long *)param_2[1];
      *param_2 = uVar8;
      param_2[1] = 0;
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 5;
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
          (**(code **)(*plVar7 + 0x10))();
        }
        else if ((int)lVar5 == 0) {
LAB_00ade1d0:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      iVar6 = iVar6 + 3;
      param_2[1] = uVar10;
    }
    else {
      iVar6 = iVar6 + 2;
    }
  }
  return iVar6;
}


