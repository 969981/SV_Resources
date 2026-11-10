/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b3d99c; name: FUN_02b3d99c
 */


void FUN_02b3d99c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_0459c918;
  param_1[4] = &PTR_LAB_0459c9a0;
  plVar5 = (long *)param_1[10];
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
  lVar6 = param_1[6];
  param_1[6] = 0;
  if (lVar6 == 0) {
    return;
  }
  FUN_017a4ce4(param_1 + 7);
  return;
}


