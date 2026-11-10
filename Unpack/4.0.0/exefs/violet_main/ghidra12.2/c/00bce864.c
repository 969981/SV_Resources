/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bce864; name: FUN_00bce864
 */


/* WARNING: Type propagation algorithm not settling */

byte * FUN_00bce864(long param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  uVar5 = *(uint *)(param_1 + 0x10);
  if ((uVar5 & 1) != 0) {
    pbVar4 = *(byte **)(param_1 + 0x18);
    pbVar7 = param_3 + 1;
    *param_3 = 10;
    uVar5 = (uint)(*pbVar4 >> 1);
    if ((*pbVar4 & 1) != 0) {
      uVar5 = *(uint *)(pbVar4 + 8);
    }
    if (0x7f < uVar5) {
      pbVar8 = pbVar7;
      uVar6 = uVar5;
      do {
        uVar5 = uVar6 >> 7;
        uVar2 = uVar6 >> 0xe;
        pbVar7 = pbVar8 + 1;
        *pbVar8 = (byte)uVar6 | 0x80;
        pbVar8 = pbVar7;
        uVar6 = uVar5;
      } while (uVar2 != 0);
    }
    *pbVar7 = (byte)uVar5;
    pbVar8 = *(byte **)(pbVar4 + 0x10);
    uVar6 = (uint)(*pbVar4 >> 1);
    if ((*pbVar4 & 1) == 0) {
      pbVar8 = pbVar4 + 1;
    }
    else {
      uVar6 = (uint)*(undefined8 *)(pbVar4 + 8);
    }
    memcpy(pbVar7 + 1,pbVar8,(long)(int)uVar6);
    uVar5 = *(uint *)(param_1 + 0x10);
    param_3 = pbVar7 + 1 + (int)uVar6;
  }
  if ((uVar5 >> 1 & 1) != 0) {
    pbVar4 = *(byte **)(param_1 + 0x20);
    pbVar7 = (byte *)((long)param_3 + 1);
    *param_3 = 0x12;
    uVar5 = (uint)(*pbVar4 >> 1);
    if ((*pbVar4 & 1) != 0) {
      uVar5 = *(uint *)(pbVar4 + 8);
    }
    if (0x7f < uVar5) {
      pbVar8 = pbVar7;
      uVar6 = uVar5;
      do {
        uVar5 = uVar6 >> 7;
        uVar2 = uVar6 >> 0xe;
        pbVar7 = pbVar8 + 1;
        *pbVar8 = (byte)uVar6 | 0x80;
        pbVar8 = pbVar7;
        uVar6 = uVar5;
      } while (uVar2 != 0);
    }
    *pbVar7 = (byte)uVar5;
    pbVar8 = *(byte **)(pbVar4 + 0x10);
    uVar6 = (uint)(*pbVar4 >> 1);
    if ((*pbVar4 & 1) == 0) {
      pbVar8 = pbVar4 + 1;
    }
    else {
      uVar6 = (uint)*(undefined8 *)(pbVar4 + 8);
    }
    memcpy(pbVar7 + 1,pbVar8,(long)(int)uVar6);
    uVar5 = *(uint *)(param_1 + 0x10);
    param_3 = pbVar7 + 1 + (int)uVar6;
  }
  if ((uVar5 >> 2 & 1) != 0) {
    pbVar4 = *(byte **)(param_1 + 0x28);
    pbVar7 = (byte *)((long)param_3 + 1);
    *param_3 = 0x1a;
    uVar5 = (uint)(*pbVar4 >> 1);
    if ((*pbVar4 & 1) != 0) {
      uVar5 = *(uint *)(pbVar4 + 8);
    }
    if (0x7f < uVar5) {
      pbVar8 = pbVar7;
      uVar6 = uVar5;
      do {
        uVar5 = uVar6 >> 7;
        uVar2 = uVar6 >> 0xe;
        pbVar7 = pbVar8 + 1;
        *pbVar8 = (byte)uVar6 | 0x80;
        pbVar8 = pbVar7;
        uVar6 = uVar5;
      } while (uVar2 != 0);
    }
    *pbVar7 = (byte)uVar5;
    pbVar8 = *(byte **)(pbVar4 + 0x10);
    uVar6 = (uint)(*pbVar4 >> 1);
    if ((*pbVar4 & 1) == 0) {
      pbVar8 = pbVar4 + 1;
    }
    else {
      uVar6 = (uint)*(undefined8 *)(pbVar4 + 8);
    }
    memcpy(pbVar7 + 1,pbVar8,(long)(int)uVar6);
    uVar5 = *(uint *)(param_1 + 0x10);
    param_3 = pbVar7 + 1 + (int)uVar6;
  }
  if ((uVar5 >> 3 & 1) != 0) {
    plVar3 = *(long **)(param_1 + 0x30);
    pbVar4 = param_3 + 1;
    *param_3 = 0x22;
    uVar5 = *(uint *)((long)plVar3 + 0x34);
    if (0x7f < uVar5) {
      pbVar7 = pbVar4;
      uVar6 = uVar5;
      do {
        uVar5 = uVar6 >> 7;
        uVar2 = uVar6 >> 0xe;
        pbVar4 = pbVar7 + 1;
        *pbVar7 = (byte)uVar6 | 0x80;
        pbVar7 = pbVar4;
        uVar6 = uVar5;
      } while (uVar2 != 0);
    }
    *pbVar4 = (byte)uVar5;
    param_3 = (byte *)(**(code **)(*plVar3 + 0x80))(plVar3,0,pbVar4 + 1);
    uVar5 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar5 >> 4 & 1) != 0) {
    bVar1 = *(byte *)(param_1 + 0x38);
    *param_3 = 0x28;
    param_3[1] = bVar1;
    uVar5 = *(uint *)(param_1 + 0x10);
    param_3 = param_3 + 2;
  }
  if ((uVar5 >> 5 & 1) != 0) {
    bVar1 = *(byte *)(param_1 + 0x39);
    *param_3 = 0x30;
    param_3[1] = bVar1;
    param_3 = param_3 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_3;
  }
  pbVar4 = (byte *)FUN_00c02cac(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe,param_3);
  return pbVar4;
}


