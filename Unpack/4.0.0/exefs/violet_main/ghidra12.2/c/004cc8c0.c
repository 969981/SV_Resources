/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004cc8c0; name: FUN_004cc8c0
 */


undefined1 * FUN_004cc8c0(long param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  size_t sVar13;
  int iVar14;
  ulong uVar15;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) == 0) {
    if ((uVar1 >> 1 & 1) != 0) goto LAB_004cc964;
LAB_004cc8ec:
    uVar2 = *(uint *)(param_1 + 0x20);
  }
  else {
    pbVar8 = *(byte **)(param_1 + 0xb0);
    if ((*pbVar8 & 1) == 0) {
      sVar13 = (size_t)(*pbVar8 >> 1);
LAB_004cc91c:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar13) goto LAB_004cca78;
      *param_2 = 10;
      param_2[1] = (char)sVar13;
      pbVar11 = *(byte **)(pbVar8 + 0x10);
      if ((*pbVar8 & 1) == 0) {
        pbVar11 = pbVar8 + 1;
      }
      memcpy(param_2 + 2,pbVar11,sVar13);
      param_2 = param_2 + 2 + sVar13;
    }
    else {
      sVar13 = *(size_t *)(pbVar8 + 8);
      if ((long)sVar13 < 0x80) goto LAB_004cc91c;
LAB_004cca78:
      param_2 = (undefined1 *)FUN_0052c95c(param_3,1);
    }
    if ((uVar1 >> 1 & 1) == 0) goto LAB_004cc8ec;
LAB_004cc964:
    pbVar8 = *(byte **)(param_1 + 0xb8);
    if ((*pbVar8 & 1) == 0) {
      sVar13 = (size_t)(*pbVar8 >> 1);
LAB_004cc984:
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x12;
        param_2[1] = (char)sVar13;
        pbVar11 = *(byte **)(pbVar8 + 0x10);
        if ((*pbVar8 & 1) == 0) {
          pbVar11 = pbVar8 + 1;
        }
        memcpy(param_2 + 2,pbVar11,sVar13);
        param_2 = param_2 + 2 + sVar13;
        uVar2 = *(uint *)(param_1 + 0x20);
        goto joined_r0x004ccaa8;
      }
    }
    else {
      sVar13 = *(size_t *)(pbVar8 + 8);
      if ((long)sVar13 < 0x80) goto LAB_004cc984;
    }
    param_2 = (undefined1 *)FUN_0052c95c(param_3,2);
    uVar2 = *(uint *)(param_1 + 0x20);
  }
joined_r0x004ccaa8:
  if (0 < (int)uVar2) {
    lVar6 = 0;
    do {
      while( true ) {
        pbVar8 = *(byte **)(*(long *)(param_1 + 0x28) + lVar6 + 8);
        if ((*pbVar8 & 1) == 0) break;
        sVar13 = *(size_t *)(pbVar8 + 8);
        if ((long)sVar13 < 0x80) goto LAB_004cca08;
LAB_004cca58:
        param_2 = (undefined1 *)FUN_0052cbdc(param_3,3);
        lVar6 = lVar6 + 8;
        if ((ulong)uVar2 * 8 == lVar6) goto LAB_004ccaac;
      }
      sVar13 = (size_t)(*pbVar8 >> 1);
LAB_004cca08:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar13) goto LAB_004cca58;
      *param_2 = 0x1a;
      param_2[1] = (char)sVar13;
      pbVar11 = *(byte **)(pbVar8 + 0x10);
      if ((*pbVar8 & 1) == 0) {
        pbVar11 = pbVar8 + 1;
      }
      memcpy(param_2 + 2,pbVar11,sVar13);
      param_2 = param_2 + 2 + sVar13;
      lVar6 = lVar6 + 8;
    } while ((ulong)uVar2 * 8 != lVar6);
  }
LAB_004ccaac:
  iVar3 = *(int *)(param_1 + 0x38);
  if (iVar3 != 0) {
    iVar14 = 0;
    do {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x40) + (long)iVar14 * 8 + 8);
      *param_2 = 0x22;
      uVar2 = *(uint *)(lVar6 + 0x14);
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
            puVar7 = param_2;
            uVar4 = uVar2 >> 7;
            puVar7[-1] = (byte)uVar2 | 0x80;
            param_2 = puVar7 + 1;
            uVar5 = uVar2 >> 0xe;
            uVar2 = uVar4;
          } while (uVar5 != 0);
          *puVar7 = (char)uVar4;
        }
      }
      param_2 = (undefined1 *)FUN_004d1024(lVar6,param_2,param_3);
      iVar14 = iVar14 + 1;
    } while (iVar14 != iVar3);
  }
  iVar3 = *(int *)(param_1 + 0x50);
  if (iVar3 != 0) {
    iVar14 = 0;
    do {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x58) + (long)iVar14 * 8 + 8);
      *param_2 = 0x2a;
      uVar2 = *(uint *)(lVar6 + 0x14);
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
            puVar7 = param_2;
            uVar4 = uVar2 >> 7;
            puVar7[-1] = (byte)uVar2 | 0x80;
            param_2 = puVar7 + 1;
            uVar5 = uVar2 >> 0xe;
            uVar2 = uVar4;
          } while (uVar5 != 0);
          *puVar7 = (char)uVar4;
        }
      }
      param_2 = (undefined1 *)FUN_004d6eac(lVar6,param_2,param_3);
      iVar14 = iVar14 + 1;
    } while (iVar14 != iVar3);
  }
  iVar3 = *(int *)(param_1 + 0x68);
  if (iVar3 != 0) {
    iVar14 = 0;
    do {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x70) + (long)iVar14 * 8 + 8);
      *param_2 = 0x32;
      uVar2 = *(uint *)(lVar6 + 0x14);
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
            puVar7 = param_2;
            uVar4 = uVar2 >> 7;
            puVar7[-1] = (byte)uVar2 | 0x80;
            param_2 = puVar7 + 1;
            uVar5 = uVar2 >> 0xe;
            uVar2 = uVar4;
          } while (uVar5 != 0);
          *puVar7 = (char)uVar4;
        }
      }
      param_2 = (undefined1 *)FUN_004d927c(lVar6,param_2,param_3);
      iVar14 = iVar14 + 1;
    } while (iVar14 != iVar3);
  }
  iVar3 = *(int *)(param_1 + 0x80);
  if (iVar3 != 0) {
    iVar14 = 0;
    do {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x88) + (long)iVar14 * 8 + 8);
      *param_2 = 0x3a;
      uVar2 = *(uint *)(lVar6 + 0x14);
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
            puVar7 = param_2;
            uVar4 = uVar2 >> 7;
            puVar7[-1] = (byte)uVar2 | 0x80;
            param_2 = puVar7 + 1;
            uVar5 = uVar2 >> 0xe;
            uVar2 = uVar4;
          } while (uVar5 != 0);
          *puVar7 = (char)uVar4;
        }
      }
      param_2 = (undefined1 *)FUN_004d3ed8(lVar6,param_2,param_3);
      iVar14 = iVar14 + 1;
    } while (iVar14 != iVar3);
  }
  if ((uVar1 >> 3 & 1) == 0) {
    if ((uVar1 >> 4 & 1) != 0) goto LAB_004cce28;
LAB_004ccd94:
    uVar2 = *(uint *)(param_1 + 0x90);
  }
  else {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
    }
    lVar6 = *(long *)(param_1 + 200);
    *param_2 = 0x42;
    uVar2 = *(uint *)(lVar6 + 0x2c);
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
          puVar7 = param_2;
          uVar4 = uVar2 >> 7;
          puVar7[-1] = (byte)uVar2 | 0x80;
          param_2 = puVar7 + 1;
          uVar5 = uVar2 >> 0xe;
          uVar2 = uVar4;
        } while (uVar5 != 0);
        *puVar7 = (char)uVar4;
      }
    }
    param_2 = (undefined1 *)FUN_004dc084(lVar6,param_2,param_3);
    if ((uVar1 >> 4 & 1) == 0) goto LAB_004ccd94;
LAB_004cce28:
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
    }
    lVar6 = *(long *)(param_1 + 0xd0);
    *param_2 = 0x4a;
    uVar2 = *(uint *)(lVar6 + 0x28);
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
          puVar7 = param_2;
          uVar4 = uVar2 >> 7;
          puVar7[-1] = (byte)uVar2 | 0x80;
          param_2 = puVar7 + 1;
          uVar5 = uVar2 >> 0xe;
          uVar2 = uVar4;
        } while (uVar5 != 0);
        *puVar7 = (char)uVar4;
      }
    }
    param_2 = (undefined1 *)FUN_004e4910(lVar6,param_2,param_3);
    uVar2 = *(uint *)(param_1 + 0x90);
  }
  if (0 < (int)uVar2) {
    uVar15 = 0;
    do {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      }
      uVar4 = *(uint *)(*(long *)(param_1 + 0x98) + uVar15 * 4);
      *param_2 = 0x50;
      if (uVar4 < 0x80) {
        param_2[1] = (byte)uVar4;
        param_2 = param_2 + 2;
      }
      else {
        param_2[1] = (byte)uVar4 | 0x80;
        uVar9 = (ulong)(long)(int)uVar4 >> 7;
        if (((ulong)(long)(int)uVar4 >> 0xe & 0x3ffff) == 0) {
          param_2[2] = (char)uVar9;
          param_2 = param_2 + 3;
        }
        else {
          param_2 = param_2 + 3;
          do {
            puVar7 = param_2;
            uVar10 = uVar9 >> 7;
            puVar7[-1] = (byte)uVar9 | 0x80;
            param_2 = puVar7 + 1;
            uVar12 = uVar9 >> 0xe;
            uVar9 = uVar10;
          } while (uVar12 != 0);
          *puVar7 = (char)uVar10;
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar2);
  }
  uVar2 = *(uint *)(param_1 + 0xa0);
  if (0 < (int)uVar2) {
    uVar15 = 0;
    do {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      }
      uVar4 = *(uint *)(*(long *)(param_1 + 0xa8) + uVar15 * 4);
      *param_2 = 0x58;
      if (uVar4 < 0x80) {
        param_2[1] = (byte)uVar4;
        param_2 = param_2 + 2;
      }
      else {
        param_2[1] = (byte)uVar4 | 0x80;
        uVar9 = (ulong)(long)(int)uVar4 >> 7;
        if (((ulong)(long)(int)uVar4 >> 0xe & 0x3ffff) == 0) {
          param_2[2] = (char)uVar9;
          param_2 = param_2 + 3;
        }
        else {
          param_2 = param_2 + 3;
          do {
            puVar7 = param_2;
            uVar10 = uVar9 >> 7;
            puVar7[-1] = (byte)uVar9 | 0x80;
            param_2 = puVar7 + 1;
            uVar12 = uVar9 >> 0xe;
            uVar9 = uVar10;
          } while (uVar12 != 0);
          *puVar7 = (char)uVar10;
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar2);
  }
  if ((uVar1 >> 2 & 1) == 0) {
LAB_004cd060:
    uVar15 = *(ulong *)(param_1 + 8);
  }
  else {
    pbVar8 = *(byte **)(param_1 + 0xc0);
    if ((*pbVar8 & 1) == 0) {
      sVar13 = (size_t)(*pbVar8 >> 1);
LAB_004cd01c:
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x62;
        param_2[1] = (char)sVar13;
        pbVar11 = *(byte **)(pbVar8 + 0x10);
        if ((*pbVar8 & 1) == 0) {
          pbVar11 = pbVar8 + 1;
        }
        memcpy(param_2 + 2,pbVar11,sVar13);
        param_2 = param_2 + 2 + sVar13;
        goto LAB_004cd060;
      }
    }
    else {
      sVar13 = *(size_t *)(pbVar8 + 8);
      if ((long)sVar13 < 0x80) goto LAB_004cd01c;
    }
    param_2 = (undefined1 *)FUN_0052c95c(param_3,0xc);
    uVar15 = *(ulong *)(param_1 + 8);
  }
  if ((uVar15 & 1) == 0) {
    return param_2;
  }
  puVar7 = (undefined1 *)FUN_005161f8((uVar15 & 0xfffffffffffffffe) + 8,param_2,param_3);
  return puVar7;
}


