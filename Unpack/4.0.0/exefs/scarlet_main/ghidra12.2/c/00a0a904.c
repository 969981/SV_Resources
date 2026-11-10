/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a0a904; name: FUN_00a0a904
 */


void FUN_00a0a904(undefined8 *param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  bool bVar11;
  
  puVar2 = PTR_DAT_047d38f8;
  lVar9 = *(long *)PTR_DAT_047d38f8;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 == lVar9) {
    bVar11 = true;
  }
  else {
    uVar7 = nn::os::GetCurrentThread();
    do {
      if (*(long *)puVar2 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
          while (*(long *)puVar2 == 0) {
            cVar1 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar11) {
              *(undefined8 *)puVar2 = uVar7;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_00a0aa74;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar11) {
        *(undefined8 *)puVar2 = uVar7;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00a0aa74:
    bVar11 = false;
  }
  puVar3 = PTR_DAT_047d3920;
  plVar10 = *(long **)(*(long *)PTR_DAT_047d3920 + 8);
  puVar6 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x20,8);
  if (puVar6 == (undefined8 *)0x0) {
    if (*(code **)PTR_DAT_047d3928 != (code *)0x0) {
      (**(code **)PTR_DAT_047d3928)(PTR_DAT_047d3928 + 0x20);
    }
    plVar10 = *(long **)(*(long *)puVar3 + 8);
    puVar6 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x20,8);
    if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("result","CreateImpl",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/memory_manager.h"
                 ,0x69,"GlueCode MemoryManager Allocate failed.");
    }
  }
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar10;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  *puVar6 = &PTR_LAB_04539000;
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  puVar6[1] = *(undefined8 *)(param_2 + 8);
  puVar6[2] = uVar7;
  puVar6[3] = uVar8;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  *param_1 = puVar6;
  param_1[1] = plVar10;
  param_1[2] = 0x20;
  param_1[3] = 8;
  if (bVar11) {
    return;
  }
  *(undefined8 *)puVar2 = 0;
  nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
  return;
}


