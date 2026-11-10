/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0043a9b0; name: FUN_0043a9b0
 */


bool FUN_0043a9b0(long param_1,long param_2,int param_3)

{
  return (0 < param_3 && param_1 != param_2) &&
         ((ulong)(param_1 - param_2) < (ulong)(long)param_3 ||
         (ulong)-(long)param_3 < (ulong)(param_1 - param_2));
}


