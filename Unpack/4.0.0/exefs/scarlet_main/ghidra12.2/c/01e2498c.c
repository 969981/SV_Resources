/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e2498c; name: FUN_01e2498c
 */


undefined8 FUN_01e2498c(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  
  plVar3 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_047d9350 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047d9350), puVar1 = PTR_DAT_047d8b80, iVar2 != 0)) {
    if (((*PTR_DAT_047d8b78 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8b78), iVar2 != 0)) {
      uVar4 = FUN_01df5d9c();
      *(undefined8 *)puVar1 = uVar4;
      __cxa_guard_release(PTR_DAT_047d8b78);
    }
    *(undefined **)PTR_DAT_047d9358 = puVar1;
    __cxa_guard_release(PTR_DAT_047d9350);
  }
  while( true ) {
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    if (plVar3 == (long *)PTR_DAT_047d9358) break;
    plVar3 = (long *)*plVar3;
  }
  return 1;
}


