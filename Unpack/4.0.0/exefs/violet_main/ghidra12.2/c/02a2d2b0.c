/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a2d2b0; name: FUN_02a2d2b0
 */


void FUN_02a2d2b0(void)

{
  undefined *puVar1;
  int iVar2;
  undefined1 auVar3 [16];
  
  if (((*PTR_DAT_047d4198 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4198), puVar1 = PTR_DAT_047d41a0, iVar2 != 0)) {
    auVar3 = NEON_fmov(0xbf800000,4);
    *(long *)(PTR_DAT_047d41a0 + 8) = auVar3._8_8_;
    *(long *)puVar1 = auVar3._0_8_;
    __cxa_guard_release(PTR_DAT_047d4198);
    return;
  }
  return;
}


