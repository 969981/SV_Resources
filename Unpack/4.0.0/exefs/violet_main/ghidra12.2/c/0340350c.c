/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0340350c; name: FUN_0340350c
 */


void FUN_0340350c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x110);
  if (*(short *)(param_1 + 0x54) == 1) {
    piVar3 = (int *)(param_1 + 0x2c);
  }
  else {
    iVar2 = iVar2 + *(int *)(param_1 + 0xcc);
    piVar3 = (int *)(param_1 + 0xd4);
  }
  iVar1 = *piVar3;
  *(undefined1 *)(param_1 + 0xc4) = 1;
  *(int *)(param_1 + 0xc0) = (iVar2 + iVar1) - (int)*(undefined8 *)(param_1 + 0x108);
  FUN_034050d0(param_1 + 0x58,*(undefined2 *)(param_1 + 0xdc),*(undefined8 *)(param_1 + 0x108),
               param_1 + 0x118,param_1 + 0x120);
  iVar2 = *(int *)(param_1 + 0x5c);
  *(int *)(param_2 + 0x2c) = iVar2;
  if (iVar2 == 2) {
    return;
  }
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
  *(ulong *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + (ulong)*(uint *)(param_1 + 100);
  FUN_034f9790(param_1,*(undefined8 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x58),
               *(undefined4 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xb8),param_2);
  return;
}


