/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03148820; name: _INIT_963
 */


void _INIT_963(void)

{
  if ((DAT_04877838 & 1) == 0) {
    DAT_04877828 = 0;
    DAT_04877830 = 0;
    DAT_04877818 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877818;
    DAT_04877820 = &DAT_0466eab8;
    DAT_04877838 = 1;
  }
  return;
}


