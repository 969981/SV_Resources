/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c59da4; name: FUN_00c59da4
 */


void FUN_00c59da4(undefined8 *param_1,char *param_2,undefined8 param_3,undefined4 *param_4,
                 char *param_5,undefined4 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint local_58;
  uint uStack_54;
  uint local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  
  lVar4 = 0;
  if (*param_2 != '\0') {
    lVar4 = *(long *)(param_2 + 8);
  }
  lVar5 = 0;
  if (*param_5 != '\0') {
    lVar5 = *(long *)(param_5 + 8);
  }
  if (lVar4 != 0 && lVar5 != 0) {
    lVar4 = *(long *)(lVar4 + 0x40);
    lVar5 = *(long *)(lVar5 + 0x20);
    if (lVar4 != 0 && lVar5 != 0) {
      uVar1 = FUN_00c56adc(*param_1,param_3);
      local_4c = *param_4;
      uStack_48 = param_4[1];
      local_44 = param_4[2];
      local_58 = param_4[3] & ((int)param_4[3] >> 0x1f ^ 0xffffffffU);
      uStack_54 = param_4[4] & ((int)param_4[4] >> 0x1f ^ 0xffffffffU);
      local_50 = param_4[5] & ((int)param_4[5] >> 0x1f ^ 0xffffffffU);
      uVar3 = param_1[5];
      uVar2 = (**(code **)PTR_DAT_047e0be8)(lVar5);
      (**(code **)PTR_DAT_047e1f20)(uVar3,lVar4,uVar1,&local_58,uVar2,param_6);
    }
  }
  return;
}


