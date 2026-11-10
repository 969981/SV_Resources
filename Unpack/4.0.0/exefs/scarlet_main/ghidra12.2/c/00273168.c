/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00273168; name: FUN_00273168
 */


void FUN_00273168(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047cbe78 + 0x10);
  if ((char)param_1[1] != '\0') {
    if (*(long **)PTR_DAT_047cbe70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
                    /* try { // try from 0027319c to 002731ab has its CatchHandler @ 002731ac */
    (**(code **)(**(long **)PTR_DAT_047cbe70 + 0x18))();
  }
  return;
}


