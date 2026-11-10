/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


