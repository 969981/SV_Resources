/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e0f68; name: FUN_001e0f68
 */


int FUN_001e0f68(long *param_1,ulong param_2,ulong *param_3)

{
  ulong uVar1;
  size_t __n;
  undefined *__src;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  void *__dest;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  undefined7 local_68;
  undefined4 uStack_61;
  undefined8 local_58;
  
  lVar7 = *param_1;
  local_58 = 0;
  if (*(int *)(lVar7 + 0x15a0) == 1) {
    FUN_001db818(lVar7,"Moving trailers state machine from initialized to sending.\n");
    *(undefined4 *)(lVar7 + 0x15a0) = 2;
    lVar4 = FUN_001d4724();
    *(long *)(lVar7 + 0x1598) = lVar4;
    if (lVar4 == 0) {
      FUN_001db9c8(lVar7,"Unable to allocate trailing headers buffer !");
      return 0x1b;
    }
    *(undefined8 *)(lVar7 + 0x1590) = 0;
    FUN_001d14e0(lVar7,1);
    iVar3 = (**(code **)(lVar7 + 0xf38))(&local_58,*(undefined8 *)(lVar7 + 0xf30));
    FUN_001d14e0(lVar7,0);
    if (iVar3 != 0) {
      FUN_001db9c8(lVar7,"operation aborted by trailing headers callback");
      *param_3 = 0;
      iVar3 = 0x2a;
LAB_001e1048:
      FUN_001d4730(lVar7 + 0x1598);
      FUN_001e04f0(local_58);
      return iVar3;
    }
    iVar3 = FUN_001d4cb8(local_58,*(undefined8 *)(lVar7 + 0x1598),lVar7);
    if (iVar3 != 0) goto LAB_001e1048;
    FUN_001db818(lVar7,"Successfully compiled trailers.\r\n");
    FUN_001e04f0(local_58);
  }
  if (((*(byte *)(lVar7 + 0x660) >> 6 & 1) == 0) || (*(int *)(lVar7 + 0x15a0) != 0)) {
    if (*(int *)(lVar7 + 0x15a0) != 2) goto LAB_001e10b4;
    pcVar9 = FUN_001e1338;
    lVar4 = lVar7;
  }
  else {
    param_2 = param_2 - 0xc;
    *(long *)(lVar7 + 0x1e0) = *(long *)(lVar7 + 0x1e0) + 10;
LAB_001e10b4:
    pcVar9 = *(code **)(lVar7 + 0x1528);
    lVar4 = *(long *)(lVar7 + 0x1530);
  }
  FUN_001d14e0(lVar7,1);
  uVar5 = (*pcVar9)(*(undefined8 *)(lVar7 + 0x1e0),1,param_2,lVar4);
  FUN_001d14e0(lVar7,0);
  if (uVar5 == 0x10000001) {
    if ((*(byte *)(param_1[0x84] + 0x84) >> 4 & 1) == 0) {
      *(uint *)(lVar7 + 0x1c0) = *(uint *)(lVar7 + 0x1c0) | 0x20;
      if ((*(byte *)(lVar7 + 0x660) >> 6 & 1) != 0) {
        *(long *)(lVar7 + 0x1e0) = *(long *)(lVar7 + 0x1e0) + -10;
      }
      *param_3 = 0;
      return 0;
    }
    pcVar6 = "Read callback asked for PAUSE when not supported!";
LAB_001e117c:
    FUN_001db9c8(lVar7,pcVar6);
    return 0x1a;
  }
  if (uVar5 == 0x10000000) {
    FUN_001db9c8(lVar7,"operation aborted by callback");
    *param_3 = 0;
    return 0x2a;
  }
  if (param_2 < uVar5) {
    *param_3 = 0;
    pcVar6 = "read function returned funny value";
    goto LAB_001e117c;
  }
  uVar8 = uVar5;
  if ((*(ushort *)(lVar7 + 0x660) & 0x140) != 0x40) goto LAB_001e1310;
  local_68 = 0;
  uStack_61 = 0;
  uVar1 = *(ulong *)(lVar7 + 0xf40) & 0x840;
  __src = &DAT_03bdfd30;
  if (uVar1 != 0) {
    __src = &DAT_03c67c74;
  }
  if (*(int *)(lVar7 + 0x15a0) == 2) {
    iVar3 = 0;
    bVar2 = false;
LAB_001e124c:
    if (*(long *)(*(long *)(lVar7 + 0x1598) + 0x10) == *(long *)(lVar7 + 0x1590)) {
      FUN_001d4730(lVar7 + 0x1598);
      *(undefined4 *)(lVar7 + 0x15a0) = 3;
      *(undefined8 *)(lVar7 + 0xf30) = 0;
      *(undefined8 *)(lVar7 + 0xf38) = 0;
      *(ushort *)(lVar7 + 0x660) = *(ushort *)(lVar7 + 0x660) | 4;
      pcVar6 = "Signaling end of chunked upload after trailers.\n";
LAB_001e12cc:
      FUN_001db818(lVar7,pcVar6);
    }
    else if (uVar8 == (long)iVar3) {
LAB_001e12b8:
      pcVar6 = "Signaling end of chunked upload via terminating chunk.\n";
      *(ushort *)(lVar7 + 0x660) = *(ushort *)(lVar7 + 0x660) | 4;
      goto LAB_001e12cc;
    }
    if (!bVar2) goto LAB_001e1310;
  }
  else {
    iVar3 = FUN_001ce394(&local_68,0xb,"%zx%s",uVar5,__src);
    __dest = (void *)(*(long *)(lVar7 + 0x1e0) - (long)iVar3);
    uVar8 = uVar5 + (long)iVar3;
    *(void **)(lVar7 + 0x1e0) = __dest;
    memcpy(__dest,&local_68,(long)iVar3);
    if (((uVar5 == 0) && (*(long *)(lVar7 + 0xf38) != 0)) && (*(int *)(lVar7 + 0x15a0) == 0)) {
      *(undefined4 *)(lVar7 + 0x15a0) = 1;
      goto LAB_001e1310;
    }
    bVar2 = true;
    __n = 1;
    if (uVar1 == 0) {
      __n = 2;
    }
    memcpy((void *)(*(long *)(lVar7 + 0x1e0) + uVar8),__src,__n);
    if (*(int *)(lVar7 + 0x15a0) == 2) goto LAB_001e124c;
    if ((uVar5 == 0) && (*(int *)(lVar7 + 0x15a0) != 1)) {
      bVar2 = true;
      goto LAB_001e12b8;
    }
  }
  lVar7 = 1;
  if (uVar1 == 0) {
    lVar7 = 2;
  }
  uVar8 = uVar8 + lVar7;
LAB_001e1310:
  *param_3 = uVar8;
  return 0;
}


