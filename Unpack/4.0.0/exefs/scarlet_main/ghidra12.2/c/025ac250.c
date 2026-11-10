/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025ac250; name: FUN_025ac250
 */


undefined8 * FUN_025ac250(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00c41a10();
  if ((puVar2 == (undefined8 *)0x0) || (puVar2 = (undefined8 *)*puVar2, puVar2 == (undefined8 *)0x0)
     ) {
    if ((DAT_048518d0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_048518d0);
      if (iVar1 == 0) {
        puVar2 = &DAT_048518c8;
      }
      else {
        DAT_048518c8 = 0;
        __cxa_guard_release(&DAT_048518d0);
        puVar2 = &DAT_048518c8;
      }
    }
    else {
      puVar2 = &DAT_048518c8;
    }
  }
  return puVar2;
}


