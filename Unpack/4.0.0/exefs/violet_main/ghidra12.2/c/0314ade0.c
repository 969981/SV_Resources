/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314ade0; name: _INIT_1071
 */


void _INIT_1071(void)

{
  if ((DAT_04878918 & 1) == 0) {
    DAT_04878900 = 1;
    DAT_04878908 = FUN_0314ae4c;
    DAT_04878910 = 0;
    DAT_048788f8 = PTR_DAT_047e4e78 + 0x10;
    FUN_00100190(PTR_LAB_047e5618,&DAT_048788f8,&PTR_LOOP_04483000);
    DAT_04878918 = 1;
  }
  return;
}


