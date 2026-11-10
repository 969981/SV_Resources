/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b70bdc; name: FUN_00b70bdc
 */


byte * FUN_00b70bdc(long param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  uVar3 = *(uint *)(param_1 + 0x30);
  if (uVar3 != 0) {
    pbVar2 = param_3 + 1;
    *param_3 = 8;
    if ((int)uVar3 < 0) {
      if ((ulong)(long)(int)uVar3 >> 0x38 == 0) {
        lVar6 = 8;
      }
      else {
        param_3[9] = (byte)((ulong)(long)(int)uVar3 >> 0x38) | 0x80;
        lVar6 = 10;
        param_3[10] = 0x81;
      }
      uVar5 = (int)uVar3 >> 0x1f;
      param_3[8] = (byte)(uVar5 >> 0x11) | 0x80;
      param_3[6] = (byte)(uVar5 >> 3) | 0x80;
      param_3[5] = (byte)((int)uVar3 >> 0x1c) | 0x80;
      param_3[4] = (byte)(uVar3 >> 0x15) | 0x80;
      param_3[3] = (byte)(uVar3 >> 0xe) | 0x80;
      param_3[7] = (byte)(uVar5 >> 10) | 0x80;
      param_3[1] = (byte)uVar3 | 0x80;
      uVar5 = (int)lVar6 - 1;
      param_3[2] = (byte)(uVar3 >> 7) | 0x80;
      pbVar2[uVar5] = pbVar2[uVar5] & 0x7f;
      param_3 = pbVar2 + lVar6;
    }
    else {
      if (0x7f < uVar3) {
        pbVar8 = pbVar2;
        uVar5 = uVar3;
        do {
          uVar3 = uVar5 >> 7;
          uVar7 = uVar5 >> 0xe;
          pbVar2 = pbVar8 + 1;
          *pbVar8 = (byte)uVar5 | 0x80;
          pbVar8 = pbVar2;
          uVar5 = uVar3;
        } while (uVar7 != 0);
      }
      param_3 = pbVar2 + 1;
      *pbVar2 = (byte)uVar3;
    }
  }
  uVar4 = *(ulong *)(param_1 + 0x18);
  if (uVar4 != 0) {
    pbVar2 = param_3 + 1;
    *param_3 = 0x10;
    bVar1 = (byte)(uVar4 >> 0x38);
    uVar5 = (uint)uVar4;
    uVar7 = (uint)(uVar4 >> 0x1c);
    uVar3 = (uint)(uVar4 >> 0x20);
    if (bVar1 == 0) {
      if (uVar7 != 0) {
        if (uVar7 >> 0xe != 0) {
          if (0x1fffff < uVar7) {
            lVar6 = 8;
            goto LAB_00b70d3c;
          }
          lVar6 = 7;
          goto LAB_00b70d48;
        }
        if (0x7f < uVar7) {
          lVar6 = 6;
          goto LAB_00b70d54;
        }
        lVar6 = 5;
        goto LAB_00b70d60;
      }
      if ((uVar4 >> 0xe & 0x3ffff) != 0) {
        if (0x1fffff < uVar5) {
          lVar6 = 4;
          goto LAB_00b70d68;
        }
        lVar6 = 3;
        goto LAB_00b70d74;
      }
      if (0x7f < uVar5) {
        lVar6 = 2;
        goto LAB_00b70d7c;
      }
      lVar6 = 1;
    }
    else {
      if (bVar1 < 0x80) {
        lVar6 = 9;
      }
      else {
        param_3[10] = 0x81;
        lVar6 = 10;
      }
      param_3[9] = bVar1 | 0x80;
LAB_00b70d3c:
      param_3[8] = (byte)(uVar3 >> 0x11) | 0x80;
LAB_00b70d48:
      param_3[7] = (byte)(uVar3 >> 10) | 0x80;
LAB_00b70d54:
      param_3[6] = (byte)(uVar3 >> 3) | 0x80;
LAB_00b70d60:
      param_3[5] = (byte)(uVar4 >> 0x1c) | 0x80;
LAB_00b70d68:
      param_3[4] = (byte)(uVar5 >> 0x15) | 0x80;
LAB_00b70d74:
      param_3[3] = (byte)(uVar4 >> 0xe) | 0x80;
LAB_00b70d7c:
      param_3[2] = (byte)(uVar5 >> 7) | 0x80;
    }
    *pbVar2 = (byte)uVar4 | 0x80;
    uVar3 = (int)lVar6 - 1;
    param_3 = pbVar2 + lVar6;
    pbVar2[uVar3] = pbVar2[uVar3] & 0x7f;
  }
  pbVar2 = *(byte **)(param_1 + 0x20);
  bVar1 = *pbVar2;
  if ((bVar1 & 1) == 0) {
    if (bVar1 < 2) goto LAB_00b70e50;
    pbVar2 = pbVar2 + 1;
    uVar4 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar4 = *(ulong *)(pbVar2 + 8);
    if (uVar4 == 0) goto LAB_00b70e50;
    pbVar2 = *(byte **)(pbVar2 + 0x10);
  }
  FUN_00c0d914(pbVar2,uVar4,1,"SaturdayBleSendPrepProto.application_id");
  pbVar2 = *(byte **)(param_1 + 0x20);
  pbVar8 = param_3 + 1;
  *param_3 = 0x1a;
  uVar3 = (uint)(*pbVar2 >> 1);
  if ((*pbVar2 & 1) != 0) {
    uVar3 = *(uint *)(pbVar2 + 8);
  }
  if (0x7f < uVar3) {
    pbVar9 = pbVar8;
    uVar5 = uVar3;
    do {
      uVar3 = uVar5 >> 7;
      uVar7 = uVar5 >> 0xe;
      pbVar8 = pbVar9 + 1;
      *pbVar9 = (byte)uVar5 | 0x80;
      pbVar9 = pbVar8;
      uVar5 = uVar3;
    } while (uVar7 != 0);
  }
  *pbVar8 = (byte)uVar3;
  pbVar9 = *(byte **)(pbVar2 + 0x10);
  uVar3 = (uint)(*pbVar2 >> 1);
  if ((*pbVar2 & 1) == 0) {
    pbVar9 = pbVar2 + 1;
  }
  else {
    uVar3 = (uint)*(undefined8 *)(pbVar2 + 8);
  }
  memcpy(pbVar8 + 1,pbVar9,(long)(int)uVar3);
  param_3 = pbVar8 + 1 + (int)uVar3;
LAB_00b70e50:
  pbVar2 = *(byte **)(param_1 + 0x28);
  bVar1 = *pbVar2;
  if ((bVar1 & 1) == 0) {
    if (bVar1 < 2) {
      return param_3;
    }
    pbVar2 = pbVar2 + 1;
    uVar4 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar4 = *(ulong *)(pbVar2 + 8);
    if (uVar4 == 0) {
      return param_3;
    }
    pbVar2 = *(byte **)(pbVar2 + 0x10);
  }
  FUN_00c0d914(pbVar2,uVar4,1,"SaturdayBleSendPrepProto.nonce");
  pbVar2 = *(byte **)(param_1 + 0x28);
  pbVar8 = param_3 + 1;
  *param_3 = 0x22;
  uVar3 = (uint)(*pbVar2 >> 1);
  if ((*pbVar2 & 1) != 0) {
    uVar3 = *(uint *)(pbVar2 + 8);
  }
  if (0x7f < uVar3) {
    pbVar9 = pbVar8;
    uVar5 = uVar3;
    do {
      uVar3 = uVar5 >> 7;
      uVar7 = uVar5 >> 0xe;
      pbVar8 = pbVar9 + 1;
      *pbVar9 = (byte)uVar5 | 0x80;
      pbVar9 = pbVar8;
      uVar5 = uVar3;
    } while (uVar7 != 0);
  }
  *pbVar8 = (byte)uVar3;
  pbVar9 = *(byte **)(pbVar2 + 0x10);
  uVar3 = (uint)(*pbVar2 >> 1);
  if ((*pbVar2 & 1) == 0) {
    pbVar9 = pbVar2 + 1;
  }
  else {
    uVar3 = (uint)*(undefined8 *)(pbVar2 + 8);
  }
  memcpy(pbVar8 + 1,pbVar9,(long)(int)uVar3);
  return pbVar8 + 1 + (int)uVar3;
}


