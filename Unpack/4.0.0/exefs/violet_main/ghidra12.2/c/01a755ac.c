/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a755ac; name: FUN_01a755ac
 */


undefined4
FUN_01a755ac(long *param_1,code *param_2,ulong param_3,undefined8 param_4,undefined8 *param_5,
            undefined1 *param_6)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  long *local_8;
  
  if ((*param_1 == 0) || (lVar6 = *(long *)(*param_1 + 0x10), lVar6 == 0)) {
    uVar4 = 0;
  }
  else {
    plVar5 = (long *)(lVar6 + ((long)param_3 >> 1) + -0x28);
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar5);
    }
    local_8 = (long *)*param_5;
    *param_5 = 0;
    uVar4 = (*param_2)(plVar5,param_4,&local_8,*param_6);
    if (local_8 != (long *)0x0) {
      plVar5 = local_8 + 5;
      do {
        lVar6 = *plVar5;
        iVar3 = (int)lVar6 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *(int *)plVar5 = iVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_8 + 0x10))();
      }
      else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return uVar4;
}


