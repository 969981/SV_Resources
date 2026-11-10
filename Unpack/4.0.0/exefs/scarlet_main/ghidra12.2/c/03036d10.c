/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


