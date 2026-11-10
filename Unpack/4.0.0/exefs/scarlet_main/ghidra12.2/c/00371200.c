/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00371200; name: FUN_00371200
 */


void FUN_00371200(void)

{
  ulong uVar1;
  
  uVar1 = thunk_FUN_00354f70();
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_003547a0(), (uVar1 & 1) == 0)) {
    FUN_0038db40(&DAT_047f10e0);
    if (DAT_047f10d8 != 0) {
                    /* try { // try from 0037122c to 0037122f has its CatchHandler @ 00371250 */
      FUN_00371280();
    }
    DAT_047f10d8 = 0;
                    /* try { // try from 00371234 to 0037123b has its CatchHandler @ 00371270 */
    FUN_0038db60(&DAT_047f10e0);
                    /* try { // try from 0037123c to 00371247 has its CatchHandler @ 0037126c */
    FUN_0038db20(&DAT_047f10e0);
  }
  return;
}


