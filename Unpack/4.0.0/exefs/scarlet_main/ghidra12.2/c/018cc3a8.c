/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018cc3a8; name: FUN_018cc3a8
 */


void FUN_018cc3a8(long param_1)

{
  short *psVar1;
  long lVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  long *plVar10;
  int iVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 local_128;
  long *local_120;
  code *pcStack_118;
  undefined1 *local_110;
  undefined8 local_108;
  long *local_100;
  undefined4 local_f8;
  long *local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long *local_d0;
  undefined4 local_c8;
  
  puVar8 = PTR_DAT_047d4e08;
  puVar7 = PTR_DAT_047d4e00;
  puVar6 = PTR_DAT_047d4df8;
  lVar15 = 0;
  do {
    local_120 = (long *)0x0;
    pcStack_118 = (code *)&DAT_cbf29ce484222645;
    local_110 = &DAT_03c886bc;
    local_f8 = 0;
    local_108 = 0;
    local_100 = (long *)0x0;
    FUN_0105016c(&local_f0,param_1 + lVar15 * 0x20 + 0x28);
    plVar13 = local_120;
    local_120 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x20))();
    }
    plVar10 = local_d0;
    local_120 = local_f0;
    plVar13 = local_100;
    local_f0 = (long *)0x0;
    pcStack_118 = local_e8;
    local_100 = (long *)0x0;
    local_110 = (undefined1 *)local_e0;
    local_108 = uStack_d8;
    if (plVar13 == (long *)0x0) {
      local_d0 = (long *)0x0;
      local_100 = plVar10;
      local_f8 = local_c8;
    }
    else {
      (**(code **)(*plVar13 + 0x20))();
      local_100 = local_d0;
      local_d0 = (long *)0x0;
      local_f8 = local_c8;
      if (local_f0 != (long *)0x0) {
        (**(code **)(*local_f0 + 0x20))();
      }
    }
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = (long *)0x0;
    local_e8 = (code *)0x0;
    if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
      FUN_00100190(PTR_LAB_047d4e10,puVar7,&PTR_LOOP_04483000);
      __cxa_guard_release(puVar6);
    }
    uVar12 = *(undefined8 *)puVar7;
    *(undefined8 *)puVar8 = uVar12;
    FUN_011794fc(&local_128,uVar12,&local_120,&local_f0);
    pcVar9 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = (long *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar9)(&local_d0);
    }
    lVar2 = param_1 + lVar15 * 8;
    plVar13 = *(long **)(lVar2 + 0x790);
    *(undefined8 *)(lVar2 + 0x790) = 0;
    if (plVar13 != (long *)0x0) {
      lVar14 = plVar13[6];
      psVar1 = (short *)(lVar14 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*plVar13 + 0x50))();
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    *(undefined8 *)(lVar2 + 0x790) = local_128;
    if (local_100 != (long *)0x0) {
      (**(code **)(*local_100 + 0x20))();
    }
    if (local_120 != (long *)0x0) {
      (**(code **)(*local_120 + 0x20))();
    }
    lVar15 = lVar15 + 1;
  } while (lVar15 != 0x3b);
  return;
}


