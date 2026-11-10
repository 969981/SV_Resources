/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010415b0; name: FUN_010415b0
 */


long * FUN_010415b0(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  if ((param_1 != param_2) && (*(long *)(*param_1 + 0x1d0) != *(long *)(*param_3 + 0x1d0))) {
    plVar7 = param_1;
    do {
      if (param_2 + -1 == plVar7) {
        return param_2;
      }
      param_1 = plVar7 + 1;
      plVar5 = plVar7 + 1;
      plVar7 = param_1;
    } while (*(long *)(*plVar5 + 0x1d0) != *(long *)(*param_3 + 0x1d0));
  }
  plVar7 = param_1;
  if (param_1 != param_2) {
    while (plVar7 = plVar7 + 1, plVar7 != param_2) {
      if (*(long *)(*plVar7 + 0x1d0) != *(long *)(*param_3 + 0x1d0)) {
        plVar5 = (long *)*param_1;
        *param_1 = 0;
        if (plVar5 != (long *)0x0) {
          plVar1 = plVar5 + 5;
          do {
            lVar6 = *plVar1;
            iVar4 = (int)lVar6 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*plVar5 + 0x10))();
          }
          else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
        lVar6 = *plVar7;
        *plVar7 = 0;
        *param_1 = lVar6;
        param_1 = param_1 + 1;
      }
    }
  }
  return param_1;
}


