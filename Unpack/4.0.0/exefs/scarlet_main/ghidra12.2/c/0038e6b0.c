/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038e6b0; name: FUN_0038e6b0
 */


void FUN_0038e6b0(double param_1,double param_2)

{
  FUN_0038dfd0((long)(param_1 / 1000000.0),
               (ulong)(uint)(int)((param_1 - (double)((long)(param_1 / 1000000.0) * 1000000)) *
                                 1000.0) | 0x200000000,(long)(param_2 / 1000000.0),
               (ulong)(uint)(int)((param_2 - (double)((long)(param_2 / 1000000.0) * 1000000)) *
                                 1000.0) | 0x200000000);
  return;
}


