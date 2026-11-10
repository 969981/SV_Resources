/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01911468; name: FUN_01911468
 */


void FUN_01911468(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  int iVar7;
  ushort *puVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 local_40;
  undefined *puStack_38;
  undefined8 local_30;
  long *local_28;
  
  piVar6 = (int *)*param_1;
  puVar8 = (ushort *)((long)piVar6 - (long)*piVar6);
  if (*puVar8 < 0xb) {
    iVar7 = 0;
    iVar2 = 0;
    iVar1 = 0;
    if (*puVar8 < 9) goto LAB_019114b8;
  }
  else {
    iVar1 = 0;
    if ((ulong)puVar8[5] != 0) {
      iVar1 = *(int *)((long)piVar6 + (ulong)puVar8[5]);
    }
  }
  iVar7 = iVar1;
  if ((ulong)puVar8[4] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((long)piVar6 + (ulong)puVar8[4]);
  }
LAB_019114b8:
  if (iVar7 - iVar2 == 1) {
    local_40 = 0xe7bc0a0f771bb5de;
    puStack_38 = &DAT_03c2819b;
    local_30 = 4;
    local_28 = (long *)0x0;
    uVar3 = FUN_01180d38(param_1,&local_40);
    fVar10 = 0.0;
    if ((uVar3 & 0xff) != 0) {
      fVar10 = ((float)(uVar3 >> 0x20) * 3.1415927) / 180.0;
    }
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    if (((*PTR_DAT_047d3be0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3be0), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d89f0,PTR_DAT_047d3be8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3be0);
    }
    uVar4 = *(undefined8 *)PTR_DAT_047d3be8;
    *(undefined8 *)PTR_DAT_047dcd80 = uVar4;
    FUN_0184b86c(fVar10,uVar4,param_1);
  }
  else {
    local_40 = 0x55c0d7a581349f0f;
    if (((*PTR_DAT_047d3be0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3be0), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d89f0,PTR_DAT_047d3be8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3be0);
    }
    uVar4 = *(undefined8 *)PTR_DAT_047d3be8;
    *(undefined8 *)PTR_DAT_047dcd80 = uVar4;
    uVar9 = FUN_01911678(uVar4,param_1);
    puVar5 = (undefined8 *)FUN_01235878(param_1 + 0x2b,&local_40);
    *(undefined4 *)(puVar5 + 2) = uVar9;
    *puVar5 = PTR_LAB_047dcdf0;
  }
  return;
}


