/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008f00bc; name: FUN_008f00bc
 */


void FUN_008f00bc(long param_1,uint param_2)

{
  if ((int)param_2 < 0x10000) {
    *(undefined4 *)(param_1 + 0x1c) = 1;
    *(ulong *)(param_1 + 0x38) =
         -(ulong)(param_2 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_2 << 1;
    *(uint *)(param_1 + 0x28) = param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0x1c) = 2;
  *(ulong *)(param_1 + 0x38) = (ulong)param_2 << 2;
  *(uint *)(param_1 + 0x28) = param_2;
  return;
}


