/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d3f60; name: FUN_031d3f60
 */


uint * FUN_031d3f60(long *param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = *param_2;
  uVar2 = (int)lVar5 * -0x61c8864f;
  uVar3 = (int)((ulong)lVar5 >> 0x20) * -0x61c8864f;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar4 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = uVar4 + (uVar4 >> 2) + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2;
  uVar6 = (ulong)(uVar2 & *(uint *)(param_1 + 3));
  while( true ) {
    uVar3 = *(uint *)(param_1[2] + uVar6 * 8 + 4);
    if ((int)uVar3 < 0) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(param_1[2] + uVar6 * 8);
    if ((*puVar1 == uVar2) && (*(long *)(*param_1 + (ulong)uVar3 * 0x10) == lVar5)) break;
    uVar6 = uVar6 + 1 & (long)(int)*(uint *)(param_1 + 3);
  }
  return puVar1;
}


