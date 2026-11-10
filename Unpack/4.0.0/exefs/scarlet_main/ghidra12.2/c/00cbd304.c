/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cbd304; name: FUN_00cbd304
 */


undefined8 * FUN_00cbd304(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_047d9020 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_047d9020), puVar3 = PTR_DAT_047d3ab0, iVar4 != 0)) {
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
    *(undefined **)PTR_DAT_047d9028 = puVar3;
    __cxa_guard_release(PTR_DAT_047d9020);
  }
  while( true ) {
    if (plVar5 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    if (plVar5 == (long *)PTR_DAT_047d9028) break;
    plVar5 = (long *)*plVar5;
  }
  return param_1 + -5;
}


