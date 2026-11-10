/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e1f9e0; name: FUN_02e1f9e0
 */


uint FUN_02e1f9e0(long *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  int *piVar10;
  ulong uVar11;
  
  plVar8 = (long *)(**(code **)(*param_1 + 0x1d8))();
  uVar5 = (**(code **)(*plVar8 + 0xf0))(plVar8,param_2);
  puVar2 = PTR_DAT_047d7940;
  if (((*PTR_DAT_047d7940 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7940);
  }
  puVar4 = PTR_DAT_047d7950;
  puVar3 = PTR_DAT_047d7948;
  uVar9 = *(undefined8 *)PTR_DAT_047d7948;
  *(undefined8 *)PTR_DAT_047d7950 = uVar9;
  piVar10 = (int *)FUN_00cf60cc(uVar9,uVar5);
  if (((*(ushort *)((long)piVar10 - (long)*piVar10) < 0xd) ||
      (uVar11 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[6], uVar11 == 0)) ||
     (*(char *)((long)piVar10 + uVar11) == '\0')) {
    uVar6 = 0;
  }
  else {
    if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7940);
    }
    uVar9 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar9;
    piVar10 = (int *)FUN_00cf60cc(uVar9,uVar5);
    if (*(ushort *)((long)piVar10 - (long)*piVar10) < 9) {
      uVar6 = 0;
    }
    else {
      uVar11 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[4];
      uVar6 = 0;
      if (uVar11 != 0) {
        bVar1 = *(byte *)((long)piVar10 + uVar11);
        uVar6 = (uint)bVar1;
        if (bVar1 == 0x12) {
          return 1;
        }
        if (bVar1 == 99) {
          uVar6 = 0x1f;
        }
      }
    }
    uVar6 = *(uint *)((long)param_1 + 0x71c) >> (ulong)(uVar6 & 0x1f) & 1;
  }
  return uVar6;
}


