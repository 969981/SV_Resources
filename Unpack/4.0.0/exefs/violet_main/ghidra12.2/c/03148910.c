/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


