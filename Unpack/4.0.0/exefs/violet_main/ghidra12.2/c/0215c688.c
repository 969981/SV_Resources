/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0215c688; name: FUN_0215c688
 */


bool FUN_0215c688(long param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(*(long *)(param_1 + 0x880) + 0x1b8) == 0;
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x81) = 0;
    *(undefined1 *)(param_1 + 0x84) = 1;
    FUN_01327c88(param_1,*(undefined4 *)(*(long *)(param_1 + 0x930) + 0x14),
                 (int)*(float *)(*(long *)(param_1 + 0x880) + 0x1d4));
  }
  return bVar1;
}


