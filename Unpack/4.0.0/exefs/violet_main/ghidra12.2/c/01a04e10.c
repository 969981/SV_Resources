/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a04e10; name: FUN_01a04e10
 */


void FUN_01a04e10(undefined1 *param_1,char *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined8 local_30;
  undefined4 local_28;
  long *local_8;
  
  uVar5 = DAT_04831038;
  if (*param_2 == '\x01') {
    local_8 = *(long **)(param_2 + 8);
    if (local_8 == (long *)0x0) goto LAB_01a04e64;
    plVar1 = local_8 + 5;
    do {
      iVar6 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (*param_2 != '\0') {
      local_8 = (long *)0x0;
      goto LAB_01a04e64;
    }
    local_8 = *(long **)(param_2 + 8);
    if (local_8 == (long *)0x0) goto LAB_01a04e64;
    plVar1 = local_8 + 5;
    do {
      iVar6 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (iVar6 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
LAB_01a04e64:
  FUN_01a04f70(&local_50,uVar5,&local_8);
  *param_1 = 1;
  local_38 = local_50;
  local_30 = local_48;
  local_28 = local_40;
  local_34 = local_4c;
  local_32 = local_4a;
  FUN_010bbbb4(param_1 + 8,&local_38);
  if (local_8 != (long *)0x0) {
    plVar1 = local_8 + 5;
    do {
      lVar4 = *plVar1;
      iVar6 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_8 + 0x10))();
    }
    else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


