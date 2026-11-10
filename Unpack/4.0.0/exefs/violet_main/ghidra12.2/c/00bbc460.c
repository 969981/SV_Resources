/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bbc460; name: FUN_00bbc460
 */


byte * FUN_00bbc460(long param_1,undefined8 param_2,byte *param_3)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  int iVar11;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 & 1) != 0) {
    pbVar5 = *(byte **)(param_1 + 0x18);
    pbVar8 = param_3 + 1;
    *param_3 = 10;
    uVar4 = (uint)(*pbVar5 >> 1);
    if ((*pbVar5 & 1) != 0) {
      uVar4 = *(uint *)(pbVar5 + 8);
    }
    if (0x7f < uVar4) {
      pbVar9 = pbVar8;
      uVar6 = uVar4;
      do {
        uVar4 = uVar6 >> 7;
        uVar2 = uVar6 >> 0xe;
        pbVar8 = pbVar9 + 1;
        *pbVar9 = (byte)uVar6 | 0x80;
        pbVar9 = pbVar8;
        uVar6 = uVar4;
      } while (uVar2 != 0);
    }
    *pbVar8 = (byte)uVar4;
    pbVar9 = *(byte **)(pbVar5 + 0x10);
    uVar6 = (uint)(*pbVar5 >> 1);
    if ((*pbVar5 & 1) == 0) {
      pbVar9 = pbVar5 + 1;
    }
    else {
      uVar6 = (uint)*(undefined8 *)(pbVar5 + 8);
    }
    memcpy(pbVar8 + 1,pbVar9,(long)(int)uVar6);
    uVar4 = *(uint *)(param_1 + 0x10);
    param_3 = pbVar8 + 1 + (int)uVar6;
  }
  if ((uVar4 >> 1 & 1) != 0) {
    pbVar5 = *(byte **)(param_1 + 0x20);
    pbVar8 = param_3 + 1;
    *param_3 = 0x12;
    uVar4 = (uint)(*pbVar5 >> 1);
    if ((*pbVar5 & 1) != 0) {
      uVar4 = *(uint *)(pbVar5 + 8);
    }
    if (0x7f < uVar4) {
      pbVar9 = pbVar8;
      uVar6 = uVar4;
      do {
        uVar4 = uVar6 >> 7;
        uVar2 = uVar6 >> 0xe;
        pbVar8 = pbVar9 + 1;
        *pbVar9 = (byte)uVar6 | 0x80;
        pbVar9 = pbVar8;
        uVar6 = uVar4;
      } while (uVar2 != 0);
    }
    *pbVar8 = (byte)uVar4;
    pbVar9 = *(byte **)(pbVar5 + 0x10);
    uVar4 = (uint)(*pbVar5 >> 1);
    if ((*pbVar5 & 1) == 0) {
      pbVar9 = pbVar5 + 1;
    }
    else {
      uVar4 = (uint)*(undefined8 *)(pbVar5 + 8);
    }
    memcpy(pbVar8 + 1,pbVar9,(long)(int)uVar4);
    param_3 = pbVar8 + 1 + (int)uVar4;
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar10 = 0;
    do {
      pbVar5 = *(byte **)(*(long *)(param_1 + 0x38) + lVar10 * 8 + 8);
      pbVar8 = param_3 + 1;
      *param_3 = 0x1a;
      uVar4 = (uint)(*pbVar5 >> 1);
      if ((*pbVar5 & 1) != 0) {
        uVar4 = *(uint *)(pbVar5 + 8);
      }
      if (0x7f < uVar4) {
        pbVar9 = pbVar8;
        uVar6 = uVar4;
        do {
          uVar4 = uVar6 >> 7;
          uVar2 = uVar6 >> 0xe;
          pbVar8 = pbVar9 + 1;
          *pbVar9 = (byte)uVar6 | 0x80;
          pbVar9 = pbVar8;
          uVar6 = uVar4;
        } while (uVar2 != 0);
      }
      *pbVar8 = (byte)uVar4;
      pbVar9 = *(byte **)(pbVar5 + 0x10);
      uVar4 = (uint)(*pbVar5 >> 1);
      if ((*pbVar5 & 1) == 0) {
        pbVar9 = pbVar5 + 1;
      }
      else {
        uVar4 = (uint)*(undefined8 *)(pbVar5 + 8);
      }
      memcpy(pbVar8 + 1,pbVar9,(long)(int)uVar4);
      param_3 = pbVar8 + 1 + (int)uVar4;
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0x30));
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 != 0) {
    iVar11 = 0;
    do {
      plVar3 = *(long **)(*(long *)(param_1 + 0x70) + (long)iVar11 * 8 + 8);
      pbVar5 = param_3 + 1;
      *param_3 = 0x22;
      uVar4 = *(uint *)((long)plVar3 + 0x14);
      if (0x7f < uVar4) {
        pbVar8 = pbVar5;
        uVar6 = uVar4;
        do {
          uVar4 = uVar6 >> 7;
          uVar2 = uVar6 >> 0xe;
          pbVar5 = pbVar8 + 1;
          *pbVar8 = (byte)uVar6 | 0x80;
          pbVar8 = pbVar5;
          uVar6 = uVar4;
        } while (uVar2 != 0);
      }
      *pbVar5 = (byte)uVar4;
      param_3 = (byte *)(**(code **)(*plVar3 + 0x80))(plVar3,0,pbVar5 + 1);
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x80);
  if (iVar1 != 0) {
    iVar11 = 0;
    do {
      plVar3 = *(long **)(*(long *)(param_1 + 0x88) + (long)iVar11 * 8 + 8);
      pbVar5 = param_3 + 1;
      *param_3 = 0x2a;
      uVar4 = *(uint *)((long)plVar3 + 0x14);
      if (0x7f < uVar4) {
        pbVar8 = pbVar5;
        uVar6 = uVar4;
        do {
          uVar4 = uVar6 >> 7;
          uVar2 = uVar6 >> 0xe;
          pbVar5 = pbVar8 + 1;
          *pbVar8 = (byte)uVar6 | 0x80;
          pbVar8 = pbVar5;
          uVar6 = uVar4;
        } while (uVar2 != 0);
      }
      *pbVar5 = (byte)uVar4;
      param_3 = (byte *)(**(code **)(*plVar3 + 0x80))(plVar3,0,pbVar5 + 1);
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x98);
  if (iVar1 != 0) {
    iVar11 = 0;
    do {
      plVar3 = *(long **)(*(long *)(param_1 + 0xa0) + (long)iVar11 * 8 + 8);
      pbVar5 = param_3 + 1;
      *param_3 = 0x32;
      uVar4 = *(uint *)((long)plVar3 + 0x14);
      if (0x7f < uVar4) {
        pbVar8 = pbVar5;
        uVar6 = uVar4;
        do {
          uVar4 = uVar6 >> 7;
          uVar2 = uVar6 >> 0xe;
          pbVar5 = pbVar8 + 1;
          *pbVar8 = (byte)uVar6 | 0x80;
          pbVar8 = pbVar5;
          uVar6 = uVar4;
        } while (uVar2 != 0);
      }
      *pbVar5 = (byte)uVar4;
      param_3 = (byte *)(**(code **)(*plVar3 + 0x80))(plVar3,0,pbVar5 + 1);
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar1);
  }
  iVar1 = *(int *)(param_1 + 0xb0);
  if (iVar1 != 0) {
    iVar11 = 0;
    do {
      plVar3 = *(long **)(*(long *)(param_1 + 0xb8) + (long)iVar11 * 8 + 8);
      pbVar5 = param_3 + 1;
      *param_3 = 0x3a;
      uVar4 = *(uint *)((long)plVar3 + 0x14);
      if (0x7f < uVar4) {
        pbVar8 = pbVar5;
        uVar6 = uVar4;
        do {
          uVar4 = uVar6 >> 7;
          uVar2 = uVar6 >> 0xe;
          pbVar5 = pbVar8 + 1;
          *pbVar8 = (byte)uVar6 | 0x80;
          pbVar8 = pbVar5;
          uVar6 = uVar4;
        } while (uVar2 != 0);
      }
      *pbVar5 = (byte)uVar4;
      param_3 = (byte *)(**(code **)(*plVar3 + 0x80))(plVar3,0,pbVar5 + 1);
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar1);
  }
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 >> 9 & 1) != 0) {
    plVar3 = *(long **)(param_1 + 0xc0);
    pbVar5 = param_3 + 1;
    *param_3 = 0x42;
    uVar4 = *(uint *)((long)plVar3 + 0x34);
    if (0x7f < uVar4) {
      pbVar8 = pbVar5;
      uVar6 = uVar4;
      do {
        uVar4 = uVar6 >> 7;
        uVar2 = uVar6 >> 0xe;
        pbVar5 = pbVar8 + 1;
        *pbVar8 = (byte)uVar6 | 0x80;
        pbVar8 = pbVar5;
        uVar6 = uVar4;
      } while (uVar2 != 0);
    }
    *pbVar5 = (byte)uVar4;
    param_3 = (byte *)(**(code **)(*plVar3 + 0x80))(plVar3,0,pbVar5 + 1);
    uVar4 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar4 >> 10 & 1) != 0) {
    plVar3 = *(long **)(param_1 + 200);
    pbVar5 = param_3 + 1;
    *param_3 = 0x4a;
    uVar4 = *(uint *)((long)plVar3 + 0x14);
    if (0x7f < uVar4) {
      pbVar8 = pbVar5;
      uVar6 = uVar4;
      do {
        uVar4 = uVar6 >> 7;
        uVar2 = uVar6 >> 0xe;
        pbVar5 = pbVar8 + 1;
        *pbVar8 = (byte)uVar6 | 0x80;
        pbVar8 = pbVar5;
        uVar6 = uVar4;
      } while (uVar2 != 0);
    }
    *pbVar5 = (byte)uVar4;
    param_3 = (byte *)(**(code **)(*plVar3 + 0x80))(plVar3,0,pbVar5 + 1);
  }
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar10 = 0;
    do {
      uVar4 = *(uint *)(*(long *)(param_1 + 0x48) + lVar10 * 4 + 8);
      pbVar5 = param_3 + 1;
      *param_3 = 0x50;
      if ((int)uVar4 < 0) {
        if ((ulong)(long)(int)uVar4 >> 0x38 == 0) {
          lVar7 = 8;
        }
        else {
          param_3[9] = (byte)((ulong)(long)(int)uVar4 >> 0x38) | 0x80;
          lVar7 = 10;
          param_3[10] = 0x81;
        }
        uVar6 = (int)uVar4 >> 0x1f;
        param_3[8] = (byte)(uVar6 >> 0x11) | 0x80;
        param_3[6] = (byte)(uVar6 >> 3) | 0x80;
        param_3[5] = (byte)((int)uVar4 >> 0x1c) | 0x80;
        param_3[4] = (byte)(uVar4 >> 0x15) | 0x80;
        param_3[3] = (byte)(uVar4 >> 0xe) | 0x80;
        param_3[7] = (byte)(uVar6 >> 10) | 0x80;
        param_3[1] = (byte)uVar4 | 0x80;
        uVar6 = (int)lVar7 - 1;
        param_3[2] = (byte)(uVar4 >> 7) | 0x80;
        pbVar5[uVar6] = pbVar5[uVar6] & 0x7f;
        param_3 = pbVar5 + lVar7;
      }
      else {
        if (0x7f < uVar4) {
          pbVar8 = pbVar5;
          uVar6 = uVar4;
          do {
            uVar4 = uVar6 >> 7;
            uVar2 = uVar6 >> 0xe;
            pbVar5 = pbVar8 + 1;
            *pbVar8 = (byte)uVar6 | 0x80;
            pbVar8 = pbVar5;
            uVar6 = uVar4;
          } while (uVar2 != 0);
        }
        param_3 = pbVar5 + 1;
        *pbVar5 = (byte)uVar4;
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0x40));
  }
  if (0 < *(int *)(param_1 + 0x50)) {
    lVar10 = 0;
    do {
      uVar4 = *(uint *)(*(long *)(param_1 + 0x58) + lVar10 * 4 + 8);
      pbVar5 = param_3 + 1;
      *param_3 = 0x58;
      if ((int)uVar4 < 0) {
        if ((ulong)(long)(int)uVar4 >> 0x38 == 0) {
          lVar7 = 8;
        }
        else {
          param_3[9] = (byte)((ulong)(long)(int)uVar4 >> 0x38) | 0x80;
          lVar7 = 10;
          param_3[10] = 0x81;
        }
        uVar6 = (int)uVar4 >> 0x1f;
        param_3[8] = (byte)(uVar6 >> 0x11) | 0x80;
        param_3[6] = (byte)(uVar6 >> 3) | 0x80;
        param_3[5] = (byte)((int)uVar4 >> 0x1c) | 0x80;
        param_3[4] = (byte)(uVar4 >> 0x15) | 0x80;
        param_3[3] = (byte)(uVar4 >> 0xe) | 0x80;
        param_3[7] = (byte)(uVar6 >> 10) | 0x80;
        param_3[1] = (byte)uVar4 | 0x80;
        uVar6 = (int)lVar7 - 1;
        param_3[2] = (byte)(uVar4 >> 7) | 0x80;
        pbVar5[uVar6] = pbVar5[uVar6] & 0x7f;
        param_3 = pbVar5 + lVar7;
      }
      else {
        if (0x7f < uVar4) {
          pbVar8 = pbVar5;
          uVar6 = uVar4;
          do {
            uVar4 = uVar6 >> 7;
            uVar2 = uVar6 >> 0xe;
            pbVar5 = pbVar8 + 1;
            *pbVar8 = (byte)uVar6 | 0x80;
            pbVar8 = pbVar5;
            uVar6 = uVar4;
          } while (uVar2 != 0);
        }
        param_3 = pbVar5 + 1;
        *pbVar5 = (byte)uVar4;
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0x50));
  }
  if ((*(byte *)(param_1 + 0x11) >> 3 & 1) != 0) {
    pbVar5 = *(byte **)(param_1 + 0xd0);
    pbVar8 = param_3 + 1;
    *param_3 = 0x62;
    uVar4 = (uint)(*pbVar5 >> 1);
    if ((*pbVar5 & 1) != 0) {
      uVar4 = *(uint *)(pbVar5 + 8);
    }
    if (0x7f < uVar4) {
      pbVar9 = pbVar8;
      uVar6 = uVar4;
      do {
        uVar4 = uVar6 >> 7;
        uVar2 = uVar6 >> 0xe;
        pbVar8 = pbVar9 + 1;
        *pbVar9 = (byte)uVar6 | 0x80;
        pbVar9 = pbVar8;
        uVar6 = uVar4;
      } while (uVar2 != 0);
    }
    *pbVar8 = (byte)uVar4;
    pbVar9 = *(byte **)(pbVar5 + 0x10);
    uVar4 = (uint)(*pbVar5 >> 1);
    if ((*pbVar5 & 1) == 0) {
      pbVar9 = pbVar5 + 1;
    }
    else {
      uVar4 = (uint)*(undefined8 *)(pbVar5 + 8);
    }
    memcpy(pbVar8 + 1,pbVar9,(long)(int)uVar4);
    param_3 = pbVar8 + 1 + (int)uVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_3;
  }
  pbVar5 = (byte *)FUN_00c02cac(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe,param_3);
  return pbVar5;
}


