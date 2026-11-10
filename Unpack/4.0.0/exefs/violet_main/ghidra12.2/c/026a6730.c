/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026a6730; name: FUN_026a6730
 */


undefined8 * FUN_026a6730(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  
  plVar3 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_047dd1a8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047dd1a8), puVar1 = PTR_DAT_047d9018, iVar2 != 0)) {
    if (((*PTR_DAT_047d9010 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d9010), iVar2 != 0)) {
      uVar4 = FUN_00ea2d24();
      *(undefined8 *)puVar1 = uVar4;
      __cxa_guard_release(PTR_DAT_047d9010);
    }
    *(undefined **)PTR_DAT_047dd1b0 = puVar1;
    __cxa_guard_release(PTR_DAT_047dd1a8);
  }
  while( true ) {
    if (plVar3 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    if (plVar3 == (long *)PTR_DAT_047dd1b0) break;
    plVar3 = (long *)*plVar3;
  }
  return param_1 + -5;
}


