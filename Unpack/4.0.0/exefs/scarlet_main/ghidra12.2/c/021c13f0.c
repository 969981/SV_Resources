/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021c13f0; name: FUN_021c13f0
 */


void FUN_021c13f0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined2 local_38;
  
  uVar9 = param_1[1];
  *param_1 = &PTR_FUN_045a34e0;
  param_1[4] = &PTR_LAB_045a3620;
  param_1[5] = &DAT_045a3748;
  param_1[6] = &PTR_LAB_045a37a0;
  param_1[7] = &PTR_LAB_045a37c8;
  lVar8 = tpidr_el0;
  if (*(long *)(lVar8 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(undefined8 *)(lVar8 + 0x30) = DAT_04859430;
  }
  uVar2 = *(undefined8 *)(lVar8 + 0x30);
  uVar3 = *(undefined8 *)(lVar8 + 0x38);
  *(undefined8 *)(lVar8 + 0x30) = uVar9;
  *(undefined2 *)(lVar8 + 0x38) = 1;
  plVar10 = (long *)param_1[0x25];
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 1;
    do {
      lVar7 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      std::__shared_weak_count::__release_weak();
    }
  }
  *(undefined8 *)(lVar8 + 0x30) = uVar2;
  local_38 = (undefined2)uVar3;
  *(undefined2 *)(lVar8 + 0x38) = local_38;
  if (param_1[0x24] != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("!m_data","~PropertySheetObjectTemplate",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\scene/property_sheet_object_template.h"
               ,0x5c,&DAT_03be3417);
  }
  plVar10 = (long *)param_1[0x25];
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_00e6bfa4(param_1);
  return;
}


