/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01799040; name: FUN_01799040
 */


undefined8 FUN_01799040(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar2 == (undefined8 *)0x0) ||
     (puVar3 = (undefined *)*puVar2, (undefined *)*puVar2 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d38b8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d38b8);
      puVar3 = PTR_DAT_047d38c0;
      if (iVar1 != 0) {
        *PTR_DAT_047d38c0 = 0;
        *(undefined8 *)(puVar3 + 8) = 0;
        FUN_00100190(PTR_LAB_047d3fe8,puVar3,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d38b8);
      }
    }
    else {
      puVar3 = PTR_DAT_047d38c0;
    }
  }
  puVar2 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar2 == (undefined8 *)0x0) || (puVar4 = (undefined1 *)*puVar2, puVar4 == (undefined1 *)0x0)
     ) {
    if ((DAT_04802c00 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04802c00);
      puVar4 = &DAT_04802bd8;
      if (iVar1 != 0) {
        DAT_04802bd8 = 0;
        DAT_04802be0 = 0;
        FUN_00100190(&LAB_01b08bf8,&DAT_04802bd8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04802c00);
      }
    }
    else {
      puVar4 = &DAT_04802bd8;
    }
  }
  if (((DAT_04803660 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04803660), iVar1 != 0)) {
    DAT_04804348 = 1;
    __cxa_guard_release(&DAT_04803660);
  }
  FUN_0179919c(puVar3,puVar4);
  return 0;
}


