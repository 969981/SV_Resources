/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e33f00; name: FUN_00e33f00
 */


void FUN_00e33f00(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar6 = *param_1;
  local_68 = param_1[1];
  local_60 = (long *)param_1[2];
  param_1[2] = 0;
  local_58 = (long *)param_1[3];
  local_50 = (long *)param_1[4];
  uStack_48 = param_1[5];
  local_40 = param_1[6];
  uStack_38 = param_1[7];
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = *param_2;
  FUN_00e34064(param_1 + 1,param_2 + 1);
  *param_2 = uVar6;
  FUN_00e34064(param_2 + 1,&local_68);
  if (local_50 != (long *)0x0) {
    plVar1 = local_50 + 5;
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
      (**(code **)(*local_50 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_00e3400c;
  }
  if (local_58 != (long *)0x0) {
    plVar1 = local_58 + 5;
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
      (**(code **)(*local_58 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_00e3400c;
  }
  if (local_60 != (long *)0x0) {
    plVar1 = local_60 + 5;
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
      (**(code **)(*local_60 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
LAB_00e3400c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


