/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bca958; name: FUN_00bca958
 */


byte * FUN_00bca958(long param_1,undefined8 param_2,byte *param_3)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 1) != 0) {
    pbVar4 = *(byte **)(param_1 + 0x18);
    pbVar7 = param_3 + 1;
    *param_3 = 10;
    uVar3 = (uint)(*pbVar4 >> 1);
    if ((*pbVar4 & 1) != 0) {
      uVar3 = *(uint *)(pbVar4 + 8);
    }
    if (0x7f < uVar3) {
      pbVar8 = pbVar7;
      uVar5 = uVar3;
      do {
        uVar3 = uVar5 >> 7;
        uVar1 = uVar5 >> 0xe;
        pbVar7 = pbVar8 + 1;
        *pbVar8 = (byte)uVar5 | 0x80;
        pbVar8 = pbVar7;
        uVar5 = uVar3;
      } while (uVar1 != 0);
    }
    *pbVar7 = (byte)uVar3;
    pbVar8 = *(byte **)(pbVar4 + 0x10);
    uVar5 = (uint)(*pbVar4 >> 1);
    if ((*pbVar4 & 1) == 0) {
      pbVar8 = pbVar4 + 1;
    }
    else {
      uVar5 = (uint)*(undefined8 *)(pbVar4 + 8);
    }
    memcpy(pbVar7 + 1,pbVar8,(long)(int)uVar5);
    uVar3 = *(uint *)(param_1 + 0x10);
    param_3 = pbVar7 + 1 + (int)uVar5;
  }
  if ((uVar3 >> 1 & 1) != 0) {
    uVar3 = *(uint *)(param_1 + 0x28);
    pbVar4 = param_3 + 1;
    *param_3 = 0x10;
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
      pbVar4[uVar5] = pbVar4[uVar5] & 0x7f;
      param_3 = pbVar4 + lVar6;
    }
    else {
      if (0x7f < uVar3) {
        pbVar7 = pbVar4;
        uVar5 = uVar3;
        do {
          uVar3 = uVar5 >> 7;
          uVar1 = uVar5 >> 0xe;
          pbVar4 = pbVar7 + 1;
          *pbVar7 = (byte)uVar5 | 0x80;
          pbVar7 = pbVar4;
          uVar5 = uVar3;
        } while (uVar1 != 0);
      }
      param_3 = pbVar4 + 1;
      *pbVar4 = (byte)uVar3;
    }
  }
  if ((*(byte *)(param_1 + 0x10) >> 2 & 1) != 0) {
    plVar2 = *(long **)(param_1 + 0x20);
    pbVar4 = param_3 + 1;
    *param_3 = 0x1a;
    uVar3 = *(uint *)((long)plVar2 + 0x34);
    if (0x7f < uVar3) {
      pbVar7 = pbVar4;
      uVar5 = uVar3;
      do {
        uVar3 = uVar5 >> 7;
        uVar1 = uVar5 >> 0xe;
        pbVar4 = pbVar7 + 1;
        *pbVar7 = (byte)uVar5 | 0x80;
        pbVar7 = pbVar4;
        uVar5 = uVar3;
      } while (uVar1 != 0);
    }
    *pbVar4 = (byte)uVar3;
    param_3 = (byte *)(**(code **)(*plVar2 + 0x80))(plVar2,0,pbVar4 + 1);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_3;
  }
  pbVar4 = (byte *)FUN_00c02cac(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe,param_3);
  return pbVar4;
}


