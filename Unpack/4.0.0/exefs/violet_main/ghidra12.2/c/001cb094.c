/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001cb094; name: FUN_001cb094
 */


int FUN_001cb094(long *param_1,ulong param_2,undefined8 param_3,char *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined1 *puVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  long lVar8;
  byte bVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar10 = *param_1;
  bVar5 = (param_2 & 1) != 0;
  plVar1 = param_1 + 0x8e;
  if (bVar5) {
    plVar1 = param_1 + 0x8b;
  }
  plVar2 = param_1 + 0x43;
  if (bVar5) {
    plVar2 = param_1 + 0x31;
  }
  puVar12 = (undefined1 *)*plVar2;
  plVar2 = param_1 + 0x42;
  if (bVar5) {
    plVar2 = param_1 + 0x30;
  }
  puVar11 = (undefined1 *)*plVar2;
  lVar3 = lVar10 + 0x1248;
  plVar2 = (long *)(lVar10 + 0x11c8);
  if (bVar5) {
    lVar3 = lVar10 + 0x1268;
    plVar2 = (long *)(lVar10 + 0x1208);
  }
  FUN_001ec308(*plVar1);
  *plVar1 = 0;
  puVar4 = &DAT_03c886bc;
  if (puVar11 != (undefined1 *)0x0) {
    puVar4 = puVar11;
  }
  puVar11 = &DAT_03c886bc;
  if (puVar12 != (undefined1 *)0x0) {
    puVar11 = puVar12;
  }
  if (*plVar2 == 0) {
    bVar9 = *(byte *)(lVar3 + 0x18) & 0xfe;
LAB_001cb208:
    iVar6 = 0;
    *(byte *)(lVar3 + 0x18) = bVar9;
  }
  else {
    if (((*(byte *)(lVar3 + 0x18) >> 2 & 1) == 0) ||
       (pcVar7 = strchr(param_4,0x3f), pcVar7 == (char *)0x0)) {
      lVar8 = FUN_001ec328(param_4);
    }
    else {
      lVar8 = FUN_001ce400(&DAT_03bdfd1b,(long)pcVar7 - (long)param_4,param_4);
    }
    if (lVar8 != 0) {
      iVar6 = FUN_001e9c68(lVar10,puVar4,puVar11,param_3,lVar8,plVar2,&local_68,auStack_70);
      FUN_001ec308(lVar8);
      if (iVar6 != 0) {
        return iVar6;
      }
      pcVar7 = "Proxy-";
      if ((param_2 & 1) == 0) {
        pcVar7 = "";
      }
      lVar10 = FUN_001ce400("%sAuthorization: Digest %s\r\n",pcVar7,local_68);
      *plVar1 = lVar10;
      FUN_001ec308(local_68);
      if (*plVar1 != 0) {
        bVar9 = *(byte *)(lVar3 + 0x18) | 1;
        goto LAB_001cb208;
      }
    }
    iVar6 = 0x1b;
  }
  return iVar6;
}


