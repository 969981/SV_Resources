/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cf706c; name: FUN_00cf706c
 */


undefined8 FUN_00cf706c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  
  plVar4 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_047d39a0 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d39a0), puVar1 = PTR_DAT_047d39b8, iVar3 != 0)) {
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
    *(undefined **)PTR_DAT_047d39a8 = puVar1;
    __cxa_guard_release(PTR_DAT_047d39a0);
  }
  while( true ) {
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    if (plVar4 == (long *)PTR_DAT_047d39a8) break;
    plVar4 = (long *)*plVar4;
  }
  return 1;
}


