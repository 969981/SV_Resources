/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ebc80; name: FUN_003ebc80
 */


/* WARNING: Removing unreachable block (ram,0x003ebd90) */
/* WARNING: Removing unreachable block (ram,0x003ebd94) */
/* WARNING: Removing unreachable block (ram,0x003ebdcc) */

int FUN_003ebc80(long *param_1,long param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  int iVar10;
  long local_50;
  undefined8 uStack_48;
  ulong local_40;
  
  if (param_3 < 0) {
    return -1;
  }
  iVar2 = FUN_003eb2b0();
  iVar10 = iVar2 + 0xe;
  if (-1 < iVar2 + 7) {
    iVar10 = iVar2 + 7;
  }
  iVar10 = iVar10 >> 3;
  if ((param_3 != -1) && (bVar1 = param_3 < iVar10, iVar10 = param_3, bVar1)) {
    uStack_48 = param_1[1];
    local_50 = *param_1;
    local_40 = param_1[2];
    uVar4 = uStack_48 & 0xffffffff;
    if (0 < (int)uStack_48) {
      do {
        if (*(int *)(local_50 + -4 + uVar4 * 4) != 0) goto LAB_003ebd28;
        uVar4 = uVar4 - 1;
      } while (1 < (int)uVar4 + 1);
      uVar4 = 0;
LAB_003ebd28:
      uVar7 = uStack_48 >> 0x20;
      uStack_48 = CONCAT44((int)uVar7,(int)uVar4);
    }
    if ((int)uVar4 == 0) {
      local_40 = local_40 & 0xffffffff00000000;
    }
    iVar3 = FUN_003eb2b0(&local_50);
    iVar2 = iVar3 + 0xe;
    if (-1 < iVar3 + 7) {
      iVar2 = iVar3 + 7;
    }
    if (param_3 < iVar2 >> 3) {
      return -1;
    }
  }
  iVar2 = *(int *)((long)param_1 + 0xc);
  if (iVar2 == 0) {
    FUN_00453300(param_2,(long)iVar10);
  }
  else if (iVar10 != 0) {
    uVar7 = (ulong)iVar10;
    uVar4 = uVar7;
    if (uVar7 < 2) {
      uVar4 = 1;
    }
    uVar6 = 0;
    pbVar8 = (byte *)(uVar7 + param_2);
    lVar9 = (long)(int)param_1[1] * -4;
    do {
      pbVar8 = pbVar8 + -1;
      uVar7 = uVar6 & 0xfffffffffffffffc;
      uVar5 = (uint)uVar6;
      uVar6 = uVar6 - ((long)((long)iVar2 * -4 + 1 + uVar6) >> 0x3f);
      uVar4 = uVar4 - 1;
      *pbVar8 = (byte)(lVar9 >> 0x3f) & (byte)(*(uint *)(*param_1 + uVar7) >> ((uVar5 & 3) << 3));
      lVar9 = lVar9 + 1;
    } while (uVar4 != 0);
  }
  return iVar10;
}


