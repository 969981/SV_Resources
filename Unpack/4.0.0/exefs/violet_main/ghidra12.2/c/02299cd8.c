/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02299cd8; name: FUN_02299cd8
 */


undefined1  [16] FUN_02299cd8(long *param_1,code *param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  long local_30;
  long local_28;
  
  if (*param_1 == 0) {
    local_30 = 0;
  }
  else {
    FUN_022936e0(&local_28);
    local_30 = local_28;
    if (local_28 != 0) {
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *(long *)(local_28 + ((long)param_3 >> 1)));
      }
      auVar3 = (*param_2)();
      uVar1 = auVar3._0_8_;
      uVar2 = auVar3._8_8_ & 0xffffffff;
      FUN_0229376c(&local_30);
      goto LAB_02299d48;
    }
  }
  FUN_0229376c(&local_30);
  uVar1 = 0xffffffffffffffff;
  uVar2 = 0xffffffff;
LAB_02299d48:
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}


