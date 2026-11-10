/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01345474; name: FUN_01345474
 */


void FUN_01345474(long *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  bool bVar11;
  
  puVar4 = PTR_DAT_047d38f8;
  lVar9 = *(long *)PTR_DAT_047d38f8;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 != lVar9) {
    uVar8 = nn::os::GetCurrentThread();
LAB_0134558c:
    if (*(long *)puVar4 == 0) goto code_r0x01345594;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(puVar4 + 8));
    do {
      if (*(long *)puVar4 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar4 + 8));
          while (*(long *)puVar4 == 0) {
            cVar2 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(puVar4,0x10);
            if (bVar11) {
              *(undefined8 *)puVar4 = uVar8;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_0134559c;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar11) {
        *(undefined8 *)puVar4 = uVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_0134559c:
    bVar11 = false;
    goto LAB_013454b4;
  }
  bVar11 = true;
LAB_013454b4:
  puVar5 = PTR_DAT_047d3f70;
  plVar10 = *(long **)(*(long *)PTR_DAT_047d3f70 + 0x148);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_01345764:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar10;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  lVar9 = (**(code **)(*plVar10 + 0x10))(plVar10,0x90,8);
  if (lVar9 == 0) {
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    if (*(code **)PTR_DAT_047d3928 != (code *)0x0) {
      (**(code **)PTR_DAT_047d3928)(PTR_DAT_047d3928 + 0x20);
    }
    plVar10 = *(long **)(*(long *)puVar5 + 0x148);
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_01345764;
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar10;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    lVar9 = (**(code **)(*plVar10 + 0x10))(plVar10,0x90,8);
    if (lVar9 == 0) {
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("result","CreateImpl",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/memory_manager.h"
                 ,0x69,"GlueCode MemoryManager Allocate failed.");
    }
    FUN_00eebf7c(lVar9,param_2);
    *(undefined4 *)(lVar9 + 0x18) = 0x80090;
    *(long **)(lVar9 + 8) = plVar10;
    *(long *)(lVar9 + 0x10) = lVar9;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    piVar1 = (int *)(lVar9 + 0x28);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    FUN_00eebf7c(lVar9,param_2);
    *(undefined4 *)(lVar9 + 0x18) = 0x80090;
    *(long **)(lVar9 + 8) = plVar10;
    *(long *)(lVar9 + 0x10) = lVar9;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    piVar1 = (int *)(lVar9 + 0x28);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (iVar6 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  *param_1 = lVar9;
  if (bVar11) {
    return;
  }
  *(undefined8 *)puVar4 = 0;
  nn::os::SignalLightEvent((LightEventType *)(puVar4 + 8));
  return;
code_r0x01345594:
  cVar2 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(puVar4,0x10);
  if (bVar11) {
    *(undefined8 *)puVar4 = uVar8;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_0134559c;
  goto LAB_0134558c;
}


