/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010e2094; name: FUN_010e2094
 */


void FUN_010e2094(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  bool bVar10;
  long lVar11;
  long *local_50;
  long *local_48;
  
  puVar5 = PTR_DAT_047d38f8;
  lVar11 = *(long *)PTR_DAT_047d38f8;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 == lVar11) {
    bVar10 = true;
LAB_010e20d4:
    puVar6 = PTR_DAT_047d3f70;
    FUN_010e225c(&local_48,*(undefined8 *)(*(long *)PTR_DAT_047d3f70 + 0x148),param_2,param_3);
    if (local_48 == (long *)0x0) {
      if (*(code **)PTR_DAT_047d3928 != (code *)0x0) {
        (**(code **)PTR_DAT_047d3928)(PTR_DAT_047d3928 + 0x20);
      }
      FUN_010e225c(&local_50,*(undefined8 *)(*(long *)puVar6 + 0x148),param_2,param_3);
      plVar7 = local_48;
      local_48 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        lVar8 = plVar7[6];
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar7 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      local_48 = local_50;
      if (local_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("result","CreateImpl",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/memory_manager.h"
                   ,0x69,"GlueCode MemoryManager Allocate failed.");
      }
    }
    *param_1 = local_48;
    if (!bVar10) {
      *(undefined8 *)puVar5 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
    }
    return;
  }
  uVar9 = nn::os::GetCurrentThread();
  while (*(long *)puVar5 == 0) {
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar10) {
      *(undefined8 *)puVar5 = uVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_010e2140;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
  do {
    if (*(long *)puVar5 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
        while (*(long *)puVar5 == 0) {
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar10) {
            *(undefined8 *)puVar5 = uVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_010e2140;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar10) {
      *(undefined8 *)puVar5 = uVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_010e2140:
  bVar10 = false;
  goto LAB_010e20d4;
}


