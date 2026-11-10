/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f9dac4; name: FUN_01f9dac4
 */


undefined8 FUN_01f9dac4(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  
  plVar3 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_047dafc0 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047dafc0), puVar1 = PTR_DAT_047d9278, iVar2 != 0)) {
    if (((*PTR_DAT_047d9270 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d9270), iVar2 != 0)) {
      uVar4 = FUN_01e19d1c();
      *(undefined8 *)puVar1 = uVar4;
      __cxa_guard_release(PTR_DAT_047d9270);
    }
    *(undefined **)PTR_DAT_047dafc8 = puVar1;
    __cxa_guard_release(PTR_DAT_047dafc0);
  }
  while( true ) {
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    if (plVar3 == (long *)PTR_DAT_047dafc8) break;
    plVar3 = (long *)*plVar3;
  }
  return 1;
}


