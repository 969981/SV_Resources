/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e6c92c; name: FUN_01e6c92c
 */


undefined8 FUN_01e6c92c(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0xf8);
  if (iVar2 < 1) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0xf4) + 1;
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar1 / iVar2;
  }
  iVar1 = iVar1 - iVar3 * iVar2;
  *(int *)(param_1 + 0xf4) = iVar1;
  return *(undefined8 *)(param_1 + (long)iVar1 * 8 + 0x58);
}


