/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019dae00; name: FUN_019dae00
 */


undefined * FUN_019dae00(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  
  if (((*PTR_DAT_047d6550 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_047d6550), puVar5 = PTR_DAT_047d6568,
     puVar4 = PTR_DAT_047d6558, iVar6 != 0)) {
    if (((*PTR_DAT_047d6560 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d6560), puVar3 = PTR_DAT_047d3ab0, iVar6 != 0)) {
      if (((*PTR_DAT_047d3aa8 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3aa8), puVar1 = PTR_DAT_047d39b8, iVar6 != 0)) {
        if (((*PTR_DAT_047d39b0 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar2 = PTR_DAT_047d39c8, iVar6 != 0)) {
          if (((*PTR_DAT_047d39c0 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar6 != 0)) {
            *(undefined8 *)puVar2 = 0;
            __cxa_guard_release(PTR_DAT_047d39c0);
          }
          *(undefined **)puVar1 = puVar2;
          __cxa_guard_release(PTR_DAT_047d39b0);
        }
        *(undefined **)puVar3 = puVar1;
        __cxa_guard_release(PTR_DAT_047d3aa8);
      }
      *(undefined **)puVar5 = puVar3;
      __cxa_guard_release(PTR_DAT_047d6560);
    }
    *(undefined **)puVar4 = puVar5;
    __cxa_guard_release(PTR_DAT_047d6550);
  }
  return PTR_DAT_047d6558;
}


