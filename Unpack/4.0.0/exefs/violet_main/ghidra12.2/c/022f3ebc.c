/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022f3ebc; name: FUN_022f3ebc
 */


undefined1  [16] FUN_022f3ebc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 extraout_s0;
  undefined4 uVar2;
  undefined4 extraout_var;
  undefined4 uVar4;
  undefined8 extraout_var_00;
  undefined1 auVar3 [16];
  undefined8 uVar5;
  undefined8 local_28;
  
  cVar1 = FUN_022f36bc();
  if (cVar1 == '\0') {
    uVar2 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    local_28 = FUN_022f36bc(param_1,param_2);
    FUN_022f3d84(param_1,&local_28);
    uVar2 = extraout_s0;
    uVar4 = extraout_var;
    uVar5 = extraout_var_00;
  }
  auVar3._4_4_ = uVar4;
  auVar3._0_4_ = uVar2;
  auVar3._8_8_ = uVar5;
  return auVar3;
}


