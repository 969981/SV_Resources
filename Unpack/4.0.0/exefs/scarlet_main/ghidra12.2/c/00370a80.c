/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00370a80; name: FUN_00370a80
 */


void FUN_00370a80(void)

{
  if ((DAT_047f0f30 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  qsort(DAT_047f0f38,DAT_047f0f40,0x20,(__compar_fn_t)&LAB_00370b10);
  qsort(DAT_047f0f50,DAT_047f0f58,0x20,(__compar_fn_t)&LAB_00370b10);
  qsort(DAT_047f0f68,DAT_047f0f70,0x20,(__compar_fn_t)&LAB_00370b10);
  qsort(DAT_047f0f80,DAT_047f0f88,0x20,(__compar_fn_t)&LAB_00370b10);
  qsort(DAT_047f0f98,DAT_047f0fa0,0x20,(__compar_fn_t)&LAB_00370b10);
  DAT_047f0f30 = 1;
  return;
}


