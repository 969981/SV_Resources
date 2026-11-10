/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00810b0c; name: FUN_00810b0c
 */


void FUN_00810b0c(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_00810b24(param_1,param_1 + 8);
    return;
  }
  FUN_00810b24(param_1,*(undefined8 *)(param_1 + 0x20));
  return;
}


