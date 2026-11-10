/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031468a0; name: _INIT_905
 */


void _INIT_905(void)

{
  if ((DAT_04876f28 & 1) == 0) {
    DAT_04876f10 = 1;
    DAT_04876f18 = FUN_0314663c;
    DAT_04876f20 = 0;
    DAT_04876f08 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_04876f08,&PTR_LOOP_04483000);
    DAT_04876f28 = 1;
  }
  return;
}


