/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017fe3ac; name: FUN_017fe3ac
 */


void FUN_017fe3ac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  
  if (((DAT_0486b098 & 1) != 0) ||
     (iVar6 = __cxa_guard_acquire(&DAT_0486b098), puVar5 = PTR_DAT_047dd328, iVar6 == 0)) {
    return;
  }
  if (((*PTR_DAT_047dd320 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_047dd320), puVar4 = PTR_DAT_047d9108, iVar6 != 0)) {
    if (((*PTR_DAT_047d9100 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d9100), puVar3 = PTR_DAT_047d3ab0, iVar6 != 0)) {
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
      *(undefined **)puVar4 = puVar3;
      __cxa_guard_release(PTR_DAT_047d9100);
    }
    *(undefined **)puVar5 = puVar4;
    __cxa_guard_release(PTR_DAT_047dd320);
  }
  DAT_0486b090 = puVar5;
  __cxa_guard_release(&DAT_0486b098);
  return;
}


