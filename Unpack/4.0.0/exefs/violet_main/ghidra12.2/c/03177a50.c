/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03177a50; name: _INIT_1344
 */


void _INIT_1344(void)

{
  if ((DAT_0487c088 & 1) == 0) {
    DAT_0487c070 = 1;
    DAT_0487c078 = FUN_03177abc;
    DAT_0487c080 = 0;
    DAT_0487c068 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_0487c068,&PTR_LOOP_04483000);
    DAT_0487c088 = 1;
  }
  return;
}


