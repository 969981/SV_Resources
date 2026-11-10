/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124da8c; name: FUN_0124da8c
 */


bool FUN_0124da8c(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  uVar6 = *(ulong *)(param_1 + 8);
  uVar5 = uVar6 ^ *(ulong *)(param_1 + 0x10);
  uVar3 = uVar5 >> 0x1b | uVar5 << 0x25;
  uVar5 = uVar5 ^ (uVar6 >> 0x28 | uVar6 << 0x18) ^ uVar5 << 0x10;
  uVar1 = (int)uVar6 + (int)*(ulong *)(param_1 + 0x10);
  while (99 < (uVar1 & 0x7f)) {
    uVar6 = uVar5 ^ uVar3;
    iVar2 = (int)uVar3;
    iVar4 = (int)uVar5;
    uVar3 = uVar6 >> 0x1b | uVar6 << 0x25;
    uVar5 = uVar6 ^ (uVar5 >> 0x28 | uVar5 << 0x18) ^ uVar6 << 0x10;
    uVar1 = iVar4 + iVar2;
  }
  *(ulong *)(param_1 + 8) = uVar5;
  *(ulong *)(param_1 + 0x10) = uVar3;
  return (uVar1 & 0x7f) < param_2;
}


