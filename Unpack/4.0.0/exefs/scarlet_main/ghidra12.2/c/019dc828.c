/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019dc828; name: FUN_019dc828
 */


void FUN_019dc828(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  ushort *puVar9;
  undefined8 uVar10;
  undefined8 local_e8;
  char *pcStack_e0;
  undefined8 local_d8;
  long *local_d0;
  undefined8 local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined8 local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined1 *local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  char local_68 [8];
  undefined auStack_60 [24];
  long *local_48;
  
  piVar7 = (int *)*param_1;
  puVar9 = (ushort *)((long)piVar7 - (long)*piVar7);
  if (*puVar9 < 0xb) {
    iVar8 = 0;
    iVar6 = 0;
    iVar2 = 0;
    if (*puVar9 < 9) goto LAB_019dc87c;
  }
  else {
    iVar2 = 0;
    if ((ulong)puVar9[5] != 0) {
      iVar2 = *(int *)((long)piVar7 + (ulong)puVar9[5]);
    }
  }
  iVar8 = iVar2;
  if ((ulong)puVar9[4] == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)((long)piVar7 + (ulong)puVar9[4]);
  }
LAB_019dc87c:
  if (iVar8 - iVar6 != 1) {
    if (((*PTR_DAT_047d3be0 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3be0), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d89f0,PTR_DAT_047d3be8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3be0);
    }
    uVar10 = *(undefined8 *)PTR_DAT_047d3be8;
    local_78 = 6;
    local_70 = (long *)0x0;
    local_88 = &DAT_94ed70272cac328;
    pcStack_80 = "Target";
    *(undefined8 *)PTR_DAT_047dcd80 = uVar10;
    FUN_01315eac(local_68,param_1,&local_88);
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_a8 = 0x56c12b2e177ce561;
    pcStack_a0 = "IsScale";
    local_98 = 7;
    local_90 = (long *)0x0;
    puVar1 = PTR_DAT_047d3e30;
    if (local_68[0] != '\0') {
      puVar1 = auStack_60;
    }
    uVar3 = FUN_0141f968(param_1,&local_a8);
    local_c8 = 0x4783b1a9de3a9dbe;
    pcStack_c0 = "IsRot";
    local_b8 = 5;
    local_b0 = (long *)0x0;
    uVar4 = FUN_0141f968(param_1,&local_c8);
    local_d8 = 7;
    local_d0 = (long *)0x0;
    local_e8 = 0xcd4218ce6011a421;
    pcStack_e0 = "IsTrans";
    uVar5 = FUN_0141f968(param_1,&local_e8);
    FUN_0141fab4(uVar10,param_1,puVar1,(uVar3 & 0xff) == 0 || 0xff < uVar3,
                 (uVar4 & 0xff) == 0 || 0xff < uVar4,(uVar5 & 0xff) == 0 || 0xff < uVar5);
    if (local_d0 != (long *)0x0) {
      (**(code **)(*local_d0 + 0x20))();
    }
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))();
    }
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    if (local_68[0] != '\0') {
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      local_68[0] = '\0';
    }
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
  }
  return;
}


