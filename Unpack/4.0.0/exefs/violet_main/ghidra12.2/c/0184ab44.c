/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0184ab44; name: FUN_0184ab44
 */


void FUN_0184ab44(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  ushort *puVar7;
  float fVar8;
  undefined8 local_40;
  undefined *puStack_38;
  undefined8 local_30;
  long *local_28;
  
  piVar5 = (int *)*param_1;
  puVar7 = (ushort *)((long)piVar5 - (long)*piVar5);
  if (*puVar7 < 0xb) {
    iVar6 = 0;
    iVar2 = 0;
    iVar1 = 0;
    if (*puVar7 < 9) goto LAB_0184ab94;
  }
  else {
    iVar1 = 0;
    if ((ulong)puVar7[5] != 0) {
      iVar1 = *(int *)((long)piVar5 + (ulong)puVar7[5]);
    }
  }
  iVar6 = iVar1;
  if ((ulong)puVar7[4] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((long)piVar5 + (ulong)puVar7[4]);
  }
LAB_0184ab94:
  if (iVar6 - iVar2 != 1) {
    local_40 = 0xe7bc0a0f771bb5de;
    puStack_38 = &DAT_03c2819b;
    local_30 = 4;
    local_28 = (long *)0x0;
    uVar3 = FUN_01180d38(param_1,&local_40);
    fVar8 = 0.0;
    if ((uVar3 & 0xff) != 0) {
      fVar8 = ((float)(uVar3 >> 0x20) * 3.1415927) / 180.0;
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
    FUN_0184b86c(fVar8,uVar4,param_1);
  }
  return;
}


