/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0032b9e0; name: FUN_0032b9e0
 */


void FUN_0032b9e0(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047ccc08 + 0x10);
                    /* try { // try from 0032b9f8 to 0032ba07 has its CatchHandler @ 0032ba10 */
  FUN_0038db20(param_1 + 4);
  thunk_FUN_00342a80(param_1[2],param_1[3],0);
  return;
}


