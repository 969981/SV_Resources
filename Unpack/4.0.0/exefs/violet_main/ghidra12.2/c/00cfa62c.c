/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cfa62c; name: FUN_00cfa62c
 */


undefined8 FUN_00cfa62c(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  
  plVar3 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_047e23b0 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047e23b0), puVar1 = PTR_DAT_047d8b80, iVar2 != 0)) {
    if (((*PTR_DAT_047d8b78 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8b78), iVar2 != 0)) {
      uVar4 = FUN_01df5d9c();
      *(undefined8 *)puVar1 = uVar4;
      __cxa_guard_release(PTR_DAT_047d8b78);
    }
    *(undefined **)PTR_DAT_047e23b8 = puVar1;
    __cxa_guard_release(PTR_DAT_047e23b0);
  }
  while( true ) {
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    if (plVar3 == (long *)PTR_DAT_047e23b8) break;
    plVar3 = (long *)*plVar3;
  }
  return 1;
}


