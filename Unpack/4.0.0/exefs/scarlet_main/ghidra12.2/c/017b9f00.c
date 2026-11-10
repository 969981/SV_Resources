/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017b9f00; name: FUN_017b9f00
 */


void FUN_017b9f00(long *param_1,undefined8 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  bool bVar6;
  long lVar7;
  undefined8 local_80;
  long local_78;
  long lStack_70;
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
LAB_017b9f3c:
    puVar3 = PTR_DAT_047d3920;
    FUN_017ba0a0(&local_60,*(undefined8 *)(*(long *)PTR_DAT_047d3920 + 8),param_2);
    lVar4 = local_60;
    if (local_60 == 0) {
      if (*(code **)PTR_DAT_047d3928 != (code *)0x0) {
        (**(code **)PTR_DAT_047d3928)(PTR_DAT_047d3928 + 0x20);
      }
      FUN_017ba0a0(&local_80,*(undefined8 *)(*(long *)puVar3 + 8),param_2);
      uVar5 = local_80;
      local_80 = 0;
      FUN_017ba1c4(&local_60,uVar5);
      local_58 = local_78;
      lStack_50 = lStack_70;
      local_48 = local_68;
      FUN_017ba1c4(&local_80,0);
      lVar4 = local_60;
      if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("result","CreateImpl",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua/memory_manager.h"
                   ,0x69,"GlueCode MemoryManager Allocate failed.");
      }
    }
    local_60 = 0;
    param_1[2] = lStack_50;
    param_1[3] = local_48;
    *param_1 = lVar4;
    param_1[1] = local_58;
    FUN_017ba1c4(&local_60,0);
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
    if (cVar1 == '\0') goto LAB_017b9fb4;
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
          if (cVar1 == '\0') goto LAB_017b9fb4;
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
LAB_017b9fb4:
  bVar6 = false;
  goto LAB_017b9f3c;
}


