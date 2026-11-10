/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0120bac8; name: FUN_0120bac8
 */


void FUN_0120bac8(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_38;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = (long)&DAT_cbf29ce484222645;
  param_1[1] = (long)&DAT_03c886bc;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = (long)&DAT_cbf29ce484222645;
  param_1[6] = (long)&DAT_03c886bc;
  param_1[7] = 0;
  param_1[8] = 0;
  puVar2 = PTR_DAT_047d8c28;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar4 != 0)) {
    local_38 = FUN_00d44228();
    puVar3 = PTR_DAT_047d8c30;
    FUN_00d1e764(PTR_DAT_047d8c30,&local_38);
    FUN_00100190(PTR_LAB_047d9240,puVar3,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c28);
  }
  puVar3 = PTR_DAT_047d8c30;
  plVar5 = *(long **)PTR_DAT_047d8c30;
  param_1[0xb] = (long)plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar4 != 0)) {
    local_38 = FUN_00d44228();
    puVar2 = PTR_DAT_047d8c30;
    FUN_00d1e764(PTR_DAT_047d8c30,&local_38);
    FUN_00100190(PTR_LAB_047d9240,puVar2,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c28);
  }
  plVar5 = *(long **)puVar3;
  param_1[0xc] = (long)plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  plVar6 = (long *)PTR_DAT_047d8b70;
  plVar1 = (long *)PTR_PTR_047d4508;
  plVar7 = (long *)param_1[0xb];
  plVar5 = (long *)PTR_DAT_047d8b70;
  if (plVar7 != (long *)0x0) {
    plVar5 = plVar7 + 6;
  }
  lVar8 = *plVar5;
  plVar5 = (long *)PTR_PTR_047d4508;
  if (plVar7 != (long *)0x0) {
    plVar5 = plVar7 + 7;
  }
  lVar9 = *plVar5;
  if (plVar7 == (long *)0x0) {
    lVar10 = 0;
  }
  else {
    lVar10 = plVar7[8];
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  plVar5 = (long *)param_1[3];
  *param_1 = lVar8;
  param_1[1] = lVar9;
  param_1[2] = lVar10;
  param_1[3] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  param_1[3] = (long)plVar7;
  plVar5 = (long *)param_1[0xc];
  if (plVar5 != (long *)0x0) {
    plVar6 = plVar5 + 6;
  }
  lVar8 = *plVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 7;
  }
  lVar9 = *plVar1;
  if (plVar5 == (long *)0x0) {
    lVar10 = 0;
  }
  else {
    lVar10 = plVar5[8];
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar6 = (long *)param_1[8];
  param_1[5] = lVar8;
  param_1[6] = lVar9;
  param_1[7] = lVar10;
  param_1[8] = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  param_1[8] = (long)plVar5;
  return;
}


