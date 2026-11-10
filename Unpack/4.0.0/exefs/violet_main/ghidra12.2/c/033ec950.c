/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033ec950; name: _INIT_2100
 */


void _INIT_2100(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1da8;
  DAT_048aee00 = *(undefined8 *)PTR_DAT_047d1da8;
  DAT_048aee08 = 3;
  DAT_048aee10 = 0x73;
  DAT_048aee18 = PTR_LAB_047e6b68;
  DAT_048aee20 = PTR_LAB_047e6b70;
  memset(&DAT_048aee28,0,0x48);
  *(undefined8 **)puVar1 = &DAT_048aee00;
  return;
}


