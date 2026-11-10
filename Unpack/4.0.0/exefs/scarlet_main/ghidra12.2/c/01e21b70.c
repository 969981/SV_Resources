/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e21b70; name: FUN_01e21b70
 */


void FUN_01e21b70(undefined4 param_1,long param_2,uint param_3)

{
  if (param_3 < 0x20) {
    *(undefined4 *)(param_2 + (ulong)param_3 * 4 + 0x18) = param_1;
  }
  return;
}


