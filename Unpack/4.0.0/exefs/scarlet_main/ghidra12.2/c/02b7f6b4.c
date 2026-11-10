/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b7f6b4; name: FUN_02b7f6b4
 */


undefined4 FUN_02b7f6b4(long param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = *(float *)(*(long *)(param_1 + 0x18) + 8);
  if (1.1920929e-07 <= fVar1) {
    uVar2 = NEON_fminnm(*(float *)(*(long *)(param_1 + 0x18) + 0xc) / fVar1,0x3f800000);
    return uVar2;
  }
  return 0x3f800000;
}


