/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01021ba8; name: FUN_01021ba8
 */


void FUN_01021ba8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined2 local_48 [4];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  FUN_017f0318(param_1,param_1 + 0x90,param_2);
  FUN_01021f78();
  lVar1 = FUN_01021f34();
  if (lVar1 != 0) {
    local_48[0] = *(undefined2 *)(param_1 + 0x90);
    uVar2 = FUN_01021c74(param_1);
    local_40 = FUN_01021c7c(uVar2,*(undefined4 *)(param_1 + 0x98));
    uVar2 = FUN_01021c74(param_1);
    local_30 = FUN_01021c7c(uVar2,*(undefined4 *)(param_1 + 0xa4));
    uVar2 = FUN_01021c74(param_1);
    local_38 = FUN_01021c7c(uVar2,*(undefined4 *)(param_1 + 0xb0));
    uVar2 = FUN_01021c74(param_1);
    local_28 = FUN_01021c7c(uVar2,*(undefined4 *)(param_1 + 0xbc));
    uVar2 = FUN_01021f2c(param_1);
    FUN_01022038(uVar2,lVar1,local_48);
  }
  return;
}


