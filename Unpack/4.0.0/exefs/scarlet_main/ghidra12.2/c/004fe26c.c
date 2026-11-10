/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004fe26c; name: FUN_004fe26c
 */


void FUN_004fe26c(long *param_1)

{
  long lVar1;
  
                    /* try { // try from 004fe274 to 004fe277 has its CatchHandler @ 004fe2c8 */
  FUN_004fe180();
  if ((*param_1 != 0) || (lVar1 = param_1[2], lVar1 == 0)) {
    return;
  }
  if (*(long *)(lVar1 + 0x20) != 0) {
                    /* try { // try from 004fe298 to 004fe29f has its CatchHandler @ 004fe2c4 */
    FUN_0050069c(lVar1);
    if (*(long *)(lVar1 + 0x28) == 0) {
      FUN_0049e700(*(undefined8 *)(lVar1 + 0x20));
    }
  }
  FUN_0049e790(PTR_LAB_047cba48,lVar1);
  return;
}


