/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02169ccc; name: FUN_02169ccc
 */


undefined8 FUN_02169ccc(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  if (((*PTR_DAT_047dd2b0 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_047dd2b0), puVar3 = PTR_DAT_047d3ab0, iVar4 != 0)) {
    if (((*PTR_DAT_047d3aa8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3aa8), puVar1 = PTR_DAT_047d39b8, iVar4 != 0)) {
      if (((*PTR_DAT_047d39b0 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar2 = PTR_DAT_047d39c8, iVar4 != 0)) {
        if (((*PTR_DAT_047d39c0 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar4 != 0)) {
          *(undefined8 *)puVar2 = 0;
          __cxa_guard_release(PTR_DAT_047d39c0);
        }
        *(undefined **)puVar1 = puVar2;
        __cxa_guard_release(PTR_DAT_047d39b0);
      }
      *(undefined **)puVar3 = puVar1;
      __cxa_guard_release(PTR_DAT_047d3aa8);
    }
    *(undefined **)PTR_DAT_047dd2b8 = puVar3;
    __cxa_guard_release(PTR_DAT_047dd2b0);
  }
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1 == (long *)PTR_DAT_047dd2b8) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


