/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b1a5c0; name: FUN_01b1a5c0
 */


undefined8 FUN_01b1a5c0(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  
  puVar4 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar4 == (undefined8 *)0x0) ||
     (puVar5 = (undefined *)*puVar4, (undefined *)*puVar4 == (undefined *)0x0)) {
    if ((*PTR_DAT_047d38b8 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_047d38b8);
      puVar5 = PTR_DAT_047d38c0;
      if (iVar3 != 0) {
        *PTR_DAT_047d38c0 = 0;
        *(undefined8 *)(puVar5 + 8) = 0;
        FUN_00100190(PTR_LAB_047d3fe8,puVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d38b8);
      }
    }
    else {
      puVar5 = PTR_DAT_047d38c0;
    }
  }
  if (((DAT_04803768 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04803768), iVar3 != 0)) {
    DAT_04804188 = '\x01';
    __cxa_guard_release(&DAT_04803768);
  }
  puVar1 = &LAB_008faddc;
  if (DAT_04804188 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  uVar2 = FUN_01b1a6d8(puVar5,puVar1,0);
  FUN_00c5d960(param_1,uVar2);
  return 1;
}


