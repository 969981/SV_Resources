/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03146aa0; name: _INIT_911
 */


void _INIT_911(void)

{
  if ((DAT_04877018 & 1) == 0) {
    DAT_04877000 = 1;
    DAT_04877008 = FUN_03146b0c;
    DAT_04877010 = 0;
    DAT_04876ff8 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_04876ff8,&PTR_LOOP_04483000);
    DAT_04877018 = 1;
  }
  return;
}


