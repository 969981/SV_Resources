/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015df620; name: FUN_015df620
 */


undefined8 FUN_015df620(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined4 local_24;
  
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
  uVar2 = FUN_00c92df0(param_1,2,0);
  if (((DAT_048037e8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_048037e8), iVar3 != 0)) {
    DAT_04804200 = '\x01';
    __cxa_guard_release(&DAT_048037e8);
  }
  puVar1 = &LAB_008fae58;
  if (DAT_04804200 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_24 = uVar2;
  FUN_015df740(puVar5,puVar1,0,&local_24);
  return 0;
}


