/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fa731c; name: FUN_00fa731c
 */


undefined8 FUN_00fa731c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  
  if (((*PTR_DAT_047dd298 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_047dd298), puVar5 = PTR_DAT_047d9130, iVar6 != 0)) {
    if (((*PTR_DAT_047d9128 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d9128), puVar4 = PTR_DAT_047d8b90, iVar6 != 0)) {
      if (((*PTR_DAT_047d8b88 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8b88), puVar3 = PTR_DAT_047d3ab0, iVar6 != 0)) {
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
        __cxa_guard_release(PTR_DAT_047d8b88);
      }
      *(undefined **)puVar5 = puVar4;
      __cxa_guard_release(PTR_DAT_047d9128);
    }
    *(undefined **)PTR_DAT_047dd2a0 = puVar5;
    __cxa_guard_release(PTR_DAT_047dd298);
  }
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1 == (long *)PTR_DAT_047dd2a0) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


