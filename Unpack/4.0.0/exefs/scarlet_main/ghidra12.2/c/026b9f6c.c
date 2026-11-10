/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026b9f6c; name: FUN_026b9f6c
 */


undefined8 FUN_026b9f6c(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*PTR_DAT_047dd218 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047dd218), puVar1 = PTR_DAT_047d9058, iVar2 != 0)) {
    if (((*PTR_DAT_047d9050 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d9050), iVar2 != 0)) {
      uVar3 = FUN_00ea2d24();
      *(undefined8 *)puVar1 = uVar3;
      __cxa_guard_release(PTR_DAT_047d9050);
    }
    *(undefined **)PTR_DAT_047dd220 = puVar1;
    __cxa_guard_release(PTR_DAT_047dd218);
  }
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1 == (long *)PTR_DAT_047dd220) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


