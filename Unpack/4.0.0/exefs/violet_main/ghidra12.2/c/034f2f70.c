/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034f2f70; name: FUN_034f2f70
 */


void FUN_034f2f70(long *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_18;
  
  local_18 = (**(code **)(*param_1 + 0x28))();
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  if (param_1[8] != 0) {
    FUN_034be534(&DAT_048b0298,param_1);
    FUN_034afae0(param_1[8],param_1,&local_18,uVar1 & 1);
    param_1[8] = 0;
  }
  (**(code **)(*(long *)param_1[0x2e] + 0x130))((long *)param_1[0x2e],1);
  lVar2 = param_1[9];
  if (param_1[0x36] == 0) {
    if (lVar2 != 0) goto LAB_034f3008;
    if (DAT_048b0888 != param_1) goto LAB_034f3038;
    lVar2 = 0;
  }
  else if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
LAB_034f3008:
    *(long *)(lVar2 + 0x1b0) = param_1[0x36];
    lVar2 = param_1[9];
  }
  plVar3 = (long *)&DAT_048b0888;
  if (DAT_048b0888 != param_1) {
    plVar3 = (long *)(param_1[0x36] + 0x48);
  }
  *plVar3 = lVar2;
  param_1[0x36] = 0;
  param_1[9] = 0;
LAB_034f3038:
  FUN_0346d800(param_1,param_2 & 1);
  return;
}


