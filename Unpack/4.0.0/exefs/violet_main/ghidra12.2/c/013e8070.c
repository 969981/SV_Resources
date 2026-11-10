/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013e8070; name: FUN_013e8070
 */


ulong FUN_013e8070(long param_1,undefined1 param_2)

{
  uint uVar1;
  ulong uVar2;
  
  switch(param_2) {
  case 0:
    if (*(long *)(*(long *)(param_1 + 0x70) + 8) != 0) {
      uVar2 = FUN_00d75438(*(long *)(param_1 + 0x70));
      return uVar2;
    }
    uVar1 = FUN_00f13ef0();
    break;
  case 1:
    if (*(long *)(*(long *)(param_1 + 0x70) + 8) != 0) {
      uVar2 = FUN_013e87d8(*(long *)(param_1 + 0x70));
      return uVar2;
    }
    uVar1 = FUN_00f1415c();
    break;
  case 2:
    if (*(long *)(*(long *)(param_1 + 0x70) + 8) != 0) {
      uVar2 = FUN_013e8170(*(long *)(param_1 + 0x70));
      return uVar2;
    }
    uVar1 = FUN_00f142b0();
    break;
  case 3:
    if (*(long *)(*(long *)(param_1 + 0x70) + 8) != 0) {
      uVar2 = FUN_013e8b0c(*(long *)(param_1 + 0x70));
      return uVar2;
    }
    uVar1 = FUN_00f14560();
    break;
  case 4:
    if (*(long *)(*(long *)(param_1 + 0x70) + 8) != 0) {
      uVar2 = FUN_013e84a4(*(long *)(param_1 + 0x70));
      return uVar2;
    }
    uVar1 = FUN_00f146b8();
    break;
  case 5:
    if (*(long *)(*(long *)(param_1 + 0x70) + 8) != 0) {
      uVar2 = FUN_013e8e40(*(long *)(param_1 + 0x70));
      return uVar2;
    }
    uVar1 = FUN_00f14408();
    break;
  default:
    return 0;
  }
  return (ulong)(uVar1 & 0xffff);
}


