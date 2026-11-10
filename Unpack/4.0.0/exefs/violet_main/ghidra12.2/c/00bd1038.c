/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bd1038; name: FUN_00bd1038
 */


/* WARNING: Type propagation algorithm not settling */

byte * FUN_00bd1038(long param_1,undefined8 param_2,byte *param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  long *plVar12;
  int iVar13;
  long *plVar14;
  
  uVar6 = *(uint *)(param_1 + 0x30);
  if ((uVar6 & 1) != 0) {
    pbVar11 = *(byte **)(param_1 + 0x38);
    pbVar9 = param_3 + 1;
    *param_3 = 10;
    uVar6 = (uint)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      uVar6 = *(uint *)(pbVar11 + 8);
    }
    if (0x7f < uVar6) {
      pbVar10 = pbVar9;
      uVar8 = uVar6;
      do {
        uVar6 = uVar8 >> 7;
        uVar3 = uVar8 >> 0xe;
        pbVar9 = pbVar10 + 1;
        *pbVar10 = (byte)uVar8 | 0x80;
        pbVar10 = pbVar9;
        uVar8 = uVar6;
      } while (uVar3 != 0);
    }
    *pbVar9 = (byte)uVar6;
    pbVar10 = *(byte **)(pbVar11 + 0x10);
    uVar8 = (uint)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) == 0) {
      pbVar10 = pbVar11 + 1;
    }
    else {
      uVar8 = (uint)*(undefined8 *)(pbVar11 + 8);
    }
    memcpy(pbVar9 + 1,pbVar10,(long)(int)uVar8);
    uVar6 = *(uint *)(param_1 + 0x30);
    param_3 = pbVar9 + 1 + (int)uVar8;
  }
  if ((uVar6 >> 1 & 1) != 0) {
    pbVar11 = *(byte **)(param_1 + 0x40);
    pbVar9 = (byte *)((long)param_3 + 1);
    *param_3 = 0x42;
    uVar6 = (uint)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      uVar6 = *(uint *)(pbVar11 + 8);
    }
    if (0x7f < uVar6) {
      pbVar10 = pbVar9;
      uVar8 = uVar6;
      do {
        uVar6 = uVar8 >> 7;
        uVar3 = uVar8 >> 0xe;
        pbVar9 = pbVar10 + 1;
        *pbVar10 = (byte)uVar8 | 0x80;
        pbVar10 = pbVar9;
        uVar8 = uVar6;
      } while (uVar3 != 0);
    }
    *pbVar9 = (byte)uVar6;
    pbVar10 = *(byte **)(pbVar11 + 0x10);
    uVar8 = (uint)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) == 0) {
      pbVar10 = pbVar11 + 1;
    }
    else {
      uVar8 = (uint)*(undefined8 *)(pbVar11 + 8);
    }
    memcpy(pbVar9 + 1,pbVar10,(long)(int)uVar8);
    uVar6 = *(uint *)(param_1 + 0x30);
    param_3 = pbVar9 + 1 + (int)uVar8;
  }
  if ((uVar6 >> 5 & 1) != 0) {
    uVar6 = *(uint *)(param_1 + 0x4c);
    pbVar11 = param_3 + 1;
    *param_3 = 0x48;
    if ((int)uVar6 < 0) {
      if ((ulong)(long)(int)uVar6 >> 0x38 == 0) {
        lVar7 = 8;
      }
      else {
        param_3[9] = (byte)((ulong)(long)(int)uVar6 >> 0x38) | 0x80;
        lVar7 = 10;
        param_3[10] = 0x81;
      }
      uVar8 = (int)uVar6 >> 0x1f;
      param_3[8] = (byte)(uVar8 >> 0x11) | 0x80;
      param_3[6] = (byte)(uVar8 >> 3) | 0x80;
      param_3[5] = (byte)((int)uVar6 >> 0x1c) | 0x80;
      param_3[4] = (byte)(uVar6 >> 0x15) | 0x80;
      param_3[3] = (byte)(uVar6 >> 0xe) | 0x80;
      param_3[7] = (byte)(uVar8 >> 10) | 0x80;
      param_3[1] = (byte)uVar6 | 0x80;
      uVar8 = (int)lVar7 - 1;
      param_3[2] = (byte)(uVar6 >> 7) | 0x80;
      pbVar11[uVar8] = pbVar11[uVar8] & 0x7f;
      param_3 = pbVar11 + lVar7;
    }
    else {
      if (0x7f < uVar6) {
        pbVar9 = pbVar11;
        uVar8 = uVar6;
        do {
          uVar6 = uVar8 >> 7;
          uVar3 = uVar8 >> 0xe;
          pbVar11 = pbVar9 + 1;
          *pbVar9 = (byte)uVar8 | 0x80;
          pbVar9 = pbVar11;
          uVar8 = uVar6;
        } while (uVar3 != 0);
      }
      param_3 = pbVar11 + 1;
      *pbVar11 = (byte)uVar6;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x30);
  if ((uVar6 >> 2 & 1) != 0) {
    bVar2 = *(byte *)(param_1 + 0x48);
    *param_3 = 0x50;
    param_3[1] = bVar2;
    uVar6 = *(uint *)(param_1 + 0x30);
    param_3 = param_3 + 2;
  }
  if ((uVar6 >> 6 & 1) != 0) {
    pbVar11 = *(byte **)(param_1 + 0x50);
    pbVar9 = (byte *)((long)param_3 + 1);
    *param_3 = 0x5a;
    uVar6 = (uint)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      uVar6 = *(uint *)(pbVar11 + 8);
    }
    if (0x7f < uVar6) {
      pbVar10 = pbVar9;
      uVar8 = uVar6;
      do {
        uVar6 = uVar8 >> 7;
        uVar3 = uVar8 >> 0xe;
        pbVar9 = pbVar10 + 1;
        *pbVar10 = (byte)uVar8 | 0x80;
        pbVar10 = pbVar9;
        uVar8 = uVar6;
      } while (uVar3 != 0);
    }
    *pbVar9 = (byte)uVar6;
    pbVar10 = *(byte **)(pbVar11 + 0x10);
    uVar8 = (uint)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) == 0) {
      pbVar10 = pbVar11 + 1;
    }
    else {
      uVar8 = (uint)*(undefined8 *)(pbVar11 + 8);
    }
    memcpy(pbVar9 + 1,pbVar10,(long)(int)uVar8);
    uVar6 = *(uint *)(param_1 + 0x30);
    param_3 = pbVar9 + 1 + (int)uVar8;
  }
  if ((uVar6 >> 7 & 1) != 0) {
    bVar2 = *(byte *)(param_1 + 0x4b);
    *(undefined2 *)param_3 = 0x180;
    *(byte *)((long)param_3 + 2) = bVar2;
    uVar6 = *(uint *)(param_1 + 0x30);
    param_3 = (byte *)((long)param_3 + 3);
  }
  if ((uVar6 >> 8 & 1) != 0) {
    bVar2 = *(byte *)(param_1 + 0x80);
    *(undefined2 *)param_3 = 0x188;
    *(byte *)((long)param_3 + 2) = bVar2;
    uVar6 = *(uint *)(param_1 + 0x30);
    param_3 = (byte *)((long)param_3 + 3);
  }
  if ((uVar6 >> 9 & 1) != 0) {
    bVar2 = *(byte *)(param_1 + 0x81);
    *(undefined2 *)param_3 = 400;
    *(byte *)((long)param_3 + 2) = bVar2;
    uVar6 = *(uint *)(param_1 + 0x30);
    param_3 = (byte *)((long)param_3 + 3);
  }
  if ((uVar6 >> 3 & 1) != 0) {
    bVar2 = *(byte *)(param_1 + 0x49);
    *(undefined2 *)param_3 = 0x1a0;
    *(byte *)((long)param_3 + 2) = bVar2;
    uVar6 = *(uint *)(param_1 + 0x30);
    param_3 = (byte *)((long)param_3 + 3);
  }
  if ((uVar6 >> 10 & 1) != 0) {
    bVar2 = *(byte *)(param_1 + 0x82);
    *(undefined2 *)param_3 = 0x1b8;
    *(byte *)((long)param_3 + 2) = bVar2;
    uVar6 = *(uint *)(param_1 + 0x30);
    param_3 = (byte *)((long)param_3 + 3);
  }
  if ((uVar6 >> 4 & 1) != 0) {
    bVar2 = *(byte *)(param_1 + 0x4a);
    *(undefined2 *)param_3 = 0x1d8;
    *(byte *)((long)param_3 + 2) = bVar2;
    uVar6 = *(uint *)(param_1 + 0x30);
    param_3 = (byte *)((long)param_3 + 3);
  }
  if ((uVar6 >> 0xb & 1) != 0) {
    bVar2 = *(byte *)(param_1 + 0x83);
    param_3[0] = 0xf8;
    param_3[1] = 1;
    param_3[2] = bVar2;
    uVar6 = *(uint *)(param_1 + 0x30);
    param_3 = param_3 + 3;
  }
  if ((uVar6 >> 0xc & 1) != 0) {
    pbVar11 = *(byte **)(param_1 + 0x58);
    pbVar9 = param_3 + 2;
    param_3[0] = 0xa2;
    param_3[1] = 2;
    uVar6 = (uint)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      uVar6 = *(uint *)(pbVar11 + 8);
    }
    if (0x7f < uVar6) {
      pbVar10 = pbVar9;
      uVar8 = uVar6;
      do {
        uVar6 = uVar8 >> 7;
        uVar3 = uVar8 >> 0xe;
        pbVar9 = pbVar10 + 1;
        *pbVar10 = (byte)uVar8 | 0x80;
        pbVar10 = pbVar9;
        uVar8 = uVar6;
      } while (uVar3 != 0);
    }
    *pbVar9 = (byte)uVar6;
    pbVar10 = *(byte **)(pbVar11 + 0x10);
    uVar8 = (uint)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) == 0) {
      pbVar10 = pbVar11 + 1;
    }
    else {
      uVar8 = (uint)*(undefined8 *)(pbVar11 + 8);
    }
    memcpy(pbVar9 + 1,pbVar10,(long)(int)uVar8);
    uVar6 = *(uint *)(param_1 + 0x30);
    param_3 = pbVar9 + 1 + (int)uVar8;
  }
  if ((uVar6 >> 0xd & 1) != 0) {
    pbVar11 = *(byte **)(param_1 + 0x60);
    pbVar9 = param_3 + 2;
    param_3[0] = 0xaa;
    param_3[1] = 2;
    uVar6 = (uint)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) != 0) {
      uVar6 = *(uint *)(pbVar11 + 8);
    }
    if (0x7f < uVar6) {
      pbVar10 = pbVar9;
      uVar8 = uVar6;
      do {
        uVar6 = uVar8 >> 7;
        uVar3 = uVar8 >> 0xe;
        pbVar9 = pbVar10 + 1;
        *pbVar10 = (byte)uVar8 | 0x80;
        pbVar10 = pbVar9;
        uVar8 = uVar6;
      } while (uVar3 != 0);
    }
    *pbVar9 = (byte)uVar6;
    pbVar10 = *(byte **)(pbVar11 + 0x10);
    uVar6 = (uint)(*pbVar11 >> 1);
    if ((*pbVar11 & 1) == 0) {
      pbVar10 = pbVar11 + 1;
    }
    else {
      uVar6 = (uint)*(undefined8 *)(pbVar11 + 8);
    }
    memcpy(pbVar9 + 1,pbVar10,(long)(int)uVar6);
    param_3 = pbVar9 + 1 + (int)uVar6;
  }
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 != 0) {
    iVar13 = 0;
    do {
      plVar5 = *(long **)(*(long *)(param_1 + 0x78) + (long)iVar13 * 8 + 8);
      pbVar11 = param_3 + 2;
      param_3[0] = 0xba;
      param_3[1] = 0x3e;
      uVar6 = *(uint *)((long)plVar5 + 0x14);
      if (0x7f < uVar6) {
        pbVar9 = pbVar11;
        uVar8 = uVar6;
        do {
          uVar6 = uVar8 >> 7;
          uVar3 = uVar8 >> 0xe;
          pbVar11 = pbVar9 + 1;
          *pbVar9 = (byte)uVar8 | 0x80;
          pbVar9 = pbVar11;
          uVar8 = uVar6;
        } while (uVar3 != 0);
      }
      *pbVar11 = (byte)uVar6;
      param_3 = (byte *)(**(code **)(*plVar5 + 0x80))(plVar5,0,pbVar11 + 1);
      iVar13 = iVar13 + 1;
    } while (iVar13 != iVar1);
  }
  plVar12 = (long *)(param_1 + 0x10);
  plVar5 = (long *)*plVar12;
  if (plVar5 != (long *)0x0) {
    plVar14 = plVar12;
    do {
      if (999 < (int)plVar5[4]) {
        plVar14 = plVar5;
      }
      plVar5 = (long *)plVar5[(int)plVar5[4] < 1000];
    } while (plVar5 != (long *)0x0);
    while ((plVar14 != plVar12 && ((int)plVar14[4] < 0x20000000))) {
      param_3 = (byte *)FUN_00c1cbcc(plVar14 + 5,(int)plVar14[4],0,param_3);
      plVar5 = (long *)plVar14[1];
      if ((long *)plVar14[1] == (long *)0x0) {
        plVar5 = plVar14 + 2;
        bVar4 = *(long **)*plVar5 != plVar14;
        plVar14 = (long *)*plVar5;
        if (bVar4) {
          do {
            lVar7 = *plVar5;
            plVar5 = (long *)(lVar7 + 0x10);
            plVar14 = (long *)*plVar5;
          } while (*(long *)*plVar5 != lVar7);
        }
      }
      else {
        do {
          plVar14 = plVar5;
          plVar5 = (long *)*plVar14;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
  if ((*(ulong *)(param_1 + 0x28) & 1) == 0) {
    return param_3;
  }
  pbVar11 = (byte *)FUN_00c02cac(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffe,param_3);
  return pbVar11;
}


