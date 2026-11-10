/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f7d570; name: FUN_00f7d570
 */


void FUN_00f7d570(long param_1,undefined4 param_2,undefined1 param_3,uint param_4)

{
  if ((*(int *)(param_1 + 0x90) == 7) || ((param_4 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x90) = param_2;
    *(undefined1 *)(param_1 + 0x94) = param_3;
  }
  return;
}


