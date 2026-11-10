/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b79470; name: FUN_01b79470
 */


void FUN_01b79470(uint param_1)

{
  if (0x1869e < param_1) {
    param_1 = 99999;
  }
  *(uint *)(DAT_04840ac0 + 0x78) = (uint)*(byte *)(DAT_04840ac0 + 0x78) | param_1 << 8;
  return;
}


