/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017ad02c; name: FUN_017ad02c
 */


void FUN_017ad02c(long *param_1,long param_2,ulong *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  lVar10 = *(long *)(param_2 + 0x28);
  uVar9 = *param_3;
  plVar8 = (long *)param_3[3];
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  uVar5 = *(ulong *)(lVar10 + 0x198);
  if ((uVar5 & uVar5 - 1) == 0) {
    plVar6 = *(long **)(*(long *)(lVar10 + 400) + (uVar5 - 1 & uVar9) * 8);
    do {
      do {
        plVar6 = (long *)*plVar6;
      } while (plVar6[1] != uVar9);
    } while (plVar6[2] != uVar9);
  }
  else {
    uVar7 = uVar9;
    if (uVar5 <= uVar9) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar9 / uVar5;
      }
      uVar7 = uVar9 - uVar7 * uVar5;
    }
    plVar6 = *(long **)(*(long *)(lVar10 + 400) + uVar7 * 8);
    do {
      do {
        plVar6 = (long *)*plVar6;
      } while (plVar6[1] != uVar9);
    } while (plVar6[2] != uVar9);
  }
  lVar10 = *(long *)((long)plVar6 + 0x30);
  *param_1 = lVar10;
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x28);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  if (plVar8 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x017ad128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x20))(plVar8);
  return;
}


