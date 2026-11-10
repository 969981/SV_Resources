/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0146b33c; name: FUN_0146b33c
 */


void FUN_0146b33c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long local_68;
  undefined8 *puStack_60;
  undefined8 *local_58;
  long local_50;
  long *plStack_48;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar3 = *param_2;
    uVar6 = param_2[2];
    puVar1[1] = param_2[1];
    puVar1[2] = uVar6;
    *puVar1 = uVar3;
    uVar3 = param_2[4];
    uVar6 = param_2[5];
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar1[3] = param_2[3];
    puVar1[4] = uVar3;
    puVar1[5] = uVar6;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 0;
    param_1[1] = (long)(puVar1 + 6);
    return;
  }
  lVar5 = FUN_0146b45c(param_1,(param_1[1] - *param_1 >> 4) * -0x5555555555555555 + 1);
  lVar2 = *param_1;
  lVar4 = param_1[1];
  local_50 = 0;
  local_68 = 0;
  plStack_48 = param_1 + 2;
  if (lVar5 != 0) {
    local_68 = FUN_0146b594(lVar5);
  }
  puStack_60 = (undefined8 *)(local_68 + (lVar4 - lVar2));
  local_50 = local_68 + lVar5 * 0x30;
  uVar3 = *param_2;
  uVar6 = param_2[2];
  puStack_60[1] = param_2[1];
  puStack_60[2] = uVar6;
  *puStack_60 = uVar3;
  uVar3 = param_2[3];
  uVar6 = param_2[5];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  puStack_60[4] = param_2[4];
  puStack_60[5] = uVar6;
  puStack_60[3] = uVar3;
  local_58 = puStack_60 + 6;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  FUN_0146b4b8(param_1,&local_68);
  FUN_0146b670(&local_68);
  return;
}


