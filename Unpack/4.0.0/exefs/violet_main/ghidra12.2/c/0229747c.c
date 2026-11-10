/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0229747c; name: FUN_0229747c
 */


undefined1  [16] FUN_0229747c(long *param_1,code *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  long local_48;
  long local_38;
  
  if (*param_1 == 0) {
    local_48 = 0;
  }
  else {
    FUN_022936e0(&local_38);
    local_48 = local_38;
    if (local_38 != 0) {
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *(long *)(local_38 + ((long)param_3 >> 1)));
      }
      auVar1 = (*param_2)();
      uVar3 = auVar1._8_8_;
      uVar2 = auVar1._0_8_;
      FUN_0229376c(&local_48);
      goto LAB_022974fc;
    }
  }
  FUN_0229376c(&local_48);
  uVar2 = 0;
  uVar3 = 0;
LAB_022974fc:
  auVar1._8_8_ = uVar3;
  auVar1._0_8_ = uVar2;
  return auVar1;
}


