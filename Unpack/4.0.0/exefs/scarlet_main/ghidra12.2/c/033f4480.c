/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


