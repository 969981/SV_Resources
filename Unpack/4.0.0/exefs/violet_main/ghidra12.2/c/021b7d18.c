/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021b7d18; name: FUN_021b7d18
 */


undefined8 FUN_021b7d18(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  if ((*(long *)(param_1 + 0x5a0) != 0) &&
     (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x5a0) + 0x10), puVar3 != (undefined8 *)0x0)) {
    plVar4 = (long *)(**(code **)*puVar3)();
    if (((*PTR_DAT_047d39b0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar1 = PTR_DAT_047d39c8, iVar2 != 0)) {
      if (((*PTR_DAT_047d39c0 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar2 != 0)) {
        *(undefined8 *)puVar1 = 0;
        __cxa_guard_release(PTR_DAT_047d39c0);
      }
      *(undefined **)PTR_DAT_047d39b8 = puVar1;
      __cxa_guard_release(PTR_DAT_047d39b0);
    }
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)PTR_DAT_047d39b8) {
        return *(undefined8 *)(param_1 + 0x5b0);
      }
    }
  }
  return 0;
}


