/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008866b4; name: FUN_008866b4
 */


undefined * FUN_008866b4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  if (((*PTR_DAT_047d1f10 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_047d1f10), puVar2 = PTR_DAT_047d1f28,
     puVar1 = PTR_DAT_047d1f18, iVar4 != 0)) {
    if (((*PTR_DAT_047d1f20 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d1f20), puVar3 = PTR_DAT_047d1f38, iVar4 != 0)) {
      if (((*PTR_DAT_047d1f30 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_047d1f30), iVar4 != 0)) {
        *(undefined8 *)puVar3 = 0;
        __cxa_guard_release(PTR_DAT_047d1f30);
      }
      *(undefined **)puVar2 = puVar3;
      __cxa_guard_release(PTR_DAT_047d1f20);
    }
    *(undefined **)puVar1 = puVar2;
    __cxa_guard_release(PTR_DAT_047d1f10);
  }
  return PTR_DAT_047d1f18;
}


