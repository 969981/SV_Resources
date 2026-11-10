/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea16d8; name: FUN_01ea16d8
 */


void FUN_01ea16d8(long param_1,uint param_2)

{
  if (param_2 < *(uint *)(param_1 + 0x68)) {
    memset((void *)(*(long *)(param_1 + 0x60) + (ulong)param_2 * 0x18 + 0x10),0,4);
    *(undefined1 *)(*(long *)(param_1 + 0x60) + (ulong)param_2 * 0x18 + 1) = 0;
  }
  return;
}


