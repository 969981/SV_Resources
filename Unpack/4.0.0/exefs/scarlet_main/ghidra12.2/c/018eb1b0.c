/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018eb1b0; name: FUN_018eb1b0
 */


undefined * FUN_018eb1b0(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*PTR_DAT_047e20c0 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047e20c0), puVar1 = PTR_DAT_047e20c8, iVar2 != 0)) {
    uVar3 = FUN_01f44620();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_047e20c0);
  }
  return PTR_DAT_047e20c8;
}


