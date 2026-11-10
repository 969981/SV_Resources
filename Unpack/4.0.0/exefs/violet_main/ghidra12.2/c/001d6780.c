/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


