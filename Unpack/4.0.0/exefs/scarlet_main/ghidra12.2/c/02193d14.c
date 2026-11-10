/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02193d14; name: FUN_02193d14
 */


void FUN_02193d14(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  plVar8 = (long *)param_2[3];
  param_1[3] = plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))();
  }
  *(undefined4 *)(param_1 + 4) = *param_3;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[5] = *(undefined8 *)(param_3 + 2);
  uVar9 = *(undefined8 *)(param_3 + 4);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_3 + 6);
  param_1[6] = uVar9;
  lVar10 = *(long *)(param_3 + 8);
  if (lVar10 == 0) {
    param_1[8] = 0;
  }
  else {
    piVar1 = (int *)(lVar10 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    plVar8 = (long *)param_1[8];
    param_1[8] = lVar10;
    if (plVar8 != (long *)0x0) {
      plVar2 = plVar8 + 5;
      do {
        lVar10 = *plVar2;
        iVar3 = (int)lVar10 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(int *)plVar2 = iVar3;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  uVar9 = *(undefined8 *)(param_3 + 10);
  uVar4 = *(undefined8 *)(param_3 + 0xc);
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  param_1[0xb] = *(undefined8 *)(param_3 + 0xe);
  param_1[0xc] = uVar5;
  param_1[9] = uVar9;
  param_1[10] = uVar4;
  FUN_021961d4(param_1 + 0xd,param_3 + 0x12);
  return;
}


