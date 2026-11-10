/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026ac268; name: FUN_026ac268
 */


undefined8 FUN_026ac268(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  
  plVar3 = (long *)(**(code **)*param_1)();
  if (((*PTR_DAT_047d9000 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047d9000), puVar1 = PTR_DAT_047d9018, iVar2 != 0)) {
    if (((*PTR_DAT_047d9010 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d9010), iVar2 != 0)) {
      uVar4 = FUN_00ea2d24();
      *(undefined8 *)puVar1 = uVar4;
      __cxa_guard_release(PTR_DAT_047d9010);
    }
    *(undefined **)PTR_DAT_047d9008 = puVar1;
    __cxa_guard_release(PTR_DAT_047d9000);
  }
  while( true ) {
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    if (plVar3 == (long *)PTR_DAT_047d9008) break;
    plVar3 = (long *)*plVar3;
  }
  return 1;
}


