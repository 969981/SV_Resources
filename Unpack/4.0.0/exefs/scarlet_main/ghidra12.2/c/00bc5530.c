/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bc5530; name: FUN_00bc5530
 */


/* WARNING: Type propagation algorithm not settling */

byte * FUN_00bc5530(long param_1,undefined8 param_2,byte *param_3)

{
  uint uVar1;
  long *plVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 & 1) != 0) {
    pbVar3 = *(byte **)(param_1 + 0x18);
    pbVar7 = param_3 + 1;
    *param_3 = 10;
    uVar4 = (uint)(*pbVar3 >> 1);
    if ((*pbVar3 & 1) != 0) {
      uVar4 = *(uint *)(pbVar3 + 8);
    }
    if (0x7f < uVar4) {
      pbVar8 = pbVar7;
      uVar5 = uVar4;
      do {
        uVar4 = uVar5 >> 7;
        uVar1 = uVar5 >> 0xe;
        pbVar7 = pbVar8 + 1;
        *pbVar8 = (byte)uVar5 | 0x80;
        pbVar8 = pbVar7;
        uVar5 = uVar4;
      } while (uVar1 != 0);
    }
    *pbVar7 = (byte)uVar4;
    pbVar8 = *(byte **)(pbVar3 + 0x10);
    uVar5 = (uint)(*pbVar3 >> 1);
    if ((*pbVar3 & 1) == 0) {
      pbVar8 = pbVar3 + 1;
    }
    else {
      uVar5 = (uint)*(undefined8 *)(pbVar3 + 8);
    }
    memcpy(pbVar7 + 1,pbVar8,(long)(int)uVar5);
    uVar4 = *(uint *)(param_1 + 0x10);
    param_3 = pbVar7 + 1 + (int)uVar5;
  }
  if ((uVar4 >> 5 & 1) != 0) {
    pbVar3 = *(byte **)(param_1 + 0x30);
    pbVar7 = (byte *)((long)param_3 + 1);
    *param_3 = 0x12;
    uVar4 = (uint)(*pbVar3 >> 1);
    if ((*pbVar3 & 1) != 0) {
      uVar4 = *(uint *)(pbVar3 + 8);
    }
    if (0x7f < uVar4) {
      pbVar8 = pbVar7;
      uVar5 = uVar4;
      do {
        uVar4 = uVar5 >> 7;
        uVar1 = uVar5 >> 0xe;
        pbVar7 = pbVar8 + 1;
        *pbVar8 = (byte)uVar5 | 0x80;
        pbVar8 = pbVar7;
        uVar5 = uVar4;
      } while (uVar1 != 0);
    }
    *pbVar7 = (byte)uVar4;
    pbVar8 = *(byte **)(pbVar3 + 0x10);
    uVar5 = (uint)(*pbVar3 >> 1);
    if ((*pbVar3 & 1) == 0) {
      pbVar8 = pbVar3 + 1;
    }
    else {
      uVar5 = (uint)*(undefined8 *)(pbVar3 + 8);
    }
    memcpy(pbVar7 + 1,pbVar8,(long)(int)uVar5);
    uVar4 = *(uint *)(param_1 + 0x10);
    param_3 = pbVar7 + 1 + (int)uVar5;
  }
  if ((uVar4 >> 1 & 1) != 0) {
    uVar4 = *(uint *)(param_1 + 0x20);
    pbVar3 = param_3 + 1;
    *param_3 = 0x18;
    if ((int)uVar4 < 0) {
      if ((ulong)(long)(int)uVar4 >> 0x38 == 0) {
        lVar6 = 8;
      }
      else {
        param_3[9] = (byte)((ulong)(long)(int)uVar4 >> 0x38) | 0x80;
        lVar6 = 10;
        param_3[10] = 0x81;
      }
      uVar5 = (int)uVar4 >> 0x1f;
      param_3[8] = (byte)(uVar5 >> 0x11) | 0x80;
      param_3[6] = (byte)(uVar5 >> 3) | 0x80;
      param_3[5] = (byte)((int)uVar4 >> 0x1c) | 0x80;
      param_3[4] = (byte)(uVar4 >> 0x15) | 0x80;
      param_3[3] = (byte)(uVar4 >> 0xe) | 0x80;
      param_3[7] = (byte)(uVar5 >> 10) | 0x80;
      param_3[1] = (byte)uVar4 | 0x80;
      uVar5 = (int)lVar6 - 1;
      param_3[2] = (byte)(uVar4 >> 7) | 0x80;
      pbVar3[uVar5] = pbVar3[uVar5] & 0x7f;
      param_3 = pbVar3 + lVar6;
    }
    else {
      if (0x7f < uVar4) {
        pbVar7 = pbVar3;
        uVar5 = uVar4;
        do {
          uVar4 = uVar5 >> 7;
          uVar1 = uVar5 >> 0xe;
          pbVar3 = pbVar7 + 1;
          *pbVar7 = (byte)uVar5 | 0x80;
          pbVar7 = pbVar3;
          uVar5 = uVar4;
        } while (uVar1 != 0);
      }
      param_3 = pbVar3 + 1;
      *pbVar3 = (byte)uVar4;
    }
  }
  if ((*(byte *)(param_1 + 0x10) >> 2 & 1) != 0) {
    uVar4 = *(uint *)(param_1 + 0x24);
    pbVar3 = param_3 + 1;
    *param_3 = 0x20;
    if ((int)uVar4 < 0) {
      if ((ulong)(long)(int)uVar4 >> 0x38 == 0) {
        lVar6 = 8;
      }
      else {
        param_3[9] = (byte)((ulong)(long)(int)uVar4 >> 0x38) | 0x80;
        lVar6 = 10;
        param_3[10] = 0x81;
      }
      uVar5 = (int)uVar4 >> 0x1f;
      param_3[8] = (byte)(uVar5 >> 0x11) | 0x80;
      param_3[6] = (byte)(uVar5 >> 3) | 0x80;
      param_3[5] = (byte)((int)uVar4 >> 0x1c) | 0x80;
      param_3[4] = (byte)(uVar4 >> 0x15) | 0x80;
      param_3[3] = (byte)(uVar4 >> 0xe) | 0x80;
      param_3[7] = (byte)(uVar5 >> 10) | 0x80;
      param_3[1] = (byte)uVar4 | 0x80;
      uVar5 = (int)lVar6 - 1;
      param_3[2] = (byte)(uVar4 >> 7) | 0x80;
      pbVar3[uVar5] = pbVar3[uVar5] & 0x7f;
      param_3 = pbVar3 + lVar6;
    }
    else {
      if (0x7f < uVar4) {
        pbVar7 = pbVar3;
        uVar5 = uVar4;
        do {
          uVar4 = uVar5 >> 7;
          uVar1 = uVar5 >> 0xe;
          pbVar3 = pbVar7 + 1;
          *pbVar7 = (byte)uVar5 | 0x80;
          pbVar7 = pbVar3;
          uVar5 = uVar4;
        } while (uVar1 != 0);
      }
      param_3 = pbVar3 + 1;
      *pbVar3 = (byte)uVar4;
    }
  }
  if ((*(byte *)(param_1 + 0x10) >> 3 & 1) != 0) {
    uVar4 = *(uint *)(param_1 + 0x38);
    pbVar3 = param_3 + 1;
    *param_3 = 0x28;
    if ((int)uVar4 < 0) {
      if ((ulong)(long)(int)uVar4 >> 0x38 == 0) {
        lVar6 = 8;
      }
      else {
        param_3[9] = (byte)((ulong)(long)(int)uVar4 >> 0x38) | 0x80;
        lVar6 = 10;
        param_3[10] = 0x81;
      }
      uVar5 = (int)uVar4 >> 0x1f;
      param_3[8] = (byte)(uVar5 >> 0x11) | 0x80;
      param_3[6] = (byte)(uVar5 >> 3) | 0x80;
      param_3[5] = (byte)((int)uVar4 >> 0x1c) | 0x80;
      param_3[4] = (byte)(uVar4 >> 0x15) | 0x80;
      param_3[3] = (byte)(uVar4 >> 0xe) | 0x80;
      param_3[7] = (byte)(uVar5 >> 10) | 0x80;
      param_3[1] = (byte)uVar4 | 0x80;
      uVar5 = (int)lVar6 - 1;
      param_3[2] = (byte)(uVar4 >> 7) | 0x80;
      pbVar3[uVar5] = pbVar3[uVar5] & 0x7f;
      param_3 = pbVar3 + lVar6;
    }
    else {
      if (0x7f < uVar4) {
        pbVar7 = pbVar3;
        uVar5 = uVar4;
        do {
          uVar4 = uVar5 >> 7;
          uVar1 = uVar5 >> 0xe;
          pbVar3 = pbVar7 + 1;
          *pbVar7 = (byte)uVar5 | 0x80;
          pbVar7 = pbVar3;
          uVar5 = uVar4;
        } while (uVar1 != 0);
      }
      param_3 = pbVar3 + 1;
      *pbVar3 = (byte)uVar4;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 >> 4 & 1) != 0) {
    pbVar3 = *(byte **)(param_1 + 0x28);
    pbVar7 = param_3 + 1;
    *param_3 = 0x32;
    uVar4 = (uint)(*pbVar3 >> 1);
    if ((*pbVar3 & 1) != 0) {
      uVar4 = *(uint *)(pbVar3 + 8);
    }
    if (0x7f < uVar4) {
      pbVar8 = pbVar7;
      uVar5 = uVar4;
      do {
        uVar4 = uVar5 >> 7;
        uVar1 = uVar5 >> 0xe;
        pbVar7 = pbVar8 + 1;
        *pbVar8 = (byte)uVar5 | 0x80;
        pbVar8 = pbVar7;
        uVar5 = uVar4;
      } while (uVar1 != 0);
    }
    *pbVar7 = (byte)uVar4;
    pbVar8 = *(byte **)(pbVar3 + 0x10);
    uVar5 = (uint)(*pbVar3 >> 1);
    if ((*pbVar3 & 1) == 0) {
      pbVar8 = pbVar3 + 1;
    }
    else {
      uVar5 = (uint)*(undefined8 *)(pbVar3 + 8);
    }
    memcpy(pbVar7 + 1,pbVar8,(long)(int)uVar5);
    uVar4 = *(uint *)(param_1 + 0x10);
    param_3 = pbVar7 + 1 + (int)uVar5;
  }
  if ((uVar4 >> 6 & 1) != 0) {
    pbVar3 = *(byte **)(param_1 + 0x40);
    pbVar7 = param_3 + 1;
    *param_3 = 0x3a;
    uVar4 = (uint)(*pbVar3 >> 1);
    if ((*pbVar3 & 1) != 0) {
      uVar4 = *(uint *)(pbVar3 + 8);
    }
    if (0x7f < uVar4) {
      pbVar8 = pbVar7;
      uVar5 = uVar4;
      do {
        uVar4 = uVar5 >> 7;
        uVar1 = uVar5 >> 0xe;
        pbVar7 = pbVar8 + 1;
        *pbVar8 = (byte)uVar5 | 0x80;
        pbVar8 = pbVar7;
        uVar5 = uVar4;
      } while (uVar1 != 0);
    }
    *pbVar7 = (byte)uVar4;
    pbVar8 = *(byte **)(pbVar3 + 0x10);
    uVar5 = (uint)(*pbVar3 >> 1);
    if ((*pbVar3 & 1) == 0) {
      pbVar8 = pbVar3 + 1;
    }
    else {
      uVar5 = (uint)*(undefined8 *)(pbVar3 + 8);
    }
    memcpy(pbVar7 + 1,pbVar8,(long)(int)uVar5);
    uVar4 = *(uint *)(param_1 + 0x10);
    param_3 = pbVar7 + 1 + (int)uVar5;
  }
  if ((uVar4 >> 9 & 1) != 0) {
    plVar2 = *(long **)(param_1 + 0x50);
    pbVar3 = param_3 + 1;
    *param_3 = 0x42;
    uVar4 = *(uint *)((long)plVar2 + 0x34);
    if (0x7f < uVar4) {
      pbVar7 = pbVar3;
      uVar5 = uVar4;
      do {
        uVar4 = uVar5 >> 7;
        uVar1 = uVar5 >> 0xe;
        pbVar3 = pbVar7 + 1;
        *pbVar7 = (byte)uVar5 | 0x80;
        pbVar7 = pbVar3;
        uVar5 = uVar4;
      } while (uVar1 != 0);
    }
    *pbVar3 = (byte)uVar4;
    param_3 = (byte *)(**(code **)(*plVar2 + 0x80))(plVar2,0,pbVar3 + 1);
    uVar4 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar4 >> 7 & 1) != 0) {
    uVar4 = *(uint *)(param_1 + 0x3c);
    pbVar3 = param_3 + 1;
    *param_3 = 0x48;
    if ((int)uVar4 < 0) {
      if ((ulong)(long)(int)uVar4 >> 0x38 == 0) {
        lVar6 = 8;
      }
      else {
        param_3[9] = (byte)((ulong)(long)(int)uVar4 >> 0x38) | 0x80;
        lVar6 = 10;
        param_3[10] = 0x81;
      }
      uVar5 = (int)uVar4 >> 0x1f;
      param_3[8] = (byte)(uVar5 >> 0x11) | 0x80;
      param_3[6] = (byte)(uVar5 >> 3) | 0x80;
      param_3[5] = (byte)((int)uVar4 >> 0x1c) | 0x80;
      param_3[4] = (byte)(uVar4 >> 0x15) | 0x80;
      param_3[3] = (byte)(uVar4 >> 0xe) | 0x80;
      param_3[7] = (byte)(uVar5 >> 10) | 0x80;
      param_3[1] = (byte)uVar4 | 0x80;
      uVar5 = (int)lVar6 - 1;
      param_3[2] = (byte)(uVar4 >> 7) | 0x80;
      pbVar3[uVar5] = pbVar3[uVar5] & 0x7f;
      param_3 = pbVar3 + lVar6;
    }
    else {
      if (0x7f < uVar4) {
        pbVar7 = pbVar3;
        uVar5 = uVar4;
        do {
          uVar4 = uVar5 >> 7;
          uVar1 = uVar5 >> 0xe;
          pbVar3 = pbVar7 + 1;
          *pbVar7 = (byte)uVar5 | 0x80;
          pbVar7 = pbVar3;
          uVar5 = uVar4;
        } while (uVar1 != 0);
      }
      param_3 = pbVar3 + 1;
      *pbVar3 = (byte)uVar4;
    }
  }
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    pbVar3 = *(byte **)(param_1 + 0x48);
    pbVar7 = param_3 + 1;
    *param_3 = 0x52;
    uVar4 = (uint)(*pbVar3 >> 1);
    if ((*pbVar3 & 1) != 0) {
      uVar4 = *(uint *)(pbVar3 + 8);
    }
    if (0x7f < uVar4) {
      pbVar8 = pbVar7;
      uVar5 = uVar4;
      do {
        uVar4 = uVar5 >> 7;
        uVar1 = uVar5 >> 0xe;
        pbVar7 = pbVar8 + 1;
        *pbVar8 = (byte)uVar5 | 0x80;
        pbVar8 = pbVar7;
        uVar5 = uVar4;
      } while (uVar1 != 0);
    }
    *pbVar7 = (byte)uVar4;
    pbVar8 = *(byte **)(pbVar3 + 0x10);
    uVar4 = (uint)(*pbVar3 >> 1);
    if ((*pbVar3 & 1) == 0) {
      pbVar8 = pbVar3 + 1;
    }
    else {
      uVar4 = (uint)*(undefined8 *)(pbVar3 + 8);
    }
    memcpy(pbVar7 + 1,pbVar8,(long)(int)uVar4);
    param_3 = pbVar7 + 1 + (int)uVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_3;
  }
  pbVar3 = (byte *)FUN_00c02cac(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe,param_3);
  return pbVar3;
}


