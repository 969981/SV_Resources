/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019e4bc4; name: FUN_019e4bc4
 */


void FUN_019e4bc4(long param_1)

{
  long *plVar1;
  undefined2 uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [96];
  
  if ((*(long *)(param_1 + 1000) != 0) && (**(char **)(*(long *)(param_1 + 1000) + 0x38) != '\0')) {
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar6 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar6;
    plVar7 = *(long **)(param_1 + 1000);
    plVar1 = (long *)PTR_DAT_047d8b70;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 6;
    }
    local_d0 = *plVar1;
    plVar1 = (long *)PTR_PTR_047d4508;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 7;
    }
    lStack_c8 = *plVar1;
    if (plVar7 == (long *)0x0) {
      local_c0 = 0;
    }
    else {
      local_c0 = plVar7[8];
    }
    local_b8 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    local_b8 = plVar7;
    uVar5 = FUN_0177fff8(param_1);
    memset(&local_b0,0,0x80);
    iVar4 = FUN_0177ffac(lVar6,&local_d0,uVar5,0);
    if (iVar4 != 0) {
      FUN_0104f218(*(undefined8 *)(lVar6 + 0x220),&local_d0,iVar4,uVar5,0,&local_b0,0);
      pcVar3 = local_a8;
      if (local_a8 != (code *)0x0) {
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = 0;
        local_a8 = (code *)0x0;
        (*pcVar3)(auStack_90);
      }
    }
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
    if (iVar4 == 0) {
      FUN_013ee528(param_1);
    }
  }
  if ((*(char *)(param_1 + 0x58) != -0x7e) || (*(char *)(param_1 + 0x59) != -0x7e)) {
    uVar2 = *(undefined2 *)(param_1 + 0x58);
    plVar1 = (long *)(param_1 + 0x38);
    *(undefined2 *)(param_1 + 0x58) = 0x8282;
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_00c6a584(*(long *)(param_1 + 0x48),plVar1);
    }
    (**(code **)(*plVar1 + 0x20))(plVar1,uVar2);
  }
  return;
}


