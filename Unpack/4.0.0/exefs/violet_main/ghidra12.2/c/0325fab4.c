/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0325fab4; name: FUN_0325fab4
 */


undefined1  [16] FUN_0325fab4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long local_40;
  undefined8 local_38;
  
  local_40 = 0;
  local_38 = 0x8000000000000000;
  FUN_00857760(param_2,0,&local_40);
  auVar3 = FUN_0325e690(param_1,local_40,local_38 & 0xffffffff,param_2);
  uVar1 = local_38;
  uVar4 = auVar3._8_8_;
  uVar2 = (ulong)local_38._4_4_;
  local_38 = (ulong)local_38._4_4_ << 0x20;
  if ((-1 < (long)uVar1) && (local_40 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_40,uVar2 << 4);
  }
  auVar3._8_8_ = uVar4;
  return auVar3;
}


