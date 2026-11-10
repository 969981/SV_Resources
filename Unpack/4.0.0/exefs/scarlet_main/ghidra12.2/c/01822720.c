/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01822720; name: FUN_01822720
 */


void FUN_01822720(undefined4 *param_1,long param_2,uint param_3,undefined4 param_4)

{
  *(ulong *)(param_1 + 2) = (ulong)param_3 | param_2 << 0x20;
  *param_1 = param_4;
  return;
}


