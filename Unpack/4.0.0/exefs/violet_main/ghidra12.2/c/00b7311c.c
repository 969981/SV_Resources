/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b7311c; name: FUN_00b7311c
 */


byte * FUN_00b7311c(long param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  uVar5 = *(ulong *)(param_1 + 0x18);
  if (uVar5 == 0) goto LAB_00b731fc;
  pbVar2 = param_3 + 1;
  *param_3 = 8;
  bVar1 = (byte)(uVar5 >> 0x38);
  uVar3 = (uint)uVar5;
  uVar7 = (uint)(uVar5 >> 0x1c);
  uVar4 = (uint)(uVar5 >> 0x20);
  if (bVar1 == 0) {
    if (uVar7 != 0) {
      if (uVar7 >> 0xe != 0) {
        if (0x1fffff < uVar7) {
          lVar6 = 8;
          goto LAB_00b73194;
        }
        lVar6 = 7;
        goto LAB_00b731a0;
      }
      if (0x7f < uVar7) {
        lVar6 = 6;
        goto LAB_00b731ac;
      }
      lVar6 = 5;
      goto LAB_00b731b8;
    }
    if ((uVar5 >> 0xe & 0x3ffff) != 0) {
      if (0x1fffff < uVar3) {
        lVar6 = 4;
        goto LAB_00b731c0;
      }
      lVar6 = 3;
      goto LAB_00b731cc;
    }
    if (0x7f < uVar3) {
      lVar6 = 2;
      goto LAB_00b731d4;
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
LAB_00b73194:
    param_3[8] = (byte)(uVar4 >> 0x11) | 0x80;
LAB_00b731a0:
    param_3[7] = (byte)(uVar4 >> 10) | 0x80;
LAB_00b731ac:
    param_3[6] = (byte)(uVar4 >> 3) | 0x80;
LAB_00b731b8:
    param_3[5] = (byte)(uVar5 >> 0x1c) | 0x80;
LAB_00b731c0:
    param_3[4] = (byte)(uVar3 >> 0x15) | 0x80;
LAB_00b731cc:
    param_3[3] = (byte)(uVar5 >> 0xe) | 0x80;
LAB_00b731d4:
    param_3[2] = (byte)(uVar3 >> 7) | 0x80;
  }
  *pbVar2 = (byte)uVar5 | 0x80;
  uVar4 = (int)lVar6 - 1;
  param_3 = pbVar2 + lVar6;
  pbVar2[uVar4] = pbVar2[uVar4] & 0x7f;
LAB_00b731fc:
  pbVar2 = *(byte **)(param_1 + 0x20);
  bVar1 = *pbVar2;
  if ((bVar1 & 1) == 0) {
    if (bVar1 < 2) {
      return param_3;
    }
    pbVar2 = pbVar2 + 1;
    uVar5 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar5 = *(ulong *)(pbVar2 + 8);
    if (uVar5 == 0) {
      return param_3;
    }
    pbVar2 = *(byte **)(pbVar2 + 0x10);
  }
  FUN_00c0d914(pbVar2,uVar5,1,"SaturdayBleCompleteRequestProto.nonce");
  pbVar2 = *(byte **)(param_1 + 0x20);
  pbVar8 = param_3 + 1;
  *param_3 = 0x12;
  uVar4 = (uint)(*pbVar2 >> 1);
  if ((*pbVar2 & 1) != 0) {
    uVar4 = *(uint *)(pbVar2 + 8);
  }
  if (0x7f < uVar4) {
    pbVar9 = pbVar8;
    uVar3 = uVar4;
    do {
      uVar4 = uVar3 >> 7;
      uVar7 = uVar3 >> 0xe;
      pbVar8 = pbVar9 + 1;
      *pbVar9 = (byte)uVar3 | 0x80;
      pbVar9 = pbVar8;
      uVar3 = uVar4;
    } while (uVar7 != 0);
  }
  *pbVar8 = (byte)uVar4;
  pbVar9 = *(byte **)(pbVar2 + 0x10);
  uVar4 = (uint)(*pbVar2 >> 1);
  if ((*pbVar2 & 1) == 0) {
    pbVar9 = pbVar2 + 1;
  }
  else {
    uVar4 = (uint)*(undefined8 *)(pbVar2 + 8);
  }
  memcpy(pbVar8 + 1,pbVar9,(long)(int)uVar4);
  return pbVar8 + 1 + (int)uVar4;
}


