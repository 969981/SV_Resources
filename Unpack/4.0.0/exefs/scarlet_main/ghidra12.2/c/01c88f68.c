/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c88f68; name: FUN_01c88f68
 */


void FUN_01c88f68(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = DAT_04839d88;
  if (DAT_04839d88 != (code *)0x0) {
    DAT_04839d90 = 0;
    DAT_04839d98 = 0;
    DAT_04839d80 = 0;
    DAT_04839d88 = (code *)0x0;
    (*UNRECOVERED_JUMPTABLE)(&DAT_04839da0);
  }
  UNRECOVERED_JUMPTABLE = DAT_04839e08;
  if (DAT_04839e08 != (code *)0x0) {
    DAT_04839e10 = 0;
    DAT_04839e18 = 0;
    DAT_04839e00 = 0;
    DAT_04839e08 = (code *)0x0;
    (*UNRECOVERED_JUMPTABLE)(&DAT_04839e20);
  }
  UNRECOVERED_JUMPTABLE = DAT_04839e88;
  if (DAT_04839e88 == (code *)0x0) {
    return;
  }
  DAT_04839e90 = 0;
  DAT_04839e98 = 0;
  DAT_04839e80 = 0;
  DAT_04839e88 = (code *)0x0;
                    /* WARNING: Could not recover jumptable at 0x01c88fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(&DAT_04839ea0);
  return;
}


