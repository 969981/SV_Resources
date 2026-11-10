/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010a6134; name: FUN_010a6134
 */


void FUN_010a6134(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *local_40;
  long *local_38;
  undefined1 local_18 [4];
  undefined4 local_14;
  
  local_18[0] = param_4;
  local_14 = param_3;
  FUN_010a6a44(&local_38,param_2[0xc]);
  FUN_010a6cc8(&local_40,param_2[0xc],param_3);
  FUN_010a6270(param_1,*param_2,param_2 + 9,param_2 + 0xb,&local_38,&local_40,(long)param_2 + 0x1c,
               &local_14,local_18,param_2 + 4,param_2 + 7,param_2 + 8);
  if (local_38 != (long *)0x0) {
    FUN_010a6268(local_38,*param_1);
  }
  if (local_40 != (long *)0x0) {
    plVar1 = local_40 + 5;
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
      (**(code **)(*local_40 + 0x10))();
    }
    else if ((int)lVar5 == 0) goto LAB_010a6240;
  }
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
LAB_010a6240:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


