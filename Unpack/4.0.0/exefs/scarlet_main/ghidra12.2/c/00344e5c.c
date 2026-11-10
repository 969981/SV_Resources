/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00344e5c; name: FUN_00344e5c
 */


void FUN_00344e5c(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    while (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + 0x38);
      FUN_00345e64();
    }
                    /* try { // try from 00344e88 to 00344e8f has its CatchHandler @ 00344e9c */
    FUN_0038db20(param_1);
  }
  return;
}


