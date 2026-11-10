/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03034290; name: _INIT_690
 */


void _INIT_690(void)

{
  if ((DAT_04871c30 & 1) == 0) {
    DAT_04871c20 = 0;
    DAT_04871c28 = 0;
    DAT_04871c10 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871c10;
    DAT_04871c18 = &DAT_046436e0;
    DAT_04871c30 = 1;
  }
  return;
}


