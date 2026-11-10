/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01464e08; name: FUN_01464e08
 */


void FUN_01464e08(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1e4) != param_2) {
    *(int *)(param_1 + 0x1e4) = param_2;
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 0x50) + 200) = 1;
  }
  return;
}


