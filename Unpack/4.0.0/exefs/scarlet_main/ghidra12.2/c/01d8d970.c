/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d8d970; name: FUN_01d8d970
 */


undefined8 FUN_01d8d970(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  float fVar5;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar3, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_04832888 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_04832888);
      if (iVar2 != 0) {
        DAT_04832870 = 0;
        DAT_04832878 = 0;
        FUN_00100190(FUN_013e4e1c,&DAT_04832870,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04832888);
      }
      puVar4 = &DAT_04832870;
    }
    else {
      puVar4 = &DAT_04832870;
    }
  }
  if ((DAT_04832908 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04832908);
    if (iVar2 != 0) {
      DAT_04832a60 = '\x01';
      __cxa_guard_release(&DAT_04832908);
    }
  }
  puVar1 = PTR_LAB_047d81c0;
  if (DAT_04832a60 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  fVar5 = (float)FUN_010c62b8(puVar4,puVar1,0);
  FUN_00c46da0((double)fVar5,param_1);
  return 1;
}


