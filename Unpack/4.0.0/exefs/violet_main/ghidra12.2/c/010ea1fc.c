/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010ea1fc; name: FUN_010ea1fc
 */


undefined8 FUN_010ea1fc(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  
  plVar3 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_047d8de8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8de8), puVar1 = PTR_DAT_047d3988, iVar2 != 0)) {
    if (((*PTR_DAT_047d3980 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar2 != 0)) {
      uVar4 = FUN_01adab84();
      *(undefined8 *)puVar1 = uVar4;
      __cxa_guard_release(PTR_DAT_047d3980);
    }
    *(undefined **)PTR_DAT_047d8df0 = puVar1;
    __cxa_guard_release(PTR_DAT_047d8de8);
  }
  while( true ) {
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    if (plVar3 == (long *)PTR_DAT_047d8df0) break;
    plVar3 = (long *)*plVar3;
  }
  return 1;
}


