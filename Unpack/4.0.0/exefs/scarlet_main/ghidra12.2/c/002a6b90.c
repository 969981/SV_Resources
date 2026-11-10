/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002a6b90; name: FUN_002a6b90
 */


void FUN_002a6b90(undefined8 param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                 undefined8 *param_6)

{
  byte bVar1;
  size_t sVar2;
  long *plVar3;
  char *__s;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  byte *pbVar9;
  char *local_60;
  undefined8 uStack_58;
  
  if (param_2 == (byte *)0x0) goto LAB_002a6e44;
  if ((*param_2 & 1) == 0) {
    if (1 < *param_2) {
      pbVar9 = param_2 + 1;
      goto LAB_002a6be8;
    }
  }
  else if (*(long *)(param_2 + 8) != 0) {
    pbVar9 = *(byte **)(param_2 + 0x10);
LAB_002a6be8:
    sVar2 = strlen((char *)pbVar9);
    *param_6 = pbVar9;
    param_6[1] = sVar2;
  }
  if ((param_2[0x18] & 1) == 0) {
    if (1 < param_2[0x18]) {
      pbVar9 = param_2 + 0x19;
      goto LAB_002a6c1c;
    }
  }
  else if (*(long *)(param_2 + 0x20) != 0) {
    pbVar9 = *(byte **)(param_2 + 0x28);
LAB_002a6c1c:
    sVar2 = strlen((char *)pbVar9);
    param_6[2] = pbVar9;
    param_6[3] = sVar2;
  }
  if (*(long *)(param_2 + 0xa8) != 0) {
    lVar4 = param_6[8];
    if ((lVar4 == 0) && (lVar4 = FUN_0038ad50(PTR_PTR_047cc6d0,param_1), lVar4 != 0)) {
      param_6[8] = lVar4;
    }
    FUN_002abcb0(param_1,lVar4,param_2 + 0x98);
  }
  uVar5 = (ulong)(*param_5 >> 1);
  if ((*param_5 & 1) != 0) {
    uVar5 = *(ulong *)(param_5 + 8);
  }
  if (uVar5 != 0) {
    plVar8 = (long *)param_6[8];
    if ((plVar8 == (long *)0x0) &&
       (plVar8 = (long *)FUN_0038ad50(PTR_PTR_047cc6d0,param_1), plVar8 != (long *)0x0)) {
      param_6[8] = plVar8;
    }
    plVar3 = (long *)FUN_0038ad50(PTR_PTR_047cc6d8,param_1);
    uVar5 = *(ulong *)(param_5 + 8);
    pbVar9 = *(byte **)(param_5 + 0x10);
    if ((*param_5 & 1) == 0) {
      pbVar9 = param_5 + 1;
      uVar5 = (ulong)(*param_5 >> 1);
    }
    *(undefined4 *)(plVar3 + 2) = 3;
    *plVar3 = (long)pbVar9;
    plVar3[1] = uVar5;
    lVar4 = *plVar8;
    if (lVar4 == 0) {
      lVar4 = FUN_0038b150(param_1,0,8);
      *plVar8 = lVar4;
    }
    FUN_0038b920(lVar4 + 8,"PROXYLESS_CLIENT_HOSTNAME",0x19,0,param_1);
    FUN_0038b4e0(lVar4 + 8,"PROXYLESS_CLIENT_HOSTNAME",0x19,plVar3,param_1);
  }
  bVar1 = param_2[0x30];
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) goto LAB_002a6d54;
  }
  else if (*(long *)(param_2 + 0x38) == 0) {
LAB_002a6d54:
    if ((param_2[0x48] & 1) == 0) {
      if (param_2[0x48] >> 1 == 0) goto LAB_002a6d70;
    }
    else if (*(long *)(param_2 + 0x50) == 0) {
LAB_002a6d70:
      if ((param_2[0x60] & 1) == 0) {
        uVar5 = (ulong)(param_2[0x60] >> 1);
      }
      else {
        uVar5 = *(ulong *)(param_2 + 0x68);
      }
      if (uVar5 == 0) goto LAB_002a6e44;
    }
  }
  puVar7 = (undefined8 *)param_6[9];
  if ((puVar7 == (undefined8 *)0x0) &&
     (puVar7 = (undefined8 *)FUN_0038ad50(PTR_DAT_047cc6e0,param_1), puVar7 != (undefined8 *)0x0)) {
    param_6[9] = puVar7;
  }
  bVar1 = param_2[0x30];
  if ((bVar1 & 1) == 0) {
    if (1 < bVar1) {
      pbVar9 = param_2 + 0x31;
      goto LAB_002a6dd0;
    }
  }
  else if (*(long *)(param_2 + 0x38) != 0) {
    pbVar9 = *(byte **)(param_2 + 0x40);
LAB_002a6dd0:
    sVar2 = strlen((char *)pbVar9);
    *puVar7 = pbVar9;
    puVar7[1] = sVar2;
  }
  if ((param_2[0x48] & 1) == 0) {
    if (1 < param_2[0x48]) {
      pbVar9 = param_2 + 0x49;
      goto LAB_002a6e04;
    }
  }
  else if (*(long *)(param_2 + 0x50) != 0) {
    pbVar9 = *(byte **)(param_2 + 0x58);
LAB_002a6e04:
    sVar2 = strlen((char *)pbVar9);
    puVar7[2] = pbVar9;
    puVar7[3] = sVar2;
  }
  if ((param_2[0x60] & 1) == 0) {
    if (param_2[0x60] < 2) goto LAB_002a6e44;
    param_2 = param_2 + 0x61;
  }
  else {
    if (*(long *)(param_2 + 0x68) == 0) goto LAB_002a6e44;
    param_2 = *(byte **)(param_2 + 0x70);
  }
  sVar2 = strlen((char *)param_2);
  puVar7[4] = param_2;
  puVar7[5] = sVar2;
LAB_002a6e44:
  uVar5 = *(ulong *)(param_3 + 8);
  pbVar9 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar9 = param_3 + 1;
    uVar5 = (ulong)(*param_3 >> 1);
  }
  param_6[4] = pbVar9;
  param_6[5] = uVar5;
  uVar5 = *(ulong *)(param_4 + 8);
  pbVar9 = *(byte **)(param_4 + 0x10);
  if ((*param_4 & 1) == 0) {
    pbVar9 = param_4 + 1;
    uVar5 = (ulong)(*param_4 >> 1);
  }
  param_6[6] = pbVar9;
  param_6[7] = uVar5;
  __s = (char *)FUN_003748f0();
  sVar2 = strlen(__s);
  *(undefined4 *)(param_6 + 0xf) = 7;
  param_6[0xd] = __s;
  param_6[0xe] = sVar2;
  local_60 = "envoy.lb.does_not_support_overprovisioning";
  uStack_58 = 0x2a;
  puVar6 = (ulong *)param_6[0xb];
  if ((puVar6 == (ulong *)0x0) || (puVar6[1] == puVar6[2])) {
    FUN_0038afc0(param_6 + 0xb,&local_60,10,param_1);
  }
  else {
    puVar7 = (undefined8 *)((*puVar6 & 0xfffffffffffffff8) + puVar6[1] * 0x10);
    puVar7[1] = 0x2a;
    *puVar7 = "envoy.lb.does_not_support_overprovisioning";
    puVar6[1] = puVar6[1] + 1;
  }
  return;
}


