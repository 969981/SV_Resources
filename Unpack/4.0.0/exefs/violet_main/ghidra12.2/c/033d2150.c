/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033d2150; name: _INIT_2093
 */


void _INIT_2093(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1da8;
  DAT_048aeae0 = *(undefined8 *)PTR_DAT_047d1da8;
  DAT_048aeae8 = 3;
  DAT_048aeaf0 = 0x87;
  DAT_048aeaf8 = PTR_LAB_047e6ad8;
  DAT_048aeb00 = PTR_LAB_047e6ae0;
  memset(&DAT_048aeb08,0,0x48);
  *(undefined8 **)puVar1 = &DAT_048aeae0;
  return;
}


