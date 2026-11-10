/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025aa680; name: FUN_025aa680
 */


void FUN_025aa680(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  if (((DAT_04851888 & 1) != 0) ||
     (iVar4 = __cxa_guard_acquire(&DAT_04851888), puVar3 = PTR_DAT_047d3ab0, iVar4 == 0)) {
    return;
  }
  if (((*PTR_DAT_047d3aa8 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3aa8), puVar1 = PTR_DAT_047d39b8, iVar4 != 0)) {
    if (((*PTR_DAT_047d39b0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar2 = PTR_DAT_047d39c8, iVar4 != 0)) {
      if (((*PTR_DAT_047d39c0 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar4 != 0)) {
        *(undefined8 *)puVar2 = 0;
        __cxa_guard_release(PTR_DAT_047d39c0);
      }
      *(undefined **)puVar1 = puVar2;
      __cxa_guard_release(PTR_DAT_047d39b0);
    }
    *(undefined **)puVar3 = puVar1;
    __cxa_guard_release(PTR_DAT_047d3aa8);
  }
  DAT_04851880 = puVar3;
  __cxa_guard_release(&DAT_04851888);
  return;
}


