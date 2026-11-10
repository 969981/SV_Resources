/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d97840; name: FUN_00d97840
 */


long FUN_00d97840(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  
  puVar2 = PTR_DAT_047d38f8;
  lVar5 = *(long *)PTR_DAT_047d38f8;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar5) {
    bVar7 = true;
LAB_00d97878:
    plVar6 = *(long **)(*(long *)PTR_DAT_047d3920 + 8);
    lVar3 = (**(code **)(*plVar6 + 0x10))(plVar6,param_1,param_2);
    if (lVar3 == 0) {
      if (*(code **)PTR_DAT_047d3928 != (code *)0x0) {
        (**(code **)PTR_DAT_047d3928)(PTR_DAT_047d3928 + 0x20);
      }
      lVar3 = (**(code **)(*plVar6 + 0x10))(plVar6,param_1,param_2);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("ptr","Allocate",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/memory_manager.h"
                   ,0x26,"GlueCode MemoryManager Allocate failed.");
      }
    }
    if (!bVar7) {
      *(undefined8 *)puVar2 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
    }
    return lVar3;
  }
  uVar4 = nn::os::GetCurrentThread();
  while (*(long *)puVar2 == 0) {
    cVar1 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar7) {
      *(undefined8 *)puVar2 = uVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00d978d4;
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
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *(undefined8 *)puVar2 = uVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00d978d4;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar7) {
      *(undefined8 *)puVar2 = uVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00d978d4:
  bVar7 = false;
  goto LAB_00d97878;
}


