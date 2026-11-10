/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dd9680; name: FUN_00dd9680
 */


undefined4 FUN_00dd9680(int param_1,uint param_2)

{
  if (param_1 - 1U < 4) {
    return *(undefined4 *)((&PTR_DAT_045d6e40)[(int)(param_1 - 1U)] + (ulong)param_2 * 4);
  }
  return 0;
}


