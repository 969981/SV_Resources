/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008f049c; name: FUN_008f049c
 */


void FUN_008f049c(undefined1 *param_1)

{
  *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) & 0xfffe;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return;
}


