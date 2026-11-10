/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021eecec; name: FUN_021eecec
 */


void FUN_021eecec(long param_1,byte param_2,byte param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  if (((param_2 != param_3) && (param_2 < 6)) && (param_3 < 6)) {
    lVar2 = param_1 + 0x30;
    bVar4 = param_3;
    if (param_2 <= param_3) {
      bVar4 = param_2;
      param_2 = param_3;
    }
    uVar10 = (ulong)bVar4;
    plVar1 = (long *)(lVar2 + (ulong)param_2 * 8);
    lVar11 = *(long *)(lVar2 + uVar10 * 8);
    *(undefined8 *)(lVar2 + uVar10 * 8) = 0;
    lVar9 = *plVar1;
    *plVar1 = 0;
    *(long *)(lVar2 + uVar10 * 8) = lVar9;
    plVar8 = (long *)*plVar1;
    *plVar1 = 0;
    if (plVar8 != (long *)0x0) {
      plVar3 = plVar8 + 5;
      do {
        lVar2 = *plVar3;
        iVar7 = (int)lVar2 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar2 == 0) goto LAB_021eee08;
    }
    lVar2 = param_1 + 0x60;
    *plVar1 = lVar11;
    plVar1 = (long *)(lVar2 + (ulong)param_2 * 8);
    lVar11 = *(long *)(lVar2 + uVar10 * 8);
    *(undefined8 *)(lVar2 + uVar10 * 8) = 0;
    lVar9 = *plVar1;
    *plVar1 = 0;
    *(long *)(lVar2 + uVar10 * 8) = lVar9;
    plVar8 = (long *)*plVar1;
    *plVar1 = 0;
    if (plVar8 != (long *)0x0) {
      plVar3 = plVar8 + 5;
      do {
        lVar2 = *plVar3;
        iVar7 = (int)lVar2 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar2 == 0) {
LAB_021eee08:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_pokelib_build_s2/pokelib_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    *plVar1 = lVar11;
    FUN_021eeb04(param_1);
    if (*(byte *)(param_1 + 0x91) == bVar4) {
      *(byte *)(param_1 + 0x91) = param_2;
    }
    else if (*(byte *)(param_1 + 0x91) == param_2) {
      *(byte *)(param_1 + 0x91) = bVar4;
    }
  }
  return;
}


