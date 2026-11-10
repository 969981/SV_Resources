/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e8b10; name: FUN_001e8b10
 */


undefined8
FUN_001e8b10(ulong param_1,char *param_2,char *param_3,uint param_4,int param_5,long *param_6)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  size_t __n;
  size_t __n_00;
  size_t __n_01;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  char cVar11;
  ulong uVar12;
  undefined1 auStack_318 [64];
  long *local_2d8;
  long local_2d0;
  undefined8 local_2c8;
  undefined2 local_2c0;
  char local_2be [6];
  undefined2 local_2b8;
  undefined1 local_2b6 [598];
  
  lVar10 = param_6[0x27];
  lVar9 = *param_6;
  bVar2 = (int)lVar10 == 5;
  uVar1 = *(undefined4 *)((long)param_6 + (long)param_5 * 4 + 600);
  __n = strlen(param_3);
  uVar12 = *(ulong *)(lVar9 + 0x6c8);
  if ((*(byte *)((long)param_6 + 0x3fc) >> 5 & 1) != 0) {
    FUN_001db818(lVar9,"SOCKS5: connecting to HTTP proxy %s port %d\n",param_3,param_4);
  }
  if ((0xff < __n) && ((int)lVar10 != 5)) {
    FUN_001db818(*param_6,
                 "SOCKS5: server resolving disabled for hostnames of length > 255 [actual len=%zu]\n"
                 ,__n);
    bVar2 = true;
  }
  iVar3 = FUN_001c5a28(lVar9,0,1);
  if (iVar3 < 0) {
    pcVar7 = "Connection time-out";
LAB_001e8c28:
    FUN_001db9c8(lVar9,pcVar7);
    return 0x1c;
  }
  FUN_001d9ae0(uVar1,1);
  uVar4 = FUN_001db41c(0xffffffff,0xffffffff,uVar1,iVar3);
  if (uVar4 == 0) {
    lVar9 = *param_6;
    pcVar7 = "SOCKS5: connection timeout";
    goto LAB_001e8c28;
  }
  if (uVar4 == 0xffffffff) {
    lVar9 = *param_6;
    pcVar7 = "SOCKS5: no connection here";
    goto LAB_001e8d30;
  }
  if ((uVar4 >> 2 & 1) != 0) {
    lVar9 = *param_6;
    pcVar7 = "SOCKS5: error occurred during connection";
    goto LAB_001e8d30;
  }
  if ((uVar12 & 0xfffffffffffffffa) != 0) {
    FUN_001db818(*param_6,"warning: unsupported value passed to CURLOPT_SOCKS5_AUTH: %lu\n",uVar12);
  }
  pcVar7 = (char *)(-(uVar12 & 1) & param_1);
  local_2be[0] = '\0';
  if (pcVar7 == (char *)0x0) {
    cVar11 = '\x01';
  }
  else {
    cVar11 = '\x02';
    local_2be[1] = '\x02';
  }
  local_2c0 = CONCAT11(cVar11,5);
  FUN_001d9ae0(uVar1,0);
  FUN_001db818(lVar9,"SOCKS5 communication to %s:%d\n",param_3,param_4);
  iVar5 = FUN_001dbbec(param_6,uVar1,&local_2c0,cVar11 + '\x02',&local_2d0);
  if ((iVar5 != 0) || (local_2d0 != (ulong)local_2c0._1_1_ + 2)) {
    pcVar7 = "Unable to send initial SOCKS5 request.";
    goto LAB_001e8d30;
  }
  FUN_001d9ae0(uVar1,1);
  uVar4 = FUN_001db41c(uVar1,0xffffffff,0xffffffff,iVar3);
  if (uVar4 == 0) {
    lVar9 = *param_6;
    pcVar7 = "SOCKS5 read timeout";
    goto LAB_001e8c28;
  }
  if (uVar4 == 0xffffffff) {
    lVar9 = *param_6;
    pcVar7 = "SOCKS5 nothing to read";
    goto LAB_001e8d30;
  }
  if ((uVar4 >> 2 & 1) != 0) {
    FUN_001db9c8(*param_6,"SOCKS5 read error occurred");
    return 0x38;
  }
  FUN_001d9ae0(uVar1,0);
  iVar3 = FUN_001e85ec(param_6,uVar1,&local_2c0,2,&local_2c8);
  if ((iVar3 != 0) || (local_2c8 != 2)) {
    pcVar7 = "Unable to receive initial SOCKS5 response.";
    goto LAB_001e8d30;
  }
  if ((char)local_2c0 != '\x05') {
    pcVar7 = "Received invalid version in initial SOCKS5 response.";
    goto LAB_001e8d30;
  }
  if (local_2c0._1_1_ < 2) {
    if (local_2c0._1_1_ != 0) {
      if (local_2c0._1_1_ == 1) {
        pcVar7 = "SOCKS5 GSSAPI per-message authentication is not supported.";
        goto LAB_001e8d30;
      }
LAB_001e8e74:
      pcVar7 = "Undocumented SOCKS5 mode attempted to be used by server.";
      goto LAB_001e8d30;
    }
  }
  else {
    if (local_2c0._1_1_ == 0xff) {
      if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
        pcVar7 = 
        "No authentication method was acceptable. (It is quite likely that the SOCKS5 server wanted a username/password, since none was supplied to the server on this connection.)"
        ;
      }
      else {
        pcVar7 = "No authentication method was acceptable.";
      }
      goto LAB_001e8d30;
    }
    if (local_2c0._1_1_ != 2) goto LAB_001e8e74;
    if ((param_2 == (char *)0x0) || (pcVar7 == (char *)0x0)) {
      __n_01 = 0;
      local_2c0 = 1;
      __n_00 = 0;
    }
    else {
      __n_00 = strlen(pcVar7);
      __n_01 = strlen(param_2);
      local_2c0 = CONCAT11((char)__n_00,1);
      if (__n_00 != 0) {
        memcpy((void *)((ulong)&local_2c0 | 2),pcVar7,__n_00);
      }
    }
    local_2be[__n_00] = (char)__n_01;
    if ((param_2 != (char *)0x0) && (__n_01 != 0)) {
      memcpy(local_2be + __n_00 + 1,param_2,__n_01);
    }
    lVar10 = __n_00 + 3 + __n_01;
    iVar3 = FUN_001dbbec(param_6,uVar1,&local_2c0,lVar10,&local_2d0);
    if ((iVar3 != 0) || (lVar10 != local_2d0)) {
      pcVar7 = "Failed to send SOCKS5 sub-negotiation request.";
      goto LAB_001e8d30;
    }
    iVar3 = FUN_001e85ec(param_6,uVar1,&local_2c0,2,&local_2c8);
    if ((iVar3 != 0) || (local_2c8 != 2)) {
      pcVar7 = "Unable to receive SOCKS5 sub-negotiation response.";
      goto LAB_001e8d30;
    }
    if (local_2c0._1_1_ != '\0') {
      FUN_001db9c8(lVar9,"User was rejected by the SOCKS5 server (%d %d).",(char)local_2c0);
      return 7;
    }
  }
  local_2c0 = 0x105;
  local_2be[0] = '\0';
  if (bVar2) {
    iVar3 = FUN_001c947c(param_6,param_3,param_4,&local_2d8);
    if (iVar3 == -1) {
      return 6;
    }
    if ((iVar3 == 1) && (uVar6 = FUN_001c7820(param_6,&local_2d8), (int)uVar6 != 0)) {
      return uVar6;
    }
    if ((local_2d8 == (long *)0x0) || (lVar10 = *local_2d8, lVar10 == 0)) {
LAB_001e9118:
      FUN_001db9c8(lVar9,"Failed to resolve \"%s\" for SOCKS5 connect.",param_3);
      return 6;
    }
    FUN_001c9004(lVar10,auStack_318,0x40);
    if (*(int *)(lVar10 + 4) == 2) {
      local_2be[1] = '\x01';
      lVar8 = *(long *)(lVar10 + 0x20);
      lVar10 = 0;
      do {
        local_2be[lVar10 + 2] = *(char *)(lVar8 + 4 + lVar10);
        lVar10 = lVar10 + 1;
      } while (lVar10 != 4);
      FUN_001db818(lVar9,"SOCKS5 connect to IPv4 %s (locally resolved)\n",auStack_318);
      bVar2 = false;
      lVar10 = 8;
    }
    else {
      FUN_001db9c8(lVar9,"SOCKS5 connection to %s not supported\n",auStack_318);
      bVar2 = true;
      lVar10 = 3;
    }
    FUN_001c9694(lVar9,local_2d8);
    if (bVar2) goto LAB_001e9118;
  }
  else {
    local_2be[1] = '\x03';
    local_2be[2] = (char)__n;
    memcpy(local_2be + 3,param_3,__n);
    lVar10 = __n + 5;
  }
  *(ushort *)(local_2be + lVar10 + -2) =
       (ushort)(param_4 >> 8) & 0xff | (ushort)((param_4 & 0xff00ff) << 8);
  iVar3 = FUN_001dbbec(param_6,uVar1,&local_2c0,lVar10 + 2,&local_2d0);
  if ((iVar3 == 0) && (lVar10 + 2 == local_2d0)) {
    iVar3 = FUN_001e85ec(param_6,uVar1,&local_2c0,10,&local_2c8);
    if ((iVar3 == 0) && (local_2c8 == 10)) {
      if ((char)local_2c0 != '\x05') {
        pcVar7 = "SOCKS5 reply has wrong version, version should be 5.";
        goto LAB_001e8d30;
      }
      if (local_2be[1] == '\x04') {
        lVar10 = 0x16;
      }
      else {
        if (local_2be[1] != '\x03') {
          lVar10 = 10;
          goto LAB_001e9178;
        }
        lVar10 = (ulong)(byte)local_2be[2] + 7;
        if ((ulong)(byte)local_2be[2] < 4) goto LAB_001e9178;
      }
      iVar3 = FUN_001e85ec(param_6,uVar1,local_2b6,lVar10 + -10,&local_2c8);
      if ((iVar3 == 0) && (lVar10 + -10 == local_2c8)) {
LAB_001e9178:
        if (local_2c0._1_1_ == '\0') {
          FUN_001db818(lVar9,"SOCKS5 request granted.\n");
          FUN_001d9ae0(uVar1,1);
          return 0;
        }
        if (local_2be[1] == '\x04') {
          pcVar7 = 
          "Can\'t complete SOCKS5 connection to %02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%d. (%d)"
          ;
          uVar4 = (uint)(byte)local_2b8;
        }
        else {
          if (local_2be[1] == '\x03') {
            cVar11 = local_2be[lVar10 + -4];
            local_2be[lVar10 + -4] = '\0';
            FUN_001db9c8(lVar9,"Can\'t complete SOCKS5 connection to %s:%d. (%d)",local_2be + 3,
                         CONCAT11(cVar11,local_2be[lVar10 + -3]),local_2c0._1_1_);
            local_2be[lVar10 + -4] = cVar11;
            return 7;
          }
          if (local_2be[1] != '\x01') {
            return 7;
          }
          pcVar7 = "Can\'t complete SOCKS5 connection to %d.%d.%d.%d:%d. (%d)";
          uVar4 = ((local_2b8 & 0xff00) << 8 | (uint)local_2b8 << 0x18) >> 0x10;
          local_2b8._1_1_ = local_2c0._1_1_;
        }
        FUN_001db9c8(lVar9,pcVar7,local_2be[2],local_2be[3],local_2be[4],local_2be[5],uVar4,
                     local_2b8._1_1_);
        return 7;
      }
    }
    pcVar7 = "Failed to receive SOCKS5 connect request ack.";
  }
  else {
    pcVar7 = "Failed to send SOCKS5 connect request.";
  }
LAB_001e8d30:
  FUN_001db9c8(lVar9,pcVar7);
  return 7;
}


