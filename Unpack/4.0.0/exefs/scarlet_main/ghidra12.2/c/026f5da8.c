/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f5da8; name: FUN_026f5da8
 */


undefined * FUN_026f5da8(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*PTR_DAT_047e0b40 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047e0b40), puVar1 = PTR_DAT_047e0b48, iVar2 != 0)) {
    uVar3 = FUN_026f5f48();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_047e0b40);
  }
  return PTR_DAT_047e0b48;
}


