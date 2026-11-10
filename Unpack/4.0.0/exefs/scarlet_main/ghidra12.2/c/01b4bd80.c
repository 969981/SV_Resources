/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b4bd80; name: FUN_01b4bd80
 */


undefined8 FUN_01b4bd80(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00cc4dc0(param_1,1);
  if ((DAT_04806f10 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04806f10);
    if (iVar2 != 0) {
      __cxa_guard_release(&DAT_04806f10);
    }
  }
  FUN_01b4bdf4(iVar1 != 0);
  return 0;
}


