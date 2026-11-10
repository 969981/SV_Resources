/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324abe0; name: _INIT_1740
 */


void _INIT_1740(void)

{
  if ((DAT_048885d8 & 1) == 0) {
    DAT_048885c8 = 0;
    DAT_048885d0 = 0;
    DAT_048885b8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048885b8;
    DAT_048885c0 = &DAT_046bae00;
    DAT_048885d8 = 1;
  }
  return;
}


