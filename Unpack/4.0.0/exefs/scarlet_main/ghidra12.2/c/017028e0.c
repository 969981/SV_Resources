/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017028e0; name: FUN_017028e0
 */


undefined * FUN_017028e0(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*PTR_DAT_047d6ac0 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047d6ac0), puVar1 = PTR_DAT_047d6ac8, iVar2 != 0)) {
    uVar3 = FUN_01ca0cfc();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_047d6ac0);
  }
  return PTR_DAT_047d6ac8;
}


