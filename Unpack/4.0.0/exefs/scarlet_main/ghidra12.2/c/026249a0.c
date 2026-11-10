/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026249a0; name: FUN_026249a0
 */


undefined1 * FUN_026249a0(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00c41a10();
  if ((puVar2 == (undefined8 *)0x0) || (puVar3 = (undefined1 *)*puVar2, puVar3 == (undefined1 *)0x0)
     ) {
    if ((DAT_04854cc0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04854cc0);
      if (iVar1 != 0) {
        DAT_04854ca8 = 0;
        DAT_04854cb0 = 0;
        FUN_00100190(FUN_02626668,&DAT_04854ca8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04854cc0);
      }
      puVar3 = &DAT_04854ca8;
    }
    else {
      puVar3 = &DAT_04854ca8;
    }
  }
  return puVar3;
}


