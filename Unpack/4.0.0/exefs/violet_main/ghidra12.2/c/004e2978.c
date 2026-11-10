/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e2978; name: FUN_004e2978
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_004e2978(long param_1,undefined1 *param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  size_t sVar13;
  int iVar14;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != 0) {
    iVar14 = 0;
    do {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      }
      lVar5 = *(long *)(*(long *)(param_1 + 0x28) + (long)iVar14 * 8 + 8);
      *param_2 = 0x12;
      uVar2 = *(uint *)(lVar5 + 0x14);
      if (uVar2 < 0x80) {
        param_2[1] = (byte)uVar2;
        param_2 = param_2 + 2;
      }
      else {
        param_2[1] = (byte)uVar2 | 0x80;
        if (uVar2 >> 0xe == 0) {
          param_2[2] = (char)(uVar2 >> 7);
          param_2 = param_2 + 3;
        }
        else {
          param_2 = param_2 + 3;
          uVar2 = uVar2 >> 7;
          do {
            puVar6 = param_2;
            uVar3 = uVar2 >> 7;
            puVar6[-1] = (byte)uVar2 | 0x80;
            param_2 = puVar6 + 1;
            uVar4 = uVar2 >> 0xe;
            uVar2 = uVar3;
          } while (uVar4 != 0);
          *puVar6 = (char)uVar3;
        }
      }
      param_2 = (undefined1 *)FUN_004e1c0c(lVar5,param_2,param_3);
      iVar14 = iVar14 + 1;
    } while (iVar14 != iVar1);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    pbVar7 = *(byte **)(param_1 + 0x30);
    if ((*pbVar7 & 1) == 0) {
      sVar13 = (size_t)(*pbVar7 >> 1);
LAB_004e2aa0:
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x1a;
        param_2[1] = (char)sVar13;
        pbVar11 = *(byte **)(pbVar7 + 0x10);
        if ((*pbVar7 & 1) == 0) {
          pbVar11 = pbVar7 + 1;
        }
        memcpy(param_2 + 2,pbVar11,sVar13);
        param_2 = param_2 + 2 + sVar13;
        goto joined_r0x004e2ae4;
      }
    }
    else {
      sVar13 = *(size_t *)(pbVar7 + 8);
      if ((long)sVar13 < 0x80) goto LAB_004e2aa0;
    }
    param_2 = (undefined1 *)FUN_0052c95c(param_3,3);
  }
joined_r0x004e2ae4:
  if ((uVar2 >> 3 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
    }
    uVar8 = *(ulong *)(param_1 + 0x48);
    *param_2 = 0x20;
    if (uVar8 < 0x80) {
      param_2[1] = (byte)uVar8;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar8 | 0x80;
      if (uVar8 >> 0xe == 0) {
        param_2[2] = (char)(uVar8 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        uVar8 = uVar8 >> 7;
        do {
          puVar6 = param_2;
          uVar10 = uVar8 >> 7;
          puVar6[-1] = (byte)uVar8 | 0x80;
          param_2 = puVar6 + 1;
          uVar12 = uVar8 >> 0xe;
          uVar8 = uVar10;
        } while (uVar12 != 0);
        *puVar6 = (char)uVar10;
      }
    }
  }
  if ((uVar2 >> 4 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
    }
    uVar8 = *(ulong *)(param_1 + 0x50);
    *param_2 = 0x28;
    if (uVar8 < 0x80) {
      param_2[1] = (byte)uVar8;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar8 | 0x80;
      if (uVar8 >> 0xe == 0) {
        param_2[2] = (char)(uVar8 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        uVar8 = uVar8 >> 7;
        do {
          puVar6 = param_2;
          uVar10 = uVar8 >> 7;
          puVar6[-1] = (byte)uVar8 | 0x80;
          param_2 = puVar6 + 1;
          uVar12 = uVar8 >> 0xe;
          uVar8 = uVar10;
        } while (uVar12 != 0);
        *puVar6 = (char)uVar10;
      }
    }
  }
  if ((uVar2 >> 5 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
    }
    uVar9 = *(undefined8 *)(param_1 + 0x58);
    *param_2 = 0x31;
    *(undefined8 *)(param_2 + 1) = uVar9;
    param_2 = param_2 + 9;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    pbVar7 = *(byte **)(param_1 + 0x38);
    if ((*pbVar7 & 1) == 0) {
      sVar13 = (size_t)(*pbVar7 >> 1);
LAB_004e2c24:
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x3a;
        *(char *)((long)param_2 + 1) = (char)sVar13;
        pbVar11 = *(byte **)(pbVar7 + 0x10);
        if ((*pbVar7 & 1) == 0) {
          pbVar11 = pbVar7 + 1;
        }
        memcpy((undefined1 *)((long)param_2 + 2),pbVar11,sVar13);
        param_2 = (undefined1 *)((long)param_2 + 2) + sVar13;
        goto joined_r0x004e2d20;
      }
    }
    else {
      sVar13 = *(size_t *)(pbVar7 + 8);
      if ((long)sVar13 < 0x80) goto LAB_004e2c24;
    }
    param_2 = (undefined1 *)FUN_0052c95c(param_3,7);
  }
joined_r0x004e2d20:
  if ((uVar2 >> 2 & 1) == 0) {
    uVar8 = *(ulong *)(param_1 + 8);
    goto joined_r0x004e2d3c;
  }
  pbVar7 = *(byte **)(param_1 + 0x40);
  if ((*pbVar7 & 1) == 0) {
    sVar13 = (size_t)(*pbVar7 >> 1);
LAB_004e2c8c:
    if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 0x42;
      param_2[1] = (char)sVar13;
      pbVar11 = *(byte **)(pbVar7 + 0x10);
      if ((*pbVar7 & 1) == 0) {
        pbVar11 = pbVar7 + 1;
      }
      memcpy(param_2 + 2,pbVar11,sVar13);
      param_2 = param_2 + 2 + sVar13;
      uVar8 = *(ulong *)(param_1 + 8);
      goto joined_r0x004e2d3c;
    }
  }
  else {
    sVar13 = *(size_t *)(pbVar7 + 8);
    if ((long)sVar13 < 0x80) goto LAB_004e2c8c;
  }
  param_2 = (undefined1 *)FUN_0052c95c(param_3,8);
  uVar8 = *(ulong *)(param_1 + 8);
joined_r0x004e2d3c:
  if ((uVar8 & 1) == 0) {
    return param_2;
  }
  puVar6 = (undefined1 *)FUN_005161f8((uVar8 & 0xfffffffffffffffe) + 8,param_2,param_3);
  return puVar6;
}


