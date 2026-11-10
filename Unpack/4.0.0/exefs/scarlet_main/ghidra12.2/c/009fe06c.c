/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 009fe06c; name: FUN_009fe06c
 */


/* WARNING: Removing unreachable block (ram,0x009fe1f8) */

void FUN_009fe06c(undefined8 *param_1,void *param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  void *__dest;
  undefined8 uVar6;
  long lVar7;
  bool bVar8;
  long *local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  puVar2 = PTR_DAT_047d38f8;
  lVar7 = *(long *)PTR_DAT_047d38f8;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 == lVar7) {
    bVar8 = true;
  }
  else {
    uVar6 = nn::os::GetCurrentThread();
    do {
      if (*(long *)puVar2 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar2 + 8));
          while (*(long *)puVar2 == 0) {
            cVar1 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar8) {
              *(undefined8 *)puVar2 = uVar6;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_009fe2a0;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar8) {
        *(undefined8 *)puVar2 = uVar6;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_009fe2a0:
    bVar8 = false;
  }
  puVar3 = PTR_DAT_047d3f70;
  local_68 = *(long **)(*(long *)PTR_DAT_047d3f70 + 0x148);
  __dest = (void *)(**(code **)(*local_68 + 0x10))(local_68,0x2f0,4);
  if (__dest == (void *)0x0) {
    if (*(code **)PTR_DAT_047d3928 != (code *)0x0) {
      (**(code **)PTR_DAT_047d3928)(PTR_DAT_047d3928 + 0x20);
    }
    local_68 = *(long **)(*(long *)puVar3 + 0x148);
    __dest = (void *)(**(code **)(*local_68 + 0x10))(local_68,0x2f0,4);
    if (__dest == (void *)0x0) {
      local_68 = (long *)0x0;
      local_60 = 0;
      local_58 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar5 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_009fe36c;
      *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = local_68;
      local_60 = 0x2f0;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      memcpy(__dest,param_2,0x2f0);
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      local_58 = 4;
    }
    if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("result","CreateImpl",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/memory_manager.h"
                 ,0x69,"GlueCode MemoryManager Allocate failed.");
    }
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_009fe36c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = local_68;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    memcpy(__dest,param_2,0x2f0);
    local_60 = 0x2f0;
    local_58 = 4;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  param_1[2] = local_60;
  param_1[3] = local_58;
  *param_1 = __dest;
  param_1[1] = local_68;
  if (bVar8) {
    return;
  }
  *(undefined8 *)puVar2 = 0;
  nn::os::SignalLightEvent((LightEventType *)(puVar2 + 8));
  return;
}


