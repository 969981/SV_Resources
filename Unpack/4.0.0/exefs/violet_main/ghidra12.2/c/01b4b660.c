/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b4b660; name: FUN_01b4b660
 */


void FUN_01b4b660(uint param_1)

{
  *(uint *)(DAT_04840860 + 0x40) =
       *(uint *)(DAT_04840860 + 0x40) & 0xfffffff0 |
       *(uint *)(DAT_04840860 + 0x40) & 7 | (param_1 & 1) << 3;
  return;
}


