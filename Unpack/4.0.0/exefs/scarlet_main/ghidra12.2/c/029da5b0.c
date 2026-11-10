/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029da5b0; name: FUN_029da5b0
 */


undefined * FUN_029da5b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((*PTR_DAT_047de138 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047de138), puVar2 = PTR_DAT_047de140,
     puVar1 = PTR_DAT_047d9258, iVar3 != 0)) {
    if (((*PTR_DAT_047d9250 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d9250), iVar3 != 0)) {
      uVar4 = FUN_00cf27f8();
      *(undefined8 *)puVar1 = uVar4;
      __cxa_guard_release(PTR_DAT_047d9250);
    }
    *(undefined **)puVar2 = puVar1;
    __cxa_guard_release(PTR_DAT_047de138);
  }
  return PTR_DAT_047de140;
}


