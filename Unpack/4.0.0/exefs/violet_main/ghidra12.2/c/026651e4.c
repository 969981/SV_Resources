/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026651e4; name: FUN_026651e4
 */


undefined1  [16]
FUN_026651e4(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
            code *param_5,ulong param_6)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 uStack_48;
  
  auVar2._8_8_ = uStack_58;
  auVar2._0_8_ = uStack_60;
  FUN_02663d68(&local_50);
  if (local_50 == 0) {
    bVar1 = true;
  }
  else {
    if ((param_6 & 1) != 0) {
      param_5 = *(code **)(param_5 + *(long *)(local_50 + ((long)param_6 >> 1)));
    }
    auVar2 = (*param_5)();
    bVar1 = false;
    local_80 = param_3;
    local_70 = param_2;
  }
  uStack_60 = auVar2._0_8_;
  FUN_01751d6c(&local_50);
  if (bVar1) {
    FUN_01667884(uStack_60,local_70,local_80,&local_50);
    auVar2._8_8_ = uStack_48;
    auVar2._0_8_ = local_50;
  }
  return auVar2;
}


