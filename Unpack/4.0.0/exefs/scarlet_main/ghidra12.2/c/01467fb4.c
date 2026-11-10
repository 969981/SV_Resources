/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01467fb4; name: FUN_01467fb4
 */


byte * FUN_01467fb4(long param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  locale alStack_70 [24];
  undefined4 local_58;
  uint local_54;
  long *local_40;
  
  if (param_2 == param_3) {
    return param_2;
  }
  bVar1 = *param_2;
  if (0x5b < bVar1) {
    if (bVar1 != 0x5e) {
      if (bVar1 != 0x5c) {
        return param_2;
      }
      if (param_2 + 1 == param_3) {
        return param_2;
      }
      bVar1 = param_2[1];
      if (bVar1 == 0x42) {
        uVar6 = 1;
      }
      else {
        if (bVar1 != 0x62) {
          return param_2;
        }
        uVar6 = 0;
      }
      FUN_0146aa04(param_1,uVar6);
      return param_2 + 2;
    }
    param_3 = (byte *)tpidr_el0;
    plVar5 = *(long **)(param_3 + 0x30);
    if (plVar5 == (long *)0x0) {
      puVar9 = &DAT_04859000;
      if ((DAT_04859438 & 1) == 0) {
LAB_014682c4:
        iVar4 = __cxa_guard_acquire(&DAT_04859438);
        if (iVar4 != 0) {
          puVar9[0x86] = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
      }
      plVar5 = (long *)puVar9[0x86];
      *(long **)(param_3 + 0x30) = plVar5;
    }
    puVar9 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x10,8);
    lVar7 = *(long *)(param_1 + 0x38);
    ppuVar8 = &PTR_LAB_045e6280;
LAB_014680dc:
    uVar6 = *(undefined8 *)(lVar7 + 8);
    *puVar9 = ppuVar8;
    puVar9[1] = uVar6;
    *(undefined8 **)(lVar7 + 8) = puVar9;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
    return param_2 + 1;
  }
  if (bVar1 != 0x28) {
    if (bVar1 != 0x24) {
      return param_2;
    }
    lVar7 = tpidr_el0;
    plVar5 = *(long **)(lVar7 + 0x30);
    if (plVar5 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar5 = DAT_04859430;
      *(long **)(lVar7 + 0x30) = DAT_04859430;
    }
    puVar9 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x10,8);
    lVar7 = *(long *)(param_1 + 0x38);
    ppuVar8 = &PTR_LAB_045e62b0;
    goto LAB_014680dc;
  }
  if (param_2 + 1 == param_3) {
    return param_2;
  }
  if (param_2[1] != 0x3f) {
    return param_2;
  }
  if (param_2 + 2 == param_3) {
    return param_2;
  }
  bVar1 = param_2[2];
  if (bVar1 == 0x21) {
    FUN_01468320(alStack_70);
    local_58 = *(undefined4 *)(param_1 + 0x18);
    param_2 = (byte *)FUN_014684b8(alStack_70,param_2 + 3,param_3);
    puVar9 = (undefined8 *)(ulong)local_54;
    FUN_01468370(param_1,alStack_70,1,*(undefined4 *)(param_1 + 0x1c));
    *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + local_54;
    if ((param_2 == param_3) || (*param_2 != 0x29)) {
LAB_014682c0:
      FUN_028a5c70();
      goto LAB_014682c4;
    }
    param_2 = param_2 + 1;
    if (local_40 == (long *)0x0) goto LAB_01468088;
    plVar5 = local_40 + 1;
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (bVar1 != 0x3d) {
      return param_2;
    }
    FUN_01468320(alStack_70);
    local_58 = *(undefined4 *)(param_1 + 0x18);
    param_2 = (byte *)FUN_014684b8(alStack_70,param_2 + 3,param_3);
    puVar9 = (undefined8 *)(ulong)local_54;
    FUN_01468370(param_1,alStack_70,0,*(undefined4 *)(param_1 + 0x1c));
    *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + local_54;
    if ((param_2 == param_3) || (*param_2 != 0x29)) goto LAB_014682c0;
    param_2 = param_2 + 1;
    if (local_40 == (long *)0x0) goto LAB_01468088;
    plVar5 = local_40 + 1;
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*local_40 + 0x10))(local_40);
    std::__shared_weak_count::__release_weak();
  }
LAB_01468088:
  std::locale::~locale(alStack_70);
  return param_2;
}


