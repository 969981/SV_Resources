/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ee6f00; name: FUN_00ee6f00
 */


void FUN_00ee6f00(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *local_68;
  
  FUN_00ee71b0(param_1,param_2,param_4);
  puVar4 = PTR_DAT_047d4250;
  puVar3 = PTR_DAT_047d4248;
  puVar2 = PTR_DAT_047d4240;
  pcVar9 = *(char **)(param_3 + 8);
  if (*pcVar9 == '\0') {
    plVar8 = (long *)FUN_00d44228();
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar6 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar6;
    FUN_00cf9884(&local_68,uVar6,pcVar9);
    plVar8 = local_68;
  }
  plVar1 = (long *)PTR_DAT_047d8b70;
  plVar7 = (long *)PTR_DAT_047d8b70;
  if (plVar8 != (long *)0x0) {
    plVar7 = plVar8 + 6;
  }
  lVar11 = *plVar7;
  plVar7 = (long *)PTR_PTR_047d4508;
  if (plVar8 != (long *)0x0) {
    plVar7 = plVar8 + 7;
  }
  lVar12 = *plVar7;
  if (plVar8 == (long *)0x0) {
    lVar10 = 0;
  }
  else {
    lVar10 = plVar8[8];
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  plVar7 = *(long **)(param_1 + 0x200);
  *(long *)(param_1 + 0x1e8) = lVar11;
  *(long *)(param_1 + 0x1f0) = lVar12;
  *(long *)(param_1 + 0x1f8) = lVar10;
  *(undefined8 *)(param_1 + 0x200) = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(long **)(param_1 + 0x200) = plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  pcVar9 = *(char **)(param_5 + 8);
  if (*pcVar9 == '\0') {
    plVar7 = (long *)FUN_00d44228();
    plVar8 = (long *)PTR_PTR_047d4508;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  else {
    if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar6 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar6;
    FUN_00cf9884(&local_68,uVar6,pcVar9);
    plVar7 = local_68;
    plVar8 = (long *)PTR_PTR_047d4508;
  }
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 6;
  }
  lVar11 = *plVar1;
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 7;
  }
  lVar12 = *plVar8;
  if (plVar7 == (long *)0x0) {
    lVar10 = 0;
  }
  else {
    lVar10 = plVar7[8];
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  plVar8 = *(long **)(param_1 + 0x220);
  *(long *)(param_1 + 0x208) = lVar11;
  *(long *)(param_1 + 0x210) = lVar12;
  *(long *)(param_1 + 0x218) = lVar10;
  *(undefined8 *)(param_1 + 0x220) = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  *(long **)(param_1 + 0x220) = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  return;
}


