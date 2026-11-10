/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01077940; name: FUN_01077940
 */


undefined8 FUN_01077940(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  
  plVar3 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_047da9f8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047da9f8), puVar1 = PTR_DAT_047daa10, iVar2 != 0)) {
    if (((*PTR_DAT_047daa08 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047daa08), iVar2 != 0)) {
      uVar4 = FUN_01ea9d54();
      *(undefined8 *)puVar1 = uVar4;
      __cxa_guard_release(PTR_DAT_047daa08);
    }
    *(undefined **)PTR_DAT_047daa00 = puVar1;
    __cxa_guard_release(PTR_DAT_047da9f8);
  }
  while( true ) {
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    if (plVar3 == (long *)PTR_DAT_047daa00) break;
    plVar3 = (long *)*plVar3;
  }
  return 1;
}


