/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034ad14; name: FUN_0034ad14
 */


void FUN_0034ad14(void)

{
  long lVar1;
  
  lVar1 = DAT_047ef570;
  if (DAT_047ef570 == 0) {
    return;
  }
  FUN_0034b060(DAT_047ef570 + 0x20,*(undefined8 *)(DAT_047ef570 + 0x28));
                    /* try { // try from 0034ad30 to 0034ad37 has its CatchHandler @ 0034ad54 */
  FUN_0038db20(lVar1);
  FUN_0049e790(PTR_LAB_047cba48,lVar1);
  return;
}


