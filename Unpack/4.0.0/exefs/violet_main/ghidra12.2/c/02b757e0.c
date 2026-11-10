/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b757e0; name: _INIT_405
 */


void _INIT_405(void)

{
  if ((DAT_048425e8 & 1) == 0) {
    DAT_048425d8 = 0;
    DAT_048425e0 = 0;
    DAT_048425c8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048425c8;
    DAT_048425d0 = &DAT_045aabf0;
    DAT_048425e8 = 1;
  }
  return;
}


