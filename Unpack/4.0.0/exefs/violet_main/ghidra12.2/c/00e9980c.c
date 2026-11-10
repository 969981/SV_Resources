/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e9980c; name: FUN_00e9980c
 */


ulong FUN_00e9980c(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  
  if (*(long *)(*(long *)(param_1 + 0x70) + 8) == 0) {
    uVar1 = FUN_00cf44f4();
    uVar2 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
    uVar3 = FUN_00f14b64(*(undefined8 *)(param_1 + 0x70));
    uVar4 = FUN_00f13da0(uVar1,uVar2,uVar3);
    return (ulong)(uVar4 & 0xff);
  }
  uVar5 = FUN_00e9987c();
  return uVar5;
}


