/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0127d48c; name: FUN_0127d48c
 */


void FUN_0127d48c(long param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_1 + 8);
  plVar6 = param_2 + 2;
  plVar5 = param_2;
  if (plVar6 != plVar7) {
    do {
      param_2 = plVar5 + 2;
      FUN_013de5a4(plVar5,param_2);
      plVar6 = plVar5 + 4;
      plVar5 = param_2;
    } while (plVar6 != plVar7);
    plVar6 = *(long **)(param_1 + 8);
    if (plVar6 == param_2) goto LAB_0127d548;
  }
  do {
    plVar6 = plVar6 + -2;
    if (*plVar6 != 0) {
      psVar1 = (short *)(*plVar6 + 0x18);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        FUN_0116e168();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  } while (plVar6 != param_2);
LAB_0127d548:
  *(long **)(param_1 + 8) = param_2;
  return;
}


