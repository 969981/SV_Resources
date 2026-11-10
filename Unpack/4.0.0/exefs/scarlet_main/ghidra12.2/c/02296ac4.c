/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02296ac4; name: FUN_02296ac4
 */


undefined1  [16] FUN_02296ac4(long *param_1,code *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  long local_50;
  long local_48;
  
  if (*param_1 == 0) {
    local_50 = 0;
  }
  else {
    FUN_022936e0(&local_48);
    local_50 = local_48;
    if (local_48 != 0) {
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *(long *)(local_48 + ((long)param_3 >> 1)));
      }
      auVar1 = (*param_2)();
      uVar3 = auVar1._8_8_;
      uVar2 = auVar1._0_8_;
      FUN_0229376c(&local_50);
      goto LAB_02296b4c;
    }
  }
  FUN_0229376c(&local_50);
  uVar2 = 0;
  uVar3 = 0;
LAB_02296b4c:
  auVar1._8_8_ = uVar3;
  auVar1._0_8_ = uVar2;
  return auVar1;
}


