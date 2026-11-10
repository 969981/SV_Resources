/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e1fb6c; name: FUN_02e1fb6c
 */


uint FUN_02e1fb6c(long param_1,undefined4 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  ulong uVar9;
  
  puVar2 = PTR_DAT_047d7940;
  if (((*PTR_DAT_047d7940 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7940);
  }
  puVar4 = PTR_DAT_047d7950;
  puVar3 = PTR_DAT_047d7948;
  uVar7 = *(undefined8 *)PTR_DAT_047d7948;
  *(undefined8 *)PTR_DAT_047d7950 = uVar7;
  piVar8 = (int *)FUN_00cf60cc(uVar7,param_2);
  if (((*(ushort *)((long)piVar8 - (long)*piVar8) < 0xd) ||
      (uVar9 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[6], uVar9 == 0)) ||
     (*(char *)((long)piVar8 + uVar9) == '\0')) {
    uVar5 = 0;
  }
  else {
    if (((*puVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7940);
    }
    uVar7 = *(undefined8 *)puVar3;
    *(undefined8 *)puVar4 = uVar7;
    piVar8 = (int *)FUN_00cf60cc(uVar7,param_2);
    if (*(ushort *)((long)piVar8 - (long)*piVar8) < 9) {
      uVar5 = 0;
    }
    else {
      uVar9 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[4];
      uVar5 = 0;
      if (uVar9 != 0) {
        bVar1 = *(byte *)((long)piVar8 + uVar9);
        uVar5 = (uint)bVar1;
        if (bVar1 == 0x12) {
          return 1;
        }
        if (bVar1 == 99) {
          uVar5 = 0x1f;
        }
      }
    }
    uVar5 = *(uint *)(param_1 + 0x71c) >> (ulong)(uVar5 & 0x1f) & 1;
  }
  return uVar5;
}


