/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c6470; name: FUN_001c6470
 */


int FUN_001c6470(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  int *piVar9;
  size_t sVar10;
  char *pcVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  char *__s;
  undefined8 uVar15;
  int iVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_448 [12];
  undefined1 auStack_43c [48];
  undefined4 local_40c;
  int local_408;
  int local_404;
  undefined4 local_3fc;
  undefined1 auStack_3f8 [260];
  undefined1 auStack_2f4 [128];
  undefined4 local_274;
  undefined1 auStack_270 [256];
  long *local_170;
  undefined4 local_168;
  
  lVar12 = *param_1;
  *param_3 = 0xffffffff;
  iVar5 = FUN_001c6b58(param_1,param_2,&local_408,&local_40c);
  if (iVar5 != 0) {
    return 0;
  }
  uVar8 = FUN_001c5d78(auStack_3f8,auStack_43c,auStack_448);
  if ((uVar8 & 1) == 0) {
    piVar9 = __errno_location();
    iVar5 = *piVar9;
    piVar9 = __errno_location();
    uVar15 = FUN_001e0bc8(*piVar9,&local_168,0x80);
    FUN_001db9c8(lVar12,"sa_addr inet_ntop() failed with errno %d: %s",iVar5,uVar15);
    FUN_001c62cc(param_1,local_40c);
    return 0;
  }
  FUN_001db818(lVar12,"  Trying %s...\n",auStack_43c);
  if ((local_408 == 2) && (local_404 == 1)) {
    FUN_001c6d10(param_1,local_40c);
    if ((*(ulong *)(lVar12 + 0xf40) >> 0x2c & 1) != 0) {
      local_168 = (uint)(*(ulong *)(lVar12 + 0xf40) >> 0x2c) & 1;
      iVar5 = nnsocketSetSockOpt(local_40c,0xffff,8,&local_168,4);
      if (iVar5 < 0) {
        FUN_001db818(lVar12,"Failed to set SO_KEEPALIVE on fd %d\n",local_40c);
      }
    }
  }
  else {
    FUN_001c6d10(param_1,local_40c);
  }
  if (*(long *)(lVar12 + 0x748) == 0) {
LAB_001c6620:
    bVar3 = false;
  }
  else {
    bVar3 = true;
    FUN_001d14e0(lVar12,1);
    iVar5 = (**(code **)(lVar12 + 0x748))(*(undefined8 *)(lVar12 + 0x750),local_40c,0);
    FUN_001d14e0(lVar12,0);
    if (iVar5 == 0) goto LAB_001c6620;
    if (iVar5 != 2) {
      FUN_001c62cc(param_1,local_40c);
      return 0x2a;
    }
  }
  if (local_408 != 2) goto LAB_001c67ec;
  uVar6 = FUN_001cb394(auStack_3f8);
  lVar13 = *param_1;
  local_170 = (long *)0x0;
  uVar1 = *(ushort *)(lVar13 + 0x700);
  uVar14 = (uint)uVar1;
  iVar5 = *(int *)(lVar13 + 0x704);
  __s = *(char **)(lVar13 + 0xcc0);
  if ((uVar1 == 0) && (__s == (char *)0x0)) goto LAB_001c67ec;
  memset(&local_168,0,0x100);
  if ((__s == (char *)0x0) || (sVar10 = strlen(__s), 0xfe < sVar10)) {
    local_168._0_2_ = CONCAT11(2,(undefined1)local_168);
LAB_001c66d4:
    uVar4 = nnsocketInetHtons(uVar1);
    uVar15 = 0x10;
    local_168 = CONCAT22(uVar4,(undefined2)local_168);
LAB_001c66e4:
    iVar7 = nnsocketBind(local_40c,&local_168,uVar15);
    if (iVar7 < 0) {
      iVar5 = iVar5 + 1;
      do {
        iVar5 = iVar5 + -1;
        if (iVar5 < 2) {
          uVar8 = nnsocketGetLastErrno();
          *(int *)(lVar13 + 0x11c0) = (int)uVar8;
          uVar15 = FUN_001e0bc8(uVar8,auStack_270,0x80);
          FUN_001db9c8(lVar13,"bind failed with errno %d: %s",uVar8 & 0xffffffff,uVar15);
          goto LAB_001c6a2c;
        }
        FUN_001db818(lVar13,"Bind to local port %hu failed, trying next\n",uVar14 & 0xffff);
        uVar14 = uVar14 + 1;
        if (local_168._1_1_ == '\x02') {
          uVar4 = nnsocketInetNtohs(uVar14);
          local_168 = CONCAT22(uVar4,(undefined2)local_168);
        }
        iVar7 = nnsocketBind(local_40c,&local_168,uVar15);
      } while (iVar7 < 0);
    }
    local_274 = 0x100;
    memset(auStack_270,0,0x100);
    iVar5 = nnsocketGetSockName(local_40c,auStack_270,&local_274);
    if (-1 < iVar5) {
      FUN_001db818(lVar13,"Local port: %hu\n",uVar14 & 0xffff);
      *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) | 0x1000000;
LAB_001c67ec:
      FUN_001d9ae0(local_40c,1);
      auVar18 = FUN_001e0dfc();
      *(undefined1 (*) [16])(param_1 + 0x80) = auVar18;
      if (1 < (int)param_1[0x82]) {
        FUN_001cea34(lVar12,param_1[0x83],3);
      }
      if ((((bVar3) || (*(int *)((long)param_1 + 0xbc) != 1)) ||
          (((*(byte *)((long)param_1 + 0x3ff) >> 3 & 1) == 0 &&
           (iVar5 = nnsocketConnect(local_40c,auStack_3f8,local_3fc), iVar5 != -1)))) ||
         ((iVar5 = nnsocketGetLastErrno(), iVar5 == 0xb || (iVar5 == 0x73)))) {
        *param_3 = local_40c;
        return 0;
      }
      uVar15 = FUN_001e0bc8(iVar5,&local_168,0x80);
      FUN_001db818(lVar12,"Immediate connect fail for %s: %s\n",auStack_43c,uVar15);
      *(int *)(lVar12 + 0x11c0) = iVar5;
      FUN_001c62cc(param_1,local_40c);
      return 7;
    }
    uVar8 = nnsocketGetLastErrno();
    *(int *)(lVar13 + 0x11c0) = (int)uVar8;
    uVar15 = FUN_001e0bc8(uVar8,auStack_2f4,0x80);
    FUN_001db9c8(lVar13,"getsockname() failed with errno %d: %s",uVar8 & 0xffffffff,uVar15);
    iVar16 = 0x2d;
    goto LAB_001c6a30;
  }
  memset(auStack_270,0,0x100);
  iVar7 = strncmp("if!",__s,3);
  if (iVar7 != 0) {
    iVar7 = strncmp("host!",__s,5);
    if (iVar7 != 0) {
      bVar2 = false;
      goto LAB_001c68f0;
    }
    __s = __s + 5;
    goto LAB_001c6960;
  }
  __s = __s + 3;
  bVar2 = true;
LAB_001c68f0:
  iVar7 = FUN_001cb39c(2,uVar6,(int)param_1[0x17],__s,auStack_270,0x100);
  if (iVar7 == 2) {
    FUN_001db818(lVar13,"Local Interface %s is ip %s using address family %i\n",__s,auStack_270,2);
LAB_001c69e4:
    iVar7 = FUN_001cb444(2,auStack_270,(ulong)&local_168 | 4);
    if (0 < iVar7) {
      local_168._0_2_ = CONCAT11(2,(undefined1)local_168);
      goto LAB_001c66d4;
    }
    uVar15 = 0;
    goto LAB_001c66e4;
  }
  iVar16 = 1;
  if (iVar7 == 1) goto LAB_001c6a30;
  if (iVar7 == 0) {
    if (!bVar2) {
LAB_001c6960:
      lVar17 = param_1[0x86];
      param_1[0x86] = 1;
      iVar7 = FUN_001c947c(param_1,__s,0,&local_170);
      if (iVar7 == 1) {
        FUN_001c7820(param_1,&local_170);
      }
      param_1[0x86] = lVar17;
      if (local_170 != (long *)0x0) {
        FUN_001c9004(*local_170,auStack_270,0x100);
        FUN_001db818(lVar13,"Name \'%s\' family %i resolved to \'%s\' family %i\n",__s,2,auStack_270
                     ,*(undefined4 *)(*local_170 + 4));
        FUN_001c9694(lVar13,local_170);
        goto LAB_001c69e4;
      }
      goto LAB_001c6a0c;
    }
    pcVar11 = "Couldn\'t bind to interface \'%s\'";
  }
  else {
    if (!bVar2) goto LAB_001c6960;
LAB_001c6a0c:
    pcVar11 = "Couldn\'t bind to \'%s\'";
    *(ushort *)(lVar13 + 0x15a4) = *(ushort *)(lVar13 + 0x15a4) & 0xfff7;
  }
  FUN_001db9c8(lVar13,pcVar11,__s);
LAB_001c6a2c:
  iVar16 = 0x2d;
LAB_001c6a30:
  FUN_001c62cc(param_1,local_40c);
  iVar5 = 7;
  if (iVar16 != 1) {
    iVar5 = iVar16;
  }
  return iVar5;
}


