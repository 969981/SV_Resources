/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031474c0; name: _INIT_924
 */


void _INIT_924(void)

{
  if ((DAT_04877220 & 1) == 0) {
    DAT_04877210 = 0;
    DAT_04877218 = 0;
    DAT_04877200 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877200;
    DAT_04877208 = &DAT_0466c728;
    DAT_04877220 = 1;
  }
  return;
}


