/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03264070; name: _INIT_1816
 */


void _INIT_1816(void)

{
  if ((DAT_04889b88 & 1) == 0) {
    DAT_04889b78 = 0;
    DAT_04889b80 = 0;
    DAT_04889b68 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889b68;
    DAT_04889b70 = &DAT_046c3838;
    DAT_04889b88 = 1;
  }
  return;
}


