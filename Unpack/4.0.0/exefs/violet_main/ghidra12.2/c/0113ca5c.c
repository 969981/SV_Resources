/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0113ca5c; name: FUN_0113ca5c
 */


long * FUN_0113ca5c(void)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)FUN_00c8c7b4();
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


