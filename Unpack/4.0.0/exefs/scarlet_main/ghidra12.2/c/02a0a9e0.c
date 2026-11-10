/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a0a9e0; name: FUN_02a0a9e0
 */


long * FUN_02a0a9e0(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  plVar8 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x60,8);
  if (plVar8 == (long *)0x0) {
    (**(code **)(*param_2 + 0xe8))(param_2);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  lVar1 = *param_3;
  lVar2 = param_3[1];
  if (lVar2 != 0) {
    plVar11 = (long *)(lVar2 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = *plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar5 = PTR_DAT_047d66f8;
  plVar8[2] = 0;
  *(undefined4 *)(plVar8 + 3) = 0;
  *plVar8 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  puVar5 = PTR_DAT_047d8c78;
  if (lVar9 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    if (*(long *)(lVar9 + 0x80) != 0) {
      lVar10 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
    }
  }
  *plVar8 = (long)(PTR_DAT_047d8c78 + 0x10);
  plVar8[1] = lVar10;
  plVar8[4] = (long)(puVar5 + 0x88);
  plVar11 = plVar8 + 5;
  *plVar11 = (long)(puVar5 + 0xd8);
  plVar8[7] = 0;
  plVar8[6] = 0;
  FUN_00d1a3f4(plVar8 + 6,plVar11);
  *plVar8 = (long)&PTR_LAB_0455d900;
  plVar8[4] = (long)&PTR_LAB_0455d978;
  *plVar11 = (long)&DAT_0455d9c8;
  plVar8[8] = lVar1;
  plVar8[9] = lVar2;
  if (lVar2 == 0) {
    plVar8[10] = 0;
    *(undefined1 *)(plVar8 + 0xb) = 0;
  }
  else {
    plVar11 = (long *)(lVar2 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = *plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar8[10] = 0;
    *(undefined1 *)(plVar8 + 0xb) = 0;
    std::__shared_weak_count::__release_weak();
  }
  *(undefined4 *)(plVar8 + 3) = 0x80060;
  plVar8[1] = (long)param_2;
  plVar8[2] = (long)plVar8;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  return plVar8;
}


