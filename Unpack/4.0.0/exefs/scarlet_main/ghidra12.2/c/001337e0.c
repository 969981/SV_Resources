/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001337e0; name: FUN_001337e0
 */


void FUN_001337e0(long *param_1,int param_2)

{
  param_2 = (uint)*(byte *)((long)param_1 + 0x44) + param_2;
  if ((int)(uint)*(byte *)(*param_1 + 0xc) < param_2) {
    if (0xfe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_00138770(param_1[2],"function or expression needs too many registers");
    }
    *(char *)(*param_1 + 0xc) = (char)param_2;
  }
  return;
}


