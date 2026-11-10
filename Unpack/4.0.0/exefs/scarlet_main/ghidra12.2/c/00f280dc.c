/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f280dc; name: FUN_00f280dc
 */


undefined8 FUN_00f280dc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  
  plVar6 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_047d4bf8 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4bf8), puVar4 = PTR_DAT_047d4850, iVar5 != 0)) {
    if (((*PTR_DAT_047d4848 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4848), puVar3 = PTR_DAT_047d3ab0, iVar5 != 0)) {
      if (((*PTR_DAT_047d3aa8 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3aa8), puVar1 = PTR_DAT_047d39b8, iVar5 != 0)) {
        if (((*PTR_DAT_047d39b0 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar2 = PTR_DAT_047d39c8, iVar5 != 0)) {
          if (((*PTR_DAT_047d39c0 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar5 != 0)) {
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
      __cxa_guard_release(PTR_DAT_047d4848);
    }
    *(undefined **)PTR_DAT_047d4c00 = puVar4;
    __cxa_guard_release(PTR_DAT_047d4bf8);
  }
  while( true ) {
    if (plVar6 == (long *)0x0) {
      return 0;
    }
    if (plVar6 == (long *)PTR_DAT_047d4c00) break;
    plVar6 = (long *)*plVar6;
  }
  return 1;
}


