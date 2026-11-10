/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010932d4; name: FUN_010932d4
 */


undefined8 * FUN_010932d4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  
  plVar4 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_047dd0b8 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047dd0b8), puVar1 = PTR_DAT_047d9048, iVar3 != 0)) {
    if (((*PTR_DAT_047d9040 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d9040), puVar2 = PTR_DAT_047d9058, iVar3 != 0)) {
      if (((*PTR_DAT_047d9050 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047d9050), iVar3 != 0)) {
        uVar5 = FUN_00ea2d24();
        *(undefined8 *)puVar2 = uVar5;
        __cxa_guard_release(PTR_DAT_047d9050);
      }
      *(undefined **)puVar1 = puVar2;
      __cxa_guard_release(PTR_DAT_047d9040);
    }
    *(undefined **)PTR_DAT_047dd0c0 = puVar1;
    __cxa_guard_release(PTR_DAT_047dd0b8);
  }
  while( true ) {
    if (plVar4 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    if (plVar4 == (long *)PTR_DAT_047dd0c0) break;
    plVar4 = (long *)*plVar4;
  }
  return param_1 + -5;
}


