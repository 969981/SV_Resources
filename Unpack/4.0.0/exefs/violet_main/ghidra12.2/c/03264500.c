/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03264500; name: _INIT_1831
 */


void _INIT_1831(void)

{
  if ((DAT_04889dc0 & 1) == 0) {
    DAT_04889db0 = 0;
    DAT_04889db8 = 0;
    DAT_04889da0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889da0;
    DAT_04889da8 = &DAT_046c4788;
    DAT_04889dc0 = 1;
  }
  return;
}


