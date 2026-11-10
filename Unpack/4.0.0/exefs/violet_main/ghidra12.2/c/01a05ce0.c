/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a05ce0; name: FUN_01a05ce0
 */


void FUN_01a05ce0(long *param_1,undefined8 param_2,undefined2 param_3,uint param_4,
                 undefined8 param_5,long param_6)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *local_a8;
  long local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined1 local_4c;
  undefined8 local_4a;
  undefined1 auStack_28 [8];
  
  local_60 = 0xffffffff;
  local_90 = 0xffffffffffffffff;
  uStack_88 = 0x3ffffffff;
  local_80 = 0xffffffffffffffff;
  uStack_78 = 0x1000000000000;
  local_4a = 0x10001000100;
  local_70 = 0x1ffffffffff00ff;
  uStack_68 = 0xffffffffffffffff;
  local_a0 = 0;
  local_98 = 0;
  local_4c = 0;
  local_54 = 0xffff00000000;
  local_5c = 0;
  FUN_0170ffd0(&local_a0,param_2,param_4 & 1);
  uStack_78 = CONCAT26(param_3,(undefined6)uStack_78);
  if (param_6 != 0) {
    local_98 = 1;
    local_a0 = param_6;
  }
  lVar6 = FUN_00eebe4c(auStack_28,DAT_04838250,&local_a0);
  *param_1 = lVar6;
  if (lVar6 == 0) {
    local_a8 = (long *)0x0;
  }
  else {
    piVar2 = (int *)(lVar6 + 0x28);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == -1) {
LAB_01a05e30:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    local_a8 = (long *)*param_1;
    if (local_a8 != (long *)0x0) {
      plVar1 = local_a8 + 5;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)lVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar6 == -1) goto LAB_01a05e30;
    }
  }
  FUN_0170e108(&local_a8,&local_a0,param_2,param_4 & 1,0);
  if (local_a8 != (long *)0x0) {
    plVar1 = local_a8 + 5;
    do {
      lVar6 = *plVar1;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_a8 + 0x10))();
    }
    else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


