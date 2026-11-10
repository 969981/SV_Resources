/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01207f7c; name: FUN_01207f7c
 */


undefined1  [16] FUN_01207f7c(long param_1,undefined8 *param_2)

{
  undefined4 extraout_s0;
  undefined4 uVar1;
  undefined4 extraout_var;
  undefined4 uVar3;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  undefined8 uVar4;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    uVar1 = 0;
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    local_20 = *param_2;
    uStack_18 = param_2[1];
    FUN_01207fb4(*(long *)(param_1 + 0x30),&local_20);
    uVar1 = extraout_s0;
    uVar3 = extraout_var;
    uVar4 = extraout_var_00;
  }
  auVar2._4_4_ = uVar3;
  auVar2._0_4_ = uVar1;
  auVar2._8_8_ = uVar4;
  return auVar2;
}


