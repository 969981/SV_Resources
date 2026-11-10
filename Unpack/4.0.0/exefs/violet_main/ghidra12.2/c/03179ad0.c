/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03179ad0; name: _INIT_1415
 */


void _INIT_1415(void)

{
  if ((DAT_0487cba0 & 1) == 0) {
    DAT_0487cb88 = 1;
    DAT_0487cb90 = FUN_03179b3c;
    DAT_0487cb98 = 0;
    DAT_0487cb80 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_0487cb80,&PTR_LOOP_04483000);
    DAT_0487cba0 = 1;
  }
  return;
}


