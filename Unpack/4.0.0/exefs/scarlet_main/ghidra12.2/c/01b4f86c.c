/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b4f86c; name: FUN_01b4f86c
 */


undefined8 FUN_01b4f86c(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_047d49e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d49e0), iVar1 != 0))
  {
    uVar2 = FUN_01b3fb0c();
    *(undefined8 *)PTR_DAT_047d49e8 = uVar2;
    __cxa_guard_release(PTR_DAT_047d49e0);
  }
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1 == (long *)PTR_DAT_047d49e8) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


