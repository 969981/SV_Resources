/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022f3d1c; name: FUN_022f3d1c
 */


undefined1  [16] FUN_022f3d1c(undefined8 param_1,uint param_2)

{
  long lVar1;
  undefined4 extraout_s0;
  undefined4 uVar2;
  undefined4 extraout_var;
  undefined4 uVar4;
  undefined8 extraout_var_00;
  undefined1 auVar3 [16];
  undefined8 uVar5;
  undefined8 local_18;
  
  local_18 = (ulong)param_2 << 0x20 | 1;
  lVar1 = FUN_022f35e8(param_1,&local_18);
  if (**(char **)(lVar1 + 8) == '\0') {
    uVar2 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    local_18 = CONCAT71(local_18._1_7_,1);
    local_18 = CONCAT44(param_2,(undefined4)local_18);
    FUN_022f3d84(param_1,&local_18);
    uVar2 = extraout_s0;
    uVar4 = extraout_var;
    uVar5 = extraout_var_00;
  }
  auVar3._4_4_ = uVar4;
  auVar3._0_4_ = uVar2;
  auVar3._8_8_ = uVar5;
  return auVar3;
}


