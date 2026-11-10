/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ba7090; name: FUN_01ba7090
 */


undefined * FUN_01ba7090(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*PTR_DAT_047d5260 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047d5260), puVar1 = PTR_DAT_047d5268, iVar2 != 0)) {
    uVar3 = FUN_00ff17b4();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_047d5260);
  }
  return PTR_DAT_047d5268;
}


