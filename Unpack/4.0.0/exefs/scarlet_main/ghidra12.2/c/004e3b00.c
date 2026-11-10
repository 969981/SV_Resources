/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004e3b00; name: FUN_004e3b00
 */


byte * FUN_004e3b00(long param_1,byte *param_2,long *param_3)

{
  uint *puVar1;
  uint uVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  size_t sVar11;
  long lVar12;
  
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
      pbVar6 = pbVar3;
      uVar9 = uVar8;
      do {
        uVar8 = uVar9 >> 7;
        uVar2 = uVar9 >> 0xe;
        pbVar3 = pbVar6 + 1;
        *pbVar6 = (byte)uVar9 | 0x80;
        pbVar6 = pbVar3;
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
        if (uVar8 < 0x80) goto LAB_004e3b58;
LAB_004e3b7c:
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
            uVar5 = uVar4 >> 7;
            pbVar3[-1] = (byte)uVar4 | 0x80;
            param_2 = pbVar3 + 1;
            uVar7 = uVar4 >> 0xe;
            uVar4 = uVar5;
          } while (uVar7 != 0);
          *pbVar3 = (byte)uVar5;
        }
      }
      else {
        pbVar3 = (byte *)FUN_0052c6d8(param_3,param_2);
        uVar8 = *puVar10;
        if (0x7f < uVar8) goto LAB_004e3b7c;
LAB_004e3b58:
        param_2 = pbVar3 + 1;
        *pbVar3 = (byte)uVar8;
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 < puVar1);
  }
  uVar8 = *(uint *)(param_1 + 0x40);
  if (0 < (int)uVar8) {
    if (param_2 < (byte *)*param_3) {
      *param_2 = 0x12;
    }
    else {
      param_2 = (byte *)FUN_0052c6d8(param_3,param_2);
      *param_2 = 0x12;
    }
    pbVar3 = param_2 + 1;
    if (0x7f < uVar8) {
      pbVar6 = pbVar3;
      uVar9 = uVar8;
      do {
        uVar8 = uVar9 >> 7;
        uVar2 = uVar9 >> 0xe;
        pbVar3 = pbVar6 + 1;
        *pbVar6 = (byte)uVar9 | 0x80;
        pbVar6 = pbVar3;
        uVar9 = uVar8;
      } while (uVar2 != 0);
    }
    param_2 = pbVar3 + 1;
    *pbVar3 = (byte)uVar8;
    puVar10 = *(uint **)(param_1 + 0x38);
    puVar1 = puVar10 + *(int *)(param_1 + 0x30);
    do {
      if (param_2 < (byte *)*param_3) {
        uVar8 = *puVar10;
        pbVar3 = param_2;
        if (uVar8 < 0x80) goto LAB_004e3c20;
LAB_004e3c44:
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
            uVar5 = uVar4 >> 7;
            pbVar3[-1] = (byte)uVar4 | 0x80;
            param_2 = pbVar3 + 1;
            uVar7 = uVar4 >> 0xe;
            uVar4 = uVar5;
          } while (uVar7 != 0);
          *pbVar3 = (byte)uVar5;
        }
      }
      else {
        pbVar3 = (byte *)FUN_0052c6d8(param_3,param_2);
        uVar8 = *puVar10;
        if (0x7f < uVar8) goto LAB_004e3c44;
LAB_004e3c20:
        param_2 = pbVar3 + 1;
        *pbVar3 = (byte)uVar8;
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 < puVar1);
  }
  uVar8 = *(uint *)(param_1 + 0x10);
  if ((uVar8 & 1) != 0) {
    pbVar3 = *(byte **)(param_1 + 0x60);
    if ((*pbVar3 & 1) == 0) {
      sVar11 = (size_t)(*pbVar3 >> 1);
LAB_004e3ce8:
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x1a;
        param_2[1] = (byte)sVar11;
        pbVar6 = *(byte **)(pbVar3 + 0x10);
        if ((*pbVar3 & 1) == 0) {
          pbVar6 = pbVar3 + 1;
        }
        memcpy(param_2 + 2,pbVar6,sVar11);
        param_2 = param_2 + 2 + sVar11;
        goto joined_r0x004e3e54;
      }
    }
    else {
      sVar11 = *(size_t *)(pbVar3 + 8);
      if ((long)sVar11 < 0x80) goto LAB_004e3ce8;
    }
    param_2 = (byte *)FUN_0052c95c(param_3,3);
  }
joined_r0x004e3e54:
  if ((uVar8 >> 1 & 1) == 0) {
    uVar8 = *(uint *)(param_1 + 0x50);
    goto joined_r0x004e3e74;
  }
  pbVar3 = *(byte **)(param_1 + 0x68);
  if ((*pbVar3 & 1) == 0) {
    sVar11 = (size_t)(*pbVar3 >> 1);
LAB_004e3d50:
    if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 0x22;
      param_2[1] = (byte)sVar11;
      pbVar6 = *(byte **)(pbVar3 + 0x10);
      if ((*pbVar3 & 1) == 0) {
        pbVar6 = pbVar3 + 1;
      }
      memcpy(param_2 + 2,pbVar6,sVar11);
      param_2 = param_2 + 2 + sVar11;
      uVar8 = *(uint *)(param_1 + 0x50);
      goto joined_r0x004e3e74;
    }
  }
  else {
    sVar11 = *(size_t *)(pbVar3 + 8);
    if ((long)sVar11 < 0x80) goto LAB_004e3d50;
  }
  param_2 = (byte *)FUN_0052c95c(param_3,4);
  uVar8 = *(uint *)(param_1 + 0x50);
joined_r0x004e3e74:
  if (0 < (int)uVar8) {
    lVar12 = 0;
    do {
      while( true ) {
        pbVar3 = *(byte **)(*(long *)(param_1 + 0x58) + lVar12 + 8);
        if ((*pbVar3 & 1) == 0) break;
        sVar11 = *(size_t *)(pbVar3 + 8);
        if ((long)sVar11 < 0x80) goto LAB_004e3dd4;
LAB_004e3e24:
        param_2 = (byte *)FUN_0052cbdc(param_3,6);
        lVar12 = lVar12 + 8;
        if ((ulong)uVar8 * 8 == lVar12) goto LAB_004e3e78;
      }
      sVar11 = (size_t)(*pbVar3 >> 1);
LAB_004e3dd4:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar11) goto LAB_004e3e24;
      *param_2 = 0x32;
      param_2[1] = (byte)sVar11;
      pbVar6 = *(byte **)(pbVar3 + 0x10);
      if ((*pbVar3 & 1) == 0) {
        pbVar6 = pbVar3 + 1;
      }
      memcpy(param_2 + 2,pbVar6,sVar11);
      param_2 = param_2 + 2 + sVar11;
      lVar12 = lVar12 + 8;
    } while ((ulong)uVar8 * 8 != lVar12);
  }
LAB_004e3e78:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  pbVar3 = (byte *)FUN_005161f8((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8,param_2,param_3);
  return pbVar3;
}


