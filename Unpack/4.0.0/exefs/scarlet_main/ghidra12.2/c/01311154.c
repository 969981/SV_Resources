/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01311154; name: FUN_01311154
 */


void FUN_01311154(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *local_38;
  
  param_1[6] = 0;
  FUN_00cd1c7c();
  *param_1 = &PTR_FUN_045e81f8;
  param_1[4] = &PTR_LAB_045e8230;
  FUN_0131128c(param_1 + 0x2e63);
  *(undefined1 *)(param_1 + 0x323d) = 0;
  *(undefined1 *)(param_1 + 0x323e) = 0;
  param_1[0x3240] = 0;
  FUN_0150fff4(&local_38);
  FUN_0145dfc8(param_1 + 6,&local_38);
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 5;
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
      (**(code **)(*local_38 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_01311410(param_1 + 7);
  *(undefined4 *)((long)param_1 + 0x16aec) = *param_3;
  *(undefined4 *)(param_1 + 0x2d4a) = 0;
  *(undefined4 *)(param_1 + 7) = param_3[1];
  *(undefined4 *)((long)param_1 + 0x3c) = param_3[2];
  param_1[0x2d5c] = (long)(int)param_3[3];
  memset((void *)((long)param_1 + 0x16a54),0,0x80);
  return;
}


