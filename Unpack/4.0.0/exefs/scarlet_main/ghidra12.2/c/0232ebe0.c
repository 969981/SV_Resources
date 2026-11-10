/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0232ebe0; name: FUN_0232ebe0
 */


undefined8 FUN_0232ebe0(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar3, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_04847180 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_04847180);
      if (iVar2 != 0) {
        DAT_04847168 = 0;
        DAT_04847170 = 0;
        FUN_00100190(&LAB_0232ee14,&DAT_04847168,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04847180);
      }
      puVar4 = &DAT_04847168;
    }
    else {
      puVar4 = &DAT_04847168;
    }
  }
  if ((DAT_04847190 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04847190);
    if (iVar2 != 0) {
      DAT_048475f0 = '\x01';
      __cxa_guard_release(&DAT_04847190);
    }
  }
  puVar1 = PTR_FUN_047de618;
  if (DAT_048475f0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_0232eb50(puVar4,puVar1,0);
  return 0;
}


