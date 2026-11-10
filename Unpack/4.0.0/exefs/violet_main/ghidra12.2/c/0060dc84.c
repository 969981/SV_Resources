/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0060dc84; name: FUN_0060dc84
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_0060dc84(undefined *param_1,undefined1 *param_2,long *param_3)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined1 *puVar7;
  void *__src;
  ulong uVar8;
  undefined1 uVar9;
  uint uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong uVar14;
  size_t sVar15;
  int iVar16;
  
  pbVar11 = *(byte **)(param_1 + 0x28);
  bVar2 = *pbVar11;
  if ((bVar2 & 1) == 0) {
    if (1 < bVar2) {
      FUN_00532960(pbVar11 + 1,bVar2 >> 1);
      pbVar11 = *(byte **)(param_1 + 0x28);
      bVar2 = *pbVar11;
      if ((bVar2 & 1) != 0) goto LAB_0060dccc;
LAB_0060dcf8:
      sVar15 = (size_t)(bVar2 >> 1);
LAB_0060dcfc:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar15) goto LAB_0060dd78;
      *param_2 = 10;
      param_2[1] = (char)sVar15;
      pbVar13 = *(byte **)(pbVar11 + 0x10);
      if ((*pbVar11 & 1) == 0) {
        pbVar13 = pbVar11 + 1;
      }
      memcpy(param_2 + 2,pbVar13,sVar15);
      param_2 = param_2 + 2 + sVar15;
    }
LAB_0060dd40:
    uVar10 = *(uint *)(param_1 + 0x50);
    if (uVar10 == 0) goto LAB_0060dddc;
LAB_0060dd48:
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      uVar10 = *(uint *)(param_1 + 0x50);
      *param_2 = 0x10;
      if (0x7f < uVar10) goto LAB_0060ddbc;
LAB_0060dd64:
      param_2[1] = (char)uVar10;
      param_2 = param_2 + 2;
      uVar10 = *(uint *)(param_1 + 0x54);
      goto joined_r0x0060dd70;
    }
    *param_2 = 0x10;
    if (uVar10 < 0x80) goto LAB_0060dd64;
LAB_0060ddbc:
    param_2[1] = (byte)uVar10 | 0x80;
    if (uVar10 >> 0xe == 0) {
      param_2[2] = (char)((ulong)(long)(int)uVar10 >> 7);
      param_2 = param_2 + 3;
      goto LAB_0060dddc;
    }
    uVar12 = (ulong)(long)(int)uVar10 >> 7;
    param_2 = param_2 + 3;
    do {
      puVar7 = param_2;
      uVar8 = uVar12 >> 7;
      puVar7[-1] = (byte)uVar12 | 0x80;
      param_2 = puVar7 + 1;
      uVar14 = uVar12 >> 0xe;
      uVar12 = uVar8;
    } while (uVar14 != 0);
    *puVar7 = (char)uVar8;
    uVar10 = *(uint *)(param_1 + 0x54);
    if (uVar10 != 0) goto LAB_0060dde4;
LAB_0060de88:
    cVar3 = param_1[0x58];
  }
  else {
    if (*(long *)(pbVar11 + 8) == 0) goto LAB_0060dd40;
    FUN_00532960(*(undefined8 *)(pbVar11 + 0x10));
    pbVar11 = *(byte **)(param_1 + 0x28);
    bVar2 = *pbVar11;
    if ((bVar2 & 1) == 0) goto LAB_0060dcf8;
LAB_0060dccc:
    sVar15 = *(size_t *)(pbVar11 + 8);
    if ((long)sVar15 < 0x80) goto LAB_0060dcfc;
LAB_0060dd78:
    param_2 = (undefined1 *)FUN_0052c95c(param_3,1,pbVar11,param_2);
    uVar10 = *(uint *)(param_1 + 0x50);
    if (uVar10 != 0) goto LAB_0060dd48;
LAB_0060dddc:
    uVar10 = *(uint *)(param_1 + 0x54);
joined_r0x0060dd70:
    if (uVar10 == 0) goto LAB_0060de88;
LAB_0060dde4:
    uVar12 = (ulong)uVar10;
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 0x18;
      if (uVar10 < 0x80) goto LAB_0060de00;
LAB_0060de68:
      param_2[1] = (byte)uVar12 | 0x80;
      uVar8 = (ulong)(long)(int)uVar12 >> 7;
      if (uVar12 >> 0xe == 0) {
        param_2[2] = (char)uVar8;
        param_2 = param_2 + 3;
        goto LAB_0060de88;
      }
      param_2 = param_2 + 3;
      do {
        puVar7 = param_2;
        uVar12 = uVar8 >> 7;
        puVar7[-1] = (byte)uVar8 | 0x80;
        param_2 = puVar7 + 1;
        uVar14 = uVar8 >> 0xe;
        uVar8 = uVar12;
      } while (uVar14 != 0);
      *puVar7 = (char)uVar12;
      cVar3 = param_1[0x58];
    }
    else {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      uVar10 = *(uint *)(param_1 + 0x54);
      uVar12 = (ulong)uVar10;
      *param_2 = 0x18;
      if (0x7f < uVar10) goto LAB_0060de68;
LAB_0060de00:
      param_2[1] = (char)uVar12;
      param_2 = param_2 + 2;
      cVar3 = param_1[0x58];
    }
  }
  if (cVar3 != '\0') {
    if (param_2 < (undefined1 *)*param_3) {
      uVar9 = 1;
    }
    else {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      uVar9 = param_1[0x58];
    }
    *param_2 = 0x20;
    param_2[1] = uVar9;
    param_2 = param_2 + 2;
  }
  if (param_1[0x59] != '\0') {
    if (param_2 < (undefined1 *)*param_3) {
      uVar9 = 1;
    }
    else {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      uVar9 = param_1[0x59];
    }
    *param_2 = 0x28;
    param_2[1] = uVar9;
    param_2 = param_2 + 2;
  }
  pbVar11 = *(byte **)(param_1 + 0x30);
  bVar2 = *pbVar11;
  if ((bVar2 & 1) == 0) {
    if (1 < bVar2) {
      FUN_00532960(pbVar11 + 1,bVar2 >> 1);
      pbVar11 = *(byte **)(param_1 + 0x30);
      bVar2 = *pbVar11;
      if ((bVar2 & 1) != 0) goto LAB_0060df04;
LAB_0060df30:
      sVar15 = (size_t)(bVar2 >> 1);
LAB_0060df34:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar15) goto LAB_0060e004;
      *param_2 = 0x32;
      param_2[1] = (char)sVar15;
      pbVar13 = *(byte **)(pbVar11 + 0x10);
      if ((*pbVar11 & 1) == 0) {
        pbVar13 = pbVar11 + 1;
      }
      memcpy(param_2 + 2,pbVar13,sVar15);
      param_2 = param_2 + 2 + sVar15;
    }
LAB_0060df78:
    uVar10 = *(uint *)(param_1 + 0x5c);
    if (uVar10 == 0) goto LAB_0060e098;
LAB_0060df80:
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      uVar10 = *(uint *)(param_1 + 0x5c);
      *param_2 = 0x38;
      if (0x7f < uVar10) goto LAB_0060e078;
LAB_0060df9c:
      param_2[1] = (char)uVar10;
      param_2 = param_2 + 2;
      pbVar11 = *(byte **)(param_1 + 0x38);
      bVar2 = *pbVar11;
      goto joined_r0x0060dfac;
    }
    *param_2 = 0x38;
    if (uVar10 < 0x80) goto LAB_0060df9c;
LAB_0060e078:
    param_2[1] = (byte)uVar10 | 0x80;
    if (uVar10 >> 0xe == 0) {
      param_2[2] = (char)((ulong)(long)(int)uVar10 >> 7);
      param_2 = param_2 + 3;
      goto LAB_0060e098;
    }
    uVar12 = (ulong)(long)(int)uVar10 >> 7;
    param_2 = param_2 + 3;
    do {
      puVar7 = param_2;
      uVar8 = uVar12 >> 7;
      puVar7[-1] = (byte)uVar12 | 0x80;
      param_2 = puVar7 + 1;
      uVar14 = uVar12 >> 0xe;
      uVar12 = uVar8;
    } while (uVar14 != 0);
    *puVar7 = (char)uVar8;
    pbVar11 = *(byte **)(param_1 + 0x38);
    bVar2 = *pbVar11;
    if ((bVar2 & 1) != 0) goto LAB_0060dfb0;
LAB_0060e0a4:
    if (1 < bVar2) {
      FUN_00532960(pbVar11 + 1,bVar2 >> 1);
      pbVar11 = *(byte **)(param_1 + 0x38);
      bVar2 = *pbVar11;
joined_r0x0060dfc8:
      if ((bVar2 & 1) == 0) {
        sVar15 = (size_t)(bVar2 >> 1);
LAB_0060e0d0:
        if ((long)sVar15 <= (*param_3 - (long)param_2) + 0xe) {
          *param_2 = 0x42;
          param_2[1] = (char)sVar15;
          pbVar13 = *(byte **)(pbVar11 + 0x10);
          if ((*pbVar11 & 1) == 0) {
            pbVar13 = pbVar11 + 1;
          }
          memcpy(param_2 + 2,pbVar13,sVar15);
          param_2 = param_2 + 2 + sVar15;
          goto LAB_0060e114;
        }
      }
      else {
        sVar15 = *(size_t *)(pbVar11 + 8);
        if ((long)sVar15 < 0x80) goto LAB_0060e0d0;
      }
      param_2 = (undefined1 *)FUN_0052c95c(param_3,8,pbVar11,param_2);
      uVar10 = *(uint *)(param_1 + 0x60);
      goto joined_r0x0060e118;
    }
  }
  else {
    if (*(long *)(pbVar11 + 8) == 0) goto LAB_0060df78;
    FUN_00532960(*(undefined8 *)(pbVar11 + 0x10));
    pbVar11 = *(byte **)(param_1 + 0x30);
    bVar2 = *pbVar11;
    if ((bVar2 & 1) == 0) goto LAB_0060df30;
LAB_0060df04:
    sVar15 = *(size_t *)(pbVar11 + 8);
    if ((long)sVar15 < 0x80) goto LAB_0060df34;
LAB_0060e004:
    param_2 = (undefined1 *)FUN_0052c95c(param_3,6,pbVar11,param_2);
    uVar10 = *(uint *)(param_1 + 0x5c);
    if (uVar10 != 0) goto LAB_0060df80;
LAB_0060e098:
    pbVar11 = *(byte **)(param_1 + 0x38);
    bVar2 = *pbVar11;
joined_r0x0060dfac:
    if ((bVar2 & 1) == 0) goto LAB_0060e0a4;
LAB_0060dfb0:
    if (*(long *)(pbVar11 + 8) != 0) {
      FUN_00532960(*(undefined8 *)(pbVar11 + 0x10));
      pbVar11 = *(byte **)(param_1 + 0x38);
      bVar2 = *pbVar11;
      goto joined_r0x0060dfc8;
    }
  }
LAB_0060e114:
  uVar10 = *(uint *)(param_1 + 0x60);
joined_r0x0060e118:
  if (uVar10 != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 0x48;
    }
    else {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      uVar10 = *(uint *)(param_1 + 0x60);
      *param_2 = 0x48;
    }
    if (uVar10 < 0x80) {
      param_2[1] = (byte)uVar10;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar10 | 0x80;
      if (uVar10 >> 0xe == 0) {
        param_2[2] = (char)((ulong)(long)(int)uVar10 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        uVar12 = (ulong)(long)(int)uVar10 >> 7;
        param_2 = param_2 + 3;
        do {
          puVar7 = param_2;
          uVar8 = uVar12 >> 7;
          puVar7[-1] = (byte)uVar12 | 0x80;
          param_2 = puVar7 + 1;
          uVar14 = uVar12 >> 0xe;
          uVar12 = uVar8;
        } while (uVar14 != 0);
        *puVar7 = (char)uVar8;
      }
    }
  }
  if (param_1 != PTR_DAT_047ce710) {
    lVar6 = *(long *)(param_1 + 0x40);
    if (lVar6 != 0) {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
        lVar6 = *(long *)(param_1 + 0x40);
      }
      *param_2 = 0x52;
      uVar10 = *(uint *)(lVar6 + 0x1c);
      if (uVar10 < 0x80) {
        param_2[1] = (byte)uVar10;
        param_2 = param_2 + 2;
      }
      else {
        param_2[1] = (byte)uVar10 | 0x80;
        if (uVar10 >> 0xe == 0) {
          param_2[2] = (char)(uVar10 >> 7);
          param_2 = param_2 + 3;
        }
        else {
          param_2 = param_2 + 3;
          uVar10 = uVar10 >> 7;
          do {
            puVar7 = param_2;
            uVar4 = uVar10 >> 7;
            puVar7[-1] = (byte)uVar10 | 0x80;
            param_2 = puVar7 + 1;
            uVar5 = uVar10 >> 0xe;
            uVar10 = uVar4;
          } while (uVar5 != 0);
          *puVar7 = (char)uVar4;
        }
      }
      param_2 = (undefined1 *)FUN_00513f18(lVar6,param_2,param_3);
    }
    lVar6 = *(long *)(param_1 + 0x48);
    if (lVar6 != 0) {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
        lVar6 = *(long *)(param_1 + 0x48);
      }
      *param_2 = 0x5a;
      uVar10 = *(uint *)(lVar6 + 0x28);
      if (uVar10 < 0x80) {
        param_2[1] = (byte)uVar10;
        param_2 = param_2 + 2;
      }
      else {
        param_2[1] = (byte)uVar10 | 0x80;
        if (uVar10 >> 0xe == 0) {
          param_2[2] = (char)(uVar10 >> 7);
          param_2 = param_2 + 3;
        }
        else {
          param_2 = param_2 + 3;
          uVar10 = uVar10 >> 7;
          do {
            puVar7 = param_2;
            uVar4 = uVar10 >> 7;
            puVar7[-1] = (byte)uVar10 | 0x80;
            param_2 = puVar7 + 1;
            uVar5 = uVar10 >> 0xe;
            uVar10 = uVar4;
          } while (uVar5 != 0);
          *puVar7 = (char)uVar4;
        }
      }
      param_2 = (undefined1 *)FUN_0026a5b8(lVar6,param_2,param_3);
    }
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    iVar16 = 0;
    do {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x20) + (long)iVar16 * 8 + 8);
      *param_2 = 0x62;
      uVar10 = *(uint *)(lVar6 + 0x44);
      if (uVar10 < 0x80) {
        param_2[1] = (byte)uVar10;
        param_2 = param_2 + 2;
      }
      else {
        param_2[1] = (byte)uVar10 | 0x80;
        if (uVar10 >> 0xe == 0) {
          param_2[2] = (char)(uVar10 >> 7);
          param_2 = param_2 + 3;
        }
        else {
          param_2 = param_2 + 3;
          uVar10 = uVar10 >> 7;
          do {
            puVar7 = param_2;
            uVar4 = uVar10 >> 7;
            puVar7[-1] = (byte)uVar10 | 0x80;
            param_2 = puVar7 + 1;
            uVar5 = uVar10 >> 0xe;
            uVar10 = uVar4;
          } while (uVar5 != 0);
          *puVar7 = (char)uVar4;
        }
      }
      param_2 = (undefined1 *)FUN_00609308(lVar6,param_2,param_3);
      iVar16 = iVar16 + 1;
    } while (iVar16 != iVar1);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar12 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar12 + 8) & 1) == 0) {
      __src = (void *)(uVar12 + 9);
      uVar8 = (ulong)(*(byte *)(uVar12 + 8) >> 1);
    }
    else {
      uVar8 = *(ulong *)(uVar12 + 0x10);
      __src = *(void **)(uVar12 + 0x18);
    }
    sVar15 = (size_t)(int)uVar8;
    if (*param_3 - (long)param_2 < (long)sVar15) {
      puVar7 = (undefined1 *)FUN_0052c7dc(param_3,__src,uVar8,param_2);
      return puVar7;
    }
    memcpy(param_2,__src,sVar15);
    param_2 = param_2 + sVar15;
  }
  return param_2;
}


