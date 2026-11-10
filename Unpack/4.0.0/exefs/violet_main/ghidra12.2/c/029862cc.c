/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029862cc; name: FUN_029862cc
 */


ulong FUN_029862cc(long param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  byte local_48 [8];
  
  uVar3 = FUN_0124e498();
  uVar1 = FUN_00f7e274();
  uVar4 = FUN_014813ec(*(undefined8 *)(param_1 + 0x10));
  uVar2 = FUN_020ffb4c(uVar4,param_2);
  if ((uVar2 & 0xff) < (uVar1 & 0xff)) {
    uVar7 = 0;
    uVar2 = uVar2 & 0xff;
    do {
      plVar5 = (long *)FUN_0124e4c0(uVar3,uVar2);
      uVar6 = (**(code **)(*plVar5 + 0x208))();
      if ((uVar6 & 1) != 0) {
        local_48[uVar7] = (byte)uVar2;
        uVar7 = (ulong)((int)uVar7 + 1);
      }
      uVar2 = uVar2 + 1;
    } while ((uVar1 & 0xff) != uVar2);
    if ((int)uVar7 != 0) {
      uVar7 = FUN_012421f0(param_1,uVar7);
      return (ulong)local_48[uVar7 & 0xffffffff];
    }
  }
  return 0xffffffff;
}


