/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a3043c; name: FUN_00a3043c
 */


void FUN_00a3043c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_18;
  
  if (((*PTR_DAT_047d8ce0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8ce0), iVar4 != 0))
  {
    FUN_00100190(&LAB_00a30af4,PTR_DAT_047d8ce8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8ce0);
  }
  puVar2 = PTR_DAT_047d8cd0;
  puVar1 = PTR_DAT_047d8cc8;
  lVar6 = *(long *)PTR_DAT_047d8ce8;
  *(long *)PTR_DAT_047d8cf0 = lVar6;
  puVar3 = PTR_DAT_047d8cd8;
  if (lVar6 == 0) {
    if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar4 != 0)) {
      FUN_00100190(&LAB_00a30924,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8cc8);
    }
    lVar6 = *(long *)puVar2;
    *(long *)puVar3 = lVar6;
    if (lVar6 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar6 + 0x50);
    }
    if ((*puVar1 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(PTR_DAT_047d8cc8);
      if (iVar4 != 0) {
        FUN_00100190(&LAB_00a30924,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8cc8);
      }
    }
    lVar6 = *(long *)puVar2;
    *(long *)puVar3 = lVar6;
    local_18 = 0;
    if (lVar6 != 0) {
      local_18 = *(undefined8 *)(lVar6 + 0x50);
    }
    FUN_018ec718(uVar5,&local_18);
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar4 != 0)) {
    FUN_00100190(&LAB_00a30924,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  lVar6 = *(long *)puVar2;
  *(long *)puVar3 = lVar6;
  if (lVar6 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar6 + 0x50);
  }
  FUN_0168bd10(uVar5);
  FUN_017ca348();
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar4 != 0)) {
    FUN_00100190(&LAB_00a30924,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  *(undefined8 *)puVar3 = *(undefined8 *)puVar2;
  FUN_017f6f08();
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar4 != 0)) {
    FUN_00100190(&LAB_00a30924,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  lVar6 = *(long *)puVar2;
  *(long *)puVar3 = lVar6;
  if (lVar6 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar6 + 0x50);
  }
  FUN_0179348c(uVar5);
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar4 != 0)) {
    FUN_00100190(&LAB_00a30924,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  lVar6 = *(long *)puVar2;
  *(long *)puVar3 = lVar6;
  if (lVar6 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar6 + 0x50);
  }
  if ((*PTR_DAT_047d6c80 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(PTR_DAT_047d6c80);
    if (iVar4 != 0) {
      FUN_00100190(&LAB_00b651c8,PTR_DAT_047d6c88,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c80);
    }
  }
  lVar6 = *(long *)PTR_DAT_047d6c88;
  *(long *)PTR_DAT_047d6c90 = lVar6;
  if ((lVar6 == 0) && (lVar6 = FUN_00b60f88(uVar5), lVar6 != 0)) {
    FUN_00b611fc();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar4 != 0)) {
    FUN_00100190(&LAB_00a30924,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  *(undefined8 *)puVar3 = *(undefined8 *)puVar2;
  FUN_00b1a05c();
  FUN_00b091b8();
  FUN_01786af8();
  FUN_015ec678();
  FUN_01741470();
  FUN_01768238();
  FUN_016fb0d8();
  FUN_01748190();
  FUN_017890d4();
  FUN_0170d848();
  FUN_016a48c0();
  FUN_0178562c();
  FUN_0168a958();
  FUN_016c7d88();
  FUN_016678a4();
  return;
}


