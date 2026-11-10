/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f6400; name: FUN_002f6400
 */


void FUN_002f6400(ulong *param_1,ulong *param_2,byte param_3)

{
  byte *pbVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 local_40;
  ulong uStack_38;
  byte *local_30;
  byte *local_28;
  ulong uStack_20;
  
  uStack_38 = 0;
  local_40 = 0;
  local_30 = (byte *)0x0;
  pbVar1 = (byte *)param_2[2];
  if ((*param_2 & 1) == 0) {
    pbVar1 = (byte *)((long)param_2 + 1);
  }
  if ((byte *)param_2[3] == pbVar1) {
    uStack_38 = param_2[1];
    local_40 = *param_2;
    local_30 = (byte *)param_2[2];
    *(undefined2 *)param_2 = 0;
    bVar2 = (local_40 & 1) == 0;
    uStack_20 = local_40 >> 1 & 0x7f;
    local_28 = (byte *)((ulong)&local_40 | 1);
    if (!bVar2) {
      uStack_20 = uStack_38;
      local_28 = local_30;
    }
    param_2[3] = (ulong)((long)param_2 + 1);
    param_2[4] = 0;
  }
  else {
    uStack_20 = param_2[4];
    local_28 = (byte *)param_2[3];
    bVar2 = true;
  }
  pbVar1 = local_30;
  if (bVar2) {
    pbVar1 = (byte *)((long)&local_40 + 1);
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if (local_28 != pbVar1) {
    param_1[4] = uStack_20;
    param_1[3] = (ulong)local_28;
    *(byte *)(param_1 + 5) = param_3;
    if (!bVar2) {
      FUN_0049e790(PTR_LAB_047cba48,local_30);
    }
    return;
  }
  param_1[1] = uStack_38;
  *param_1 = local_40;
  param_1[2] = (ulong)local_30;
  uVar3 = (ulong)(byte)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) == 0) {
    local_30 = (byte *)((long)param_1 + 1);
  }
  else {
    uVar3 = param_1[1];
  }
  param_1[3] = (ulong)local_30;
  param_1[4] = uVar3;
  *(byte *)(param_1 + 5) = param_3;
  return;
}


