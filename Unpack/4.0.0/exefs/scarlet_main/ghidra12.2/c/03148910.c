/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03148910; name: _INIT_966
 */


void _INIT_966(void)

{
  if ((DAT_048778b0 & 1) == 0) {
    DAT_04877898 = 1;
    DAT_048778a0 = FUN_031486ac;
    DAT_048778a8 = 0;
    DAT_04877890 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_04877890,&PTR_LOOP_04483000);
    DAT_048778b0 = 1;
  }
  return;
}


