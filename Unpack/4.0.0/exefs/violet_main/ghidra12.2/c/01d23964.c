/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d23964; name: FUN_01d23964
 */


undefined1 FUN_01d23964(undefined4 param_1,char *param_2,byte param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  int iVar7;
  long *local_28;
  byte local_8 [4];
  undefined4 local_4;
  
  uVar5 = DAT_0482d1d0;
  local_4 = param_1;
  if (*param_2 == '\x01') {
    local_28 = *(long **)(param_2 + 8);
    if (local_28 == (long *)0x0) goto LAB_01d239b8;
    plVar1 = local_28 + 5;
    do {
      iVar7 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (*param_2 != '\0') {
      local_28 = (long *)0x0;
      goto LAB_01d239b8;
    }
    local_28 = *(long **)(param_2 + 8);
    if (local_28 == (long *)0x0) goto LAB_01d239b8;
    plVar1 = local_28 + 5;
    do {
      iVar7 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (iVar7 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
LAB_01d239b8:
  local_8[0] = param_3 & 1;
  uVar6 = FUN_01d23e80(uVar5,&local_4,&local_28,local_8);
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 5;
    do {
      lVar4 = *plVar1;
      iVar7 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return uVar6;
}


