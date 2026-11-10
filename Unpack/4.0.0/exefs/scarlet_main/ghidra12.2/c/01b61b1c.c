/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b61b1c; name: FUN_01b61b1c
 */


void FUN_01b61b1c(long *param_1,undefined8 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  bool bVar6;
  long lVar7;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long lStack_50;
  long local_48;
  
  puVar2 = PTR_DAT_047d38f8;
  lVar7 = *(long *)PTR_DAT_047d38f8;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar7) {
    bVar6 = true;
LAB_01b61b58:
    puVar3 = PTR_DAT_047d3920;
    FUN_01b62c70(&local_60,*(undefined8 *)(*(long *)PTR_DAT_047d3920 + 8),param_2);
    if (local_60 == 0) {
      if (*(code **)PTR_DAT_047d3928 != (code *)0x0) {
        (**(code **)PTR_DAT_047d3928)(PTR_DAT_047d3928 + 0x20);
      }
      FUN_01b62c70(&local_80,*(undefined8 *)(*(long *)puVar3 + 8),param_2);
      lVar4 = local_60;
      local_60 = local_80;
      local_80 = 0;
      if (lVar4 == 0) {
        local_80 = 0;
        local_58 = local_78;
        lStack_50 = local_70;
        local_48 = local_68;
      }
      else {
        FUN_01b3cd50(&local_58);
        lVar4 = local_80;
        local_80 = 0;
        local_48 = local_68;
        local_58 = local_78;
        lStack_50 = local_70;
        if (lVar4 != 0) {
          FUN_01b3cd50(&local_78);
        }
      }
      if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("result","CreateImpl",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/memory_manager.h"
                   ,0x69,"GlueCode MemoryManager Allocate failed.");
      }
    }
    param_1[2] = lStack_50;
    param_1[3] = local_48;
    *param_1 = local_60;
    param_1[1] = local_58;
    if (!bVar6) {
      *(undefined8 *)puVar2 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
    }
    return;
  }
  uVar5 = nn::os::GetCurrentThread();
  while (*(long *)puVar2 == 0) {
    cVar1 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar6) {
      *(undefined8 *)puVar2 = uVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_01b61c84;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
  do {
    if (*(long *)puVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
        while (*(long *)puVar2 == 0) {
          cVar1 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *(undefined8 *)puVar2 = uVar5;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_01b61c84;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar6) {
      *(undefined8 *)puVar2 = uVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_01b61c84:
  bVar6 = false;
  goto LAB_01b61b58;
}


