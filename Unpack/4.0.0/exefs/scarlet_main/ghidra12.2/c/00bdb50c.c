/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bdb50c; name: FUN_00bdb50c
 */


/* WARNING: Type propagation algorithm not settling */

byte * FUN_00bdb50c(long param_1,undefined8 param_2,byte *param_3)

{
  int iVar1;
  byte bVar2;
  long *plVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != 0) {
    iVar13 = 0;
    do {
      plVar3 = *(long **)(*(long *)(param_1 + 0x28) + (long)iVar13 * 8 + 8);
      pbVar10 = param_3 + 1;
      *param_3 = 0x12;
      uVar4 = *(uint *)((long)plVar3 + 0x14);
      if (0x7f < uVar4) {
        pbVar11 = pbVar10;
        uVar6 = uVar4;
        do {
          uVar4 = uVar6 >> 7;
          uVar9 = uVar6 >> 0xe;
          pbVar10 = pbVar11 + 1;
          *pbVar11 = (byte)uVar6 | 0x80;
          pbVar11 = pbVar10;
          uVar6 = uVar4;
        } while (uVar9 != 0);
      }
      *pbVar10 = (byte)uVar4;
      param_3 = (byte *)(**(code **)(*plVar3 + 0x80))(plVar3,0,pbVar10 + 1);
      iVar13 = iVar13 + 1;
    } while (iVar13 != iVar1);
  }
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 >> 1 & 1) != 0) {
    pbVar10 = *(byte **)(param_1 + 0x30);
    pbVar11 = param_3 + 1;
    *param_3 = 0x1a;
    uVar4 = (uint)(*pbVar10 >> 1);
    if ((*pbVar10 & 1) != 0) {
      uVar4 = *(uint *)(pbVar10 + 8);
    }
    if (0x7f < uVar4) {
      pbVar12 = pbVar11;
      uVar6 = uVar4;
      do {
        uVar4 = uVar6 >> 7;
        uVar9 = uVar6 >> 0xe;
        pbVar11 = pbVar12 + 1;
        *pbVar12 = (byte)uVar6 | 0x80;
        pbVar12 = pbVar11;
        uVar6 = uVar4;
      } while (uVar9 != 0);
    }
    *pbVar11 = (byte)uVar4;
    pbVar12 = *(byte **)(pbVar10 + 0x10);
    uVar6 = (uint)(*pbVar10 >> 1);
    if ((*pbVar10 & 1) == 0) {
      pbVar12 = pbVar10 + 1;
    }
    else {
      uVar6 = (uint)*(undefined8 *)(pbVar10 + 8);
    }
    memcpy(pbVar11 + 1,pbVar12,(long)(int)uVar6);
    uVar4 = *(uint *)(param_1 + 0x10);
    param_3 = pbVar11 + 1 + (int)uVar6;
  }
  if ((uVar4 >> 2 & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 0x38);
    pbVar10 = (byte *)((long)param_3 + 1);
    *param_3 = 0x20;
    bVar2 = (byte)(uVar7 >> 0x38);
    uVar6 = (uint)uVar7;
    uVar9 = (uint)(uVar7 >> 0x1c);
    uVar4 = (uint)(uVar7 >> 0x20);
    if (bVar2 == 0) {
      if (uVar9 != 0) {
        if (uVar9 >> 0xe != 0) {
          if (0x1fffff < uVar9) {
            lVar8 = 8;
            goto LAB_00bdb690;
          }
          lVar8 = 7;
          goto LAB_00bdb69c;
        }
        if (0x7f < uVar9) {
          lVar8 = 6;
          goto LAB_00bdb6a8;
        }
        lVar8 = 5;
        goto LAB_00bdb6b4;
      }
      if ((uVar7 >> 0xe & 0x3ffff) != 0) {
        if (0x1fffff < uVar6) {
          lVar8 = 4;
          goto LAB_00bdb6bc;
        }
        lVar8 = 3;
        goto LAB_00bdb6c8;
      }
      if (0x7f < uVar6) {
        lVar8 = 2;
        goto LAB_00bdb6d0;
      }
      lVar8 = 1;
    }
    else {
      if (bVar2 < 0x80) {
        lVar8 = 9;
      }
      else {
        *(byte *)((long)param_3 + 10) = 0x81;
        lVar8 = 10;
      }
      *(byte *)((long)param_3 + 9) = bVar2 | 0x80;
LAB_00bdb690:
      *(byte *)((long)param_3 + 8) = (byte)(uVar4 >> 0x11) | 0x80;
LAB_00bdb69c:
      *(byte *)((long)param_3 + 7) = (byte)(uVar4 >> 10) | 0x80;
LAB_00bdb6a8:
      *(byte *)((long)param_3 + 6) = (byte)(uVar4 >> 3) | 0x80;
LAB_00bdb6b4:
      *(byte *)((long)param_3 + 5) = (byte)(uVar7 >> 0x1c) | 0x80;
LAB_00bdb6bc:
      *(byte *)((long)param_3 + 4) = (byte)(uVar6 >> 0x15) | 0x80;
LAB_00bdb6c8:
      *(byte *)((long)param_3 + 3) = (byte)(uVar7 >> 0xe) | 0x80;
LAB_00bdb6d0:
      *(byte *)((long)param_3 + 2) = (byte)(uVar6 >> 7) | 0x80;
    }
    *pbVar10 = (byte)uVar7 | 0x80;
    uVar4 = (int)lVar8 - 1;
    pbVar10[uVar4] = pbVar10[uVar4] & 0x7f;
    param_3 = pbVar10 + lVar8;
    uVar4 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar4 >> 3 & 1) == 0) goto joined_r0x00bdb7cc;
  uVar7 = *(ulong *)(param_1 + 0x40);
  pbVar10 = (byte *)((long)param_3 + 1);
  *param_3 = 0x28;
  bVar2 = (byte)(uVar7 >> 0x38);
  uVar6 = (uint)uVar7;
  uVar9 = (uint)(uVar7 >> 0x1c);
  uVar4 = (uint)(uVar7 >> 0x20);
  if (bVar2 == 0) {
    if (uVar9 != 0) {
      if (uVar9 >> 0xe != 0) {
        if (0x1fffff < uVar9) {
          lVar8 = 8;
          goto LAB_00bdb760;
        }
        lVar8 = 7;
        goto LAB_00bdb76c;
      }
      if (0x7f < uVar9) {
        lVar8 = 6;
        goto LAB_00bdb778;
      }
      lVar8 = 5;
      goto LAB_00bdb784;
    }
    if ((uVar7 >> 0xe & 0x3ffff) != 0) {
      if (0x1fffff < uVar6) {
        lVar8 = 4;
        goto LAB_00bdb78c;
      }
      lVar8 = 3;
      goto LAB_00bdb798;
    }
    if (0x7f < uVar6) {
      lVar8 = 2;
      goto LAB_00bdb7a0;
    }
    lVar8 = 1;
  }
  else {
    if (bVar2 < 0x80) {
      lVar8 = 9;
    }
    else {
      *(byte *)((long)param_3 + 10) = 0x81;
      lVar8 = 10;
    }
    *(byte *)((long)param_3 + 9) = bVar2 | 0x80;
LAB_00bdb760:
    *(byte *)((long)param_3 + 8) = (byte)(uVar4 >> 0x11) | 0x80;
LAB_00bdb76c:
    *(byte *)((long)param_3 + 7) = (byte)(uVar4 >> 10) | 0x80;
LAB_00bdb778:
    *(byte *)((long)param_3 + 6) = (byte)(uVar4 >> 3) | 0x80;
LAB_00bdb784:
    *(byte *)((long)param_3 + 5) = (byte)(uVar7 >> 0x1c) | 0x80;
LAB_00bdb78c:
    *(byte *)((long)param_3 + 4) = (byte)(uVar6 >> 0x15) | 0x80;
LAB_00bdb798:
    *(byte *)((long)param_3 + 3) = (byte)(uVar7 >> 0xe) | 0x80;
LAB_00bdb7a0:
    *(byte *)((long)param_3 + 2) = (byte)(uVar6 >> 7) | 0x80;
  }
  *pbVar10 = (byte)uVar7 | 0x80;
  uVar4 = (int)lVar8 - 1;
  pbVar10[uVar4] = pbVar10[uVar4] & 0x7f;
  param_3 = pbVar10 + lVar8;
  uVar4 = *(uint *)(param_1 + 0x10);
joined_r0x00bdb7cc:
  if ((uVar4 >> 4 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    *param_3 = 0x31;
    *(undefined8 *)(param_3 + 1) = uVar5;
    uVar4 = *(uint *)(param_1 + 0x10);
    param_3 = param_3 + 9;
  }
  if ((uVar4 >> 5 & 1) != 0) {
    pbVar10 = *(byte **)(param_1 + 0x50);
    pbVar11 = param_3 + 1;
    *param_3 = 0x3a;
    uVar4 = (uint)(*pbVar10 >> 1);
    if ((*pbVar10 & 1) != 0) {
      uVar4 = *(uint *)(pbVar10 + 8);
    }
    if (0x7f < uVar4) {
      pbVar12 = pbVar11;
      uVar6 = uVar4;
      do {
        uVar4 = uVar6 >> 7;
        uVar9 = uVar6 >> 0xe;
        pbVar11 = pbVar12 + 1;
        *pbVar12 = (byte)uVar6 | 0x80;
        pbVar12 = pbVar11;
        uVar6 = uVar4;
      } while (uVar9 != 0);
    }
    *pbVar11 = (byte)uVar4;
    pbVar12 = *(byte **)(pbVar10 + 0x10);
    uVar6 = (uint)(*pbVar10 >> 1);
    if ((*pbVar10 & 1) == 0) {
      pbVar12 = pbVar10 + 1;
    }
    else {
      uVar6 = (uint)*(undefined8 *)(pbVar10 + 8);
    }
    memcpy(pbVar11 + 1,pbVar12,(long)(int)uVar6);
    uVar4 = *(uint *)(param_1 + 0x10);
    param_3 = pbVar11 + 1 + (int)uVar6;
  }
  if ((uVar4 >> 6 & 1) != 0) {
    pbVar10 = *(byte **)(param_1 + 0x58);
    pbVar11 = param_3 + 1;
    *param_3 = 0x42;
    uVar4 = (uint)(*pbVar10 >> 1);
    if ((*pbVar10 & 1) != 0) {
      uVar4 = *(uint *)(pbVar10 + 8);
    }
    if (0x7f < uVar4) {
      pbVar12 = pbVar11;
      uVar6 = uVar4;
      do {
        uVar4 = uVar6 >> 7;
        uVar9 = uVar6 >> 0xe;
        pbVar11 = pbVar12 + 1;
        *pbVar12 = (byte)uVar6 | 0x80;
        pbVar12 = pbVar11;
        uVar6 = uVar4;
      } while (uVar9 != 0);
    }
    *pbVar11 = (byte)uVar4;
    pbVar12 = *(byte **)(pbVar10 + 0x10);
    uVar4 = (uint)(*pbVar10 >> 1);
    if ((*pbVar10 & 1) == 0) {
      pbVar12 = pbVar10 + 1;
    }
    else {
      uVar4 = (uint)*(undefined8 *)(pbVar10 + 8);
    }
    memcpy(pbVar11 + 1,pbVar12,(long)(int)uVar4);
    param_3 = pbVar11 + 1 + (int)uVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_3;
  }
  pbVar10 = (byte *)FUN_00c02cac(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe,param_3);
  return pbVar10;
}


