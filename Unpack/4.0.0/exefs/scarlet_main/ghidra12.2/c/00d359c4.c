/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d359c4; name: FUN_00d359c4
 */


void FUN_00d359c4(undefined8 param_1,char *param_2,long param_3,undefined8 param_4)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  char acStack_e8 [136];
  
  lVar6 = *(long *)(param_3 + 0x50);
  if (lVar6 != param_3 + 0x48) {
    lVar4 = *(long *)(lVar6 + 0x10);
    uVar5 = *(undefined8 *)(lVar4 + 0x30);
    uVar3 = FUN_00d35890(param_4);
    nn::util::SNPrintf(acStack_e8,0x88,"%s_%s.bflan",uVar5,uVar3);
    iVar2 = strncmp("anim/",param_2,5);
    pcVar1 = param_2 + 5;
    if (iVar2 != 0) {
      pcVar1 = param_2;
    }
    iVar2 = strcmp(acStack_e8,pcVar1);
    if (iVar2 == 0) {
      FUN_00d35b48(param_1,lVar4,lVar6 + -0xd8,param_4);
    }
    else {
      FUN_00d359c4(param_1,param_2,lVar4,param_4);
    }
    for (lVar6 = *(long *)(lVar6 + 8); lVar6 != param_3 + 0x48; lVar6 = *(long *)(lVar6 + 8)) {
      lVar4 = *(long *)(lVar6 + 0x10);
      uVar5 = *(undefined8 *)(lVar4 + 0x30);
      uVar3 = FUN_00d35890(param_4);
      nn::util::SNPrintf(acStack_e8,0x88,"%s_%s.bflan",uVar5,uVar3);
      iVar2 = strncmp("anim/",param_2,5);
      pcVar1 = param_2 + 5;
      if (iVar2 != 0) {
        pcVar1 = param_2;
      }
      iVar2 = strcmp(acStack_e8,pcVar1);
      if (iVar2 == 0) {
        FUN_00d35b48(param_1,lVar4,lVar6 + -0xd8,param_4);
      }
      else {
        FUN_00d359c4(param_1,param_2,lVar4,param_4);
      }
    }
  }
  return;
}


