/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01368868; name: FUN_01368868
 */


void FUN_01368868(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  
  uVar6 = *(undefined8 *)(param_1 + 8);
  uStack_48 = *(undefined8 *)(param_1 + 0x48);
  if (*(char *)(*(long *)(param_1 + 0xe0) + 0x710) == '\0') {
    local_40 = *(undefined8 *)(param_1 + (long)*(int *)(param_1 + 0x108) * 8 + 0x58);
  }
  else {
    local_40 = *(undefined8 *)(param_1 + 0xa8);
  }
  local_50 = uVar6;
  local_28 = uVar6;
  local_38 = FUN_01368968();
  local_60 = &local_50;
  local_30 = 0;
  local_2c = 0;
  FUN_01368a08(&local_58,uVar6,&local_28,&local_60);
  FUN_01368978((undefined8 *)(param_1 + 0x50),&local_58);
  if (local_58 != (long *)0x0) {
    plVar1 = local_58 + 5;
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
      (**(code **)(*local_58 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN_01368970(*(long *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x50));
  }
  return;
}


