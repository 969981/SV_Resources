/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0170df74; name: FUN_0170df74
 */


void FUN_0170df74(long *param_1,undefined8 param_2,uint param_3,undefined4 param_4,uint param_5)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined1 local_44;
  undefined8 local_42;
  undefined1 auStack_38 [8];
  
  local_58 = 0xffffffff;
  local_88 = 0xffffffffffffffff;
  uStack_80 = 0x3ffffffff;
  local_78 = 0xffffffffffffffff;
  uStack_70 = 0x1000000000000;
  local_42 = 0x10001000100;
  local_68 = 0x1ffffffffff00ff;
  uStack_60 = 0xffffffffffffffff;
  local_98 = 0;
  local_90 = 0;
  local_44 = 0;
  local_4c = 0xffff00000000;
  local_54 = 0;
  FUN_0170ffd0(&local_98,param_2,param_3 & 1,param_4);
  lVar6 = FUN_00eebe4c(auStack_38,DAT_04838250,&local_98);
  *param_1 = lVar6;
  if (lVar6 == 0) {
    local_a0 = (long *)0x0;
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
LAB_0170e0a8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    local_a0 = (long *)*param_1;
    if (local_a0 != (long *)0x0) {
      plVar1 = local_a0 + 5;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)lVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar6 == -1) goto LAB_0170e0a8;
    }
  }
  FUN_0170e108(&local_a0,&local_98,param_2,param_3 & 1,param_5 & 1);
  if (local_a0 != (long *)0x0) {
    plVar1 = local_a0 + 5;
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
      (**(code **)(*local_a0 + 0x10))();
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


