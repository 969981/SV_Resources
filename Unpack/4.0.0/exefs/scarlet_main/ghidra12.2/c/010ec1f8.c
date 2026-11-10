/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010ec1f8; name: FUN_010ec1f8
 */


long FUN_010ec1f8(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *local_c8;
  long lStack_c0;
  long local_b8;
  long *local_b0;
  long local_a8;
  undefined1 auStack_a0 [64];
  
  param_1 = param_1 + 0x48;
  plVar3 = (long *)FUN_010ec3e4(param_1);
  lVar7 = *(long *)(param_3 + 0xe8);
  lVar6 = *plVar3;
  pcVar5 = (char *)(*(long *)(lVar7 + 0x18) + 0xb0);
  if (*pcVar5 == '\0') {
    plVar3 = (long *)FUN_00d44228();
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar4 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar4;
    FUN_00cf9884(&local_c8,uVar4,pcVar5);
    plVar3 = local_c8;
  }
  plVar8 = (long *)PTR_DAT_047d8b70;
  if (plVar3 != (long *)0x0) {
    plVar8 = plVar3 + 6;
  }
  plVar8 = (long *)*plVar8;
  plVar1 = (long *)PTR_PTR_047d4508;
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 7;
  }
  lVar9 = *plVar1;
  if (plVar3 == (long *)0x0) {
    lVar10 = 0;
  }
  else {
    lVar10 = plVar3[8];
    (**(code **)(*plVar3 + 0x18))(plVar3);
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  uVar4 = FUN_010ec3e4(param_1,param_2);
  local_c8 = plVar8;
  lStack_c0 = lVar9;
  local_b8 = lVar10;
  local_b0 = plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  local_a8 = lVar7;
  memcpy(auStack_a0,(void *)(lVar6 + 0x28),0x40);
  FUN_0116c124(uVar4,&local_c8);
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  lVar6 = FUN_010ec3e4(param_1,param_2);
  lVar6 = *(long *)(lVar6 + 8);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  return lVar6 + -0x68;
}


