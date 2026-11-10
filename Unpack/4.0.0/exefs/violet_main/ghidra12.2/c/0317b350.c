/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317b350; name: _INIT_1440
 */


void _INIT_1440(void)

{
  if ((DAT_0487cf88 & 1) == 0) {
    DAT_0487cf70 = 1;
    DAT_0487cf78 = FUN_0317b3bc;
    DAT_0487cf80 = 0;
    DAT_0487cf68 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_0487cf68,&PTR_LOOP_04483000);
    DAT_0487cf88 = 1;
  }
  return;
}


