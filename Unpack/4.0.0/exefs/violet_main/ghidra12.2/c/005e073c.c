/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005e073c; name: FUN_005e073c
 */


void FUN_005e073c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  long *plStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*pbVar3 & 1) == 0) {
    pbVar3 = pbVar3 + 1;
  }
  else {
    pbVar3 = *(byte **)(pbVar3 + 0x10);
  }
  FUN_005f7350(&local_60,pbVar3);
  param_1[1] = uStack_38;
  *param_1 = local_40;
  param_1[3] = uStack_28;
  param_1[2] = local_30;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  if ((local_60 & 1) != 0) {
    (**(code **)(*plStack_48 + 0x18))
              (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
  }
  pbVar3 = *(byte **)(param_2 + 0x18);
  if ((*pbVar3 & 1) == 0) {
    pbVar3 = pbVar3 + 1;
  }
  else {
    pbVar3 = *(byte **)(pbVar3 + 0x10);
  }
  FUN_005f7d20(&local_60,pbVar3);
  param_1[5] = uStack_38;
  param_1[4] = local_40;
  param_1[7] = uStack_28;
  param_1[6] = local_30;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  if ((local_60 & 1) != 0) {
    (**(code **)(*plStack_48 + 0x18))
              (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
  }
  puVar1 = PTR_DAT_047cbe60;
  if (*(undefined **)(param_2 + 0x20) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_2 + 0x20);
  }
  uVar2 = FUN_0025da00(puVar1);
  param_1[8] = uVar2;
  return;
}


