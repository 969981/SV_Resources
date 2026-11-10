/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00683a20; name: FUN_00683a20
 */


ulong FUN_00683a20(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 3) {
    return *(ulong *)(param_1 + 0x14);
  }
  if (iVar1 != 2) {
    if (iVar1 != 1) {
      return 0;
    }
    if ((*(byte *)(param_1 + 4) & 1) == 0) {
      return (ulong)(*(byte *)(param_1 + 4) >> 1);
    }
  }
  return *(ulong *)(param_1 + 6);
}


