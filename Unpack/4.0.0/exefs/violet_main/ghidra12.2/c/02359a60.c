/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02359a60; name: FUN_02359a60
 */


uint FUN_02359a60(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  undefined2 local_48;
  long *local_40;
  long *plStack_38;
  
  local_70 = *param_2;
  uStack_68 = param_2[1];
  local_60 = param_2[2];
  local_58 = (long *)param_2[3];
  param_2[3] = 0;
  local_50 = param_2[4];
  local_48 = *(undefined2 *)(param_2 + 5);
  plVar1 = (long *)param_2[6];
  plVar2 = (long *)param_2[7];
  param_2[6] = 0;
  param_2[7] = 0;
  local_40 = plVar1;
  plStack_38 = plVar2;
  uVar7 = FUN_02359b5c(param_1,&local_70);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
  }
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1 + 5;
    do {
      lVar6 = *plVar2;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return uVar7 & 1;
}


