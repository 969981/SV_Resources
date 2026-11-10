/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b225cc; name: FUN_02b225cc
 */


void FUN_02b225cc(void)

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


