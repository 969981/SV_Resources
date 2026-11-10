/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e5118; name: FUN_004e5118
 */


/* WARNING: Type propagation algorithm not settling */

byte * FUN_004e5118(long param_1,byte *param_2,long *param_3)

{
  uint *puVar1;
  uint uVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  size_t __n;
  
  uVar8 = *(uint *)(param_1 + 0x28);
  if (0 < (int)uVar8) {
    if (param_2 < (byte *)*param_3) {
      *param_2 = 10;
    }
    else {
      param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
      *param_2 = 10;
    }
    pbVar3 = param_2 + 1;
    if (0x7f < uVar8) {
      pbVar5 = pbVar3;
      uVar9 = uVar8;
      do {
        uVar8 = uVar9 >> 7;
        uVar2 = uVar9 >> 0xe;
        pbVar3 = pbVar5 + 1;
        *pbVar5 = (byte)uVar9 | 0x80;
        pbVar5 = pbVar3;
        uVar9 = uVar8;
      } while (uVar2 != 0);
    }
    param_2 = pbVar3 + 1;
    *pbVar3 = (byte)uVar8;
    puVar10 = *(uint **)(param_1 + 0x20);
    puVar1 = puVar10 + *(int *)(param_1 + 0x18);
    do {
      if (param_2 < (byte *)*param_3) {
        uVar8 = *puVar10;
        pbVar3 = param_2;
        if (uVar8 < 0x80) goto LAB_004e516c;
LAB_004e5190:
        *pbVar3 = (byte)uVar8 | 0x80;
        uVar4 = (ulong)(long)(int)uVar8 >> 7;
        if (((ulong)(long)(int)uVar8 >> 0xe & 0x3ffff) == 0) {
          pbVar3[1] = (byte)uVar4;
          param_2 = pbVar3 + 2;
        }
        else {
          param_2 = pbVar3 + 2;
          do {
            pbVar3 = param_2;
            uVar6 = uVar4 >> 7;
            pbVar3[-1] = (byte)uVar4 | 0x80;
            param_2 = pbVar3 + 1;
            uVar7 = uVar4 >> 0xe;
            uVar4 = uVar6;
          } while (uVar7 != 0);
          *pbVar3 = (byte)uVar6;
        }
      }
      else {
        pbVar3 = (byte *)FUN_0052c6d8(param_3,param_2);
        uVar8 = *puVar10;
        if (0x7f < uVar8) goto LAB_004e5190;
LAB_004e516c:
        param_2 = pbVar3 + 1;
        *pbVar3 = (byte)uVar8;
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 < puVar1);
  }
  uVar8 = *(uint *)(param_1 + 0x10);
  if ((uVar8 & 1) == 0) goto joined_r0x004e5288;
  pbVar3 = *(byte **)(param_1 + 0x30);
  if ((*pbVar3 & 1) == 0) {
    __n = (size_t)(*pbVar3 >> 1);
LAB_004e5244:
    if ((long)__n <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 0x12;
      param_2[1] = (byte)__n;
      pbVar5 = *(byte **)(pbVar3 + 0x10);
      if ((*pbVar3 & 1) == 0) {
        pbVar5 = pbVar3 + 1;
      }
      memcpy(param_2 + 2,pbVar5,__n);
      param_2 = param_2 + 2 + __n;
      goto joined_r0x004e5288;
    }
  }
  else {
    __n = *(size_t *)(pbVar3 + 8);
    if ((long)__n < 0x80) goto LAB_004e5244;
  }
  param_2 = (byte *)FUN_0052c95c(param_3,2);
joined_r0x004e5288:
  if ((uVar8 >> 1 & 1) != 0) {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
    }
    uVar9 = *(uint *)(param_1 + 0x38);
    *param_2 = 0x18;
    if (uVar9 < 0x80) {
      param_2[1] = (byte)uVar9;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar9 | 0x80;
      uVar4 = (ulong)(long)(int)uVar9 >> 7;
      if (((ulong)(long)(int)uVar9 >> 0xe & 0x3ffff) == 0) {
        param_2[2] = (byte)uVar4;
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        do {
          pbVar3 = param_2;
          uVar6 = uVar4 >> 7;
          pbVar3[-1] = (byte)uVar4 | 0x80;
          param_2 = pbVar3 + 1;
          uVar7 = uVar4 >> 0xe;
          uVar4 = uVar6;
        } while (uVar7 != 0);
        *pbVar3 = (byte)uVar6;
      }
    }
  }
  if ((uVar8 >> 2 & 1) == 0) {
    uVar4 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((byte *)*param_3 <= param_2) {
      param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
    }
    uVar8 = *(uint *)(param_1 + 0x3c);
    *param_2 = 0x20;
    if (uVar8 < 0x80) {
      param_2[1] = (byte)uVar8;
      param_2 = param_2 + 2;
      uVar4 = *(ulong *)(param_1 + 8);
    }
    else {
      param_2[1] = (byte)uVar8 | 0x80;
      uVar4 = (ulong)(long)(int)uVar8 >> 7;
      if (((ulong)(long)(int)uVar8 >> 0xe & 0x3ffff) == 0) {
        param_2[2] = (byte)uVar4;
        param_2 = param_2 + 3;
        uVar4 = *(ulong *)(param_1 + 8);
      }
      else {
        param_2 = param_2 + 3;
        do {
          pbVar3 = param_2;
          uVar6 = uVar4 >> 7;
          pbVar3[-1] = (byte)uVar4 | 0x80;
          param_2 = pbVar3 + 1;
          uVar7 = uVar4 >> 0xe;
          uVar4 = uVar6;
        } while (uVar7 != 0);
        *pbVar3 = (byte)uVar6;
        uVar4 = *(ulong *)(param_1 + 8);
      }
    }
  }
  if ((uVar4 & 1) == 0) {
    return param_2;
  }
  pbVar3 = (byte *)FUN_005161f8((uVar4 & 0xfffffffffffffffe) + 8,param_2,param_3);
  return pbVar3;
}


