/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031465d0; name: _INIT_901
 */


void _INIT_901(void)

{
  if ((DAT_04876e88 & 1) == 0) {
    DAT_04876e70 = 1;
    DAT_04876e78 = FUN_0314663c;
    DAT_04876e80 = 0;
    DAT_04876e68 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_04876e68,&PTR_LOOP_04483000);
    DAT_04876e88 = 1;
  }
  return;
}


