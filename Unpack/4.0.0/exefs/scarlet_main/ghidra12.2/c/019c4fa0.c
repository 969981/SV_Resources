/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019c4fa0; name: FUN_019c4fa0
 */


void FUN_019c4fa0(undefined8 param_1,undefined8 param_2,long param_3,long *param_4,long *param_5,
                 uint param_6,byte param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_68;
  long *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long *local_40;
  long *local_38;
  
  local_38 = (long *)*param_4;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x58))();
  }
  local_58 = *(undefined8 *)(param_3 + 0x68);
  uStack_50 = *(undefined8 *)(param_3 + 0x70);
  local_48 = *(undefined8 *)(param_3 + 0x78);
  local_40 = (long *)0x0;
  local_60 = (long *)*param_5;
  if (local_60 != (long *)0x0) {
    plVar1 = local_60 + 5;
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
  FUN_019c5404(param_1,param_2,&local_38,&local_58,&local_60,1,param_6 & 1);
  if (local_60 != (long *)0x0) {
    plVar1 = local_60 + 5;
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
      (**(code **)(*local_60 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x60))();
  }
  *(byte *)(param_3 + 0x60) = param_7 & 1;
  uVar6 = FUN_01851000(*(undefined8 *)(param_3 + 8));
  FUN_01850adc(&local_68,uVar6);
  FUN_01850964(param_3 + 0x50,0);
  uVar6 = local_68;
  local_68 = 0;
  *(undefined8 *)(param_3 + 0x50) = uVar6;
  FUN_018509a0(&local_68);
  uVar6 = FUN_019c52dc(*(undefined8 *)(param_3 + 8));
  FUN_019c5220(&local_68,uVar6);
  FUN_019c516c(param_3 + 0x58,0);
  uVar6 = local_68;
  local_68 = 0;
  *(undefined8 *)(param_3 + 0x58) = uVar6;
  FUN_019c51a8(&local_68);
  return;
}


