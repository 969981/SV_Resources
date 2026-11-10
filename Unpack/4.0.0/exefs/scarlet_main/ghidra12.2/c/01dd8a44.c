/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dd8a44; name: FUN_01dd8a44
 */


void FUN_01dd8a44(long param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                 undefined2 param_5)

{
  *(undefined4 *)(param_1 + 0xbf0) = param_2;
  *(undefined1 *)(param_1 + 0xbf4) = param_3;
  *(undefined1 *)(param_1 + 0xbf5) = param_4;
  *(undefined2 *)(param_1 + 0xbf6) = param_5;
  return;
}


