/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e3c784; name: FUN_01e3c784
 */


undefined8 * FUN_01e3c784(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_04838420 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_04838420), puVar1 = PTR_DAT_047d3988, iVar2 != 0)) {
    if (((*PTR_DAT_047d3980 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar2 != 0)) {
      uVar3 = FUN_01adab84();
      *(undefined8 *)puVar1 = uVar3;
      __cxa_guard_release(PTR_DAT_047d3980);
    }
    DAT_04838418 = puVar1;
    __cxa_guard_release(&DAT_04838420);
  }
  return &DAT_04838418;
}


