/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d6780; name: FUN_001d6780
 */


void FUN_001d6780(undefined8 *param_1,long param_2)

{
  if (*(long *)(param_2 + 0x30) == 0) {
    FUN_001db9c8(*param_1,
                 "Error while processing content unencoding: Unknown failure within decompression software."
                );
    return;
  }
  FUN_001db9c8(*param_1,"Error while processing content unencoding: %s");
  return;
}


