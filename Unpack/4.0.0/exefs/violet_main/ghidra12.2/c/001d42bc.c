/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d42bc; name: FUN_001d42bc
 */


int FUN_001d42bc(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5
                )

{
  char *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  size_t sVar7;
  byte bVar8;
  long lVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 uVar12;
  long local_58;
  undefined8 local_38;
  
  lVar9 = *(long *)(param_2 + 8);
  uVar10 = *param_1;
  if (lVar9 == 1) {
    if ((param_5 & 1) == 0) {
      if (((*(uint *)((long)param_1 + 0x3fc) >> 7 & 1) != 0) &&
         (lVar9 = FUN_001e0eb4(param_1,"Authorization"), lVar9 == 0)) goto LAB_001d446c;
LAB_001d4360:
      pcVar11 = (char *)0x0;
LAB_001d4364:
      *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 1;
      goto LAB_001d4370;
    }
    if (((*(uint *)((long)param_1 + 0x3fc) >> 8 & 1) == 0) ||
       (lVar9 = FUN_001d3c30(param_1,"Proxy-authorization"), lVar9 != 0)) goto LAB_001d4360;
LAB_001d446c:
    bVar5 = (param_5 & 1) == 0;
    local_38 = 0;
    lVar9 = 0x458;
    if (bVar5) {
      lVar9 = 0x470;
    }
    local_58 = 0;
    uVar12 = *param_1;
    lVar3 = 0x188;
    if (bVar5) {
      lVar3 = 0x218;
    }
    lVar4 = 0x180;
    if (bVar5) {
      lVar4 = 0x210;
    }
    pcVar11 = (char *)FUN_001ce400("%s:%s",*(undefined8 *)((long)param_1 + lVar4),
                                   *(undefined8 *)((long)param_1 + lVar3));
    if (pcVar11 != (char *)0x0) {
      sVar7 = strlen(pcVar11);
      iVar6 = FUN_001cae34(uVar12,pcVar11,sVar7,&local_58,&local_38);
      if (iVar6 == 0) {
        if (local_58 == 0) {
          iVar6 = 9;
        }
        else {
          FUN_001ec308(*(undefined8 *)((long)param_1 + lVar9));
          pcVar1 = "Proxy-";
          if ((param_5 & 1) == 0) {
            pcVar1 = "";
          }
          uVar12 = FUN_001ce400("%sAuthorization: Basic %s\r\n",pcVar1,local_58);
          *(undefined8 *)((long)param_1 + lVar9) = uVar12;
          FUN_001ec308(local_58);
          iVar6 = 0x1b;
          if (*(long *)((long)param_1 + lVar9) != 0) {
            iVar6 = 0;
          }
        }
      }
      FUN_001ec308(pcVar11);
      if (iVar6 != 0) {
        return iVar6;
      }
      pcVar11 = "Basic";
      goto LAB_001d4364;
    }
LAB_001d4538:
    iVar6 = 0x1b;
  }
  else {
    if (lVar9 == 2) {
      iVar6 = FUN_001cb094(param_1,param_5 & 1);
      if (iVar6 != 0) {
        return iVar6;
      }
      pcVar11 = "Digest";
LAB_001d4370:
      lVar9 = *(long *)(param_2 + 8);
    }
    else {
      pcVar11 = (char *)0x0;
    }
    if (lVar9 == 0x40) {
      if ((((param_5 & 1) == 0) && (param_1[0x45] != 0)) &&
         (lVar9 = FUN_001e0eb4(param_1,"Authorization:"), lVar9 == 0)) {
        FUN_001ec308(param_1[0x8e]);
        lVar9 = FUN_001ce400("Authorization: Bearer %s\r\n",param_1[0x45]);
        param_1[0x8e] = lVar9;
        if (lVar9 == 0) goto LAB_001d4538;
        pcVar11 = "Bearer";
      }
      *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 1;
    }
    if (pcVar11 == (char *)0x0) {
      bVar8 = *(byte *)(param_2 + 0x18) & 0xfd;
    }
    else {
      bVar5 = (param_5 & 1) == 0;
      lVar9 = 0x180;
      if (bVar5) {
        lVar9 = 0x210;
      }
      pcVar1 = "Proxy";
      if (bVar5) {
        pcVar1 = "Server";
      }
      puVar2 = &DAT_03c886bc;
      if (*(undefined1 **)((long)param_1 + lVar9) != (undefined1 *)0x0) {
        puVar2 = *(undefined1 **)((long)param_1 + lVar9);
      }
      FUN_001db818(uVar10,"%s auth using %s with user \'%s\'\n",pcVar1,pcVar11,puVar2);
      bVar8 = ((*(byte *)(param_2 + 0x18) & 1) << 1 | *(byte *)(param_2 + 0x18) & 0xfd) ^ 2;
    }
    iVar6 = 0;
    *(byte *)(param_2 + 0x18) = bVar8;
  }
  return iVar6;
}


