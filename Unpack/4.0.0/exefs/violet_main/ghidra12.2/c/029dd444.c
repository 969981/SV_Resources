/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029dd444; name: FUN_029dd444
 */


void FUN_029dd444(long param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *local_48;
  
  plVar8 = *(long **)(param_1 + 0x178);
  plVar2 = *(long **)(param_1 + 0x180);
  if (*(char *)param_2[1] == '\0') {
    if (plVar8 != plVar2) {
      do {
        plVar7 = (long *)*plVar8;
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7 + 5;
          do {
            lVar6 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = (int)lVar6 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((int)lVar6 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
          local_48 = plVar7;
          (*(code *)*param_3)(param_3 + 4,&local_48);
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
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
          else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar2);
    }
  }
  else if (plVar8 == plVar2) {
LAB_029dd48c:
    if ((plVar8 != plVar2) && (local_48 = (long *)*plVar8, local_48 != (long *)0x0)) {
      (*(code *)*param_3)(param_3 + 4,&local_48);
    }
  }
  else {
    do {
      if (*(long *)(*plVar8 + 0x1d0) == *param_2) goto LAB_029dd48c;
      plVar8 = plVar8 + 1;
    } while (plVar2 != plVar8);
  }
  return;
}


