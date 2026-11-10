/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004dc084; name: FUN_004dc084
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_004dc084(long param_1,undefined2 *param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  size_t sVar14;
  int iVar15;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 & 1) != 0) {
    pbVar9 = *(byte **)(param_1 + 0x48);
    if ((*pbVar9 & 1) == 0) {
      sVar14 = (size_t)(*pbVar9 >> 1);
LAB_004dc11c:
      if ((long)sVar14 <= (*param_3 - (long)param_2) + 0xe) {
        *(undefined1 *)param_2 = 10;
        *(char *)((long)param_2 + 1) = (char)sVar14;
        pbVar12 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar12 = pbVar9 + 1;
        }
        memcpy(param_2 + 1,pbVar12,sVar14);
        param_2 = (undefined2 *)((long)(param_2 + 1) + sVar14);
        goto joined_r0x004dc160;
      }
    }
    else {
      sVar14 = *(size_t *)(pbVar9 + 8);
      if ((long)sVar14 < 0x80) goto LAB_004dc11c;
    }
    param_2 = (undefined2 *)FUN_0052c95c(param_3,1);
  }
joined_r0x004dc160:
  if ((uVar1 >> 1 & 1) != 0) {
    pbVar9 = *(byte **)(param_1 + 0x50);
    if ((*pbVar9 & 1) == 0) {
      sVar14 = (size_t)(*pbVar9 >> 1);
LAB_004dc184:
      if ((long)sVar14 <= (*param_3 - (long)param_2) + 0xe) {
        *(undefined1 *)param_2 = 0x42;
        *(char *)((long)param_2 + 1) = (char)sVar14;
        pbVar12 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar12 = pbVar9 + 1;
        }
        memcpy((undefined2 *)((long)param_2 + 2U),pbVar12,sVar14);
        param_2 = (undefined2 *)((long)param_2 + 2U + sVar14);
        goto joined_r0x004dc7a8;
      }
    }
    else {
      sVar14 = *(size_t *)(pbVar9 + 8);
      if ((long)sVar14 < 0x80) goto LAB_004dc184;
    }
    param_2 = (undefined2 *)FUN_0052c95c(param_3,8);
  }
joined_r0x004dc7a8:
  if ((uVar1 >> 0x12 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
    }
    uVar4 = *(uint *)(param_1 + 0xa0);
    *(undefined1 *)param_2 = 0x48;
    if (uVar4 < 0x80) {
      *(byte *)((long)param_2 + 1) = (byte)uVar4;
      param_2 = param_2 + 1;
    }
    else {
      *(byte *)((long)param_2 + 1) = (byte)uVar4 | 0x80;
      uVar10 = (ulong)(long)(int)uVar4 >> 7;
      if (((ulong)(long)(int)uVar4 >> 0xe & 0x3ffff) == 0) {
        *(char *)(param_2 + 1) = (char)uVar10;
        param_2 = (undefined2 *)((long)param_2 + 3);
      }
      else {
        param_2 = (undefined2 *)((long)param_2 + 3);
        do {
          puVar8 = param_2;
          uVar11 = uVar10 >> 7;
          *(byte *)((long)puVar8 + -1) = (byte)uVar10 | 0x80;
          param_2 = (undefined2 *)((long)puVar8 + 1);
          uVar13 = uVar10 >> 0xe;
          uVar10 = uVar11;
        } while (uVar13 != 0);
        *(char *)puVar8 = (char)uVar11;
      }
    }
  }
  if ((uVar1 >> 10 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x98);
    *(undefined1 *)param_2 = 0x50;
    *(undefined1 *)((long)param_2 + 1) = uVar3;
    param_2 = param_2 + 1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    pbVar9 = *(byte **)(param_1 + 0x58);
    if ((*pbVar9 & 1) == 0) {
      sVar14 = (size_t)(*pbVar9 >> 1);
LAB_004dc28c:
      if ((long)sVar14 <= (*param_3 - (long)param_2) + 0xe) {
        *(undefined1 *)param_2 = 0x5a;
        *(char *)((long)param_2 + 1) = (char)sVar14;
        pbVar12 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar12 = pbVar9 + 1;
        }
        memcpy((undefined2 *)((long)param_2 + 2U),pbVar12,sVar14);
        param_2 = (undefined2 *)((long)param_2 + 2U + sVar14);
        goto joined_r0x004dc7c0;
      }
    }
    else {
      sVar14 = *(size_t *)(pbVar9 + 8);
      if ((long)sVar14 < 0x80) goto LAB_004dc28c;
    }
    param_2 = (undefined2 *)FUN_0052c95c(param_3,0xb);
  }
joined_r0x004dc7c0:
  if ((uVar1 >> 0xd & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x9b);
    *param_2 = 0x180;
    *(undefined1 *)(param_2 + 1) = uVar3;
    param_2 = (undefined2 *)((long)param_2 + 3);
  }
  if ((uVar1 >> 0xe & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x9c);
    *param_2 = 0x188;
    *(undefined1 *)(param_2 + 1) = uVar3;
    param_2 = (undefined2 *)((long)param_2 + 3);
  }
  if ((uVar1 >> 0xf & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x9d);
    *param_2 = 400;
    *(undefined1 *)(param_2 + 1) = uVar3;
    param_2 = (undefined2 *)((long)param_2 + 3);
  }
  if ((uVar1 >> 0xb & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x99);
    *param_2 = 0x1a0;
    *(undefined1 *)(param_2 + 1) = uVar3;
    param_2 = (undefined2 *)((long)param_2 + 3);
  }
  if ((uVar1 >> 0x11 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x9f);
    *param_2 = 0x1b8;
    *(undefined1 *)(param_2 + 1) = uVar3;
    param_2 = (undefined2 *)((long)param_2 + 3);
  }
  if ((uVar1 >> 0xc & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x9a);
    *param_2 = 0x1d8;
    *(undefined1 *)(param_2 + 1) = uVar3;
    param_2 = (undefined2 *)((long)param_2 + 3);
  }
  if ((uVar1 >> 0x13 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0xa4);
    *param_2 = 0x1f8;
    *(undefined1 *)(param_2 + 1) = uVar3;
    param_2 = (undefined2 *)((long)param_2 + 3);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    pbVar9 = *(byte **)(param_1 + 0x60);
    if ((*pbVar9 & 1) == 0) {
      sVar14 = (size_t)(*pbVar9 >> 1);
LAB_004dc3f0:
      if ((long)sVar14 <= (*param_3 - (long)param_2) + 0xd) {
        *param_2 = 0x2a2;
        *(char *)((long)param_2 + 2) = (char)sVar14;
        pbVar12 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar12 = pbVar9 + 1;
        }
        memcpy((undefined1 *)((long)param_2 + 3),pbVar12,sVar14);
        param_2 = (undefined2 *)((undefined1 *)((long)param_2 + 3) + sVar14);
        goto joined_r0x004dc7d8;
      }
    }
    else {
      sVar14 = *(size_t *)(pbVar9 + 8);
      if ((long)sVar14 < 0x80) goto LAB_004dc3f0;
    }
    param_2 = (undefined2 *)FUN_0052c95c(param_3,0x24);
  }
joined_r0x004dc7d8:
  if ((uVar1 >> 4 & 1) != 0) {
    pbVar9 = *(byte **)(param_1 + 0x68);
    if ((*pbVar9 & 1) == 0) {
      sVar14 = (size_t)(*pbVar9 >> 1);
LAB_004dc458:
      if ((long)sVar14 <= (*param_3 - (long)param_2) + 0xd) {
        *param_2 = 0x2aa;
        *(char *)((long)param_2 + 2) = (char)sVar14;
        pbVar12 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar12 = pbVar9 + 1;
        }
        memcpy((undefined1 *)((long)param_2 + 3),pbVar12,sVar14);
        param_2 = (undefined2 *)((undefined1 *)((long)param_2 + 3) + sVar14);
        goto joined_r0x004dc7f0;
      }
    }
    else {
      sVar14 = *(size_t *)(pbVar9 + 8);
      if ((long)sVar14 < 0x80) goto LAB_004dc458;
    }
    param_2 = (undefined2 *)FUN_0052c95c(param_3,0x25);
  }
joined_r0x004dc7f0:
  if ((uVar1 >> 5 & 1) != 0) {
    pbVar9 = *(byte **)(param_1 + 0x70);
    if ((*pbVar9 & 1) == 0) {
      sVar14 = (size_t)(*pbVar9 >> 1);
LAB_004dc4c0:
      if ((long)sVar14 <= (*param_3 - (long)param_2) + 0xd) {
        *param_2 = 0x2ba;
        *(char *)((long)param_2 + 2) = (char)sVar14;
        pbVar12 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar12 = pbVar9 + 1;
        }
        memcpy((undefined1 *)((long)param_2 + 3),pbVar12,sVar14);
        param_2 = (undefined2 *)((undefined1 *)((long)param_2 + 3) + sVar14);
        goto joined_r0x004dc504;
      }
    }
    else {
      sVar14 = *(size_t *)(pbVar9 + 8);
      if ((long)sVar14 < 0x80) goto LAB_004dc4c0;
    }
    param_2 = (undefined2 *)FUN_0052c95c(param_3,0x27);
  }
joined_r0x004dc504:
  if ((uVar1 >> 6 & 1) != 0) {
    pbVar9 = *(byte **)(param_1 + 0x78);
    if ((*pbVar9 & 1) == 0) {
      sVar14 = (size_t)(*pbVar9 >> 1);
LAB_004dc528:
      if ((long)sVar14 <= (*param_3 - (long)param_2) + 0xd) {
        *param_2 = 0x2c2;
        *(char *)((long)param_2 + 2) = (char)sVar14;
        pbVar12 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar12 = pbVar9 + 1;
        }
        memcpy((undefined1 *)((long)param_2 + 3),pbVar12,sVar14);
        param_2 = (undefined2 *)((undefined1 *)((long)param_2 + 3) + sVar14);
        goto joined_r0x004dc0e0;
      }
    }
    else {
      sVar14 = *(size_t *)(pbVar9 + 8);
      if ((long)sVar14 < 0x80) goto LAB_004dc528;
    }
    param_2 = (undefined2 *)FUN_0052c95c(param_3,0x28);
  }
joined_r0x004dc0e0:
  if ((uVar1 >> 7 & 1) != 0) {
    pbVar9 = *(byte **)(param_1 + 0x80);
    if ((*pbVar9 & 1) == 0) {
      sVar14 = (size_t)(*pbVar9 >> 1);
LAB_004dc590:
      if ((long)sVar14 <= (*param_3 - (long)param_2) + 0xd) {
        *param_2 = 0x2ca;
        *(char *)((long)param_2 + 2) = (char)sVar14;
        pbVar12 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar12 = pbVar9 + 1;
        }
        memcpy((undefined1 *)((long)param_2 + 3),pbVar12,sVar14);
        param_2 = (undefined2 *)((undefined1 *)((long)param_2 + 3) + sVar14);
        goto joined_r0x004dc5d4;
      }
    }
    else {
      sVar14 = *(size_t *)(pbVar9 + 8);
      if ((long)sVar14 < 0x80) goto LAB_004dc590;
    }
    param_2 = (undefined2 *)FUN_0052c95c(param_3,0x29);
  }
joined_r0x004dc5d4:
  if ((uVar1 >> 0x10 & 1) != 0) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
    }
    uVar3 = *(undefined1 *)(param_1 + 0x9e);
    *param_2 = 0x2d0;
    *(undefined1 *)(param_2 + 1) = uVar3;
    param_2 = (undefined2 *)((long)param_2 + 3);
  }
  if ((uVar1 >> 8 & 1) != 0) {
    pbVar9 = *(byte **)(param_1 + 0x88);
    if ((*pbVar9 & 1) == 0) {
      sVar14 = (size_t)(*pbVar9 >> 1);
LAB_004dc61c:
      if ((long)sVar14 <= (*param_3 - (long)param_2) + 0xd) {
        *param_2 = 0x2e2;
        *(char *)((long)param_2 + 2) = (char)sVar14;
        pbVar12 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar12 = pbVar9 + 1;
        }
        memcpy((undefined1 *)((long)param_2 + 3),pbVar12,sVar14);
        param_2 = (undefined2 *)((undefined1 *)((long)param_2 + 3) + sVar14);
        goto joined_r0x004dc850;
      }
    }
    else {
      sVar14 = *(size_t *)(pbVar9 + 8);
      if ((long)sVar14 < 0x80) goto LAB_004dc61c;
    }
    param_2 = (undefined2 *)FUN_0052c95c(param_3,0x2c);
  }
joined_r0x004dc850:
  if ((uVar1 >> 9 & 1) == 0) {
    iVar2 = *(int *)(param_1 + 0x38);
    goto joined_r0x004dc0f4;
  }
  pbVar9 = *(byte **)(param_1 + 0x90);
  if ((*pbVar9 & 1) == 0) {
    sVar14 = (size_t)(*pbVar9 >> 1);
LAB_004dc684:
    if ((long)sVar14 <= (*param_3 - (long)param_2) + 0xd) {
      *param_2 = 0x2ea;
      *(char *)(param_2 + 1) = (char)sVar14;
      pbVar12 = *(byte **)(pbVar9 + 0x10);
      if ((*pbVar9 & 1) == 0) {
        pbVar12 = pbVar9 + 1;
      }
      memcpy((undefined1 *)((long)param_2 + 3),pbVar12,sVar14);
      param_2 = (undefined2 *)((undefined1 *)((long)param_2 + 3) + sVar14);
      iVar2 = *(int *)(param_1 + 0x38);
      goto joined_r0x004dc0f4;
    }
  }
  else {
    sVar14 = *(size_t *)(pbVar9 + 8);
    if ((long)sVar14 < 0x80) goto LAB_004dc684;
  }
  param_2 = (undefined2 *)FUN_0052c95c(param_3,0x2d);
  iVar2 = *(int *)(param_1 + 0x38);
joined_r0x004dc0f4:
  if (iVar2 != 0) {
    iVar15 = 0;
    do {
      if ((undefined2 *)*param_3 <= param_2) {
        param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x40) + (long)iVar15 * 8 + 8);
      *param_2 = 0x3eba;
      uVar1 = *(uint *)(lVar6 + 0x14);
      if (uVar1 < 0x80) {
        *(byte *)(param_2 + 1) = (byte)uVar1;
        param_2 = (undefined2 *)((long)param_2 + 3);
      }
      else {
        *(byte *)(param_2 + 1) = (byte)uVar1 | 0x80;
        if (uVar1 >> 0xe == 0) {
          *(char *)((long)param_2 + 3) = (char)(uVar1 >> 7);
          param_2 = param_2 + 2;
        }
        else {
          param_2 = param_2 + 2;
          uVar1 = uVar1 >> 7;
          do {
            puVar8 = param_2;
            uVar4 = uVar1 >> 7;
            *(byte *)((long)puVar8 + -1) = (byte)uVar1 | 0x80;
            param_2 = (undefined2 *)((long)puVar8 + 1);
            uVar5 = uVar1 >> 0xe;
            uVar1 = uVar4;
          } while (uVar5 != 0);
          *(char *)puVar8 = (char)uVar4;
        }
      }
      param_2 = (undefined2 *)FUN_004e2978(lVar6,param_2,param_3);
      iVar15 = iVar15 + 1;
    } while (iVar15 != iVar2);
  }
  uVar7 = FUN_00524f90(param_1 + 0x10,1000,0x20000000,param_2,param_3);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return uVar7;
  }
  uVar7 = FUN_005161f8((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8,uVar7,param_3);
  return uVar7;
}


