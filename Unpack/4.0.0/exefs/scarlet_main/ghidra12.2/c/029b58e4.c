/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029b58e4; name: FUN_029b58e4
 */


undefined * FUN_029b58e4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((*PTR_DAT_047e3140 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047e3140), puVar2 = PTR_DAT_047e3148,
     puVar1 = PTR_DAT_047d9278, iVar3 != 0)) {
    if (((*PTR_DAT_047d9270 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d9270), iVar3 != 0)) {
      uVar4 = FUN_01e19d1c();
      *(undefined8 *)puVar1 = uVar4;
      __cxa_guard_release(PTR_DAT_047d9270);
    }
    *(undefined **)puVar2 = puVar1;
    __cxa_guard_release(PTR_DAT_047e3140);
  }
  return PTR_DAT_047e3148;
}


