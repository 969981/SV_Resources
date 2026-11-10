/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01820974; name: FUN_01820974
 */


undefined8 FUN_01820974(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*PTR_DAT_047dd238 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047dd238), puVar1 = PTR_DAT_047d9058, iVar2 != 0)) {
    if (((*PTR_DAT_047d9050 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d9050), iVar2 != 0)) {
      uVar3 = FUN_00ea2d24();
      *(undefined8 *)puVar1 = uVar3;
      __cxa_guard_release(PTR_DAT_047d9050);
    }
    *(undefined **)PTR_DAT_047dd240 = puVar1;
    __cxa_guard_release(PTR_DAT_047dd238);
  }
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1 == (long *)PTR_DAT_047dd240) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


