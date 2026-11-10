/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03034830; name: _INIT_708
 */


void _INIT_708(void)

{
  if ((DAT_04871f00 & 1) == 0) {
    DAT_04871ef0 = 0;
    DAT_04871ef8 = 0;
    DAT_04871ee0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871ee0;
    DAT_04871ee8 = &DAT_046448c0;
    DAT_04871f00 = 1;
  }
  return;
}


