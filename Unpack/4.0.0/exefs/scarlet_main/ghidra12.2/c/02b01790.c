/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b01790; name: FUN_02b01790
 */


void FUN_02b01790(long *param_1)

{
  memset(param_1 + 8,0,0x150);
  param_1[0x13] = 0x4f16d9c889d098df;
  *(undefined1 *)(param_1 + 0x22) = 1;
                    /* WARNING: Could not recover jumptable at 0x02b017e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1);
  return;
}


