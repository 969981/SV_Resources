/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


