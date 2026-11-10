/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d2da28; name: FUN_00d2da28
 */


void FUN_00d2da28(long *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  undefined8 *local_70;
  long *local_68;
  long lStack_60;
  long local_58;
  
  puVar2 = PTR_DAT_047d38f8;
  lVar7 = *(long *)PTR_DAT_047d38f8;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar7) {
    bVar9 = true;
LAB_00d2da68:
    plVar8 = *(long **)(*(long *)PTR_DAT_047d3920 + 8);
    puVar5 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x18,8);
    if (puVar5 == (undefined8 *)0x0) {
      if (*(code **)PTR_DAT_047d3928 != (code *)0x0) {
        (**(code **)PTR_DAT_047d3928)(PTR_DAT_047d3928 + 0x20);
      }
      FUN_00d2dd14(&local_70,PTR_DAT_047d5190,param_2);
      if (local_70 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("result","CreateImpl",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/memory_manager.h"
                   ,0x69,"GlueCode MemoryManager Allocate failed.");
      }
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar4 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar8;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      *puVar5 = *param_2;
      puVar5[2] = 0;
      puVar5[1] = 0;
      FUN_00c96b7c(puVar5 + 1,param_2 + 1);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      local_58 = 8;
      lStack_60 = 0x18;
      local_68 = plVar8;
      local_70 = puVar5;
    }
    *param_1 = (long)local_70;
    param_1[1] = (long)local_68;
    param_1[2] = lStack_60;
    param_1[3] = local_58;
    if (!bVar9) {
      *(undefined8 *)puVar2 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
    }
    return;
  }
  uVar6 = nn::os::GetCurrentThread();
  while (*(long *)puVar2 == 0) {
    cVar1 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *(undefined8 *)puVar2 = uVar6;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00d2db50;
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
          bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar9) {
            *(undefined8 *)puVar2 = uVar6;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00d2db50;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar9) {
      *(undefined8 *)puVar2 = uVar6;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00d2db50:
  bVar9 = false;
  goto LAB_00d2da68;
}


