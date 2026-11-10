/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017085a4; name: FUN_017085a4
 */


void FUN_017085a4(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uStack_50;
  undefined8 local_48;
  
  puVar8 = (undefined8 *)PTR_DAT_047d38f8;
  lVar6 = *(long *)PTR_DAT_047d38f8;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar6) {
    bVar9 = true;
LAB_017085e0:
    plVar7 = *(long **)(*(long *)PTR_DAT_047d3920 + 8);
    puVar4 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,0x10,8);
    if (puVar4 == (undefined8 *)0x0) {
      if (*(code **)PTR_DAT_047d3928 != (code *)0x0) {
        (**(code **)PTR_DAT_047d3928)(PTR_DAT_047d3928 + 0x20);
      }
      FUN_01708a04(&local_60,param_2);
      if (local_60 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("result","CreateImpl",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua/memory_manager.h"
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
      uVar5 = param_2[1];
      *puVar4 = *param_2;
      puVar4[1] = uVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      local_48 = 8;
      uStack_50 = 0x10;
      local_58 = plVar7;
      local_60 = puVar4;
    }
    *param_1 = local_60;
    param_1[1] = local_58;
    param_1[2] = uStack_50;
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
    if (cVar1 == '\0') goto LAB_017086a0;
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
          if (cVar1 == '\0') goto LAB_017086a0;
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
LAB_017086a0:
  bVar9 = false;
  goto LAB_017085e0;
}


