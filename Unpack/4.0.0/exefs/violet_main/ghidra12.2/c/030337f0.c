/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030337f0; name: _INIT_656
 */


void _INIT_656(void)

{
  if ((DAT_048716e0 & 1) == 0) {
    DAT_048716d0 = 0;
    DAT_048716d8 = 0;
    DAT_048716c0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048716c0;
    DAT_048716c8 = &DAT_046415c8;
    DAT_048716e0 = 1;
  }
  return;
}


