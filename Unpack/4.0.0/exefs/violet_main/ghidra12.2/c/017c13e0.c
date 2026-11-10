/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017c13e0; name: FUN_017c13e0
 */


void FUN_017c13e0(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *local_128;
  undefined1 auStack_120 [168];
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  char local_58 [8];
  long local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_128 = (long *)*param_2;
  if (local_128 != (long *)0x0) {
    plVar1 = local_128 + 5;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  memcpy(auStack_120,param_2 + 1,0xa8);
  FUN_017c17c8(&local_78,&local_128);
  local_50 = local_78;
  uStack_48 = uStack_70;
  local_78 = 0;
  local_58[0] = '\x01';
  local_40 = local_68;
  uStack_38 = uStack_60;
  FUN_017c1550(param_1,local_58);
  lVar5 = local_50;
  if (local_58[0] == '\x01') {
    local_50 = 0;
    if (lVar5 != 0) {
      FUN_015a3b20(&uStack_48);
      lVar5 = local_78;
      local_78 = 0;
      if (lVar5 != 0) {
        FUN_015a3b20(&uStack_70);
      }
      goto LAB_017c1488;
    }
  }
  local_78 = 0;
LAB_017c1488:
  if (local_128 != (long *)0x0) {
    plVar1 = local_128 + 5;
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
      (**(code **)(*local_128 + 0x10))();
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


