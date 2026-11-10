/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0104b388; name: FUN_0104b388
 */


long * FUN_0104b388(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,*(undefined8 *)(param_1 + 8),1);
  if (((*PTR_DAT_047d2088 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047d2088), puVar1 = PTR_DAT_047d20a0, iVar2 != 0)) {
    if (((*PTR_DAT_047d2098 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d2098), iVar2 != 0)) {
      *(undefined8 *)puVar1 = 0;
      __cxa_guard_release(PTR_DAT_047d2098);
    }
    *(undefined **)PTR_DAT_047d2090 = puVar1;
    __cxa_guard_release(PTR_DAT_047d2088);
  }
  if (plVar4 != (long *)0x0) {
    for (plVar3 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4); plVar3 != (long *)0x0;
        plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)PTR_DAT_047d2090) {
        return plVar4;
      }
    }
  }
  return (long *)0x0;
}


