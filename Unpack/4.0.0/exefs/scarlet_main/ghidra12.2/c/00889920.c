/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00889920; name: FUN_00889920
 */


void FUN_00889920(long param_1)

{
  do {
    *(byte *)(param_1 + 0x38) =
         *(byte *)(param_1 + 0x38) & 0x60 | ((*(byte *)(param_1 + 0x38) & 5) != 0) << 4;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_00889920();
    }
    param_1 = *(long *)(param_1 + 0x28);
  } while (param_1 != 0);
  return;
}


