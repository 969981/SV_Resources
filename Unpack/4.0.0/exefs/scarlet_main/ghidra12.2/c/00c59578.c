/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c59578; name: FUN_00c59578
 */


void FUN_00c59578(undefined8 *param_1,char *param_2,long *param_3,char *param_4,undefined8 param_5,
                 undefined4 *param_6,undefined4 param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint local_68;
  uint uStack_64;
  uint local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  
  lVar4 = 0;
  if (*param_2 != '\0') {
    lVar4 = *(long *)(param_2 + 8);
  }
  lVar2 = 0;
  if (*param_4 != '\0') {
    lVar2 = *(long *)(param_4 + 8);
  }
  if (lVar4 != 0 && lVar2 != 0) {
    lVar5 = *(long *)(lVar4 + 0x20);
    lVar4 = *(long *)(lVar2 + 0x40);
    if (lVar5 != 0 && lVar4 != 0) {
      uVar1 = FUN_00c56adc(*param_1,param_5);
      local_5c = *param_6;
      uStack_58 = param_6[1];
      local_54 = param_6[2];
      local_68 = param_6[3] & ((int)param_6[3] >> 0x1f ^ 0xffffffffU);
      uStack_64 = param_6[4] & ((int)param_6[4] >> 0x1f ^ 0xffffffffU);
      local_60 = param_6[5] & ((int)param_6[5] >> 0x1f ^ 0xffffffffU);
      uVar3 = param_1[5];
      lVar2 = (**(code **)PTR_DAT_047e0be8)(lVar5);
      (**(code **)PTR_DAT_047e1f18)(uVar3,*param_3 + lVar2,lVar4,uVar1,&local_68,param_7);
    }
  }
  return;
}


