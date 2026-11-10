/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016626f8; name: FUN_016626f8
 */


undefined * FUN_016626f8(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*PTR_DAT_047d9c50 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047d9c50), puVar1 = PTR_DAT_047d9c58, iVar2 != 0)) {
    uVar3 = FUN_01662758();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_047d9c50);
  }
  return PTR_DAT_047d9c58;
}


