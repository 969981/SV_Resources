/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b32b68; name: FUN_02b32b68
 */


void FUN_02b32b68(long *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined1 uVar8;
  uint uVar9;
  long lVar10;
  
  lVar10 = *param_2;
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x28);
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
  plVar7 = (long *)*param_1;
  *param_1 = lVar10;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 5;
    do {
      lVar10 = *plVar2;
      iVar3 = (int)lVar10 + -1;
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
    else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  uVar4 = *(ushort *)(*param_1 + 0x52);
  if ((((uVar4 < 4) ||
       (lVar10 = *(long *)(*param_1 + 0x30), *(short *)(lVar10 + (ulong)(uVar4 - 3) * 2) != 0x10))
      || (uVar9 = (uint)uVar4, *(short *)(lVar10 + (ulong)(uVar9 - 2) * 2) != 1)) ||
     ((*(short *)(lVar10 + (ulong)(uVar9 - 1) * 2) != -0x41ff ||
      (*(short *)(lVar10 + (ulong)uVar9 * 2) != 0)))) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  *(undefined1 *)((long)param_1 + 0x14) = uVar8;
  return;
}


