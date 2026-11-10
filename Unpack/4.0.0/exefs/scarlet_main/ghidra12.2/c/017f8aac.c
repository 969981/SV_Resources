/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f8aac; name: FUN_017f8aac
 */


undefined8 FUN_017f8aac(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((*PTR_DAT_047dd228 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047dd228), puVar1 = PTR_DAT_047d9048, iVar3 != 0)) {
    if (((*PTR_DAT_047d9040 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d9040), puVar2 = PTR_DAT_047d9058, iVar3 != 0)) {
      if (((*PTR_DAT_047d9050 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047d9050), iVar3 != 0)) {
        uVar4 = FUN_00ea2d24();
        *(undefined8 *)puVar2 = uVar4;
        __cxa_guard_release(PTR_DAT_047d9050);
      }
      *(undefined **)puVar1 = puVar2;
      __cxa_guard_release(PTR_DAT_047d9040);
    }
    *(undefined **)PTR_DAT_047dd230 = puVar1;
    __cxa_guard_release(PTR_DAT_047dd228);
  }
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1 == (long *)PTR_DAT_047dd230) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


