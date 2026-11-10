/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bddd88; name: FUN_00bddd88
 */


byte * FUN_00bddd88(long param_1,undefined8 param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    pbVar6 = param_3 + 1;
    *param_3 = 10;
    uVar2 = *(uint *)(param_1 + 0x28);
    if (0x7f < uVar2) {
      pbVar7 = pbVar6;
      uVar4 = uVar2;
      do {
        uVar2 = uVar4 >> 7;
        uVar1 = uVar4 >> 0xe;
        pbVar6 = pbVar7 + 1;
        *pbVar7 = (byte)uVar4 | 0x80;
        pbVar7 = pbVar6;
        uVar4 = uVar2;
      } while (uVar1 != 0);
    }
    param_3 = pbVar6 + 1;
    *pbVar6 = (byte)uVar2;
    if (0 < *(int *)(param_1 + 0x18)) {
      lVar3 = 0;
      pbVar6 = param_3;
      do {
        uVar2 = *(uint *)(*(long *)(param_1 + 0x20) + lVar3 * 4 + 8);
        if ((int)uVar2 < 0) {
          if ((ulong)(long)(int)uVar2 >> 0x38 == 0) {
            lVar5 = 8;
          }
          else {
            pbVar6[8] = (byte)((ulong)(long)(int)uVar2 >> 0x38) | 0x80;
            lVar5 = 10;
            pbVar6[9] = 0x81;
          }
          uVar4 = (int)uVar2 >> 0x1f;
          pbVar6[7] = (byte)(uVar4 >> 0x11) | 0x80;
          pbVar6[5] = (byte)(uVar4 >> 3) | 0x80;
          pbVar6[4] = (byte)((int)uVar2 >> 0x1c) | 0x80;
          pbVar6[3] = (byte)(uVar2 >> 0x15) | 0x80;
          pbVar6[2] = (byte)(uVar2 >> 0xe) | 0x80;
          pbVar6[6] = (byte)(uVar4 >> 10) | 0x80;
          *pbVar6 = (byte)uVar2 | 0x80;
          uVar4 = (int)lVar5 - 1;
          pbVar6[1] = (byte)(uVar2 >> 7) | 0x80;
          pbVar6[uVar4] = pbVar6[uVar4] & 0x7f;
          param_3 = pbVar6 + lVar5;
        }
        else {
          if (0x7f < uVar2) {
            pbVar7 = pbVar6;
            uVar4 = uVar2;
            do {
              uVar2 = uVar4 >> 7;
              uVar1 = uVar4 >> 0xe;
              pbVar6 = pbVar7 + 1;
              *pbVar7 = (byte)uVar4 | 0x80;
              pbVar7 = pbVar6;
              uVar4 = uVar2;
            } while (uVar1 != 0);
          }
          param_3 = pbVar6 + 1;
          *pbVar6 = (byte)uVar2;
        }
        lVar3 = lVar3 + 1;
        pbVar6 = param_3;
      } while (lVar3 < *(int *)(param_1 + 0x18));
    }
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    pbVar6 = param_3 + 1;
    *param_3 = 0x12;
    uVar2 = *(uint *)(param_1 + 0x40);
    if (0x7f < uVar2) {
      pbVar7 = pbVar6;
      uVar4 = uVar2;
      do {
        uVar2 = uVar4 >> 7;
        uVar1 = uVar4 >> 0xe;
        pbVar6 = pbVar7 + 1;
        *pbVar7 = (byte)uVar4 | 0x80;
        pbVar7 = pbVar6;
        uVar4 = uVar2;
      } while (uVar1 != 0);
    }
    param_3 = pbVar6 + 1;
    *pbVar6 = (byte)uVar2;
    if (0 < *(int *)(param_1 + 0x30)) {
      lVar3 = 0;
      pbVar6 = param_3;
      do {
        uVar2 = *(uint *)(*(long *)(param_1 + 0x38) + lVar3 * 4 + 8);
        if ((int)uVar2 < 0) {
          if ((ulong)(long)(int)uVar2 >> 0x38 == 0) {
            lVar5 = 8;
          }
          else {
            pbVar6[8] = (byte)((ulong)(long)(int)uVar2 >> 0x38) | 0x80;
            lVar5 = 10;
            pbVar6[9] = 0x81;
          }
          uVar4 = (int)uVar2 >> 0x1f;
          pbVar6[7] = (byte)(uVar4 >> 0x11) | 0x80;
          pbVar6[5] = (byte)(uVar4 >> 3) | 0x80;
          pbVar6[4] = (byte)((int)uVar2 >> 0x1c) | 0x80;
          pbVar6[3] = (byte)(uVar2 >> 0x15) | 0x80;
          pbVar6[2] = (byte)(uVar2 >> 0xe) | 0x80;
          pbVar6[6] = (byte)(uVar4 >> 10) | 0x80;
          *pbVar6 = (byte)uVar2 | 0x80;
          uVar4 = (int)lVar5 - 1;
          pbVar6[1] = (byte)(uVar2 >> 7) | 0x80;
          pbVar6[uVar4] = pbVar6[uVar4] & 0x7f;
          param_3 = pbVar6 + lVar5;
        }
        else {
          if (0x7f < uVar2) {
            pbVar7 = pbVar6;
            uVar4 = uVar2;
            do {
              uVar2 = uVar4 >> 7;
              uVar1 = uVar4 >> 0xe;
              pbVar6 = pbVar7 + 1;
              *pbVar7 = (byte)uVar4 | 0x80;
              pbVar7 = pbVar6;
              uVar4 = uVar2;
            } while (uVar1 != 0);
          }
          param_3 = pbVar6 + 1;
          *pbVar6 = (byte)uVar2;
        }
        lVar3 = lVar3 + 1;
        pbVar6 = param_3;
      } while (lVar3 < *(int *)(param_1 + 0x30));
    }
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 >> 2 & 1) != 0) {
    pbVar6 = *(byte **)(param_1 + 0x48);
    pbVar7 = param_3 + 1;
    *param_3 = 0x1a;
    uVar2 = (uint)(*pbVar6 >> 1);
    if ((*pbVar6 & 1) != 0) {
      uVar2 = *(uint *)(pbVar6 + 8);
    }
    if (0x7f < uVar2) {
      pbVar8 = pbVar7;
      uVar4 = uVar2;
      do {
        uVar2 = uVar4 >> 7;
        uVar1 = uVar4 >> 0xe;
        pbVar7 = pbVar8 + 1;
        *pbVar8 = (byte)uVar4 | 0x80;
        pbVar8 = pbVar7;
        uVar4 = uVar2;
      } while (uVar1 != 0);
    }
    *pbVar7 = (byte)uVar2;
    pbVar8 = *(byte **)(pbVar6 + 0x10);
    uVar4 = (uint)(*pbVar6 >> 1);
    if ((*pbVar6 & 1) == 0) {
      pbVar8 = pbVar6 + 1;
    }
    else {
      uVar4 = (uint)*(undefined8 *)(pbVar6 + 8);
    }
    memcpy(pbVar7 + 1,pbVar8,(long)(int)uVar4);
    uVar2 = *(uint *)(param_1 + 0x10);
    param_3 = pbVar7 + 1 + (int)uVar4;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    pbVar6 = *(byte **)(param_1 + 0x50);
    pbVar7 = param_3 + 1;
    *param_3 = 0x22;
    uVar2 = (uint)(*pbVar6 >> 1);
    if ((*pbVar6 & 1) != 0) {
      uVar2 = *(uint *)(pbVar6 + 8);
    }
    if (0x7f < uVar2) {
      pbVar8 = pbVar7;
      uVar4 = uVar2;
      do {
        uVar2 = uVar4 >> 7;
        uVar1 = uVar4 >> 0xe;
        pbVar7 = pbVar8 + 1;
        *pbVar8 = (byte)uVar4 | 0x80;
        pbVar8 = pbVar7;
        uVar4 = uVar2;
      } while (uVar1 != 0);
    }
    *pbVar7 = (byte)uVar2;
    pbVar8 = *(byte **)(pbVar6 + 0x10);
    uVar2 = (uint)(*pbVar6 >> 1);
    if ((*pbVar6 & 1) == 0) {
      pbVar8 = pbVar6 + 1;
    }
    else {
      uVar2 = (uint)*(undefined8 *)(pbVar6 + 8);
    }
    memcpy(pbVar7 + 1,pbVar8,(long)(int)uVar2);
    param_3 = pbVar7 + 1 + (int)uVar2;
  }
  if (0 < *(int *)(param_1 + 0x60)) {
    lVar3 = 0;
    do {
      pbVar6 = *(byte **)(*(long *)(param_1 + 0x68) + lVar3 * 8 + 8);
      pbVar7 = param_3 + 1;
      *param_3 = 0x32;
      uVar2 = (uint)(*pbVar6 >> 1);
      if ((*pbVar6 & 1) != 0) {
        uVar2 = *(uint *)(pbVar6 + 8);
      }
      if (0x7f < uVar2) {
        pbVar8 = pbVar7;
        uVar4 = uVar2;
        do {
          uVar2 = uVar4 >> 7;
          uVar1 = uVar4 >> 0xe;
          pbVar7 = pbVar8 + 1;
          *pbVar8 = (byte)uVar4 | 0x80;
          pbVar8 = pbVar7;
          uVar4 = uVar2;
        } while (uVar1 != 0);
      }
      *pbVar7 = (byte)uVar2;
      pbVar8 = *(byte **)(pbVar6 + 0x10);
      uVar2 = (uint)(*pbVar6 >> 1);
      if ((*pbVar6 & 1) == 0) {
        pbVar8 = pbVar6 + 1;
      }
      else {
        uVar2 = (uint)*(undefined8 *)(pbVar6 + 8);
      }
      memcpy(pbVar7 + 1,pbVar8,(long)(int)uVar2);
      param_3 = pbVar7 + 1 + (int)uVar2;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x60));
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_3;
  }
  pbVar6 = (byte *)FUN_00c02cac(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe,param_3);
  return pbVar6;
}


