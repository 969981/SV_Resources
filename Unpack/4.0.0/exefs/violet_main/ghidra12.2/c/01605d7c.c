/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01605d7c; name: FUN_01605d7c
 */


void FUN_01605d7c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long local_40;
  long local_38;
  long lStack_30;
  long local_28;
  
  memset(param_1,0,0xe3);
  DAT_0486acc0 = param_2;
  FUN_01606320(&local_40,param_2);
  lVar1 = local_40;
  local_40 = 0;
  lVar2 = *param_1;
  *param_1 = lVar1;
  if (lVar2 != 0) {
    FUN_0160d108(param_1 + 1);
  }
  param_1[1] = local_38;
  param_1[2] = lStack_30;
  param_1[3] = local_28;
  FUN_01605f60(&local_40,param_2);
  lVar1 = local_40;
  local_40 = 0;
  lVar2 = param_1[4];
  param_1[4] = lVar1;
  if (lVar2 != 0) {
    FUN_0160d1bc(param_1 + 5);
  }
  param_1[5] = local_38;
  param_1[6] = lStack_30;
  param_1[7] = local_28;
  FUN_01606000(&local_40,param_2);
  lVar1 = local_40;
  local_40 = 0;
  lVar2 = param_1[8];
  param_1[8] = lVar1;
  if (lVar2 != 0) {
    FUN_0160d270(param_1 + 9);
  }
  param_1[9] = local_38;
  param_1[10] = lStack_30;
  param_1[0xb] = local_28;
  FUN_016060a0(&local_40,param_2);
  lVar1 = local_40;
  local_40 = 0;
  lVar2 = param_1[0xc];
  param_1[0xc] = lVar1;
  if (lVar2 != 0) {
    FUN_0160d324(param_1 + 0xd);
  }
  param_1[0xd] = local_38;
  param_1[0xe] = lStack_30;
  param_1[0xf] = local_28;
  FUN_01606140(&local_40,param_2);
  lVar1 = local_40;
  local_40 = 0;
  lVar2 = param_1[0x10];
  param_1[0x10] = lVar1;
  if (lVar2 != 0) {
    FUN_0160d3d8(param_1 + 0x11);
  }
  param_1[0x11] = local_38;
  param_1[0x12] = lStack_30;
  param_1[0x13] = local_28;
  FUN_016061e0(&local_40,param_2);
  lVar1 = local_40;
  local_40 = 0;
  lVar2 = param_1[0x14];
  param_1[0x14] = lVar1;
  if (lVar2 != 0) {
    FUN_0160d48c(param_1 + 0x15);
  }
  param_1[0x15] = local_38;
  param_1[0x16] = lStack_30;
  param_1[0x17] = local_28;
  FUN_01606280(&local_40,param_2);
  lVar1 = local_40;
  local_40 = 0;
  lVar2 = param_1[0x18];
  param_1[0x18] = lVar1;
  if (lVar2 != 0) {
    FUN_0160d540(param_1 + 0x19);
  }
  param_1[0x19] = local_38;
  param_1[0x1a] = lStack_30;
  param_1[0x1b] = local_28;
  return;
}


