/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bc2338; name: FUN_00bc2338
 */


byte * FUN_00bc2338(long param_1,undefined8 param_2,byte *param_3)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  int iVar10;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
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
    uVar5 = (uint)(*pbVar4 >> 1);
    if ((*pbVar4 & 1) == 0) {
      pbVar8 = pbVar4 + 1;
    }
    else {
      uVar5 = (uint)*(undefined8 *)(pbVar4 + 8);
    }
    memcpy(pbVar7 + 1,pbVar8,(long)(int)uVar5);
    param_3 = pbVar7 + 1 + (int)uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != 0) {
    iVar10 = 0;
    do {
      plVar3 = *(long **)(*(long *)(param_1 + 0x30) + (long)iVar10 * 8 + 8);
      pbVar4 = param_3 + 1;
      *param_3 = 0x12;
      uVar5 = *(uint *)((long)plVar3 + 0x14);
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
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 != 0) {
    iVar10 = 0;
    do {
      plVar3 = *(long **)(*(long *)(param_1 + 0x60) + (long)iVar10 * 8 + 8);
      pbVar4 = param_3 + 1;
      *param_3 = 0x1a;
      uVar5 = *(uint *)((long)plVar3 + 0x14);
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
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 != 0) {
    iVar10 = 0;
    do {
      plVar3 = *(long **)(*(long *)(param_1 + 0x78) + (long)iVar10 * 8 + 8);
      pbVar4 = param_3 + 1;
      *param_3 = 0x22;
      uVar5 = *(uint *)((long)plVar3 + 0x14);
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
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 != 0) {
    iVar10 = 0;
    do {
      plVar3 = *(long **)(*(long *)(param_1 + 0x90) + (long)iVar10 * 8 + 8);
      pbVar4 = param_3 + 1;
      *param_3 = 0x2a;
      uVar5 = *(uint *)((long)plVar3 + 0x14);
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
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 != 0) {
    iVar10 = 0;
    do {
      plVar3 = *(long **)(*(long *)(param_1 + 0x48) + (long)iVar10 * 8 + 8);
      pbVar4 = param_3 + 1;
      *param_3 = 0x32;
      uVar5 = *(uint *)((long)plVar3 + 0x14);
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
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar1);
  }
  if (*(char *)(param_1 + 0x10) < '\0') {
    plVar3 = *(long **)(param_1 + 0xb0);
    pbVar4 = param_3 + 1;
    *param_3 = 0x3a;
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
  }
  iVar1 = *(int *)(param_1 + 0xa0);
  if (iVar1 != 0) {
    iVar10 = 0;
    do {
      plVar3 = *(long **)(*(long *)(param_1 + 0xa8) + (long)iVar10 * 8 + 8);
      pbVar4 = param_3 + 1;
      *param_3 = 0x42;
      uVar5 = *(uint *)((long)plVar3 + 0x14);
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
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar1);
  }
  iVar1 = *(int *)(param_1 + 0xc0);
  if (iVar1 != 0) {
    iVar10 = 0;
    do {
      plVar3 = *(long **)(*(long *)(param_1 + 200) + (long)iVar10 * 8 + 8);
      pbVar4 = param_3 + 1;
      *param_3 = 0x4a;
      uVar5 = *(uint *)((long)plVar3 + 0x14);
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
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar1);
  }
  if (0 < *(int *)(param_1 + 0xd8)) {
    lVar9 = 0;
    do {
      pbVar4 = *(byte **)(*(long *)(param_1 + 0xe0) + lVar9 * 8 + 8);
      pbVar7 = param_3 + 1;
      *param_3 = 0x52;
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
      uVar5 = (uint)(*pbVar4 >> 1);
      if ((*pbVar4 & 1) == 0) {
        pbVar8 = pbVar4 + 1;
      }
      else {
        uVar5 = (uint)*(undefined8 *)(pbVar4 + 8);
      }
      memcpy(pbVar7 + 1,pbVar8,(long)(int)uVar5);
      param_3 = pbVar7 + 1 + (int)uVar5;
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1 + 0xd8));
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_3;
  }
  pbVar4 = (byte *)FUN_00c02cac(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe,param_3);
  return pbVar4;
}


