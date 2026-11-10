/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fdcbd0; name: FUN_00fdcbd0
 */


void FUN_00fdcbd0(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *local_28;
  long *local_8;
  
  if ((char)param_1[0x25] != '\0') {
    plVar1 = param_1 + 0x25;
    FUN_00c5ecb4(&local_8,*param_2,plVar1);
    if (local_8 != (long *)0x0) {
      plVar2 = param_1 + 5;
      do {
        lVar6 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = (int)lVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      local_28 = param_1;
      if ((int)lVar6 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      FUN_00eb10d8(local_8,&local_28);
      if (local_28 != (long *)0x0) {
        plVar2 = local_28 + 5;
        do {
          lVar6 = *plVar2;
          iVar5 = (int)lVar6 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*local_28 + 0x10))();
        }
        else if ((int)lVar6 == 0) goto LAB_00fdcca8;
      }
    }
    if ((char)*plVar1 != '\0') {
      if ((long *)param_1[0x29] != (long *)0x0) {
        (**(code **)(*(long *)param_1[0x29] + 0x20))();
      }
      *(char *)plVar1 = '\0';
    }
    if (local_8 != (long *)0x0) {
      plVar1 = local_8 + 5;
      do {
        lVar6 = *plVar1;
        iVar5 = (int)lVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_8 + 0x10))();
      }
      else if ((int)lVar6 == 0) {
LAB_00fdcca8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


