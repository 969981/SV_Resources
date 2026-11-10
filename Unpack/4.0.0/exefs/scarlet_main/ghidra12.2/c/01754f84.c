/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01754f84; name: FUN_01754f84
 */


undefined8 * FUN_01754f84(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  
  plVar4 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_047dd050 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047dd050), puVar1 = PTR_DAT_047d9008, iVar3 != 0)) {
    if (((*PTR_DAT_047d9000 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d9000), puVar2 = PTR_DAT_047d9018, iVar3 != 0)) {
      if (((*PTR_DAT_047d9010 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047d9010), iVar3 != 0)) {
        uVar5 = FUN_00ea2d24();
        *(undefined8 *)puVar2 = uVar5;
        __cxa_guard_release(PTR_DAT_047d9010);
      }
      *(undefined **)puVar1 = puVar2;
      __cxa_guard_release(PTR_DAT_047d9000);
    }
    *(undefined **)PTR_DAT_047dd058 = puVar1;
    __cxa_guard_release(PTR_DAT_047dd050);
  }
  while( true ) {
    if (plVar4 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    if (plVar4 == (long *)PTR_DAT_047dd058) break;
    plVar4 = (long *)*plVar4;
  }
  return param_1 + -5;
}


