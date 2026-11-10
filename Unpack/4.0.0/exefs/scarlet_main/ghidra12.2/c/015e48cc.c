/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015e48cc; name: FUN_015e48cc
 */


void FUN_015e48cc(undefined8 *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  plVar14 = (long *)PTR_DAT_047d4e08;
  puVar4 = PTR_DAT_047d4e00;
  lVar9 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar9;
  plVar12 = *(long **)(lVar9 + 8);
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar12;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  plVar6 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x1f0,0x10);
  puVar3 = PTR_DAT_047d66f8;
  if (plVar6 == (long *)0x0) {
    (**(code **)(*plVar12 + 0xe8))(plVar12);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  plVar6[2] = 0;
  *(undefined4 *)(plVar6 + 3) = 0;
  *plVar6 = (long)(puVar3 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar7 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar11 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  plVar13 = plVar6 + 5;
  *(int *)plVar13 = 0;
  *plVar6 = (long)&PTR_FUN_045a0450;
  plVar6[1] = lVar11;
  plVar6[4] = (long)&PTR_LAB_045a0488;
  plVar6[6] = *param_2;
  plVar8 = (long *)param_2[1];
  plVar6[7] = (long)plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))();
  }
  plVar6[8] = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[9] = 0;
  *(undefined1 *)(plVar6 + 0x18) = 0;
  *(undefined1 *)(plVar6 + 0x1a) = 0;
  plVar6[0x20] = 0;
  plVar6[0x1c] = 0;
  plVar6[0x1d] = 0;
  plVar6[0x1e] = 0;
  plVar6[0x1f] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  lVar7 = tpidr_el0;
  if ((((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
      (lVar11 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), lVar11 == 0)) &&
     (lVar11 = *(long *)(lVar7 + 0x30), lVar11 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar11 = DAT_04859430;
    *(long *)(lVar7 + 0x30) = DAT_04859430;
    plVar14 = (long *)PTR_DAT_047d4e08;
  }
  *(undefined4 *)(plVar6 + 0x24) = 0;
  plVar6[0x21] = lVar11;
  *(undefined1 *)(plVar6 + 0x25) = 0;
  plVar6[0x28] = 0;
  plVar6[0x22] = 0x1fffffffffffffff;
  plVar6[0x23] = 0;
  plVar6[0x26] = 0;
  plVar6[0x27] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
      (lVar11 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), lVar11 == 0)) &&
     (lVar11 = *(long *)(lVar7 + 0x30), lVar11 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar11 = DAT_04859430;
    *(long *)(lVar7 + 0x30) = DAT_04859430;
    plVar14 = (long *)PTR_DAT_047d4e08;
  }
  *(undefined4 *)(plVar6 + 0x2c) = 0;
  plVar6[0x29] = lVar11;
  plVar6[0x2f] = 0;
  plVar6[0x2a] = 0x1fffffffffffffff;
  plVar6[0x2b] = 0;
  plVar6[0x2d] = 0;
  plVar6[0x2e] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
      (lVar11 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), lVar11 == 0)) &&
     (lVar11 = *(long *)(lVar7 + 0x30), lVar11 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar11 = DAT_04859430;
    *(long *)(lVar7 + 0x30) = DAT_04859430;
    plVar14 = (long *)PTR_DAT_047d4e08;
  }
  *(undefined4 *)(plVar6 + 0x33) = 0;
  plVar6[0x30] = lVar11;
  plVar6[0x36] = 0;
  plVar6[0x31] = 0xfffffffffffffff;
  plVar6[0x32] = 0;
  plVar6[0x34] = 0;
  plVar6[0x35] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  puVar3 = PTR_DAT_047d4df8;
  if ((((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
      (lVar11 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), lVar11 == 0)) &&
     (lVar11 = *(long *)(lVar7 + 0x30), lVar11 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar11 = DAT_04859430;
    *(long *)(lVar7 + 0x30) = DAT_04859430;
  }
  plVar6[0x37] = lVar11;
  *(undefined4 *)(plVar6 + 0x3a) = 0;
  plVar6[0x38] = 0x1fffffffffffffff;
  plVar6[0x39] = 0;
  plVar6[0x3b] = 0;
  *(undefined4 *)((long)plVar6 + 0x1ec) = 1;
  nn::os::InitializeLightEvent(plVar6 + 0x3c,0,1);
  if ((plVar6[7] != 0) && (**(char **)(plVar6[7] + 0x38) != '\0')) {
    pcVar10 = (code *)plVar6[9];
    if (pcVar10 != (code *)0x0) {
      plVar6[10] = 0;
      plVar6[0xb] = 0;
      plVar6[8] = 0;
      plVar6[9] = 0;
      (*pcVar10)(plVar6 + 0xc);
    }
    plVar6[8] = (long)FUN_00d1e5f8;
    plVar6[9] = (long)&LAB_02b4e50c;
    plVar6[10] = (long)&LAB_02b4e510;
    plVar6[0xb] = (long)&LAB_02b4e51c;
    plVar6[0xc] = (long)plVar6;
  }
  if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar5 != 0)) {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  lVar7 = *(long *)puVar4;
  *plVar14 = lVar7;
  FUN_015e50d4(*(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x40),plVar6);
  *(undefined4 *)(plVar6 + 3) = 0x1001f0;
  plVar6[1] = (long)plVar12;
  plVar6[2] = (long)plVar6;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  *param_1 = plVar6;
  do {
    lVar9 = *plVar13;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar2) {
      *(int *)plVar13 = (int)lVar9 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if ((int)lVar9 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  return;
}


