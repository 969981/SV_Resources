/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032644b0; name: _INIT_1830
 */


void _INIT_1830(void)

{
  if ((DAT_04889d98 & 1) == 0) {
    DAT_04889d88 = 0;
    DAT_04889d90 = 0;
    DAT_04889d78 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889d78;
    DAT_04889d80 = &DAT_046c4648;
    DAT_04889d98 = 1;
  }
  return;
}


