/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01978778; name: FUN_01978778
 */


void FUN_01978778(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5,
                 undefined8 param_6,uint param_7,int param_8,uint param_9,undefined4 param_10)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined1 local_6c;
  undefined8 local_6a;
  undefined1 auStack_48 [8];
  
  local_80 = 0xffffffff;
  local_b0 = 0xffffffffffffffff;
  local_a8 = 0x3ffffffff;
  local_a0 = 0xffffffffffffffff;
  uStack_98 = 0x1000000000000;
  local_6a = 0x10001000100;
  local_90 = 0x1ffffffffff00ff;
  uStack_88 = 0xffffffffffffffff;
  local_c0 = 0;
  local_b8 = 0;
  local_6c = 0;
  local_74 = 0xffff00000000;
  local_7c = 0;
  FUN_0170ffd0(&local_c0,param_2,param_9 & 1,param_10);
  if ((param_3 & 1) != 0) {
    local_b8 = 1;
    local_c0 = param_4;
  }
  if ((param_5 & 1) != 0) {
    local_b0 = param_6;
  }
  if ((param_7 & 1) != 0) {
    if (param_8 == 2) {
      local_a8 = 0x2ffffffff;
    }
    else if (param_8 == 1) {
      local_a8 = 0x1ffffffff;
    }
    else if (param_8 == 0) {
      local_a8 = 0x3ffffffff;
    }
  }
  lVar6 = FUN_00eebe4c(auStack_48,DAT_04838250,&local_c0);
  *param_1 = lVar6;
  if (lVar6 == 0) {
    local_c8 = (long *)0x0;
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
LAB_01978918:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    local_c8 = (long *)*param_1;
    if (local_c8 != (long *)0x0) {
      plVar1 = local_c8 + 5;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)lVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar6 == -1) goto LAB_01978918;
    }
  }
  FUN_0170e108(&local_c8,&local_c0,param_2,param_9 & 1,0);
  if (local_c8 != (long *)0x0) {
    plVar1 = local_c8 + 5;
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
      (**(code **)(*local_c8 + 0x10))();
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


