/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02badda0; name: _INIT_443
 */


void _INIT_443(void)

{
  DAT_04859e08 = 0;
  DAT_04859e1c = 1;
  nn::os::InitializeLightEvent(&DAT_04859e10,0,1);
  FUN_00100190(PTR_LAB_047ddce0,&DAT_04859e08,&PTR_LOOP_04483000);
  return;
}


