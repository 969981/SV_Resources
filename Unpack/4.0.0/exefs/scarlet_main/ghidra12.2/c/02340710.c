/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02340710; name: FUN_02340710
 */


undefined8 * FUN_02340710(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00c41a10();
  if ((puVar2 == (undefined8 *)0x0) || (puVar2 = (undefined8 *)*puVar2, puVar2 == (undefined8 *)0x0)
     ) {
    if ((DAT_04847f98 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_04847f98);
      if (iVar1 == 0) {
        puVar2 = &DAT_04847f90;
      }
      else {
        DAT_04847f90 = 0;
        __cxa_guard_release(&DAT_04847f98);
        puVar2 = &DAT_04847f90;
      }
    }
    else {
      puVar2 = &DAT_04847f90;
    }
  }
  return puVar2;
}


