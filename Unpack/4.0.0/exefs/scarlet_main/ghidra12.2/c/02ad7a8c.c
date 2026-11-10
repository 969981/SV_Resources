/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ad7a8c; name: FUN_02ad7a8c
 */


void FUN_02ad7a8c(void)

{
  undefined *puVar1;
  int iVar2;
  undefined1 auVar3 [16];
  
  if (((*PTR_DAT_047d4188 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4188), puVar1 = PTR_DAT_047d4190, iVar2 != 0)) {
    auVar3 = NEON_fmov(0x3f800000,4);
    *(long *)(PTR_DAT_047d4190 + 8) = auVar3._8_8_;
    *(long *)puVar1 = auVar3._0_8_;
    __cxa_guard_release(PTR_DAT_047d4188);
    return;
  }
  return;
}


