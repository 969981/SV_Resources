/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01550cb8; name: FUN_01550cb8
 */


undefined8 * FUN_01550cb8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  
  plVar4 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_047dd228 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047dd228), puVar1 = PTR_DAT_047d9048, iVar3 != 0)) {
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
    *(undefined **)PTR_DAT_047dd230 = puVar1;
    __cxa_guard_release(PTR_DAT_047dd228);
  }
  while( true ) {
    if (plVar4 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    if (plVar4 == (long *)PTR_DAT_047dd230) break;
    plVar4 = (long *)*plVar4;
  }
  return param_1 + -5;
}


