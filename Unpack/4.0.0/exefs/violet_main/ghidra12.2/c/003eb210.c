/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003eb210; name: FUN_003eb210
 */


int FUN_003eb210(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = (uint)((ulong)param_1 >> 0x10) & 0xffff;
  uVar1 = (int)-uVar6 >> 0x1f;
  uVar3 = uVar6 & uVar1 | (uint)param_1 & (uVar1 ^ 0xffffffff);
  uVar2 = uVar3 >> 8;
  uVar6 = (int)-uVar2 >> 0x1f;
  uVar4 = uVar2 & uVar6 | uVar3 & (uVar6 ^ 0xffffffff);
  uVar3 = uVar4 >> 4;
  uVar2 = (int)-uVar3 >> 0x1f;
  uVar5 = uVar3 & uVar2 | uVar4 & (uVar2 ^ 0xffffffff);
  uVar4 = uVar5 >> 2;
  uVar3 = (int)-uVar4 >> 0x1f;
  return (uVar1 & 0x10 | (uint)((uint)param_1 != 0) | uVar6 & 8 | uVar2 & 4 | uVar3 & 2) -
         ((int)-((uVar4 & uVar3 | uVar5 & (uVar3 ^ 0xffffffff)) >> 1) >> 0x1f);
}


