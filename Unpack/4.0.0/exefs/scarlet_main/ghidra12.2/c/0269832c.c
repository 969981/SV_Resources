/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0269832c; name: FUN_0269832c
 */


void FUN_0269832c(undefined8 param_1,char *param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  long *local_18;
  
  puVar2 = &LAB_02ba537c;
  if (DAT_048590c0 == '\0') {
    puVar2 = (undefined1 *)0x0;
  }
  if (*param_2 == '\x01') {
    local_18 = *(long **)(param_2 + 8);
    if (local_18 == (long *)0x0) goto LAB_02698388;
    plVar1 = local_18 + 5;
    do {
      iVar6 = (int)*plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    if (*param_2 != '\0') {
      local_18 = (long *)0x0;
      goto LAB_02698388;
    }
    local_18 = *(long **)(param_2 + 8);
    if (local_18 == (long *)0x0) goto LAB_02698388;
    plVar1 = local_18 + 5;
    do {
      iVar6 = (int)*plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iVar6 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
LAB_02698388:
  FUN_02699304(param_1,puVar2,0,&local_18);
  if (local_18 != (long *)0x0) {
    plVar1 = local_18 + 5;
    do {
      lVar5 = *plVar1;
      iVar6 = (int)lVar5 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_18 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


