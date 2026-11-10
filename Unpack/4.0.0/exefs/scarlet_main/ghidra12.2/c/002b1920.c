/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002b1920; name: FUN_002b1920
 */


void FUN_002b1920(ulong *param_1,ulong *param_2,ulong param_3,undefined4 param_4)

{
  byte *pbVar1;
  ulong uVar2;
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
    uVar2 = local_40 & 0xff;
    local_28 = (byte *)((ulong)&local_40 | 1);
    uStack_20 = local_40 >> 1 & 0x7f;
    if ((local_40 & 1) != 0) {
      local_28 = local_30;
      uStack_20 = uStack_38;
    }
    param_2[3] = (ulong)((long)param_2 + 1);
    param_2[4] = 0;
  }
  else {
    uStack_20 = param_2[4];
    local_28 = (byte *)param_2[3];
    uVar2 = 0;
  }
  pbVar1 = local_30;
  if ((uVar2 & 1) == 0) {
    pbVar1 = (byte *)((long)&local_40 + 1);
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if (local_28 == pbVar1) {
    param_1[1] = uStack_38;
    *param_1 = local_40;
    uVar2 = param_1[1];
    param_1[2] = (ulong)local_30;
    if (((byte)*param_1 & 1) == 0) {
      local_30 = (byte *)((long)param_1 + 1);
      uVar2 = (ulong)(byte)((byte)*param_1 >> 1);
    }
    param_1[3] = (ulong)local_30;
    param_1[4] = uVar2;
    param_1[5] = param_3;
    *(undefined4 *)(param_1 + 6) = param_4;
  }
  else {
    param_1[4] = uStack_20;
    param_1[3] = (ulong)local_28;
    param_1[5] = param_3;
    *(undefined4 *)(param_1 + 6) = param_4;
    if ((uVar2 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_30);
    }
  }
  return;
}


