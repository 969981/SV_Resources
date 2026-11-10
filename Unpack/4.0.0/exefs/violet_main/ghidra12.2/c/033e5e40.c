/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033e5e40; name: _INIT_2096
 */


void _INIT_2096(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1da8;
  DAT_048aec38 = *(undefined8 *)PTR_DAT_047d1da8;
  DAT_048aec40 = 3;
  DAT_048aec48 = 0x88;
  DAT_048aec50 = PTR_LAB_047e6b18;
  DAT_048aec58 = PTR_LAB_047e6b20;
  memset(&DAT_048aec60,0,0x48);
  *(undefined8 **)puVar1 = &DAT_048aec38;
  return;
}


