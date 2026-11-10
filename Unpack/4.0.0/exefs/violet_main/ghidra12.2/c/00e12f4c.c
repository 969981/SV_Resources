/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e12f4c; name: FUN_00e12f4c
 */


void FUN_00e12f4c(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,long *param_7)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *local_48;
  
  *(undefined8 *)(param_1 + 0x230) = param_4;
  *(undefined8 *)(param_1 + 0x240) = param_5;
  plVar6 = *(long **)(*(long *)(param_1 + 0x58) + 0x40);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  plVar5 = *(long **)(param_1 + 0x238);
  *(long **)(param_1 + 0x238) = plVar6;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  param_7 = (long *)*param_7;
  if (*(long *)(param_3 + 8) != 0) {
    local_48 = param_7;
    if (param_7 != (long *)0x0) {
      plVar6 = param_7 + 5;
      do {
        lVar4 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *(int *)plVar6 = (int)lVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((int)lVar4 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    FUN_00e13988(param_1,param_3,param_6,&local_48);
    if (local_48 != (long *)0x0) {
      plVar6 = local_48 + 5;
      do {
        lVar4 = *plVar6;
        iVar3 = (int)lVar4 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *(int *)plVar6 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
      else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  if (*(long *)(param_2 + 8) != 0) {
    FUN_00e130b8(param_1,param_2,param_7 != (long *)0x0);
  }
  return;
}


