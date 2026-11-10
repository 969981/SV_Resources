/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008f0bec; name: FUN_008f0bec
 */


void FUN_008f0bec(long param_1,long param_2,undefined4 *param_3,long param_4,undefined4 *param_5,
                 uint param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  int local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  int local_68;
  int iStack_64;
  
  puVar1 = PTR_DAT_047d2220;
  iVar3 = (**(code **)PTR_DAT_047d2220)(*(undefined8 *)(param_2 + 8));
  local_74 = param_3[1];
  local_68 = param_3[4];
  if (iVar3 == 6 || iVar3 == 4) {
    uVar4 = param_3[7];
    iVar5 = param_3[8];
    if (iVar5 < 2) {
      iVar5 = 1;
    }
  }
  else {
    uVar4 = param_3[2];
    iVar5 = param_3[5];
    if (iVar3 == 3) {
      local_74 = param_3[7];
      local_68 = param_3[8];
      if (local_68 < 2) {
        local_68 = 1;
      }
    }
  }
  iVar3 = (**(code **)puVar1)(*(undefined8 *)(param_4 + 8));
  puVar1 = PTR_DAT_047d2228;
  local_8c = param_5[1];
  local_80 = param_5[4];
  if ((iVar3 == 6) || (iVar3 == 4)) {
    uStack_88 = param_5[7];
    iStack_7c = param_5[8];
    if (iStack_7c < 2) {
      iStack_7c = 1;
    }
  }
  else {
    uStack_88 = param_5[2];
    iStack_7c = param_5[5];
    if (iVar3 == 3) {
      local_8c = param_5[7];
      local_80 = param_5[8];
      if (local_80 < 2) {
        local_80 = 1;
      }
    }
  }
  local_78 = *param_3;
  local_6c = param_3[3];
  local_90 = *param_5;
  local_84 = param_5[3];
  uStack_70 = uVar4;
  iStack_64 = iVar5;
  (**(code **)PTR_DAT_047d2228)(auStack_a0);
  puVar2 = PTR_DAT_047d2230;
  (**(code **)PTR_DAT_047d2230)(auStack_a0,*(undefined2 *)(param_3 + 6),1);
  (**(code **)puVar1)(auStack_b0);
  (**(code **)puVar2)(auStack_b0,*(undefined2 *)(param_5 + 6),1);
  (**(code **)PTR_DAT_047d2238)
            (*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_4 + 8),auStack_b0,&local_90,
             *(undefined8 *)(param_2 + 8),auStack_a0,&local_78,param_6 & 1);
  return;
}


