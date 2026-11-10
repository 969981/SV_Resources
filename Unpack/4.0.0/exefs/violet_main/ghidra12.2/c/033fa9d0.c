/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033fa9d0; name: _INIT_2104
 */


void _INIT_2104(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1da8;
  DAT_048aefc0 = *(undefined8 *)PTR_DAT_047d1da8;
  DAT_048aefc8 = 3;
  DAT_048aefd0 = 0x7d;
  DAT_048aefd8 = PTR_LAB_047e6ba8;
  DAT_048aefe0 = PTR_LAB_047e6bb0;
  memset(&DAT_048aefe8,0,0x48);
  *(undefined8 **)puVar1 = &DAT_048aefc0;
  return;
}


