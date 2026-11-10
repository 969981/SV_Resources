/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007eaf50; name: FUN_007eaf50
 */


void FUN_007eaf50(long param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  ushort uVar6;
  
  uVar2 = *(ushort *)(param_1 + 0x10);
  uVar4 = 0;
  do {
    uVar6 = uVar4;
    uVar1 = *(int *)(param_1 + 0x1c) + (uint)uVar6;
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    uVar5 = (uint)uVar2;
    uVar4 = uVar6 + 1;
  } while (uVar1 - uVar3 * uVar5 != *(int *)(param_1 + 0x14));
  *(ushort *)(param_1 + 0x12) = uVar6;
  uVar1 = *(int *)(param_1 + 0x1c) + 1;
  uVar3 = 0;
  if (uVar5 != 0) {
    uVar3 = uVar1 / uVar5;
  }
  *(uint *)(param_1 + 0x1c) = uVar1 - uVar3 * uVar5;
  *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
  return;
}


