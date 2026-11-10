/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014789f0; name: FUN_014789f0
 */


undefined8 FUN_014789f0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  
  if (((*PTR_DAT_047d90a8 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_047d90a8), puVar5 = PTR_DAT_047d9058, iVar6 != 0)) {
    if (((*PTR_DAT_047d9050 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d9050), puVar4 = PTR_DAT_047d9028, iVar6 != 0)) {
      if (((*PTR_DAT_047d9020 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d9020), puVar3 = PTR_DAT_047d3ab0, iVar6 != 0)) {
        if (((*PTR_DAT_047d3aa8 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3aa8), puVar1 = PTR_DAT_047d39b8, iVar6 != 0)) {
          if (((*PTR_DAT_047d39b0 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar2 = PTR_DAT_047d39c8, iVar6 != 0))
          {
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
        __cxa_guard_release(PTR_DAT_047d9020);
      }
      *(undefined **)puVar5 = puVar4;
      __cxa_guard_release(PTR_DAT_047d9050);
    }
    *(undefined **)PTR_DAT_047d90b0 = puVar5;
    __cxa_guard_release(PTR_DAT_047d90a8);
  }
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1 == (long *)PTR_DAT_047d90b0) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


