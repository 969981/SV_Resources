/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004a45b0; name: FUN_004a45b0
 */


long FUN_004a45b0(void)

{
  int iVar1;
  long lVar2;
  
  if (((DAT_047f4550 & 1) != 0) || (iVar1 = __cxa_guard_acquire(&DAT_047f4550), iVar1 == 0)) {
    return DAT_047f4548;
  }
  lVar2 = FUN_0049e770(PTR_FUN_047cba38,0x68);
  if (lVar2 != 0) {
                    /* try { // try from 004a45fc to 004a4613 has its CatchHandler @ 004a4634 */
    FUN_004e8664(lVar2);
  }
  FUN_0052d820(PTR_FUN_047cd740,lVar2);
  DAT_047f4548 = lVar2;
  __cxa_guard_release(&DAT_047f4550);
  return DAT_047f4548;
}


