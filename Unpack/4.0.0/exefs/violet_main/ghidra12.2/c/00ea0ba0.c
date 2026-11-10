/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ea0ba0; name: FUN_00ea0ba0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ea0ba0(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  
  if ((param_2 & 1) == 0) {
    lVar5 = FUN_00c8dda0(*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x30));
    if ((lVar5 == 0) || (plVar6 = *(long **)(lVar5 + 0x120), plVar6 == (long *)0x0)) {
      iVar7 = _DAT_00000194;
    }
    else {
      plVar1 = plVar6 + 5;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      iVar7 = *(int *)((long)plVar6 + 0x194);
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
        (**(code **)(*plVar6 + 0x10))();
      }
      else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (iVar7 < *(int *)(PTR_DAT_047ddf68 + 4)) {
      if (*(int *)(param_1 + 0x7c) < (int)(uint)*(byte *)(*(long *)(param_1 + 0x58) + 0x1fc)) {
        *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x7c) = 0;
        if (*(char *)(param_1 + 0x78) == '\0') {
          FUN_00ea119c(param_1);
        }
        else {
          FUN_00ea0cf8(param_1);
        }
        if ((*(long **)(param_1 + 0x70) != (long *)0x0) && (*(long *)(param_1 + 0x68) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00ea0c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(long **)(param_1 + 0x70) + 0x68))();
          return;
        }
      }
    }
  }
  return;
}


