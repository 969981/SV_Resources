/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025e83d0; name: FUN_025e83d0
 */


undefined1  [16] FUN_025e83d0(undefined8 param_1,code *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long local_28;
  
  FUN_025e82f0(&local_28);
  if (local_28 == 0) {
    auVar1 = ZEXT816(0);
  }
  else {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(local_28 + ((long)param_3 >> 1)));
    }
    auVar1 = (*param_2)();
  }
  uVar3 = auVar1._8_8_;
  FUN_01818c0c(&local_28);
  auVar2._8_8_ = uVar3;
  auVar2._0_8_ = auVar1._0_8_;
  return auVar2;
}


