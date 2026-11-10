/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03034a10; name: _INIT_714
 */


void _INIT_714(void)

{
  if ((DAT_04871ff0 & 1) == 0) {
    DAT_04871fe0 = 0;
    DAT_04871fe8 = 0;
    DAT_04871fd0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871fd0;
    DAT_04871fd8 = &DAT_04644fa8;
    DAT_04871ff0 = 1;
  }
  return;
}


