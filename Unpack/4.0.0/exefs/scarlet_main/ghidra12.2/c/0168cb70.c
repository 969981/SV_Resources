/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0168cb70; name: FUN_0168cb70
 */


undefined8 FUN_0168cb70(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*PTR_DAT_047de180 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047de180), puVar1 = PTR_DAT_047d9278, iVar2 != 0)) {
    if (((*PTR_DAT_047d9270 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d9270), iVar2 != 0)) {
      uVar3 = FUN_01e19d1c();
      *(undefined8 *)puVar1 = uVar3;
      __cxa_guard_release(PTR_DAT_047d9270);
    }
    *(undefined **)PTR_DAT_047de188 = puVar1;
    __cxa_guard_release(PTR_DAT_047de180);
  }
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1 == (long *)PTR_DAT_047de188) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


