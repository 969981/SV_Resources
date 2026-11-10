/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02131274; name: FUN_02131274
 */


undefined8 FUN_02131274(long param_1)

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


