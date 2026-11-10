/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02136a68; name: FUN_02136a68
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02136a68(long param_1,undefined8 *param_2,undefined2 param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined4 local_66;
  undefined2 local_62;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined1 local_3c;
  undefined8 local_3a;
  long *local_18;
  
  local_50 = 0xffffffff;
  local_80 = 0xffffffffffffffff;
  uStack_78 = 0x3ffffffff;
  local_3a = 0x10001000100;
  local_70 = 0xffffffffffffffff;
  local_90 = 0;
  local_88 = 0;
  local_66 = 0;
  local_3c = 0;
  local_4c = 0;
  local_60 = 0x1ffffffffff00ff;
  uStack_58 = 0xffffffffffffffff;
  local_44 = 0xffff00000000;
  local_62 = 0x14;
  local_68 = param_3;
  plVar6 = (long *)FUN_00eebe4c(&local_18,*(undefined8 *)(param_1 + 8),&local_90);
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 5;
    do {
      lVar4 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = (int)lVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((int)lVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  FUN_0174fbdc(&local_18);
  (**(code **)(*local_18 + 0x38))(local_18,0,plVar6);
  if (local_18 != (long *)0x0) {
    plVar7 = local_18 + 5;
    do {
      lVar4 = *plVar7;
      iVar3 = (int)lVar4 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_18 + 0x10))();
    }
    else if ((int)lVar4 == 0) goto LAB_02136bbc;
  }
  uVar5 = _DAT_03d61c70;
  plVar7 = (long *)*param_2;
  local_98 = plVar7;
  if (plVar7 == (long *)0x0) {
    FUN_019c4a94(0,_DAT_03d61c70,param_1,&local_98,1,0);
  }
  else {
    (**(code **)(*plVar7 + 0x58))(plVar7);
    FUN_019c4a94(0,uVar5,param_1,&local_98,1,0);
    (**(code **)(*plVar7 + 0x60))(plVar7);
  }
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 5;
    do {
      lVar4 = *plVar7;
      iVar3 = (int)lVar4 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *(int *)plVar7 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
    else if ((int)lVar4 == 0) {
LAB_02136bbc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


