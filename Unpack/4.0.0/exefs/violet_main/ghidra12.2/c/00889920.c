/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


