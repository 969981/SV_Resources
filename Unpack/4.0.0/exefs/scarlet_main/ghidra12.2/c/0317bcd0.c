/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317bcd0; name: _INIT_1450
 */


void _INIT_1450(void)

{
  if ((DAT_0487d118 & 1) == 0) {
    DAT_0487d100 = 1;
    DAT_0487d108 = FUN_0317bd3c;
    DAT_0487d110 = 0;
    DAT_0487d0f8 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_0487d0f8,&PTR_LOOP_04483000);
    DAT_0487d118 = 1;
  }
  return;
}


