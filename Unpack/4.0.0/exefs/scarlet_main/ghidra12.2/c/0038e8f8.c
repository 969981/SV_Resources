/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038e8f8; name: FUN_0038e8f8
 */


void FUN_0038e8f8(void)

{
  long lVar1;
  
  if ((*PTR_DAT_047cc330 & 1) != 0) {
    lVar1 = *(long *)PTR_DAT_047ccff0;
    if (lVar1 != 0) {
                    /* try { // try from 0038e920 to 0038e92b has its CatchHandler @ 0038e97c */
      FUN_0038db20(lVar1 + 8);
      FUN_0038dbc0(lVar1 + 0x28);
      FUN_0049e790(PTR_LAB_047cba48,lVar1);
    }
    lVar1 = *(long *)PTR_DAT_047ccff8;
    if (lVar1 != 0) {
                    /* try { // try from 0038e950 to 0038e95b has its CatchHandler @ 0038e978 */
      FUN_0038db20(lVar1 + 8);
      FUN_0038dbc0(lVar1 + 0x28);
      FUN_0049e790(PTR_LAB_047cba48,lVar1);
      return;
    }
  }
  return;
}


