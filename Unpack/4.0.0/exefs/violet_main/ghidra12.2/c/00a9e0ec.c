/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a9e0ec; name: FUN_00a9e0ec
 */


undefined1 * FUN_00a9e0ec(undefined4 *param_1)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  
  if ((*PTR_DAT_047d8938 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d8938);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047d8e20,PTR_DAT_047d8940,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8938);
    }
  }
  uVar4 = *(undefined8 *)PTR_DAT_047d8940;
  *(undefined8 *)PTR_DAT_047d8948 = uVar4;
  lVar2 = FUN_011b047c(uVar4,(ulong)CONCAT14(*(char *)(param_1 + 1) == '\x01',*param_1) |
                             (ulong)*(byte *)((long)param_1 + 6) << 0x21,0);
  if (lVar2 == 0) {
    puVar3 = &DAT_03c886bc;
  }
  else {
    puVar3 = *(undefined1 **)(lVar2 + 0x140);
  }
  return puVar3;
}


