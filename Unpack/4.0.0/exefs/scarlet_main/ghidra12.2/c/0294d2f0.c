/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0294d2f0; name: FUN_0294d2f0
 */


void FUN_0294d2f0(long param_1,uint param_2,undefined4 param_3)

{
  *(undefined4 *)(*(long *)(param_1 + 0x48) + (ulong)(param_2 & 0xff) * 4 + 0x48) = param_3;
  return;
}


