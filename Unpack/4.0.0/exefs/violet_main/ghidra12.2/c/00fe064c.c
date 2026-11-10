/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fe064c; name: FUN_00fe064c
 */


undefined8 FUN_00fe064c(long param_1,long *param_2,byte *param_3,byte param_4)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  if (((*(int *)(param_1 + 0x40) != 0) ||
      (((*(int *)(param_3 + 0x14) != 0x42 && (*(int *)(param_3 + 0x14) != 0x46)) ||
       ((*param_3 & 0x1f) != 0)))) || ((param_3[8] & 0x1f) != 0)) {
    return 0;
  }
  lVar8 = *param_2;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar7 = *(long **)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar8;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 5;
    do {
      lVar8 = *plVar2;
      iVar3 = (int)lVar8 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  uVar4 = *(undefined8 *)(param_3 + 8);
  uVar9 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)param_3;
  *(undefined8 *)(param_1 + 0x88) = uVar4;
  *(undefined8 *)(param_1 + 0x90) = uVar9;
  *(byte *)(param_1 + 0xb0) = param_4 & 1;
  FUN_00fe078c(param_1);
  *(undefined4 *)(param_1 + 0x40) = 2;
  return 1;
}


