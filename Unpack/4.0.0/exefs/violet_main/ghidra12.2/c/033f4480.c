/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033f4480; name: _INIT_2101
 */


void _INIT_2101(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1da8;
  DAT_048aee70 = *(undefined8 *)PTR_DAT_047d1da8;
  DAT_048aee78 = 3;
  DAT_048aee80 = 0x8a;
  DAT_048aee88 = PTR_LAB_047e6b78;
  DAT_048aee90 = PTR_LAB_047e6b80;
  memset(&DAT_048aee98,0,0x48);
  *(undefined8 **)puVar1 = &DAT_048aee70;
  return;
}


