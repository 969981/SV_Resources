/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014acb78; name: FUN_014acb78
 */


long * FUN_014acb78(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)FUN_00c8c7b4(*(undefined8 *)(param_1 + 0x170));
  if (((*PTR_DAT_047d2150 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047d2150), puVar1 = PTR_DAT_047d20a0, iVar2 != 0)) {
    if (((*PTR_DAT_047d2098 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d2098), iVar2 != 0)) {
      *(undefined8 *)puVar1 = 0;
      __cxa_guard_release(PTR_DAT_047d2098);
    }
    *(undefined **)PTR_DAT_047d2158 = puVar1;
    __cxa_guard_release(PTR_DAT_047d2150);
  }
  if (plVar3 != (long *)0x0) {
    for (plVar4 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3); plVar4 != (long *)0x0;
        plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)PTR_DAT_047d2158) {
        return plVar3;
      }
    }
  }
  return (long *)0x0;
}


