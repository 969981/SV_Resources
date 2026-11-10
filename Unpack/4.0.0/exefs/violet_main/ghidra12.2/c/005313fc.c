/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005313fc; name: FUN_005313fc
 */


void FUN_005313fc(long param_1,ulong param_2,ulong param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar3 = -(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2;
  uVar4 = -(param_3 >> 0x1f & 1) & 0xfffffffc00000000 | (param_3 & 0xffffffff) << 2;
  uVar1 = *(undefined4 *)(lVar2 + uVar3);
  *(undefined4 *)(lVar2 + uVar3) = *(undefined4 *)(lVar2 + uVar4);
  *(undefined4 *)(lVar2 + uVar4) = uVar1;
  return;
}


