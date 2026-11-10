/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025b4ad4; name: FUN_025b4ad4
 */


undefined1  [16] FUN_025b4ad4(undefined1 *param_1,code *param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar4;
  undefined1 auVar3 [16];
  
  uVar2 = 0;
  uVar4 = 0;
  switch(*param_1) {
  case 0:
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *(long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1)));
      }
      puVar1 = (undefined8 *)(*param_2)();
      uVar4 = puVar1[1];
      uVar2 = *puVar1;
    }
    break;
  case 2:
    auVar3 = FUN_025b6334(param_1 + 8);
    return auVar3;
  case 3:
    auVar3 = FUN_025b6374(0,param_1 + 8);
    return auVar3;
  }
  auVar3._8_8_ = uVar4;
  auVar3._0_8_ = uVar2;
  return auVar3;
}


