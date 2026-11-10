/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007eadcc; name: FUN_007eadcc
 */


long FUN_007eadcc(long param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  
  uVar1 = *(int *)(param_1 + 0x14) + 1;
  uVar2 = *(ushort *)(param_1 + 0x10);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar1 / uVar2;
  }
  if (uVar1 - uVar3 * uVar2 == *(int *)(param_1 + 0x1c)) {
    return 0;
  }
  lVar4 = (ulong)*(uint *)(param_1 + 0x14) * 0x650;
  FUN_00797134(*(long *)(param_1 + 8) + lVar4);
  uVar1 = *(int *)(param_1 + 0x14) + 1;
  uVar2 = *(ushort *)(param_1 + 0x10);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar1 / uVar2;
  }
  *(uint *)(param_1 + 0x14) = uVar1 - uVar3 * uVar2;
  return *(long *)(param_1 + 8) + lVar4;
}


