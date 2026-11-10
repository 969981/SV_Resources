/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012df8d4; name: FUN_012df8d4
 */


void FUN_012df8d4(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long local_58;
  long local_50;
  long lStack_48;
  long local_40;
  undefined8 local_38;
  
  local_38 = param_2;
  FUN_012e0080(&local_58,param_2,&local_38);
  lVar1 = local_58;
  local_58 = 0;
  lVar2 = *param_1;
  *param_1 = lVar1;
  if (lVar2 != 0) {
    FUN_02213d18(param_1 + 1);
  }
  param_1[2] = lStack_48;
  param_1[3] = local_40;
  param_1[1] = local_50;
  FUN_012e01a0(&local_58,param_2,&local_38);
  lVar1 = local_58;
  local_58 = 0;
  lVar2 = param_1[4];
  param_1[4] = lVar1;
  if (lVar2 != 0) {
    FUN_0221395c(param_1 + 5);
  }
  param_1[6] = lStack_48;
  param_1[7] = local_40;
  param_1[5] = local_50;
  *(undefined4 *)(param_1 + 8) = 10;
  return;
}


