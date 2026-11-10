/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03147560; name: _INIT_926
 */


void _INIT_926(void)

{
  if ((DAT_04877270 & 1) == 0) {
    DAT_04877258 = 1;
    DAT_04877260 = FUN_0314719c;
    DAT_04877268 = 0;
    DAT_04877250 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_04877250,&PTR_LOOP_04483000);
    DAT_04877270 = 1;
  }
  return;
}


