/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ca370; name: FUN_007ca370
 */


undefined8 FUN_007ca370(long param_1)

{
  if (*(int *)(param_1 + 0xcc) != 0) {
    return 0;
  }
  nn::os::StartThread(*(ThreadType **)(param_1 + 0xd0));
  *(int *)(param_1 + 200) = (int)*(undefined8 *)(param_1 + 0xd0);
  if (*(int *)(param_1 + 0xcc) == 0) {
    *(undefined4 *)(param_1 + 0xcc) = 1;
    return 1;
  }
  return 1;
}


