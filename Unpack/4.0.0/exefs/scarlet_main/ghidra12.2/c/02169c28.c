/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02169c28; name: FUN_02169c28
 */


long FUN_02169c28(long param_1)

{
  if (1 < *(uint *)(param_1 + 0xa0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0216dd60();
  }
  return *(long *)(param_1 + (ulong)*(uint *)(param_1 + 0xa0) * 0x20 + 0x60) + 0x68;
}


