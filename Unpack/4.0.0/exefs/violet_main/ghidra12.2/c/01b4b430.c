/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b4b430; name: FUN_01b4b430
 */


void FUN_01b4b430(uint param_1)

{
  *(uint *)(DAT_04840860 + 0x40) =
       *(uint *)(DAT_04840860 + 0x40) & 0xf0000000 |
       *(uint *)(DAT_04840860 + 0x40) & 0xffffff | (param_1 & 0xf) << 0x18;
  FUN_0147ea50(param_1 & 0xf);
  return;
}


