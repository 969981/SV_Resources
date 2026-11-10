/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02295914; name: FUN_02295914
 */


undefined1  [16] FUN_02295914(long *param_1,code *param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long local_38;
  long local_28;
  
  if (*param_1 == 0) {
    local_38 = 0;
  }
  else {
    FUN_022936e0(&local_28);
    local_38 = local_28;
    if (local_28 != 0) {
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *(long *)(local_28 + ((long)param_3 >> 1)));
      }
      auVar2 = (*param_2)();
      uVar3 = auVar2._8_8_;
      uVar1 = auVar2._0_8_;
      FUN_0229376c(&local_38);
      goto LAB_02295984;
    }
  }
  FUN_0229376c(&local_38);
  uVar1 = 0;
  uVar3 = 0;
LAB_02295984:
  auVar2._8_8_ = uVar3;
  auVar2._0_8_ = uVar1;
  return auVar2;
}


