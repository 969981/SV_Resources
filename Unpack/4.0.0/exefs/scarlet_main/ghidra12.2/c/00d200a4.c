/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d200a4; name: FUN_00d200a4
 */


void FUN_00d200a4(long *param_1,undefined8 *param_2)

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
LAB_00d200e0:
    plVar7 = *(long **)(*(long *)PTR_DAT_047d3920 + 8);
    puVar4 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,0x10,0x10);
    if (puVar4 == (undefined8 *)0x0) {
      if (*(code **)PTR_DAT_047d3928 != (code *)0x0) {
        (**(code **)PTR_DAT_047d3928)(PTR_DAT_047d3928 + 0x20);
      }
      FUN_00d2079c(&local_60,PTR_DAT_047d49a0,param_2);
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
      puVar4[1] = param_2[1];
      *puVar4 = *param_2;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      lStack_50 = 0x10;
      local_48 = 0x10;
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
    if (cVar1 == '\0') goto LAB_00d201b4;
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
          if (cVar1 == '\0') goto LAB_00d201b4;
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
LAB_00d201b4:
  bVar9 = false;
  goto LAB_00d200e0;
}


