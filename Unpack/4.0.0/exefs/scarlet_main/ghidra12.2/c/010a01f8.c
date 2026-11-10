/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010a01f8; name: FUN_010a01f8
 */


void FUN_010a01f8(long param_1,byte param_2,undefined2 param_3)

{
  if (param_2 < 5) {
    *(undefined2 *)(param_1 + (ulong)param_2 * 2 + 10) = param_3;
  }
  return;
}


