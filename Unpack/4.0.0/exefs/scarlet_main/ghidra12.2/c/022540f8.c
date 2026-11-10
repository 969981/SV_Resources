/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022540f8; name: FUN_022540f8
 */


long * FUN_022540f8(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)FUN_00c8c7b4(*(undefined8 *)(param_1 + 0x170));
  if (((*PTR_DAT_047d2098 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d2098), iVar1 != 0))
  {
    *(undefined8 *)PTR_DAT_047d20a0 = 0;
    __cxa_guard_release(PTR_DAT_047d2098);
  }
  if (plVar2 != (long *)0x0) {
    for (plVar3 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2); plVar3 != (long *)0x0;
        plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)PTR_DAT_047d20a0) {
        return plVar2;
      }
    }
  }
  return (long *)0x0;
}


