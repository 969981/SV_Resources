/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018c987c; name: FUN_018c987c
 */


undefined8 FUN_018c987c(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*PTR_DAT_047dd100 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047dd100), puVar1 = PTR_DAT_047d9018, iVar2 != 0)) {
    if (((*PTR_DAT_047d9010 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d9010), iVar2 != 0)) {
      uVar3 = FUN_00ea2d24();
      *(undefined8 *)puVar1 = uVar3;
      __cxa_guard_release(PTR_DAT_047d9010);
    }
    *(undefined **)PTR_DAT_047dd108 = puVar1;
    __cxa_guard_release(PTR_DAT_047dd100);
  }
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1 == (long *)PTR_DAT_047dd108) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


