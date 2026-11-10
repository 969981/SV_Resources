/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03264160; name: _INIT_1819
 */


void _INIT_1819(void)

{
  if ((DAT_04889c00 & 1) == 0) {
    DAT_04889bf0 = 0;
    DAT_04889bf8 = 0;
    DAT_04889be0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889be0;
    DAT_04889be8 = &DAT_046c3b90;
    DAT_04889c00 = 1;
  }
  return;
}


