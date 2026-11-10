/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004d1024; name: FUN_004d1024
 */


undefined1 * FUN_004d1024(long param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  size_t sVar10;
  int iVar11;
  long lVar12;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) == 0) {
LAB_004d10b0:
    iVar2 = *(int *)(param_1 + 0x20);
  }
  else {
    pbVar8 = *(byte **)(param_1 + 0xd8);
    if ((*pbVar8 & 1) == 0) {
      sVar10 = (size_t)(*pbVar8 >> 1);
LAB_004d106c:
      if ((long)sVar10 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 10;
        param_2[1] = (char)sVar10;
        pbVar9 = *(byte **)(pbVar8 + 0x10);
        if ((*pbVar8 & 1) == 0) {
          pbVar9 = pbVar8 + 1;
        }
        memcpy(param_2 + 2,pbVar9,sVar10);
        param_2 = param_2 + 2 + sVar10;
        goto LAB_004d10b0;
      }
    }
    else {
      sVar10 = *(size_t *)(pbVar8 + 8);
      if ((long)sVar10 < 0x80) goto LAB_004d106c;
    }
    param_2 = (undefined1 *)FUN_0052c95c(param_3,1);
    iVar2 = *(int *)(param_1 + 0x20);
  }
  if (iVar2 != 0) {
    iVar11 = 0;
    do {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x28) + (long)iVar11 * 8 + 8);
      *param_2 = 0x12;
      uVar3 = *(uint *)(lVar6 + 0x14);
      if (uVar3 < 0x80) {
        param_2[1] = (byte)uVar3;
        param_2 = param_2 + 2;
      }
      else {
        param_2[1] = (byte)uVar3 | 0x80;
        if (uVar3 >> 0xe == 0) {
          param_2[2] = (char)(uVar3 >> 7);
          param_2 = param_2 + 3;
        }
        else {
          param_2 = param_2 + 3;
          uVar3 = uVar3 >> 7;
          do {
            puVar7 = param_2;
            uVar4 = uVar3 >> 7;
            puVar7[-1] = (byte)uVar3 | 0x80;
            param_2 = puVar7 + 1;
            uVar5 = uVar3 >> 0xe;
            uVar3 = uVar4;
          } while (uVar5 != 0);
          *puVar7 = (char)uVar4;
        }
      }
      param_2 = (undefined1 *)FUN_004d3ed8(lVar6,param_2,param_3);
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar2);
  }
  iVar2 = *(int *)(param_1 + 0x38);
  if (iVar2 != 0) {
    iVar11 = 0;
    do {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x40) + (long)iVar11 * 8 + 8);
      *param_2 = 0x1a;
      uVar3 = *(uint *)(lVar6 + 0x14);
      if (uVar3 < 0x80) {
        param_2[1] = (byte)uVar3;
        param_2 = param_2 + 2;
      }
      else {
        param_2[1] = (byte)uVar3 | 0x80;
        if (uVar3 >> 0xe == 0) {
          param_2[2] = (char)(uVar3 >> 7);
          param_2 = param_2 + 3;
        }
        else {
          param_2 = param_2 + 3;
          uVar3 = uVar3 >> 7;
          do {
            puVar7 = param_2;
            uVar4 = uVar3 >> 7;
            puVar7[-1] = (byte)uVar3 | 0x80;
            param_2 = puVar7 + 1;
            uVar5 = uVar3 >> 0xe;
            uVar3 = uVar4;
          } while (uVar5 != 0);
          *puVar7 = (char)uVar4;
        }
      }
      param_2 = (undefined1 *)FUN_004d1024(lVar6,param_2,param_3);
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar2);
  }
  iVar2 = *(int *)(param_1 + 0x50);
  if (iVar2 != 0) {
    iVar11 = 0;
    do {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x58) + (long)iVar11 * 8 + 8);
      *param_2 = 0x22;
      uVar3 = *(uint *)(lVar6 + 0x14);
      if (uVar3 < 0x80) {
        param_2[1] = (byte)uVar3;
        param_2 = param_2 + 2;
      }
      else {
        param_2[1] = (byte)uVar3 | 0x80;
        if (uVar3 >> 0xe == 0) {
          param_2[2] = (char)(uVar3 >> 7);
          param_2 = param_2 + 3;
        }
        else {
          param_2 = param_2 + 3;
          uVar3 = uVar3 >> 7;
          do {
            puVar7 = param_2;
            uVar4 = uVar3 >> 7;
            puVar7[-1] = (byte)uVar3 | 0x80;
            param_2 = puVar7 + 1;
            uVar5 = uVar3 >> 0xe;
            uVar3 = uVar4;
          } while (uVar5 != 0);
          *puVar7 = (char)uVar4;
        }
      }
      param_2 = (undefined1 *)FUN_004d6eac(lVar6,param_2,param_3);
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar2);
  }
  iVar2 = *(int *)(param_1 + 0x68);
  if (iVar2 != 0) {
    iVar11 = 0;
    do {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x70) + (long)iVar11 * 8 + 8);
      *param_2 = 0x2a;
      uVar3 = *(uint *)(lVar6 + 0x14);
      if (uVar3 < 0x80) {
        param_2[1] = (byte)uVar3;
        param_2 = param_2 + 2;
      }
      else {
        param_2[1] = (byte)uVar3 | 0x80;
        if (uVar3 >> 0xe == 0) {
          param_2[2] = (char)(uVar3 >> 7);
          param_2 = param_2 + 3;
        }
        else {
          param_2 = param_2 + 3;
          uVar3 = uVar3 >> 7;
          do {
            puVar7 = param_2;
            uVar4 = uVar3 >> 7;
            puVar7[-1] = (byte)uVar3 | 0x80;
            param_2 = puVar7 + 1;
            uVar5 = uVar3 >> 0xe;
            uVar3 = uVar4;
          } while (uVar5 != 0);
          *puVar7 = (char)uVar4;
        }
      }
      param_2 = (undefined1 *)FUN_004ceb08(lVar6,param_2,param_3);
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar2);
  }
  iVar2 = *(int *)(param_1 + 0x80);
  if (iVar2 != 0) {
    iVar11 = 0;
    do {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x88) + (long)iVar11 * 8 + 8);
      *param_2 = 0x32;
      uVar3 = *(uint *)(lVar6 + 0x14);
      if (uVar3 < 0x80) {
        param_2[1] = (byte)uVar3;
        param_2 = param_2 + 2;
      }
      else {
        param_2[1] = (byte)uVar3 | 0x80;
        if (uVar3 >> 0xe == 0) {
          param_2[2] = (char)(uVar3 >> 7);
          param_2 = param_2 + 3;
        }
        else {
          param_2 = param_2 + 3;
          uVar3 = uVar3 >> 7;
          do {
            puVar7 = param_2;
            uVar4 = uVar3 >> 7;
            puVar7[-1] = (byte)uVar3 | 0x80;
            param_2 = puVar7 + 1;
            uVar5 = uVar3 >> 0xe;
            uVar3 = uVar4;
          } while (uVar5 != 0);
          *puVar7 = (char)uVar4;
        }
      }
      param_2 = (undefined1 *)FUN_004d3ed8(lVar6,param_2,param_3);
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar2);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
    }
    lVar6 = *(long *)(param_1 + 0xe0);
    *param_2 = 0x3a;
    uVar1 = *(uint *)(lVar6 + 0x2c);
    if (uVar1 < 0x80) {
      param_2[1] = (byte)uVar1;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar1 | 0x80;
      if (uVar1 >> 0xe == 0) {
        param_2[2] = (char)(uVar1 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        uVar1 = uVar1 >> 7;
        do {
          puVar7 = param_2;
          uVar3 = uVar1 >> 7;
          puVar7[-1] = (byte)uVar1 | 0x80;
          param_2 = puVar7 + 1;
          uVar4 = uVar1 >> 0xe;
          uVar1 = uVar3;
        } while (uVar4 != 0);
        *puVar7 = (char)uVar3;
      }
    }
    param_2 = (undefined1 *)FUN_004dd550(lVar6,param_2,param_3);
  }
  iVar2 = *(int *)(param_1 + 0x98);
  if (iVar2 != 0) {
    iVar11 = 0;
    do {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0xa0) + (long)iVar11 * 8 + 8);
      *param_2 = 0x42;
      uVar1 = *(uint *)(lVar6 + 0x14);
      if (uVar1 < 0x80) {
        param_2[1] = (byte)uVar1;
        param_2 = param_2 + 2;
      }
      else {
        param_2[1] = (byte)uVar1 | 0x80;
        if (uVar1 >> 0xe == 0) {
          param_2[2] = (char)(uVar1 >> 7);
          param_2 = param_2 + 3;
        }
        else {
          param_2 = param_2 + 3;
          uVar1 = uVar1 >> 7;
          do {
            puVar7 = param_2;
            uVar3 = uVar1 >> 7;
            puVar7[-1] = (byte)uVar1 | 0x80;
            param_2 = puVar7 + 1;
            uVar4 = uVar1 >> 0xe;
            uVar1 = uVar3;
          } while (uVar4 != 0);
          *puVar7 = (char)uVar3;
        }
      }
      param_2 = (undefined1 *)FUN_004d5460(lVar6,param_2,param_3);
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar2);
  }
  iVar2 = *(int *)(param_1 + 0xb0);
  if (iVar2 != 0) {
    iVar11 = 0;
    do {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0xb8) + (long)iVar11 * 8 + 8);
      *param_2 = 0x4a;
      uVar1 = *(uint *)(lVar6 + 0x14);
      if (uVar1 < 0x80) {
        param_2[1] = (byte)uVar1;
        param_2 = param_2 + 2;
      }
      else {
        param_2[1] = (byte)uVar1 | 0x80;
        if (uVar1 >> 0xe == 0) {
          param_2[2] = (char)(uVar1 >> 7);
          param_2 = param_2 + 3;
        }
        else {
          param_2 = param_2 + 3;
          uVar1 = uVar1 >> 7;
          do {
            puVar7 = param_2;
            uVar3 = uVar1 >> 7;
            puVar7[-1] = (byte)uVar1 | 0x80;
            param_2 = puVar7 + 1;
            uVar4 = uVar1 >> 0xe;
            uVar1 = uVar3;
          } while (uVar4 != 0);
          *puVar7 = (char)uVar3;
        }
      }
      param_2 = (undefined1 *)FUN_004cf5bc(lVar6,param_2,param_3);
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar2);
  }
  if (0 < (int)*(uint *)(param_1 + 200)) {
    lVar6 = 0;
    lVar12 = (ulong)*(uint *)(param_1 + 200) * 8;
    do {
      while( true ) {
        pbVar8 = *(byte **)(*(long *)(param_1 + 0xd0) + lVar6 + 8);
        if ((*pbVar8 & 1) == 0) break;
        sVar10 = *(size_t *)(pbVar8 + 8);
        if ((long)sVar10 < 0x80) goto LAB_004d1698;
LAB_004d16e8:
        param_2 = (undefined1 *)FUN_0052cbdc(param_3,10);
        lVar6 = lVar6 + 8;
        if (lVar12 == lVar6) goto LAB_004d1704;
      }
      sVar10 = (size_t)(*pbVar8 >> 1);
LAB_004d1698:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar10) goto LAB_004d16e8;
      *param_2 = 0x52;
      param_2[1] = (char)sVar10;
      pbVar9 = *(byte **)(pbVar8 + 0x10);
      if ((*pbVar8 & 1) == 0) {
        pbVar9 = pbVar8 + 1;
      }
      memcpy(param_2 + 2,pbVar9,sVar10);
      param_2 = param_2 + 2 + sVar10;
      lVar6 = lVar6 + 8;
    } while (lVar12 != lVar6);
  }
LAB_004d1704:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  puVar7 = (undefined1 *)
           FUN_005161f8((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8,param_2,param_3);
  return puVar7;
}


