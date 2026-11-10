/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e86dc; name: FUN_001e86dc
 */


undefined8
FUN_001e86dc(char *param_1,char *param_2,undefined4 param_3,int param_4,undefined8 *param_5)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  size_t sVar6;
  size_t sVar7;
  char *pcVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  long local_1a0 [8];
  long *local_160;
  undefined2 local_158;
  undefined2 local_156;
  undefined4 local_154;
  char local_150;
  char acStack_14f [255];
  
  uVar10 = *param_5;
  iVar3 = *(int *)(param_5 + 0x27);
  uVar4 = *(undefined4 *)((long)param_5 + (long)param_4 * 4 + 600);
  iVar5 = FUN_001c5a28(uVar10,0,1);
  if (iVar5 < 0) {
    FUN_001db9c8(uVar10,"Connection time-out");
    return 0x1c;
  }
  if ((*(byte *)((long)param_5 + 0x3fc) >> 5 & 1) != 0) {
    puVar2 = &DAT_03c5417f;
    if (iVar3 != 6) {
      puVar2 = &DAT_03c886bc;
    }
    FUN_001db818(*param_5,"SOCKS4%s: connecting to HTTP proxy %s port %d\n",puVar2,param_2,param_3);
  }
  FUN_001d9ae0(uVar4,0);
  FUN_001db818(uVar10,"SOCKS4 communication to %s:%d\n",param_2,param_3);
  local_158 = 0x104;
  local_156 = CONCAT11((char)param_3,(char)((uint)param_3 >> 8));
  if (iVar3 != 6) {
    iVar5 = FUN_001c947c(param_5,param_2,param_3,&local_160);
    if (iVar5 == -1) {
      return 5;
    }
    if (iVar5 == 1) {
      FUN_001c7820(param_5,&local_160);
    }
    if ((local_160 == (long *)0x0) || (lVar11 = *local_160, lVar11 == 0)) {
LAB_001e89dc:
      FUN_001db9c8(uVar10,"Failed to resolve \"%s\" for SOCKS4 connect.",param_2);
      return 6;
    }
    FUN_001c9004(lVar11,local_1a0,0x40);
    if (*(int *)(lVar11 + 4) != 2) {
      FUN_001db9c8(uVar10,"SOCKS4 connection to %s not supported\n",local_1a0);
      FUN_001c9694(uVar10,local_160);
      goto LAB_001e89dc;
    }
    local_154 = *(undefined4 *)(*(long *)(lVar11 + 0x20) + 4);
    FUN_001db818(uVar10,"SOCKS4 connect to IPv4 %s (locally resolved)\n",local_1a0);
    FUN_001c9694(uVar10,local_160);
  }
  local_150 = '\0';
  if (param_1 != (char *)0x0) {
    sVar6 = strlen(param_1);
    if (0xfd < sVar6) {
      pcVar8 = "Too long SOCKS proxy name, can\'t use!\n";
      goto LAB_001e89ac;
    }
    memcpy(&local_150,param_1,sVar6 + 1);
  }
  sVar6 = strlen(&local_150);
  if (iVar3 == 6) {
    local_154 = 0x1000000;
    sVar7 = strlen(param_2);
    lVar11 = sVar7 + 1;
    if (0x106 < (long)(lVar11 + sVar6 + 9)) goto LAB_001e88e4;
    strcpy(acStack_14f + sVar6,param_2);
  }
  else {
LAB_001e88e4:
    lVar11 = 0;
  }
  plVar1 = (long *)(lVar11 + sVar6 + 9);
  iVar5 = FUN_001dbbec(param_5,uVar4,&local_158,plVar1,&local_160);
  if ((iVar5 == 0) && (local_160 == plVar1)) {
    if ((iVar3 == 6) && (lVar11 == 0)) {
      sVar6 = strlen(param_2);
      iVar5 = FUN_001dbbec(param_5,uVar4,param_2,(long *)(sVar6 + 1),&local_160);
      if ((iVar5 != 0) || (local_160 != (long *)(sVar6 + 1))) goto LAB_001e8990;
    }
    iVar5 = FUN_001e85ec(param_5,uVar4,&local_158,8,local_1a0);
    if ((iVar5 == 0) && (local_1a0[0] == 8)) {
      if ((char)local_158 == '\0') {
        switch(local_158._1_1_) {
        case 0x5a:
          puVar2 = &DAT_03c5417f;
          if (iVar3 != 6) {
            puVar2 = &DAT_03c886bc;
          }
          FUN_001db818(uVar10,"SOCKS4%s request granted.\n",puVar2);
          FUN_001d9ae0(uVar4,1);
          return 0;
        case 0x5b:
          uVar9 = (uint)local_156 << 0x10;
          pcVar8 = 
          "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected or failed.";
          break;
        case 0x5c:
          uVar9 = (uint)local_156 << 0x10;
          pcVar8 = 
          "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because SOCKS server cannot connect to identd on the client."
          ;
          break;
        case 0x5d:
          uVar9 = (uint)local_156 << 0x10;
          pcVar8 = 
          "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because the client program and identd report different user-ids."
          ;
          break;
        default:
          uVar9 = (uint)local_156 << 0x10;
          pcVar8 = "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), Unknown.";
        }
        FUN_001db9c8(uVar10,pcVar8,(undefined1)local_154,local_154._1_1_,local_154._2_1_,
                     local_154._3_1_,((uVar9 & 0xff00ff00) >> 8 | uVar9 << 8) >> 0x10);
        return 7;
      }
      pcVar8 = "SOCKS4 reply has wrong version, version should be 4.";
    }
    else {
      pcVar8 = "Failed to receive SOCKS4 connect request ack.";
    }
  }
  else {
LAB_001e8990:
    pcVar8 = "Failed to send SOCKS4 connect request.";
  }
LAB_001e89ac:
  FUN_001db9c8(uVar10,pcVar8);
  return 7;
}


