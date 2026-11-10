/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03263a90; name: _INIT_1797
 */


void _INIT_1797(void)

{
  if ((DAT_048898a0 & 1) == 0) {
    DAT_04889890 = 0;
    DAT_04889898 = 0;
    DAT_04889880 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889880;
    DAT_04889888 = &DAT_046c2500;
    DAT_048898a0 = 1;
  }
  return;
}


