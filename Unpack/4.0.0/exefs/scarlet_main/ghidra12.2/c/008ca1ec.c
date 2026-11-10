/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008ca1ec; name: FUN_008ca1ec
 */


char * FUN_008ca1ec(undefined8 *param_1,long param_2,undefined4 param_3,long param_4,int param_5)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  
  pcVar4 = (char *)FUN_008e54a4(param_1[4]);
  if (pcVar4 == (char *)0x0) {
    return (char *)0x0;
  }
  if (0 < *(int *)(param_2 + 0x330)) {
    *(ulong *)(pcVar4 + 0x3f0) = param_1[4] + (ulong)(*(int *)(param_2 + 0x330) - 1) * 0x58 + 0xeb8;
  }
  iVar2 = *(int *)(*(long *)(param_2 + 0x10) + 0x924);
  if (iVar2 == 0) {
    if (*(char *)(param_1[4] + 0x8d0) != '\0') {
      lVar6 = param_1[4] + 0xba0;
      goto LAB_008ca284;
    }
  }
  else {
    uVar5 = (ulong)(iVar2 + 8);
    if (*(char *)(param_1[4] + uVar5 + 0x8c8) == '\0') {
      FUN_008d43e0("CustomShader Callback is not established. CustomShaderID : %d\n");
      iVar2 = *(int *)(*(long *)(param_2 + 0x10) + 0x960);
      goto joined_r0x008ca294;
    }
    lVar6 = param_1[4] + uVar5 * 0x58 + 0x8e0;
LAB_008ca284:
    *(long *)(pcVar4 + 1000) = lVar6;
  }
  iVar2 = *(int *)(*(long *)(param_2 + 0x10) + 0x960);
joined_r0x008ca294:
  if (0 < iVar2) {
    if (*(long *)(param_2 + 0x310) == 0) {
      *(undefined8 **)(pcVar4 + 0x78) = param_1;
      FUN_008d43d0(pcVar4,0x10);
    }
    else if (*(char *)(param_1[4] + (ulong)(iVar2 - 1) + 0x8c8) == '\0') {
      FUN_008d43e0("CustomAction Callback is not established. CustomActionID : %d\n");
    }
    else {
      *(ulong *)(pcVar4 + 0x3e0) = param_1[4] + (ulong)(iVar2 - 1) * 0x58 + 0x8e0;
    }
  }
  uVar5 = FUN_008c80fc(pcVar4,*param_1,param_1,param_2,param_3,param_1[0x3c],param_4);
  if ((uVar5 & 1) == 0) {
    cVar3 = pcVar4[6];
    if (cVar3 != '\0') {
      FUN_008d43e0("Emitter Initialize Failed.\n");
    }
    FUN_008c9420(pcVar4,*param_1,cVar3 == '\0');
    FUN_008e5534(param_1[4],pcVar4);
    pcVar4 = (char *)0x0;
  }
  else {
    FUN_008e5528(param_1[4],pcVar4);
    FUN_01419538(pcVar4,*(undefined4 *)(*(long *)(param_2 + 0x10) + 0x764));
    *(int *)(pcVar4 + 0x20) = param_5;
    if (*pcVar4 == '\0') {
      if (param_1[0x2b] == 0) {
        param_1[0x2b] = pcVar4;
        pcVar4[0x80] = '\0';
        pcVar4[0x81] = '\0';
        pcVar4[0x82] = '\0';
        pcVar4[0x83] = '\0';
        pcVar4[0x84] = '\0';
        pcVar4[0x85] = '\0';
        pcVar4[0x86] = '\0';
        pcVar4[0x87] = '\0';
        pcVar4[0x88] = '\0';
        pcVar4[0x89] = '\0';
        pcVar4[0x8a] = '\0';
        pcVar4[0x8b] = '\0';
        pcVar4[0x8c] = '\0';
        pcVar4[0x8d] = '\0';
        pcVar4[0x8e] = '\0';
        pcVar4[0x8f] = '\0';
        lVar6 = param_1[0x2a];
      }
      else {
        *(char **)(param_1[0x2b] + 0x80) = pcVar4;
        *(undefined8 *)(pcVar4 + 0x88) = param_1[0x2b];
        param_1[0x2b] = pcVar4;
        pcVar4[0x80] = '\0';
        pcVar4[0x81] = '\0';
        pcVar4[0x82] = '\0';
        pcVar4[0x83] = '\0';
        pcVar4[0x84] = '\0';
        pcVar4[0x85] = '\0';
        pcVar4[0x86] = '\0';
        pcVar4[0x87] = '\0';
        lVar6 = param_1[0x2a];
      }
      if (lVar6 == 0) {
        param_1[0x2a] = pcVar4;
      }
    }
    else {
      lVar6 = param_4 + (long)param_5 * 8;
      *(long *)(pcVar4 + 0x548) = param_4;
      puVar1 = (undefined8 *)(lVar6 + 0x4c0);
      lVar6 = *(long *)(lVar6 + 0x4c0);
      if (lVar6 == 0) {
        *puVar1 = pcVar4;
        pcVar4[0x80] = '\0';
        pcVar4[0x81] = '\0';
        pcVar4[0x82] = '\0';
        pcVar4[0x83] = '\0';
        pcVar4[0x84] = '\0';
        pcVar4[0x85] = '\0';
        pcVar4[0x86] = '\0';
        pcVar4[0x87] = '\0';
        pcVar4[0x88] = '\0';
        pcVar4[0x89] = '\0';
        pcVar4[0x8a] = '\0';
        pcVar4[0x8b] = '\0';
        pcVar4[0x8c] = '\0';
        pcVar4[0x8d] = '\0';
        pcVar4[0x8e] = '\0';
        pcVar4[0x8f] = '\0';
        param_4 = param_4 + (long)param_5 * 8;
        lVar6 = *(long *)(param_4 + 0x440);
      }
      else {
        *(char **)(lVar6 + 0x80) = pcVar4;
        *(undefined8 *)(pcVar4 + 0x88) = *puVar1;
        *puVar1 = pcVar4;
        param_4 = param_4 + (long)param_5 * 8;
        pcVar4[0x80] = '\0';
        pcVar4[0x81] = '\0';
        pcVar4[0x82] = '\0';
        pcVar4[0x83] = '\0';
        pcVar4[0x84] = '\0';
        pcVar4[0x85] = '\0';
        pcVar4[0x86] = '\0';
        pcVar4[0x87] = '\0';
        lVar6 = *(long *)(param_4 + 0x440);
      }
      if (lVar6 == 0) {
        *(char **)(param_4 + 0x440) = pcVar4;
      }
    }
    *(undefined4 *)(pcVar4 + 0x14) = *(undefined4 *)(param_1 + 7);
    *(int *)(param_1 + 7) = *(int *)(param_1 + 7) + 1;
  }
  return pcVar4;
}


