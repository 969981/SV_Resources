/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0199ebbc; name: FUN_0199ebbc
 */


undefined * FUN_0199ebbc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  
  if (((*PTR_DAT_047d80f0 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_047d80f0), puVar4 = PTR_DAT_047d80f8,
     puVar3 = PTR_DAT_047d3ab0, iVar5 != 0)) {
    if (((*PTR_DAT_047d3aa8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3aa8), puVar1 = PTR_DAT_047d39b8, iVar5 != 0)) {
      if (((*PTR_DAT_047d39b0 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar2 = PTR_DAT_047d39c8, iVar5 != 0)) {
        if (((*PTR_DAT_047d39c0 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar5 != 0)) {
          *(undefined8 *)puVar2 = 0;
          __cxa_guard_release(PTR_DAT_047d39c0);
        }
        *(undefined **)puVar1 = puVar2;
        __cxa_guard_release(PTR_DAT_047d39b0);
      }
      *(undefined **)puVar3 = puVar1;
      __cxa_guard_release(PTR_DAT_047d3aa8);
    }
    *(undefined **)puVar4 = puVar3;
    __cxa_guard_release(PTR_DAT_047d80f0);
  }
  return PTR_DAT_047d80f8;
}


