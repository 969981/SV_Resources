/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033ea200; name: _INIT_2098
 */


void _INIT_2098(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1da8;
  DAT_048aed18 = *(undefined8 *)PTR_DAT_047d1da8;
  DAT_048aed20 = 3;
  DAT_048aed28 = 0x69;
  DAT_048aed30 = PTR_LAB_047e6b38;
  DAT_048aed38 = PTR_LAB_047e6b40;
  memset(&DAT_048aed40,0,0x48);
  *(undefined8 **)puVar1 = &DAT_048aed18;
  return;
}


