/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028aaedc; name: FUN_028aaedc
 */


void FUN_028aaedc(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  uVar4 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
  lVar7 = *(long *)(*(long *)(param_1 + 8) + (uVar4 / 0x2a) * 8);
  uVar4 = uVar4 % 0x2a;
  lVar5 = *(long *)(lVar7 + uVar4 * 0x60 + 0x38);
  if (lVar5 != 0) {
    *(long *)(lVar7 + uVar4 * 0x60 + 0x40) = lVar5;
    lVar3 = tpidr_el0;
    plVar6 = *(long **)(lVar3 + 0x30);
    if (plVar6 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar6 = DAT_04859430;
      *(long **)(lVar3 + 0x30) = DAT_04859430;
    }
    uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
    }
    else {
      FUN_00c48fe8(plVar6,lVar5,0,8);
    }
  }
  lVar5 = *(long *)(lVar7 + uVar4 * 0x60 + 0x20);
  if (lVar5 != 0) {
    *(long *)(lVar7 + uVar4 * 0x60 + 0x28) = lVar5;
    lVar7 = tpidr_el0;
    plVar6 = *(long **)(lVar7 + 0x30);
    if (plVar6 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar6 = DAT_04859430;
      *(long **)(lVar7 + 0x30) = DAT_04859430;
    }
    uVar4 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar4 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
    }
    else {
      FUN_00c48fe8(plVar6,lVar5,0,8);
    }
  }
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  lVar7 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  lVar5 = 0;
  if (lVar7 != 0) {
    lVar5 = (lVar7 >> 3) * 0x2a + -1;
  }
  if ((ulong)(lVar5 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20))) < 0x54) {
    return;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + -8);
  if (lVar5 != 0) {
    lVar7 = tpidr_el0;
    plVar6 = *(long **)(lVar7 + 0x30);
    if (plVar6 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar6 = DAT_04859430;
      *(long **)(lVar7 + 0x30) = DAT_04859430;
    }
    uVar4 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar4 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
    }
    else {
      FUN_00c48fe8(plVar6,lVar5,0,8);
    }
  }
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
  return;
}


