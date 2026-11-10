/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03036d10; name: _INIT_820
 */


void _INIT_820(void)

{
  if ((DAT_04873080 & 1) == 0) {
    DAT_04873078 = 0;
    DAT_04873068 = 1;
    DAT_04873070 = FUN_030369e4;
    DAT_04873080 = 1;
    DAT_04873060 = PTR_DAT_047e4e78 + 0x10;
  }
  return;
}


