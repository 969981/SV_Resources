/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033c4840; name: _INIT_2087
 */


void _INIT_2087(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1da8;
  DAT_048ae840 = *(undefined8 *)PTR_DAT_047d1da8;
  DAT_048ae848 = 2;
  DAT_048ae850 = 0x94;
  DAT_048ae858 = PTR_LAB_047e69e8;
  DAT_048ae860 = PTR_LAB_047e69f0;
  memset(&DAT_048ae868,0,0x48);
  *(undefined8 **)puVar1 = &DAT_048ae840;
  return;
}


