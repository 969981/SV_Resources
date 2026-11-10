/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01581924; name: FUN_01581924
 */


void FUN_01581924(int *param_1,long param_2)

{
  FUN_007cd6f8(param_2,*(undefined8 *)(param_2 + 0x18));
  if (*param_1 == 0) {
    *(undefined4 *)(param_2 + 0xb0) = 10;
    return;
  }
  return;
}


