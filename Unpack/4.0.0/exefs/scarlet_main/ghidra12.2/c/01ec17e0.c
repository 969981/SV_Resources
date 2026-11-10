/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ec17e0; name: FUN_01ec17e0
 */


void FUN_01ec17e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  if (((DAT_04839bb8 & 1) != 0) ||
     (iVar3 = __cxa_guard_acquire(&DAT_04839bb8), puVar1 = PTR_DAT_047d39b8, iVar3 == 0)) {
    return;
  }
  if (((*PTR_DAT_047d39b0 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar2 = PTR_DAT_047d39c8, iVar3 != 0)) {
    if (((*PTR_DAT_047d39c0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar3 != 0)) {
      *(undefined8 *)puVar2 = 0;
      __cxa_guard_release(PTR_DAT_047d39c0);
    }
    *(undefined **)puVar1 = puVar2;
    __cxa_guard_release(PTR_DAT_047d39b0);
  }
  DAT_04839bb0 = puVar1;
  __cxa_guard_release(&DAT_04839bb8);
  return;
}


