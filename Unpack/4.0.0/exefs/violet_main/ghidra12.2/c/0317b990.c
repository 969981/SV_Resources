/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317b990; name: _INIT_1445
 */


void _INIT_1445(void)

{
  if ((DAT_0487d050 & 1) == 0) {
    DAT_0487d038 = 1;
    DAT_0487d040 = FUN_0317b9fc;
    DAT_0487d048 = 0;
    DAT_0487d030 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_0487d030,&PTR_LOOP_04483000);
    DAT_0487d050 = 1;
  }
  return;
}


