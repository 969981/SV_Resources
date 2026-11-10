/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a8c580; name: FUN_00a8c580
 */


void FUN_00a8c580(void)

{
  undefined *puVar1;
  int iVar2;
  
  if (((*PTR_DAT_047d41a8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047d41a8), puVar1 = PTR_DAT_047d41b0, iVar2 != 0)) {
    *(undefined8 *)(PTR_DAT_047d41b0 + 8) = 0x3400000034000000;
    *(undefined8 *)puVar1 = 0x3400000034000000;
    __cxa_guard_release(PTR_DAT_047d41a8);
    return;
  }
  return;
}


