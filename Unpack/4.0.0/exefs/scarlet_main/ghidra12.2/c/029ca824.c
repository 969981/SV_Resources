/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029ca824; name: FUN_029ca824
 */


undefined8 FUN_029ca824(long param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  long *local_18;
  
  pcVar8 = *(char **)(param_2 + 8);
  if ((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) {
    local_18 = (long *)FUN_00d44228();
    if (local_18 != (long *)0x0) {
      (**(code **)(*local_18 + 0x18))(local_18);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar5 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar5;
    FUN_00cf9884(&local_18,uVar5,pcVar8);
  }
  lVar7 = *(long *)(param_1 + 0x160);
  param_1 = param_1 + 0x160;
  if (lVar7 != 0) {
    puVar2 = (ulong *)PTR_DAT_047d8b70;
    if (local_18 != (long *)0x0) {
      puVar2 = (ulong *)(local_18 + 6);
    }
    puVar1 = (ulong *)PTR_DAT_047d8b70;
    if (*(long *)(lVar7 + 0x20) != 0) {
      puVar1 = (ulong *)(*(long *)(lVar7 + 0x20) + 0x30);
    }
    uVar6 = *puVar2;
    bVar3 = uVar6 <= *puVar1;
    lVar9 = param_1;
    if (bVar3) {
      lVar9 = lVar7;
    }
    while (lVar7 = *(long *)(lVar7 + (ulong)!bVar3 * 8), lVar7 != 0) {
      puVar2 = (ulong *)PTR_DAT_047d8b70;
      if (*(long *)(lVar7 + 0x20) != 0) {
        puVar2 = (ulong *)(*(long *)(lVar7 + 0x20) + 0x30);
      }
      bVar3 = uVar6 <= *puVar2;
      if (bVar3) {
        lVar9 = lVar7;
      }
    }
    if (lVar9 != param_1) {
      puVar2 = (ulong *)PTR_DAT_047d8b70;
      if (*(long *)(lVar9 + 0x20) != 0) {
        puVar2 = (ulong *)(*(long *)(lVar9 + 0x20) + 0x30);
      }
      if (*puVar2 <= uVar6) goto LAB_029ca914;
    }
  }
  lVar9 = param_1;
LAB_029ca914:
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))(local_18);
  }
  if (lVar9 == param_1) {
    uVar5 = 0xffffffffffffffff;
  }
  else {
    uVar5 = *(undefined8 *)(lVar9 + 0x28);
  }
  return uVar5;
}


