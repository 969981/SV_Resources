/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026ef7b0; name: FUN_026ef7b0
 */


uint FUN_026ef7b0(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  int iVar1;
  undefined4 local_64;
  long local_60 [4];
  ulong local_40;
  undefined1 local_34 [4];
  undefined8 local_30;
  undefined1 auStack_28 [8];
  
  local_34[0] = 1;
  if (0x200 < param_4) {
    return param_4;
  }
  if (0x1f7 < param_4) {
    return param_4;
  }
  local_40 = *(ulong *)(param_2 + 0x20);
  if ((local_40 & 0xff) == 0) {
    return param_4;
  }
  if (*(int *)(param_2 + 0x28) == *(int *)(param_2 + 0x2c)) {
    return param_4;
  }
  local_30 = param_1;
  FUN_017522c8(local_60,param_3 + (ulong)param_4,0x200 - param_4);
  if (((local_60[0] == 0) || (FUN_026ef8bc(auStack_28,local_34,local_60[0] + 8), local_60[0] == 0))
     || (FUN_01e62da0(auStack_28,&local_30,local_60[0] + 8), local_60[0] == 0)) {
    local_64 = *(undefined4 *)(param_2 + 0x2c);
  }
  else {
    FUN_014c2934(auStack_28,(ulong)&local_40 | 4,local_60[0] + 8);
    local_64 = *(undefined4 *)(param_2 + 0x2c);
    if (local_60[0] != 0) {
      FUN_01e62d14(auStack_28,&local_64,local_60[0] + 8);
    }
  }
  iVar1 = FUN_014c27c8(local_60);
  FUN_01694aa8(local_60);
  return iVar1 + param_4;
}


