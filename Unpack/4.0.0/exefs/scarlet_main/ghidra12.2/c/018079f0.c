/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018079f0; name: FUN_018079f0
 */


void FUN_018079f0(undefined4 param_1,long param_2,uint param_3)

{
  if (param_3 < *(uint *)(param_2 + 0x10)) {
    *(undefined4 *)(*(long *)(param_2 + 0x18) + (ulong)param_3 * 0x10 + 8) = param_1;
  }
  return;
}


