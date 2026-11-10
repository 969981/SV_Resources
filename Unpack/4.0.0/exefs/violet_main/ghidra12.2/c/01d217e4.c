/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d217e4; name: FUN_01d217e4
 */


void FUN_01d217e4(undefined8 param_1,undefined4 param_2,char *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined1 uVar6;
  int iVar7;
  long *local_20;
  undefined4 local_14;
  
  uVar6 = DAT_0482d170;
  uVar2 = 0x40;
  if (DAT_0482d168 == '\0') {
    uVar2 = 0;
  }
  local_14 = param_2;
  if (*param_3 == '\x01') {
    local_20 = *(long **)(param_3 + 8);
    if (local_20 == (long *)0x0) goto LAB_01d2184c;
    plVar1 = local_20 + 5;
    do {
      iVar7 = (int)*plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    if (*param_3 != '\0') {
      local_20 = (long *)0x0;
      goto LAB_01d2184c;
    }
    local_20 = *(long **)(param_3 + 8);
    if (local_20 == (long *)0x0) goto LAB_01d2184c;
    plVar1 = local_20 + 5;
    do {
      iVar7 = (int)*plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iVar7 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
LAB_01d2184c:
  FUN_01d226f4(param_1,uVar2,uVar6,&local_14,&local_20);
  if (local_20 != (long *)0x0) {
    plVar1 = local_20 + 5;
    do {
      lVar5 = *plVar1;
      iVar7 = (int)lVar5 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


