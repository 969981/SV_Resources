/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d0befc; name: FUN_00d0befc
 */


void FUN_00d0befc(long param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x20) + 0x400);
  if (iVar1 <= *param_2) {
    iVar1 = *param_2;
  }
  *(int *)(*(long *)(param_1 + 0x20) + 0x400) = iVar1;
  return;
}


