/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0015c3d0; name: FUN_0015c3d0
 */


void FUN_0015c3d0(void)

{
  if (DAT_047ecce8 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0015c3dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_047ecce8)();
  return;
}


