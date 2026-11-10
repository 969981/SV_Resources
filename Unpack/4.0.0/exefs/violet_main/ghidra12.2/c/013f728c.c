/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013f728c; name: FUN_013f728c
 */


undefined1 * FUN_013f728c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined2 local_48;
  undefined2 local_46;
  char local_44;
  char local_42;
  
  puVar1 = PTR_DAT_047d8938;
  if ((*PTR_DAT_047d8938 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(PTR_DAT_047d8938);
    if (iVar4 != 0) {
      FUN_00100190(PTR_LAB_047d8e20,PTR_DAT_047d8940,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8938);
    }
  }
  puVar3 = PTR_DAT_047d8948;
  puVar2 = PTR_DAT_047d8940;
  uVar7 = *(undefined8 *)PTR_DAT_047d8940;
  *(undefined8 *)PTR_DAT_047d8948 = uVar7;
  FUN_011b00ec(&local_48,uVar7,*param_1);
  if ((*puVar1 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(PTR_DAT_047d8938);
    if (iVar4 != 0) {
      FUN_00100190(PTR_LAB_047d8e20,PTR_DAT_047d8940,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8938);
    }
  }
  uVar7 = *(undefined8 *)puVar2;
  *(undefined8 *)puVar3 = uVar7;
  lVar5 = FUN_011b047c(uVar7,(ulong)CONCAT14(local_44 == '\x01',CONCAT22(local_46,local_48)) |
                             (ulong)(local_42 != '\0') << 0x21,0);
  if (lVar5 == 0) {
    puVar6 = &DAT_03c886bc;
  }
  else {
    puVar6 = *(undefined1 **)(lVar5 + 0x140);
  }
  return puVar6;
}


