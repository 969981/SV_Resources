/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0297e9b8; name: FUN_0297e9b8
 */


void FUN_0297e9b8(long param_1,undefined8 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x10) < 0) {
    *(undefined8 *)(param_1 + 0x10) = param_2;
    *(undefined4 *)(param_1 + 0x18) = param_3;
    return;
  }
  return;
}


