/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019baed4; name: thunk_FUN_019bb2b8
 */


void thunk_FUN_019bb2b8(long *param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  bool bVar6;
  long lVar7;
  long lStack_50;
  long lStack_48;
  long lStack_28;
  
  puVar2 = PTR_DAT_047d38f8;
  lVar7 = *(long *)PTR_DAT_047d38f8;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar7) {
    bVar6 = true;
LAB_019bb2f0:
    puVar3 = PTR_DAT_047d3f70;
    uVar5 = FUN_019bb4fc(*(undefined8 *)(*(long *)PTR_DAT_047d3f70 + 0x148));
    FUN_019bb440(&lStack_48,uVar5);
    lVar4 = lStack_48;
    if (lStack_48 == 0) {
      if (*(code **)PTR_DAT_047d3928 != (code *)0x0) {
        (**(code **)PTR_DAT_047d3928)(PTR_DAT_047d3928 + 0x20);
      }
      uVar5 = FUN_019bb4fc(*(undefined8 *)(*(long *)puVar3 + 0x148));
      FUN_019bb440(&lStack_50,uVar5);
      lStack_28 = lStack_48;
      FUN_019bae24(&lStack_28);
      lVar4 = lStack_50;
      lStack_50 = 0;
      lStack_48 = lVar4;
      FUN_019bae24(&lStack_50);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("result","CreateImpl",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/memory_manager.h"
                   ,0x69,"GlueCode MemoryManager Allocate failed.");
      }
    }
    lStack_48 = 0;
    *param_1 = lVar4;
    FUN_019bae24(&lStack_48);
    if (bVar6) {
      return;
    }
    *(undefined8 *)puVar2 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
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
    if (cVar1 == '\0') goto LAB_019bb3d4;
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
          if (cVar1 == '\0') goto LAB_019bb3d4;
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
LAB_019bb3d4:
  bVar6 = false;
  goto LAB_019bb2f0;
}


