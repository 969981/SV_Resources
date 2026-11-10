/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b5c440; name: FUN_01b5c440
 */


undefined * FUN_01b5c440(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*PTR_DAT_047d4a90 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4a90), puVar1 = PTR_DAT_047d4a98, iVar2 != 0)) {
    uVar3 = FUN_01b3fb0c();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_047d4a90);
  }
  return PTR_DAT_047d4a98;
}


