/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029dc220; name: FUN_029dc220
 */


undefined * FUN_029dc220(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*PTR_DAT_047d9350 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047d9350), puVar1 = PTR_DAT_047d9358, iVar2 != 0)) {
    uVar3 = FUN_00cf27f8();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_047d9350);
  }
  return PTR_DAT_047d9358;
}


