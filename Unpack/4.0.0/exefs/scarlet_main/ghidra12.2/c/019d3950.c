/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019d3950; name: FUN_019d3950
 */


void FUN_019d3950(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  char cVar8;
  bool bVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  plVar10 = (long *)param_2[3];
  param_1[3] = plVar10;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))();
  }
  *(undefined4 *)(param_1 + 4) = *param_3;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[5] = *(undefined8 *)(param_3 + 2);
  uVar11 = *(undefined8 *)(param_3 + 4);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_3 + 6);
  param_1[6] = uVar11;
  lVar12 = *(long *)(param_3 + 8);
  if (lVar12 == 0) {
    param_1[8] = 0;
  }
  else {
    piVar1 = (int *)(lVar12 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar9) {
        *piVar1 = iVar3 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    plVar10 = (long *)param_1[8];
    param_1[8] = lVar12;
    if (plVar10 != (long *)0x0) {
      plVar2 = plVar10 + 5;
      do {
        lVar12 = *plVar2;
        iVar3 = (int)lVar12 + -1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar9) {
          *(int *)plVar2 = iVar3;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
      else if ((int)lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  *(undefined4 *)(param_1 + 9) = param_3[10];
  uVar11 = *(undefined8 *)(param_3 + 0x12);
  uVar5 = *(undefined8 *)(param_3 + 0x14);
  uVar4 = *(undefined8 *)(param_3 + 0x16);
  uVar6 = *(undefined8 *)(param_3 + 0x18);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = uVar4;
  param_1[0x10] = uVar6;
  param_1[0xd] = uVar11;
  param_1[0xe] = uVar5;
  lVar12 = *(long *)(param_3 + 0xe) - *(long *)(param_3 + 0xc);
  if (lVar12 != 0) {
    FUN_02197abc(param_1 + 10,lVar12 >> 4);
    lVar12 = *(long *)(param_3 + 0xc);
    lVar7 = *(long *)(param_3 + 0xe);
    lVar13 = param_1[0xb];
    if (lVar12 != lVar7) {
      do {
        FUN_019d3b38(param_1 + 0xd,lVar13,lVar12);
        lVar12 = lVar12 + 0x10;
        lVar13 = lVar13 + 0x10;
      } while (lVar7 != lVar12);
    }
    param_1[0xb] = lVar13;
  }
  return;
}


