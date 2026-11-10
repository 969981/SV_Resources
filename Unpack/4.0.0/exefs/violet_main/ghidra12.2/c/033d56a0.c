/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033d56a0; name: _INIT_2094
 */


void _INIT_2094(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1da8;
  DAT_048aeb50 = *(undefined8 *)PTR_DAT_047d1da8;
  DAT_048aeb58 = 3;
  DAT_048aeb60 = 0x76;
  DAT_048aeb68 = PTR_LAB_047e6ae8;
  DAT_048aeb70 = PTR_LAB_047e6af0;
  memset(&DAT_048aeb78,0,0x48);
  *(undefined8 **)puVar1 = &DAT_048aeb50;
  return;
}


