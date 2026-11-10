/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014684b8; name: FUN_014684b8
 */


void FUN_014684b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  
  lVar5 = tpidr_el0;
  plVar9 = *(long **)(lVar5 + 0x30);
  if (plVar9 == (long *)0x0) {
    if ((DAT_04859438 & 1) == 0) goto LAB_01468758;
    goto LAB_014686d4;
  }
  do {
    puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,8,8);
    *puVar7 = &PTR_LAB_045e61b8;
    plVar9 = *(long **)(lVar5 + 0x30);
    if (plVar9 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar9 = DAT_04859430;
      *(long **)(lVar5 + 0x30) = DAT_04859430;
    }
    puVar8 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x10,8);
    *puVar8 = &PTR_LAB_045e6220;
    puVar8[1] = puVar7;
    plVar9 = *(long **)(lVar5 + 0x30);
    if (plVar9 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar9 = DAT_04859430;
      *(long **)(lVar5 + 0x30) = DAT_04859430;
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x20,8);
    *puVar7 = &DAT_045e61e8;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = puVar8;
    *(undefined8 **)(param_1 + 0x28) = puVar8;
    plVar9 = *(long **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar7;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 1;
      do {
        lVar10 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        std::__shared_weak_count::__release_weak();
      }
    }
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(uint *)(param_1 + 0x18) & 0x1f0;
    if (uVar2 == 0) {
      FUN_0146758c(param_1,param_2,param_3);
      return;
    }
    if (uVar2 < 0x40) {
      if (uVar2 == 0x10) {
        FUN_0146c0c4(param_1,param_2,param_3);
        return;
      }
      if (uVar2 == 0x20) goto LAB_01468664;
    }
    else {
      if (uVar2 == 0x40) {
LAB_01468664:
        FUN_0146bc68(param_1,param_2,param_3);
        return;
      }
      if (uVar2 == 0x80) {
        FUN_0146c2cc(param_1,param_2,param_3);
        return;
      }
      if (uVar2 == 0x100) {
        FUN_0146c708(param_1,param_2,param_3);
        return;
      }
    }
    FUN_028a5a50();
LAB_01468758:
    iVar6 = __cxa_guard_acquire(&DAT_04859438);
    if (iVar6 != 0) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
LAB_014686d4:
    plVar9 = DAT_04859430;
    *(long **)(lVar5 + 0x30) = DAT_04859430;
  } while( true );
}


