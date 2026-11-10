/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028aed98; name: FUN_028aed98
 */


undefined8 * FUN_028aed98(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_04863438 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_04863438), puVar1 = PTR_DAT_047dd5e0, iVar2 != 0)) {
    if (((*PTR_DAT_047dd5d8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047dd5d8), iVar2 != 0)) {
      uVar3 = FUN_0219eba8();
      *(undefined8 *)puVar1 = uVar3;
      __cxa_guard_release(PTR_DAT_047dd5d8);
    }
    DAT_04863430 = puVar1;
    __cxa_guard_release(&DAT_04863438);
  }
  return &DAT_04863430;
}


