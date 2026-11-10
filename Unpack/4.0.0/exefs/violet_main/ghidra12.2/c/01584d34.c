/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01584d34; name: FUN_01584d34
 */


void FUN_01584d34(long *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined8 *local_60;
  long *local_58;
  long lStack_50;
  long local_48;
  
  puVar8 = (undefined8 *)PTR_DAT_047d38f8;
  lVar6 = *(long *)PTR_DAT_047d38f8;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar6) {
    bVar9 = true;
LAB_01584d70:
    plVar7 = *(long **)(*(long *)PTR_DAT_047d3920 + 8);
    puVar4 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,0xc,4);
    if (puVar4 == (undefined8 *)0x0) {
      if (*(code **)PTR_DAT_047d3928 != (code *)0x0) {
        (**(code **)PTR_DAT_047d3928)(PTR_DAT_047d3928 + 0x20);
      }
      FUN_01584f60(&local_60,param_2);
      if (local_60 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("result","CreateImpl",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/memory_manager.h"
                   ,0x69,"GlueCode MemoryManager Allocate failed.");
      }
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        puVar8 = (undefined8 *)PTR_DAT_047d38f8;
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar3 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar7;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      uVar5 = *param_2;
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_2 + 1);
      *puVar4 = uVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      local_48 = 4;
      lStack_50 = 0xc;
      local_58 = plVar7;
      local_60 = puVar4;
    }
    *param_1 = (long)local_60;
    param_1[1] = (long)local_58;
    param_1[2] = lStack_50;
    param_1[3] = local_48;
    if (!bVar9) {
      *puVar8 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar8 + 1));
      return;
    }
    return;
  }
  uVar5 = nn::os::GetCurrentThread();
  while (*puVar8 == 0) {
    cVar1 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar8,0x10);
    if (bVar9) {
      *puVar8 = uVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_01584e58;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)((long)puVar8 + 8));
  do {
    if (*puVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)((long)puVar8 + 8));
        while (*puVar8 == 0) {
          cVar1 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(puVar8,0x10);
          if (bVar9) {
            *puVar8 = uVar5;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_01584e58;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar8,0x10);
    if (bVar9) {
      *puVar8 = uVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_01584e58:
  bVar9 = false;
  goto LAB_01584d70;
}


