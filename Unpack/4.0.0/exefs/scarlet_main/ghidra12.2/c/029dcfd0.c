/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029dcfd0; name: FUN_029dcfd0
 */


long * FUN_029dcfd0(long *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_18;
  
  local_18 = param_3;
  if ((param_1 != param_2) && (uVar5 = FUN_029dd0d8(&local_18,param_1), (uVar5 & 1) == 0)) {
    do {
      if (param_2 + -1 == param_1) {
        return param_2;
      }
      param_1 = param_1 + 1;
      uVar5 = FUN_029dd0d8(&local_18,param_1);
    } while ((uVar5 & 1) == 0);
  }
  plVar8 = param_1;
  if (param_1 != param_2) {
    while (plVar8 = plVar8 + 1, plVar8 != param_2) {
      uVar5 = FUN_029dd0d8(&local_18,plVar8);
      if ((uVar5 & 1) == 0) {
        plVar6 = (long *)*param_1;
        *param_1 = 0;
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6 + 5;
          do {
            lVar7 = *plVar1;
            iVar4 = (int)lVar7 + -1;
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
          else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        lVar7 = *plVar8;
        *plVar8 = 0;
        *param_1 = lVar7;
        param_1 = param_1 + 1;
      }
    }
  }
  return param_1;
}


