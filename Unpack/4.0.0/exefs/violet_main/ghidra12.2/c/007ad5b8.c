/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ad5b8; name: FUN_007ad5b8
 */


ulong FUN_007ad5b8(long param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  int local_30 [4];
  
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  uVar2 = FUN_0079c0a0(uVar4);
  if (((((uVar2 & 1) == 0) && (uVar2 = FUN_0079c92c(uVar4), (uVar2 & 1) == 0)) ||
      (FUN_00cbd7c0(local_30,*(long *)(param_1 + 0x58) + 0x1a8), local_30[0] != 0)) ||
     (FUN_007a2238(local_30,*(undefined8 *)(param_1 + 0x58)), local_30[0] != 0)) {
    uVar2 = 0;
    uVar3 = 1;
  }
  else {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x58) + 0xd8))();
    bVar1 = (uVar2 & 1) == 0;
    uVar2 = 0;
    if (bVar1) {
      uVar2 = 0xf0000;
    }
    uVar3 = 4;
    if (!bVar1) {
      uVar3 = 1;
    }
  }
  return uVar3 | uVar2;
}


