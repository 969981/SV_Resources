/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c62730; name: FUN_01c62730
 */


void FUN_01c62730(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  long *local_78;
  undefined2 local_70;
  undefined1 local_6e;
  long local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  char local_48 [8];
  long local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_90 = *param_2;
  uStack_88 = param_2[1];
  local_80 = *(undefined1 *)(param_2 + 2);
  local_78 = (long *)param_2[3];
  if (local_78 != (long *)0x0) {
    plVar1 = local_78 + 5;
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
  local_70 = *(undefined2 *)(param_2 + 4);
  local_6e = *(undefined1 *)((long)param_2 + 0x22);
  FUN_01c62924(&local_68,&local_90);
  local_40 = local_68;
  uStack_38 = uStack_60;
  local_68 = 0;
  local_48[0] = '\x01';
  local_30 = local_58;
  uStack_28 = uStack_50;
  FUN_01c62aa0(param_1,local_48);
  lVar5 = local_40;
  if (local_48[0] == '\x01') {
    local_40 = 0;
    if (lVar5 != 0) {
      FUN_01c62b84(&uStack_38);
    }
  }
  local_68 = 0;
  if (local_78 != (long *)0x0) {
    plVar1 = local_78 + 5;
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
      (**(code **)(*local_78 + 0x10))();
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


