/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008c9584; name: FUN_008c9584
 */


undefined8 FUN_008c9584(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if ((param_2 != 1) &&
     ((param_2 != 2 || ((*(char *)(param_1 + 9) == '\0' && (*(char *)(param_1 + 10) == '\0')))))) {
    return 0;
  }
  *(undefined2 *)(param_1 + 9) = 0;
  iVar1 = *(int *)(param_1 + 0x30) + 1;
  iVar4 = 2;
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x78) + 0x20) + 0x36) != '\0') {
    iVar4 = 3;
  }
  iVar3 = 0;
  if (iVar4 != 0) {
    iVar3 = iVar1 / iVar4;
  }
  uVar2 = iVar1 - iVar3 * iVar4;
  *(uint *)(param_1 + 0x30) = uVar2;
  *(ulong *)(param_1 + 0xc0) = param_1 + (ulong)uVar2 * 0x58 + 200;
  return 1;
}


