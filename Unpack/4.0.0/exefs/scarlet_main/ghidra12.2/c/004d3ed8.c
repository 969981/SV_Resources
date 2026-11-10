/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004d3ed8; name: FUN_004d3ed8
 */


/* WARNING: Type propagation algorithm not settling */

undefined2 * FUN_004d3ed8(long param_1,undefined2 *param_2,long *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined2 *puVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  size_t sVar13;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    pbVar8 = *(byte **)(param_1 + 0x18);
    if ((*pbVar8 & 1) == 0) {
      sVar13 = (size_t)(*pbVar8 >> 1);
LAB_004d3f5c:
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
        *(undefined1 *)param_2 = 10;
        *(char *)((long)param_2 + 1) = (char)sVar13;
        pbVar11 = *(byte **)(pbVar8 + 0x10);
        if ((*pbVar8 & 1) == 0) {
          pbVar11 = pbVar8 + 1;
        }
        memcpy(param_2 + 1,pbVar11,sVar13);
        param_2 = (undefined2 *)((long)(param_2 + 1) + sVar13);
        goto joined_r0x004d3fa0;
      }
    }
    else {
      sVar13 = *(size_t *)(pbVar8 + 8);
      if ((long)sVar13 < 0x80) goto LAB_004d3f5c;
    }
    param_2 = (undefined2 *)FUN_0052c95c(param_3,1);
  }
joined_r0x004d3fa0:
  if ((uVar1 >> 1 & 1) != 0) {
    pbVar8 = *(byte **)(param_1 + 0x20);
    if ((*pbVar8 & 1) == 0) {
      sVar13 = (size_t)(*pbVar8 >> 1);
LAB_004d3fc4:
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
        *(undefined1 *)param_2 = 0x12;
        *(char *)((long)param_2 + 1) = (char)sVar13;
        pbVar11 = *(byte **)(pbVar8 + 0x10);
        if ((*pbVar8 & 1) == 0) {
          pbVar11 = pbVar8 + 1;
        }
        memcpy((undefined2 *)((long)param_2 + 2U),pbVar11,sVar13);
        param_2 = (undefined2 *)((long)param_2 + 2U + sVar13);
        goto joined_r0x004d3efc;
      }
    }
    else {
      sVar13 = *(size_t *)(pbVar8 + 8);
      if ((long)sVar13 < 0x80) goto LAB_004d3fc4;
    }
    param_2 = (undefined2 *)FUN_0052c95c(param_3,2);
  }
joined_r0x004d3efc:
  if ((uVar1 >> 6 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
    }
    uVar3 = *(uint *)(param_1 + 0x48);
    *(undefined1 *)param_2 = 0x18;
    if (uVar3 < 0x80) {
      *(byte *)((long)param_2 + 1) = (byte)uVar3;
      param_2 = param_2 + 1;
    }
    else {
      *(byte *)((long)param_2 + 1) = (byte)uVar3 | 0x80;
      uVar9 = (ulong)(long)(int)uVar3 >> 7;
      if (((ulong)(long)(int)uVar3 >> 0xe & 0x3ffff) == 0) {
        *(char *)(param_2 + 1) = (char)uVar9;
        param_2 = (undefined2 *)((long)param_2 + 3);
      }
      else {
        param_2 = (undefined2 *)((long)param_2 + 3);
        do {
          puVar7 = param_2;
          uVar10 = uVar9 >> 7;
          *(byte *)((long)puVar7 + -1) = (byte)uVar9 | 0x80;
          param_2 = (undefined2 *)((long)puVar7 + 1);
          uVar12 = uVar9 >> 0xe;
          uVar9 = uVar10;
        } while (uVar12 != 0);
        *(char *)puVar7 = (char)uVar10;
      }
    }
  }
  if ((uVar1 >> 9 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
    }
    uVar3 = *(uint *)(param_1 + 0x54);
    *(undefined1 *)param_2 = 0x20;
    if (uVar3 < 0x80) {
      *(byte *)((long)param_2 + 1) = (byte)uVar3;
      param_2 = param_2 + 1;
    }
    else {
      *(byte *)((long)param_2 + 1) = (byte)uVar3 | 0x80;
      uVar9 = (ulong)(long)(int)uVar3 >> 7;
      if (((ulong)(long)(int)uVar3 >> 0xe & 0x3ffff) == 0) {
        *(char *)(param_2 + 1) = (char)uVar9;
        param_2 = (undefined2 *)((long)param_2 + 3);
      }
      else {
        param_2 = (undefined2 *)((long)param_2 + 3);
        do {
          puVar7 = param_2;
          uVar10 = uVar9 >> 7;
          *(byte *)((long)puVar7 + -1) = (byte)uVar9 | 0x80;
          param_2 = (undefined2 *)((long)puVar7 + 1);
          uVar12 = uVar9 >> 0xe;
          uVar9 = uVar10;
        } while (uVar12 != 0);
        *(char *)puVar7 = (char)uVar10;
      }
    }
  }
  if ((uVar1 >> 10 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
    }
    uVar3 = *(uint *)(param_1 + 0x58);
    *(undefined1 *)param_2 = 0x28;
    if (uVar3 < 0x80) {
      *(byte *)((long)param_2 + 1) = (byte)uVar3;
      param_2 = param_2 + 1;
    }
    else {
      *(byte *)((long)param_2 + 1) = (byte)uVar3 | 0x80;
      uVar9 = (ulong)(long)(int)uVar3 >> 7;
      if (((ulong)(long)(int)uVar3 >> 0xe & 0x3ffff) == 0) {
        *(char *)(param_2 + 1) = (char)uVar9;
        param_2 = (undefined2 *)((long)param_2 + 3);
      }
      else {
        param_2 = (undefined2 *)((long)param_2 + 3);
        do {
          puVar7 = param_2;
          uVar10 = uVar9 >> 7;
          *(byte *)((long)puVar7 + -1) = (byte)uVar9 | 0x80;
          param_2 = (undefined2 *)((long)puVar7 + 1);
          uVar12 = uVar9 >> 0xe;
          uVar9 = uVar10;
        } while (uVar12 != 0);
        *(char *)puVar7 = (char)uVar10;
      }
    }
  }
  if ((uVar1 >> 2 & 1) != 0) {
    pbVar8 = *(byte **)(param_1 + 0x28);
    if ((*pbVar8 & 1) == 0) {
      sVar13 = (size_t)(*pbVar8 >> 1);
LAB_004d41a0:
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
        *(undefined1 *)param_2 = 0x32;
        *(char *)((long)param_2 + 1) = (char)sVar13;
        pbVar11 = *(byte **)(pbVar8 + 0x10);
        if ((*pbVar8 & 1) == 0) {
          pbVar11 = pbVar8 + 1;
        }
        memcpy((undefined2 *)((long)param_2 + 2U),pbVar11,sVar13);
        param_2 = (undefined2 *)((long)param_2 + 2U + sVar13);
        goto joined_r0x004d3f0c;
      }
    }
    else {
      sVar13 = *(size_t *)(pbVar8 + 8);
      if ((long)sVar13 < 0x80) goto LAB_004d41a0;
    }
    param_2 = (undefined2 *)FUN_0052c95c(param_3,6);
  }
joined_r0x004d3f0c:
  if ((uVar1 >> 3 & 1) != 0) {
    pbVar8 = *(byte **)(param_1 + 0x30);
    if ((*pbVar8 & 1) == 0) {
      sVar13 = (size_t)(*pbVar8 >> 1);
LAB_004d4208:
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
        *(undefined1 *)param_2 = 0x3a;
        *(char *)((long)param_2 + 1) = (char)sVar13;
        pbVar11 = *(byte **)(pbVar8 + 0x10);
        if ((*pbVar8 & 1) == 0) {
          pbVar11 = pbVar8 + 1;
        }
        memcpy((undefined2 *)((long)param_2 + 2U),pbVar11,sVar13);
        param_2 = (undefined2 *)((long)param_2 + 2U + sVar13);
        goto joined_r0x004d3f10;
      }
    }
    else {
      sVar13 = *(size_t *)(pbVar8 + 8);
      if ((long)sVar13 < 0x80) goto LAB_004d4208;
    }
    param_2 = (undefined2 *)FUN_0052c95c(param_3,7);
  }
joined_r0x004d3f10:
  if ((uVar1 >> 5 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
    }
    lVar6 = *(long *)(param_1 + 0x40);
    *(undefined1 *)param_2 = 0x42;
    uVar3 = *(uint *)(lVar6 + 0x2c);
    if (uVar3 < 0x80) {
      *(byte *)((long)param_2 + 1) = (byte)uVar3;
      param_2 = param_2 + 1;
    }
    else {
      *(byte *)((long)param_2 + 1) = (byte)uVar3 | 0x80;
      if (uVar3 >> 0xe == 0) {
        *(char *)(param_2 + 1) = (char)(uVar3 >> 7);
        param_2 = (undefined2 *)((long)param_2 + 3);
      }
      else {
        param_2 = (undefined2 *)((long)param_2 + 3);
        uVar3 = uVar3 >> 7;
        do {
          puVar7 = param_2;
          uVar4 = uVar3 >> 7;
          *(byte *)((long)puVar7 + -1) = (byte)uVar3 | 0x80;
          param_2 = (undefined2 *)((long)puVar7 + 1);
          uVar5 = uVar3 >> 0xe;
          uVar3 = uVar4;
        } while (uVar5 != 0);
        *(char *)puVar7 = (char)uVar4;
      }
    }
    param_2 = (undefined2 *)FUN_004de208(lVar6,param_2,param_3);
  }
  if ((uVar1 >> 7 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
    }
    uVar3 = *(uint *)(param_1 + 0x4c);
    *(undefined1 *)param_2 = 0x48;
    if (uVar3 < 0x80) {
      *(byte *)((long)param_2 + 1) = (byte)uVar3;
      param_2 = param_2 + 1;
    }
    else {
      *(byte *)((long)param_2 + 1) = (byte)uVar3 | 0x80;
      uVar9 = (ulong)(long)(int)uVar3 >> 7;
      if (((ulong)(long)(int)uVar3 >> 0xe & 0x3ffff) == 0) {
        *(char *)(param_2 + 1) = (char)uVar9;
        param_2 = (undefined2 *)((long)param_2 + 3);
      }
      else {
        param_2 = (undefined2 *)((long)param_2 + 3);
        do {
          puVar7 = param_2;
          uVar10 = uVar9 >> 7;
          *(byte *)((long)puVar7 + -1) = (byte)uVar9 | 0x80;
          param_2 = (undefined2 *)((long)puVar7 + 1);
          uVar12 = uVar9 >> 0xe;
          uVar9 = uVar10;
        } while (uVar12 != 0);
        *(char *)puVar7 = (char)uVar10;
      }
    }
  }
  if ((uVar1 >> 4 & 1) == 0) goto joined_r0x004d43b4;
  pbVar8 = *(byte **)(param_1 + 0x38);
  if ((*pbVar8 & 1) == 0) {
    sVar13 = (size_t)(*pbVar8 >> 1);
LAB_004d4370:
    if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
      *(undefined1 *)param_2 = 0x52;
      *(char *)((long)param_2 + 1) = (char)sVar13;
      pbVar11 = *(byte **)(pbVar8 + 0x10);
      if ((*pbVar8 & 1) == 0) {
        pbVar11 = pbVar8 + 1;
      }
      memcpy(param_2 + 1,pbVar11,sVar13);
      param_2 = (undefined2 *)((long)(param_2 + 1) + sVar13);
      goto joined_r0x004d43b4;
    }
  }
  else {
    sVar13 = *(size_t *)(pbVar8 + 8);
    if ((long)sVar13 < 0x80) goto LAB_004d4370;
  }
  param_2 = (undefined2 *)FUN_0052c95c(param_3,10);
joined_r0x004d43b4:
  if ((uVar1 >> 8 & 1) == 0) {
    uVar9 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
    }
    uVar2 = *(undefined1 *)(param_1 + 0x50);
    *param_2 = 0x188;
    *(undefined1 *)(param_2 + 1) = uVar2;
    param_2 = (undefined2 *)((long)param_2 + 3);
    uVar9 = *(ulong *)(param_1 + 8);
  }
  if ((uVar9 & 1) == 0) {
    return param_2;
  }
  puVar7 = (undefined2 *)FUN_005161f8((uVar9 & 0xfffffffffffffffe) + 8,param_2,param_3);
  return puVar7;
}


