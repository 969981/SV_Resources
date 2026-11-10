/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030a0990; name: FUN_030a0990
 */


uint * FUN_030a0990(long *param_1,int param_2)

{
  uint *puVar1;
  uint uVar3;
  uint uVar2;
  long lVar4;
  ulong uVar5;
  
  lVar4 = param_1[2];
  uVar2 = (param_2 * -0x61c8864f & 0xff00ff00U) >> 8 | (param_2 * -0x61c8864f & 0xff00ffU) << 8;
  uVar3 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar5 = (ulong)(*(uint *)(param_1 + 3) & uVar3);
  uVar2 = *(uint *)(lVar4 + uVar5 * 8 + 4);
  while( true ) {
    if ((int)uVar2 < 0) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(lVar4 + uVar5 * 8);
    if ((*puVar1 == uVar3) && (*(int *)(*param_1 + (ulong)uVar2 * 0x28) == param_2)) break;
    uVar5 = uVar5 + 1 & (long)(int)*(uint *)(param_1 + 3);
    uVar2 = *(uint *)(lVar4 + uVar5 * 8 + 4);
  }
  return puVar1;
}


