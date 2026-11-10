/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c56998; name: FUN_00c56998
 */


void FUN_00c56998(undefined8 *param_1,char *param_2,undefined8 param_3,undefined4 *param_4,
                 char *param_5,undefined8 param_6,undefined4 *param_7,undefined4 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  uint local_68;
  uint uStack_64;
  uint local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  
  lVar3 = 0;
  if (*param_2 != '\0') {
    lVar3 = *(long *)(param_2 + 8);
  }
  lVar4 = 0;
  if (*param_5 != '\0') {
    lVar4 = *(long *)(param_5 + 8);
  }
  if (lVar3 != 0 && lVar4 != 0) {
    lVar3 = *(long *)(lVar3 + 0x40);
    lVar4 = *(long *)(lVar4 + 0x40);
    if (lVar3 != 0 && lVar4 != 0) {
      uVar1 = FUN_00c56adc(*param_1,param_3);
      local_5c = *param_4;
      uStack_58 = param_4[1];
      local_54 = param_4[2];
      local_68 = param_4[3] & ((int)param_4[3] >> 0x1f ^ 0xffffffffU);
      uStack_64 = param_4[4] & ((int)param_4[4] >> 0x1f ^ 0xffffffffU);
      local_60 = param_4[5] & ((int)param_4[5] >> 0x1f ^ 0xffffffffU);
      uVar2 = FUN_00c56adc(*param_1,param_6);
      local_74 = *param_7;
      uStack_70 = param_7[1];
      local_6c = param_7[2];
      local_80 = param_7[3] & ((int)param_7[3] >> 0x1f ^ 0xffffffffU);
      uStack_7c = param_7[4] & ((int)param_7[4] >> 0x1f ^ 0xffffffffU);
      local_78 = param_7[5] & ((int)param_7[5] >> 0x1f ^ 0xffffffffU);
      (**(code **)PTR_DAT_047e1f28)(param_1[5],lVar3,uVar1,&local_68,lVar4,uVar2,&local_80,param_8);
    }
  }
  return;
}


