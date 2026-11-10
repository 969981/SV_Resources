/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01876380; name: FUN_01876380
 */


long FUN_01876380(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  uVar2 = *(ushort *)(param_1 + 0x18);
  uVar5 = 0xffffff80;
  if (0xff < uVar2) {
    uVar5 = 0xffffff81;
  }
  uVar1 = (uint)uVar2;
  if (0x7f < uVar2) {
    uVar1 = uVar5;
  }
  lVar3 = FUN_0111b030(uVar1);
  uVar2 = *(ushort *)(param_1 + 0x1a);
  uVar5 = 0xffffff80;
  if (0xff < uVar2) {
    uVar5 = 0xffffff81;
  }
  uVar1 = (uint)uVar2;
  if (0x7f < uVar2) {
    uVar1 = uVar5;
  }
  lVar4 = FUN_0111b030(uVar1);
  return lVar3 + lVar4 + 0x22;
}


