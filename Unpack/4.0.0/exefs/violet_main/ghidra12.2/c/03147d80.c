/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03147d80; name: _INIT_940
 */


void _INIT_940(void)

{
  if ((DAT_048774a0 & 1) == 0) {
    DAT_04877490 = 0;
    DAT_04877498 = 0;
    DAT_04877480 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877480;
    DAT_04877488 = &DAT_0466d558;
    DAT_048774a0 = 1;
  }
  return;
}


