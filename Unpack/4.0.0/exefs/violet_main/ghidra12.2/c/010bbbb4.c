/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010bbbb4; name: FUN_010bbbb4
 */


void FUN_010bbbb4(undefined8 *param_1,undefined2 *param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  bool bVar10;
  
  puVar2 = PTR_DAT_047d38f8;
  lVar8 = *(long *)PTR_DAT_047d38f8;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 != lVar8) {
    uVar7 = nn::os::GetCurrentThread();
LAB_010bbcd8:
    if (*(long *)puVar2 == 0) goto code_r0x010bbce0;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
    do {
      if (*(long *)puVar2 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
          while (*(long *)puVar2 == 0) {
            cVar1 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar10) {
              *(undefined8 *)puVar2 = uVar7;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_010bbce8;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar10) {
        *(undefined8 *)puVar2 = uVar7;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_010bbce8:
    bVar10 = false;
    goto LAB_010bbbf0;
  }
  bVar10 = true;
LAB_010bbbf0:
  puVar3 = PTR_DAT_047d3920;
  plVar9 = *(long **)(*(long *)PTR_DAT_047d3920 + 8);
  puVar6 = (undefined2 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x14,4);
  if (puVar6 == (undefined2 *)0x0) {
    if (*(code **)PTR_DAT_047d3928 != (code *)0x0) {
      (**(code **)PTR_DAT_047d3928)(PTR_DAT_047d3928 + 0x20);
    }
    plVar9 = *(long **)(*(long *)puVar3 + 8);
    puVar6 = (undefined2 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x14,4);
    if (puVar6 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("result","CreateImpl",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/memory_manager.h"
                 ,0x69,"GlueCode MemoryManager Allocate failed.");
    }
    if (((DAT_04865a38 & 1) != 0) || (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 == 0))
    goto LAB_010bbc30;
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
  }
  else {
    if (((DAT_04865a38 & 1) != 0) || (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 == 0))
    goto LAB_010bbc30;
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
  }
  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
  __cxa_guard_release(&DAT_04865a38);
LAB_010bbc30:
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar9;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  *puVar6 = *param_2;
  puVar6[1] = param_2[1];
  *(undefined1 *)(puVar6 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)puVar6 + 5) = *(undefined1 *)((long)param_2 + 5);
  *(undefined1 *)(puVar6 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(puVar6 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)(puVar6 + 8) = *(undefined4 *)(param_2 + 8);
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  *param_1 = puVar6;
  param_1[1] = plVar9;
  param_1[2] = 0x14;
  param_1[3] = 4;
  if (bVar10) {
    return;
  }
  *(undefined8 *)puVar2 = 0;
  nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
  return;
code_r0x010bbce0:
  cVar1 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar10) {
    *(undefined8 *)puVar2 = uVar7;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_010bbce8;
  goto LAB_010bbcd8;
}


