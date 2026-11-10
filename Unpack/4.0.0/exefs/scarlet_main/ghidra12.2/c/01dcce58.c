/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dcce58; name: FUN_01dcce58
 */


undefined8 FUN_01dcce58(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((*PTR_DAT_047d8ff0 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8ff0), puVar1 = PTR_DAT_047d9008, iVar3 != 0)) {
    if (((*PTR_DAT_047d9000 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d9000), puVar2 = PTR_DAT_047d9018, iVar3 != 0)) {
      if (((*PTR_DAT_047d9010 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047d9010), iVar3 != 0)) {
        uVar4 = FUN_00ea2d24();
        *(undefined8 *)puVar2 = uVar4;
        __cxa_guard_release(PTR_DAT_047d9010);
      }
      *(undefined **)puVar1 = puVar2;
      __cxa_guard_release(PTR_DAT_047d9000);
    }
    *(undefined **)PTR_DAT_047d8ff8 = puVar1;
    __cxa_guard_release(PTR_DAT_047d8ff0);
  }
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1 == (long *)PTR_DAT_047d8ff8) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


