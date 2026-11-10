/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0013c9b0; name: FUN_0013c9b0
 */


void FUN_0013c9b0(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + 0x20) == 0) {
    return;
  }
  FUN_0012d6c0(param_1,*(undefined8 *)(param_2 + 0x18),
               (long)(1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f)) * 0x18);
  return;
}


