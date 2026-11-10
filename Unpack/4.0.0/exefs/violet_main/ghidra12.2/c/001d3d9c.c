/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d3d9c; name: FUN_001d3d9c
 */


ulong FUN_001d3d9c(long *param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar6 = *param_1;
  uVar2 = 0xffffffffffffffbf;
  if (param_1[0x45] != 0) {
    uVar2 = 0xffffffffffffffff;
  }
  iVar3 = *(int *)(lVar6 + 0x180);
  if (iVar3 - 100U < 100) {
    return 0;
  }
  if ((*(byte *)(lVar6 + 0x15a4) >> 5 & 1) != 0) {
    return (ulong)(-(*(byte *)(lVar6 + 0xf42) & 1) & 0x16);
  }
  if (((*(uint *)((long)param_1 + 0x3fc) >> 7 & 1) == 0) && (param_1[0x45] == 0)) {
    uVar7 = 0;
  }
  else if ((iVar3 == 0x191) ||
          ((uVar7 = 0, iVar3 < 300 && ((*(uint *)((long)param_1 + 0x3fc) >> 0xf & 1) != 0)))) {
    uVar4 = FUN_001d3fa0(lVar6 + 0x1248,uVar2);
    uVar7 = uVar4 & 0xffffffff;
    if ((uVar4 & 1) == 0) {
      *(ushort *)(lVar6 + 0x15a4) = *(ushort *)(lVar6 + 0x15a4) | 0x20;
    }
    if ((*(long *)(lVar6 + 0x1250) == 8) && (0xb < (int)param_1[0x46])) {
      FUN_001db818(lVar6,"Forcing HTTP/1.1 for NTLM");
      FUN_001c6c60(param_1,1);
      *(undefined8 *)(*param_1 + 0xa40) = 2;
    }
  }
  if (((*(uint *)((long)param_1 + 0x3fc) >> 8 & 1) == 0) ||
     ((*(int *)(lVar6 + 0x180) != 0x197 &&
      (((*(uint *)((long)param_1 + 0x3fc) >> 0xf & 1) == 0 || (299 < *(int *)(lVar6 + 0x180))))))) {
LAB_001d3ec8:
    if ((uVar7 & 1) == 0) {
      if ((((*(int *)(lVar6 + 0x180) < 300) &&
           (pbVar1 = (byte *)(lVar6 + 0x1260), (*pbVar1 & 1) == 0)) &&
          (*(char *)((long)param_1 + 0x3fd) < '\0')) &&
         ((*(int *)(lVar6 + 0xa38) != 1 && (*(int *)(lVar6 + 0xa38) != 6)))) {
        lVar5 = FUN_001ec328(*(undefined8 *)(lVar6 + 0xf48));
        *(long *)(lVar6 + 0x1d0) = lVar5;
        if (lVar5 == 0) {
          return 0x1b;
        }
        *pbVar1 = *pbVar1 | 1;
      }
      goto LAB_001d3f6c;
    }
  }
  else {
    uVar4 = FUN_001d3fa0(lVar6 + 0x1268,0xffffffffffffffbf);
    if ((uVar4 & 1) == 0) {
      *(ushort *)(lVar6 + 0x15a4) = *(ushort *)(lVar6 + 0x15a4) | 0x20;
      goto LAB_001d3ec8;
    }
  }
  if (((*(int *)(lVar6 + 0xa38) != 1) && (*(int *)(lVar6 + 0xa38) != 6)) &&
     (((*(byte *)((long)param_1 + 0x3fe) & 1) == 0 &&
      (uVar7 = FUN_001d401c(param_1), (int)uVar7 != 0)))) {
    return uVar7;
  }
  FUN_001ec308(*(undefined8 *)(lVar6 + 0x1d0));
  *(undefined8 *)(lVar6 + 0x1d0) = 0;
  lVar5 = FUN_001ec328(*(undefined8 *)(lVar6 + 0xf48));
  *(long *)(lVar6 + 0x1d0) = lVar5;
  if (lVar5 == 0) {
    return 0x1b;
  }
LAB_001d3f6c:
  uVar7 = FUN_001d4100(param_1);
  if ((int)uVar7 == 0) {
    return uVar7;
  }
  FUN_001db9c8(lVar6,"The requested URL returned error: %d",*(undefined4 *)(lVar6 + 0x180));
  return 0x16;
}


