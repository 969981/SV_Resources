/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03242f10; name: _INIT_1701
 */


void _INIT_1701(void)

{
  if ((DAT_04885d90 & 1) == 0) {
    DAT_04885b58 = 1;
    DAT_04885b50 = &PTR_LAB_046ac8d0;
    DAT_04885d90 = 1;
  }
  return;
}


