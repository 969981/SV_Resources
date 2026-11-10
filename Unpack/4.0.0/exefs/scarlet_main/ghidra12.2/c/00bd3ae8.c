/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bd3ae8; name: FUN_00bd3ae8
 */


/* WARNING: Type propagation algorithm not settling */

byte * FUN_00bd3ae8(long param_1,undefined8 param_2,byte *param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  long *plVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  int iVar12;
  long *plVar13;
  
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    uVar8 = *(uint *)(param_1 + 0x38);
    pbVar7 = param_3 + 1;
    *param_3 = 8;
    if ((int)uVar8 < 0) {
      if ((ulong)(long)(int)uVar8 >> 0x38 == 0) {
        lVar9 = 8;
      }
      else {
        param_3[9] = (byte)((ulong)(long)(int)uVar8 >> 0x38) | 0x80;
        lVar9 = 10;
        param_3[10] = 0x81;
      }
      uVar10 = (int)uVar8 >> 0x1f;
      param_3[8] = (byte)(uVar10 >> 0x11) | 0x80;
      param_3[6] = (byte)(uVar10 >> 3) | 0x80;
      param_3[5] = (byte)((int)uVar8 >> 0x1c) | 0x80;
      param_3[4] = (byte)(uVar8 >> 0x15) | 0x80;
      param_3[3] = (byte)(uVar8 >> 0xe) | 0x80;
      param_3[7] = (byte)(uVar10 >> 10) | 0x80;
      param_3[1] = (byte)uVar8 | 0x80;
      uVar10 = (int)lVar9 - 1;
      param_3[2] = (byte)(uVar8 >> 7) | 0x80;
      pbVar7[uVar10] = pbVar7[uVar10] & 0x7f;
      param_3 = pbVar7 + lVar9;
    }
    else {
      if (0x7f < uVar8) {
        pbVar6 = pbVar7;
        uVar10 = uVar8;
        do {
          uVar8 = uVar10 >> 7;
          uVar3 = uVar10 >> 0xe;
          pbVar7 = pbVar6 + 1;
          *pbVar6 = (byte)uVar10 | 0x80;
          pbVar6 = pbVar7;
          uVar10 = uVar8;
        } while (uVar3 != 0);
      }
      param_3 = pbVar7 + 1;
      *pbVar7 = (byte)uVar8;
    }
  }
  uVar8 = *(uint *)(param_1 + 0x30);
  if ((uVar8 >> 1 & 1) != 0) {
    bVar2 = *(byte *)(param_1 + 0x58);
    *param_3 = 0x10;
    param_3[1] = bVar2;
    uVar8 = *(uint *)(param_1 + 0x30);
    param_3 = param_3 + 2;
  }
  if ((uVar8 >> 4 & 1) != 0) {
    bVar2 = *(byte *)(param_1 + 0x5a);
    *param_3 = 0x18;
    param_3[1] = bVar2;
    uVar8 = *(uint *)(param_1 + 0x30);
    param_3 = param_3 + 2;
  }
  if ((uVar8 >> 3 & 1) != 0) {
    bVar2 = *(byte *)(param_1 + 0x59);
    *param_3 = 0x28;
    param_3[1] = bVar2;
    uVar8 = *(uint *)(param_1 + 0x30);
    param_3 = param_3 + 2;
  }
  if ((uVar8 >> 2 & 1) != 0) {
    uVar8 = *(uint *)(param_1 + 0x3c);
    pbVar7 = param_3 + 1;
    *param_3 = 0x30;
    if ((int)uVar8 < 0) {
      if ((ulong)(long)(int)uVar8 >> 0x38 == 0) {
        lVar9 = 8;
      }
      else {
        param_3[9] = (byte)((ulong)(long)(int)uVar8 >> 0x38) | 0x80;
        lVar9 = 10;
        param_3[10] = 0x81;
      }
      uVar10 = (int)uVar8 >> 0x1f;
      param_3[8] = (byte)(uVar10 >> 0x11) | 0x80;
      param_3[6] = (byte)(uVar10 >> 3) | 0x80;
      param_3[5] = (byte)((int)uVar8 >> 0x1c) | 0x80;
      param_3[4] = (byte)(uVar8 >> 0x15) | 0x80;
      param_3[3] = (byte)(uVar8 >> 0xe) | 0x80;
      param_3[7] = (byte)(uVar10 >> 10) | 0x80;
      param_3[1] = (byte)uVar8 | 0x80;
      uVar10 = (int)lVar9 - 1;
      param_3[2] = (byte)(uVar8 >> 7) | 0x80;
      pbVar7[uVar10] = pbVar7[uVar10] & 0x7f;
      param_3 = pbVar7 + lVar9;
    }
    else {
      if (0x7f < uVar8) {
        pbVar6 = pbVar7;
        uVar10 = uVar8;
        do {
          uVar8 = uVar10 >> 7;
          uVar3 = uVar10 >> 0xe;
          pbVar7 = pbVar6 + 1;
          *pbVar6 = (byte)uVar10 | 0x80;
          pbVar6 = pbVar7;
          uVar10 = uVar8;
        } while (uVar3 != 0);
      }
      param_3 = pbVar7 + 1;
      *pbVar7 = (byte)uVar8;
    }
  }
  if ((*(byte *)(param_1 + 0x30) >> 5 & 1) != 0) {
    bVar2 = *(byte *)(param_1 + 0x5b);
    *param_3 = 0x50;
    param_3[1] = bVar2;
    param_3 = param_3 + 2;
  }
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 != 0) {
    iVar12 = 0;
    do {
      plVar5 = *(long **)(*(long *)(param_1 + 0x50) + (long)iVar12 * 8 + 8);
      pbVar7 = param_3 + 2;
      param_3[0] = 0xba;
      param_3[1] = 0x3e;
      uVar8 = *(uint *)((long)plVar5 + 0x14);
      if (0x7f < uVar8) {
        pbVar6 = pbVar7;
        uVar10 = uVar8;
        do {
          uVar8 = uVar10 >> 7;
          uVar3 = uVar10 >> 0xe;
          pbVar7 = pbVar6 + 1;
          *pbVar6 = (byte)uVar10 | 0x80;
          pbVar6 = pbVar7;
          uVar10 = uVar8;
        } while (uVar3 != 0);
      }
      *pbVar7 = (byte)uVar8;
      param_3 = (byte *)(**(code **)(*plVar5 + 0x80))(plVar5,0,pbVar7 + 1);
      iVar12 = iVar12 + 1;
    } while (iVar12 != iVar1);
  }
  plVar11 = (long *)(param_1 + 0x10);
  plVar5 = (long *)*plVar11;
  if (plVar5 != (long *)0x0) {
    plVar13 = plVar11;
    do {
      if (999 < (int)plVar5[4]) {
        plVar13 = plVar5;
      }
      plVar5 = (long *)plVar5[(int)plVar5[4] < 1000];
    } while (plVar5 != (long *)0x0);
    while ((plVar13 != plVar11 && ((int)plVar13[4] < 0x20000000))) {
      param_3 = (byte *)FUN_00c1cbcc(plVar13 + 5,(int)plVar13[4],0);
      plVar5 = (long *)plVar13[1];
      if ((long *)plVar13[1] == (long *)0x0) {
        plVar5 = plVar13 + 2;
        bVar4 = *(long **)*plVar5 != plVar13;
        plVar13 = (long *)*plVar5;
        if (bVar4) {
          do {
            lVar9 = *plVar5;
            plVar5 = (long *)(lVar9 + 0x10);
            plVar13 = (long *)*plVar5;
          } while (*(long *)*plVar5 != lVar9);
        }
      }
      else {
        do {
          plVar13 = plVar5;
          plVar5 = (long *)*plVar13;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
  if ((*(ulong *)(param_1 + 0x28) & 1) == 0) {
    return param_3;
  }
  pbVar7 = (byte *)FUN_00c02cac(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffe,param_3);
  return pbVar7;
}


