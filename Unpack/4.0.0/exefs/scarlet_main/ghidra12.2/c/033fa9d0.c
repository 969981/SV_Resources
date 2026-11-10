/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


