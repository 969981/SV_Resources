/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008b2ff0; name: FUN_008b2ff0
 */


void FUN_008b2ff0(undefined4 param_1,long param_2,int param_3)

{
  if (param_3 == 1) {
    *(undefined4 *)(*(long *)(param_2 + 0x150) + 4) = param_1;
    *(ushort *)(param_2 + 0x114) = *(ushort *)(param_2 + 0x114) | 4;
    return;
  }
  if (param_3 == 0) {
    **(undefined4 **)(param_2 + 0x150) = param_1;
  }
  *(ushort *)(param_2 + 0x114) = *(ushort *)(param_2 + 0x114) | 4;
  return;
}


