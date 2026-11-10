/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00339224; name: FUN_00339224
 */


void FUN_00339224(void)

{
  if (DAT_047ef500 != (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  DAT_047ef500 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x28);
  if (DAT_047ef500 != (undefined8 *)0x0) {
    *DAT_047ef500 = 0;
  }
  return;
}


