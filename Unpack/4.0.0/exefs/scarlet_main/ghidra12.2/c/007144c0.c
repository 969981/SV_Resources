/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007144c0; name: FUN_007144c0
 */


/* WARNING: Type propagation algorithm not settling */

undefined2 * FUN_007144c0(undefined *param_1,undefined2 *param_2,long *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined2 *puVar5;
  void *__src;
  ulong uVar6;
  undefined1 uVar7;
  uint uVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  size_t sVar13;
  
  pbVar9 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar9;
  if ((bVar1 & 1) == 0) {
    if (bVar1 < 2) goto LAB_00714578;
    FUN_00532960(pbVar9 + 1,bVar1 >> 1);
    pbVar9 = *(byte **)(param_1 + 0x10);
    bVar1 = *pbVar9;
    if ((bVar1 & 1) == 0) goto LAB_00714530;
LAB_00714504:
    sVar13 = *(size_t *)(pbVar9 + 8);
    if ((long)sVar13 < 0x80) goto LAB_00714534;
LAB_007145d4:
    param_2 = (undefined2 *)FUN_0052c95c(param_3,1,pbVar9,param_2);
    uVar8 = *(uint *)(param_1 + 0x58);
    if (uVar8 != 0) goto LAB_00714580;
LAB_00714638:
    pbVar9 = *(byte **)(param_1 + 0x18);
    bVar1 = *pbVar9;
joined_r0x007145ac:
    if ((bVar1 & 1) != 0) goto LAB_007145b0;
LAB_00714644:
    if (1 < bVar1) {
      FUN_00532960(pbVar9 + 1,bVar1 >> 1);
      pbVar9 = *(byte **)(param_1 + 0x18);
      bVar1 = *pbVar9;
      goto joined_r0x007145c8;
    }
LAB_007146b4:
    pbVar9 = *(byte **)(param_1 + 0x20);
    bVar1 = *pbVar9;
    if ((bVar1 & 1) != 0) goto LAB_00714744;
LAB_007146c0:
    if (1 < bVar1) {
      FUN_00532960(pbVar9 + 1,bVar1 >> 1);
      pbVar9 = *(byte **)(param_1 + 0x20);
      bVar1 = *pbVar9;
      goto joined_r0x0071475c;
    }
LAB_007147a8:
    pbVar9 = *(byte **)(param_1 + 0x28);
    bVar1 = *pbVar9;
    if ((bVar1 & 1) == 0) goto LAB_007147b4;
LAB_007147e4:
    sVar13 = *(size_t *)(pbVar9 + 8);
    if (sVar13 != 0) {
      if ((long)sVar13 < 0x80) goto LAB_007147f4;
      goto LAB_00714878;
    }
LAB_00714838:
    uVar8 = *(uint *)(param_1 + 0x5c);
  }
  else {
    if (*(long *)(pbVar9 + 8) != 0) {
      FUN_00532960(*(undefined8 *)(pbVar9 + 0x10));
      pbVar9 = *(byte **)(param_1 + 0x10);
      bVar1 = *pbVar9;
      if ((bVar1 & 1) != 0) goto LAB_00714504;
LAB_00714530:
      sVar13 = (size_t)(bVar1 >> 1);
LAB_00714534:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar13) goto LAB_007145d4;
      *(undefined1 *)param_2 = 10;
      *(char *)((long)param_2 + 1) = (char)sVar13;
      pbVar11 = *(byte **)(pbVar9 + 0x10);
      if ((*pbVar9 & 1) == 0) {
        pbVar11 = pbVar9 + 1;
      }
      memcpy(param_2 + 1,pbVar11,sVar13);
      param_2 = (undefined2 *)((long)(param_2 + 1) + sVar13);
    }
LAB_00714578:
    uVar8 = *(uint *)(param_1 + 0x58);
    if (uVar8 == 0) goto LAB_00714638;
LAB_00714580:
    if (param_2 < (undefined2 *)*param_3) {
      *(undefined1 *)param_2 = 0x10;
      if (0x7f < uVar8) goto LAB_00714618;
LAB_0071459c:
      *(char *)((long)param_2 + 1) = (char)uVar8;
      param_2 = param_2 + 1;
      pbVar9 = *(byte **)(param_1 + 0x18);
      bVar1 = *pbVar9;
      goto joined_r0x007145ac;
    }
    param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
    uVar8 = *(uint *)(param_1 + 0x58);
    *(undefined1 *)param_2 = 0x10;
    if (uVar8 < 0x80) goto LAB_0071459c;
LAB_00714618:
    *(byte *)((long)param_2 + 1) = (byte)uVar8 | 0x80;
    if (uVar8 >> 0xe == 0) {
      *(char *)(param_2 + 1) = (char)((ulong)(long)(int)uVar8 >> 7);
      param_2 = (undefined2 *)((long)param_2 + 3);
      goto LAB_00714638;
    }
    uVar10 = (ulong)(long)(int)uVar8 >> 7;
    param_2 = (undefined2 *)((long)param_2 + 3);
    do {
      puVar5 = param_2;
      uVar6 = uVar10 >> 7;
      *(byte *)((long)puVar5 + -1) = (byte)uVar10 | 0x80;
      param_2 = (undefined2 *)((long)puVar5 + 1);
      uVar12 = uVar10 >> 0xe;
      uVar10 = uVar6;
    } while (uVar12 != 0);
    *(char *)puVar5 = (char)uVar6;
    pbVar9 = *(byte **)(param_1 + 0x18);
    bVar1 = *pbVar9;
    if ((bVar1 & 1) == 0) goto LAB_00714644;
LAB_007145b0:
    if (*(long *)(pbVar9 + 8) == 0) goto LAB_007146b4;
    FUN_00532960(*(undefined8 *)(pbVar9 + 0x10));
    pbVar9 = *(byte **)(param_1 + 0x18);
    bVar1 = *pbVar9;
joined_r0x007145c8:
    if ((bVar1 & 1) == 0) {
      sVar13 = (size_t)(bVar1 >> 1);
LAB_00714670:
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
        *(undefined1 *)param_2 = 0x1a;
        *(char *)((long)param_2 + 1) = (char)sVar13;
        pbVar11 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar11 = pbVar9 + 1;
        }
        memcpy(param_2 + 1,pbVar11,sVar13);
        param_2 = (undefined2 *)((long)(param_2 + 1) + sVar13);
        goto LAB_007146b4;
      }
    }
    else {
      sVar13 = *(size_t *)(pbVar9 + 8);
      if ((long)sVar13 < 0x80) goto LAB_00714670;
    }
    param_2 = (undefined2 *)FUN_0052c95c(param_3,3,pbVar9,param_2);
    pbVar9 = *(byte **)(param_1 + 0x20);
    bVar1 = *pbVar9;
    if ((bVar1 & 1) == 0) goto LAB_007146c0;
LAB_00714744:
    if (*(long *)(pbVar9 + 8) == 0) goto LAB_007147a8;
    FUN_00532960(*(undefined8 *)(pbVar9 + 0x10));
    pbVar9 = *(byte **)(param_1 + 0x20);
    bVar1 = *pbVar9;
joined_r0x0071475c:
    if ((bVar1 & 1) == 0) {
      sVar13 = (size_t)(bVar1 >> 1);
LAB_00714764:
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
        *(undefined1 *)param_2 = 0x22;
        *(char *)((long)param_2 + 1) = (char)sVar13;
        pbVar11 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar11 = pbVar9 + 1;
        }
        memcpy(param_2 + 1,pbVar11,sVar13);
        param_2 = (undefined2 *)((long)(param_2 + 1) + sVar13);
        goto LAB_007147a8;
      }
    }
    else {
      sVar13 = *(size_t *)(pbVar9 + 8);
      if ((long)sVar13 < 0x80) goto LAB_00714764;
    }
    param_2 = (undefined2 *)FUN_0052c95c(param_3,4,pbVar9,param_2);
    pbVar9 = *(byte **)(param_1 + 0x28);
    bVar1 = *pbVar9;
    if ((bVar1 & 1) != 0) goto LAB_007147e4;
LAB_007147b4:
    if (bVar1 < 2) goto LAB_00714838;
    sVar13 = (size_t)(bVar1 >> 1);
LAB_007147f4:
    if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
      *(undefined1 *)param_2 = 0x2a;
      *(char *)((long)param_2 + 1) = (char)sVar13;
      pbVar11 = *(byte **)(pbVar9 + 0x10);
      if ((*pbVar9 & 1) == 0) {
        pbVar11 = pbVar9 + 1;
      }
      memcpy(param_2 + 1,pbVar11,sVar13);
      param_2 = (undefined2 *)((long)(param_2 + 1) + sVar13);
      goto LAB_00714838;
    }
LAB_00714878:
    param_2 = (undefined2 *)FUN_0052c95c(param_3,5,pbVar9,param_2);
    uVar8 = *(uint *)(param_1 + 0x5c);
  }
  if (uVar8 != 0) {
    if (param_2 < (undefined2 *)*param_3) {
      *(undefined1 *)param_2 = 0x30;
    }
    else {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
      uVar8 = *(uint *)(param_1 + 0x5c);
      *(undefined1 *)param_2 = 0x30;
    }
    if (uVar8 < 0x80) {
      *(char *)((long)param_2 + 1) = (char)uVar8;
      param_2 = (undefined2 *)((long)param_2 + 2);
    }
    else {
      *(byte *)((long)param_2 + 1) = (char)uVar8 | 0x80;
      if (uVar8 >> 0xe == 0) {
        *(char *)((long)param_2 + 2) = (char)((ulong)(long)(int)uVar8 >> 7);
        param_2 = (undefined2 *)((long)param_2 + 3);
      }
      else {
        uVar10 = (ulong)(long)(int)uVar8 >> 7;
        param_2 = (undefined2 *)((long)param_2 + 3);
        do {
          puVar5 = param_2;
          uVar6 = uVar10 >> 7;
          *(byte *)((long)puVar5 + -1) = (byte)uVar10 | 0x80;
          param_2 = (undefined2 *)((long)puVar5 + 1);
          uVar12 = uVar10 >> 0xe;
          uVar10 = uVar6;
        } while (uVar12 != 0);
        *(char *)puVar5 = (char)uVar6;
      }
    }
  }
  if (param_1 != PTR_DAT_047cfc08) {
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 != 0) {
      if ((undefined2 *)*param_3 <= param_2) {
        param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
        lVar4 = *(long *)(param_1 + 0x30);
      }
      *(undefined1 *)param_2 = 0x3a;
      uVar8 = *(uint *)(lVar4 + 0x1c);
      if (uVar8 < 0x80) {
        *(byte *)((long)param_2 + 1) = (byte)uVar8;
        param_2 = param_2 + 1;
      }
      else {
        *(byte *)((long)param_2 + 1) = (byte)uVar8 | 0x80;
        if (uVar8 >> 0xe == 0) {
          *(char *)(param_2 + 1) = (char)(uVar8 >> 7);
          param_2 = (undefined2 *)((long)param_2 + 3);
        }
        else {
          param_2 = (undefined2 *)((long)param_2 + 3);
          uVar8 = uVar8 >> 7;
          do {
            puVar5 = param_2;
            uVar2 = uVar8 >> 7;
            *(byte *)((long)puVar5 + -1) = (byte)uVar8 | 0x80;
            param_2 = (undefined2 *)((long)puVar5 + 1);
            uVar3 = uVar8 >> 0xe;
            uVar8 = uVar2;
          } while (uVar3 != 0);
          *(char *)puVar5 = (char)uVar2;
        }
      }
      param_2 = (undefined2 *)FUN_00513f18(lVar4,param_2,param_3);
    }
    lVar4 = *(long *)(param_1 + 0x38);
    if (lVar4 != 0) {
      if ((undefined2 *)*param_3 <= param_2) {
        param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
        lVar4 = *(long *)(param_1 + 0x38);
      }
      *(undefined1 *)param_2 = 0x42;
      uVar8 = *(uint *)(lVar4 + 0x1c);
      if (uVar8 < 0x80) {
        *(byte *)((long)param_2 + 1) = (byte)uVar8;
        param_2 = param_2 + 1;
      }
      else {
        *(byte *)((long)param_2 + 1) = (byte)uVar8 | 0x80;
        if (uVar8 >> 0xe == 0) {
          *(char *)(param_2 + 1) = (char)(uVar8 >> 7);
          param_2 = (undefined2 *)((long)param_2 + 3);
        }
        else {
          param_2 = (undefined2 *)((long)param_2 + 3);
          uVar8 = uVar8 >> 7;
          do {
            puVar5 = param_2;
            uVar2 = uVar8 >> 7;
            *(byte *)((long)puVar5 + -1) = (byte)uVar8 | 0x80;
            param_2 = (undefined2 *)((long)puVar5 + 1);
            uVar3 = uVar8 >> 0xe;
            uVar8 = uVar2;
          } while (uVar3 != 0);
          *(char *)puVar5 = (char)uVar2;
        }
      }
      param_2 = (undefined2 *)FUN_00513f18(lVar4,param_2,param_3);
    }
    lVar4 = *(long *)(param_1 + 0x40);
    if (lVar4 != 0) {
      if ((undefined2 *)*param_3 <= param_2) {
        param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
        lVar4 = *(long *)(param_1 + 0x40);
      }
      *(undefined1 *)param_2 = 0x4a;
      uVar8 = *(uint *)(lVar4 + 0x1c);
      if (uVar8 < 0x80) {
        *(byte *)((long)param_2 + 1) = (byte)uVar8;
        param_2 = param_2 + 1;
      }
      else {
        *(byte *)((long)param_2 + 1) = (byte)uVar8 | 0x80;
        if (uVar8 >> 0xe == 0) {
          *(char *)(param_2 + 1) = (char)(uVar8 >> 7);
          param_2 = (undefined2 *)((long)param_2 + 3);
        }
        else {
          param_2 = (undefined2 *)((long)param_2 + 3);
          uVar8 = uVar8 >> 7;
          do {
            puVar5 = param_2;
            uVar2 = uVar8 >> 7;
            *(byte *)((long)puVar5 + -1) = (byte)uVar8 | 0x80;
            param_2 = (undefined2 *)((long)puVar5 + 1);
            uVar3 = uVar8 >> 0xe;
            uVar8 = uVar2;
          } while (uVar3 != 0);
          *(char *)puVar5 = (char)uVar2;
        }
      }
      param_2 = (undefined2 *)FUN_00513f18(lVar4,param_2,param_3);
    }
    lVar4 = *(long *)(param_1 + 0x48);
    if (lVar4 != 0) {
      if ((undefined2 *)*param_3 <= param_2) {
        param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
        lVar4 = *(long *)(param_1 + 0x48);
      }
      *(undefined1 *)param_2 = 0x52;
      uVar8 = *(uint *)(lVar4 + 0x1c);
      if (uVar8 < 0x80) {
        *(byte *)((long)param_2 + 1) = (byte)uVar8;
        param_2 = param_2 + 1;
      }
      else {
        *(byte *)((long)param_2 + 1) = (byte)uVar8 | 0x80;
        if (uVar8 >> 0xe == 0) {
          *(char *)(param_2 + 1) = (char)(uVar8 >> 7);
          param_2 = (undefined2 *)((long)param_2 + 3);
        }
        else {
          param_2 = (undefined2 *)((long)param_2 + 3);
          uVar8 = uVar8 >> 7;
          do {
            puVar5 = param_2;
            uVar2 = uVar8 >> 7;
            *(byte *)((long)puVar5 + -1) = (byte)uVar8 | 0x80;
            param_2 = (undefined2 *)((long)puVar5 + 1);
            uVar3 = uVar8 >> 0xe;
            uVar8 = uVar2;
          } while (uVar3 != 0);
          *(char *)puVar5 = (char)uVar2;
        }
      }
      param_2 = (undefined2 *)FUN_00513f18(lVar4,param_2,param_3);
    }
    lVar4 = *(long *)(param_1 + 0x50);
    if (lVar4 != 0) {
      if ((undefined2 *)*param_3 <= param_2) {
        param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
        lVar4 = *(long *)(param_1 + 0x50);
      }
      *(undefined1 *)param_2 = 0x5a;
      uVar8 = *(uint *)(lVar4 + 0x1c);
      if (uVar8 < 0x80) {
        *(byte *)((long)param_2 + 1) = (byte)uVar8;
        param_2 = param_2 + 1;
      }
      else {
        *(byte *)((long)param_2 + 1) = (byte)uVar8 | 0x80;
        if (uVar8 >> 0xe == 0) {
          *(char *)(param_2 + 1) = (char)(uVar8 >> 7);
          param_2 = (undefined2 *)((long)param_2 + 3);
        }
        else {
          param_2 = (undefined2 *)((long)param_2 + 3);
          uVar8 = uVar8 >> 7;
          do {
            puVar5 = param_2;
            uVar2 = uVar8 >> 7;
            *(byte *)((long)puVar5 + -1) = (byte)uVar8 | 0x80;
            param_2 = (undefined2 *)((long)puVar5 + 1);
            uVar3 = uVar8 >> 0xe;
            uVar8 = uVar2;
          } while (uVar3 != 0);
          *(char *)puVar5 = (char)uVar2;
        }
      }
      param_2 = (undefined2 *)FUN_00513f18(lVar4,param_2,param_3);
    }
  }
  if (param_1[0x60] != '\0') {
    if (param_2 < (undefined2 *)*param_3) {
      uVar7 = 1;
    }
    else {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
      uVar7 = param_1[0x60];
    }
    *(undefined1 *)param_2 = 0x60;
    *(undefined1 *)((long)param_2 + 1) = uVar7;
    param_2 = param_2 + 1;
  }
  uVar8 = *(uint *)(param_1 + 100);
  if (uVar8 != 0) {
    if (param_2 < (undefined2 *)*param_3) {
      *(undefined1 *)param_2 = 0x68;
    }
    else {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
      uVar8 = *(uint *)(param_1 + 100);
      *(undefined1 *)param_2 = 0x68;
    }
    if (uVar8 < 0x80) {
      *(byte *)((long)param_2 + 1) = (byte)uVar8;
      param_2 = param_2 + 1;
      uVar8 = *(uint *)(param_1 + 0x68);
      goto joined_r0x00714cf8;
    }
    *(byte *)((long)param_2 + 1) = (byte)uVar8 | 0x80;
    if (uVar8 >> 0xe != 0) {
      uVar10 = (ulong)(long)(int)uVar8 >> 7;
      param_2 = (undefined2 *)((long)param_2 + 3);
      do {
        puVar5 = param_2;
        uVar6 = uVar10 >> 7;
        *(byte *)((long)puVar5 + -1) = (byte)uVar10 | 0x80;
        param_2 = (undefined2 *)((long)puVar5 + 1);
        uVar12 = uVar10 >> 0xe;
        uVar10 = uVar6;
      } while (uVar12 != 0);
      *(char *)puVar5 = (char)uVar6;
      uVar8 = *(uint *)(param_1 + 0x68);
      goto joined_r0x00714cf8;
    }
    *(char *)(param_2 + 1) = (char)((ulong)(long)(int)uVar8 >> 7);
    param_2 = (undefined2 *)((long)param_2 + 3);
  }
  uVar8 = *(uint *)(param_1 + 0x68);
joined_r0x00714cf8:
  if (uVar8 == 0) {
    uVar8 = *(uint *)(param_1 + 0x6c);
  }
  else {
    if (param_2 < (undefined2 *)*param_3) {
      *(undefined1 *)param_2 = 0x70;
    }
    else {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
      uVar8 = *(uint *)(param_1 + 0x68);
      *(undefined1 *)param_2 = 0x70;
    }
    if (uVar8 < 0x80) {
      *(byte *)((long)param_2 + 1) = (byte)uVar8;
      param_2 = param_2 + 1;
      uVar8 = *(uint *)(param_1 + 0x6c);
    }
    else {
      *(byte *)((long)param_2 + 1) = (byte)uVar8 | 0x80;
      if (uVar8 >> 0xe == 0) {
        *(char *)(param_2 + 1) = (char)((ulong)(long)(int)uVar8 >> 7);
        param_2 = (undefined2 *)((long)param_2 + 3);
        uVar8 = *(uint *)(param_1 + 0x6c);
      }
      else {
        uVar10 = (ulong)(long)(int)uVar8 >> 7;
        param_2 = (undefined2 *)((long)param_2 + 3);
        do {
          puVar5 = param_2;
          uVar6 = uVar10 >> 7;
          *(byte *)((long)puVar5 + -1) = (byte)uVar10 | 0x80;
          param_2 = (undefined2 *)((long)puVar5 + 1);
          uVar12 = uVar10 >> 0xe;
          uVar10 = uVar6;
        } while (uVar12 != 0);
        *(char *)puVar5 = (char)uVar6;
        uVar8 = *(uint *)(param_1 + 0x6c);
      }
    }
  }
  if (uVar8 == 0) {
    uVar8 = *(uint *)(param_1 + 0x70);
  }
  else {
    if (param_2 < (undefined2 *)*param_3) {
      *(undefined1 *)param_2 = 0x78;
    }
    else {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
      uVar8 = *(uint *)(param_1 + 0x6c);
      *(undefined1 *)param_2 = 0x78;
    }
    if (uVar8 < 0x80) {
      *(byte *)((long)param_2 + 1) = (byte)uVar8;
      param_2 = param_2 + 1;
      uVar8 = *(uint *)(param_1 + 0x70);
    }
    else {
      *(byte *)((long)param_2 + 1) = (byte)uVar8 | 0x80;
      if (uVar8 >> 0xe == 0) {
        *(char *)(param_2 + 1) = (char)((ulong)(long)(int)uVar8 >> 7);
        param_2 = (undefined2 *)((long)param_2 + 3);
        uVar8 = *(uint *)(param_1 + 0x70);
      }
      else {
        uVar10 = (ulong)(long)(int)uVar8 >> 7;
        param_2 = (undefined2 *)((long)param_2 + 3);
        do {
          puVar5 = param_2;
          uVar6 = uVar10 >> 7;
          *(byte *)((long)puVar5 + -1) = (byte)uVar10 | 0x80;
          param_2 = (undefined2 *)((long)puVar5 + 1);
          uVar12 = uVar10 >> 0xe;
          uVar10 = uVar6;
        } while (uVar12 != 0);
        *(char *)puVar5 = (char)uVar6;
        uVar8 = *(uint *)(param_1 + 0x70);
      }
    }
  }
  if (uVar8 == 0) {
    uVar8 = *(uint *)(param_1 + 0x74);
  }
  else {
    if (param_2 < (undefined2 *)*param_3) {
      *param_2 = 0x180;
    }
    else {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
      uVar8 = *(uint *)(param_1 + 0x70);
      *param_2 = 0x180;
    }
    if (uVar8 < 0x80) {
      *(byte *)(param_2 + 1) = (byte)uVar8;
      param_2 = (undefined2 *)((long)param_2 + 3);
      uVar8 = *(uint *)(param_1 + 0x74);
    }
    else {
      *(byte *)(param_2 + 1) = (byte)uVar8 | 0x80;
      if (uVar8 >> 0xe == 0) {
        *(char *)((long)param_2 + 3) = (char)((ulong)(long)(int)uVar8 >> 7);
        param_2 = param_2 + 2;
        uVar8 = *(uint *)(param_1 + 0x74);
      }
      else {
        uVar10 = (ulong)(long)(int)uVar8 >> 7;
        param_2 = param_2 + 2;
        do {
          puVar5 = param_2;
          uVar6 = uVar10 >> 7;
          *(byte *)((long)puVar5 + -1) = (byte)uVar10 | 0x80;
          param_2 = (undefined2 *)((long)puVar5 + 1);
          uVar12 = uVar10 >> 0xe;
          uVar10 = uVar6;
        } while (uVar12 != 0);
        *(char *)puVar5 = (char)uVar6;
        uVar8 = *(uint *)(param_1 + 0x74);
      }
    }
  }
  if (uVar8 == 0) {
    uVar8 = *(uint *)(param_1 + 0x78);
  }
  else {
    if (param_2 < (undefined2 *)*param_3) {
      *param_2 = 0x188;
    }
    else {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
      uVar8 = *(uint *)(param_1 + 0x74);
      *param_2 = 0x188;
    }
    if (uVar8 < 0x80) {
      *(byte *)(param_2 + 1) = (byte)uVar8;
      param_2 = (undefined2 *)((long)param_2 + 3);
      uVar8 = *(uint *)(param_1 + 0x78);
    }
    else {
      *(byte *)(param_2 + 1) = (byte)uVar8 | 0x80;
      if (uVar8 >> 0xe == 0) {
        *(char *)((long)param_2 + 3) = (char)((ulong)(long)(int)uVar8 >> 7);
        param_2 = param_2 + 2;
        uVar8 = *(uint *)(param_1 + 0x78);
      }
      else {
        uVar10 = (ulong)(long)(int)uVar8 >> 7;
        param_2 = param_2 + 2;
        do {
          puVar5 = param_2;
          uVar6 = uVar10 >> 7;
          *(byte *)((long)puVar5 + -1) = (byte)uVar10 | 0x80;
          param_2 = (undefined2 *)((long)puVar5 + 1);
          uVar12 = uVar10 >> 0xe;
          uVar10 = uVar6;
        } while (uVar12 != 0);
        *(char *)puVar5 = (char)uVar6;
        uVar8 = *(uint *)(param_1 + 0x78);
      }
    }
  }
  if (uVar8 == 0) {
    uVar8 = *(uint *)(param_1 + 0x7c);
  }
  else {
    if (param_2 < (undefined2 *)*param_3) {
      *param_2 = 400;
    }
    else {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
      uVar8 = *(uint *)(param_1 + 0x78);
      *param_2 = 400;
    }
    if (uVar8 < 0x80) {
      *(byte *)(param_2 + 1) = (byte)uVar8;
      param_2 = (undefined2 *)((long)param_2 + 3);
      uVar8 = *(uint *)(param_1 + 0x7c);
    }
    else {
      *(byte *)(param_2 + 1) = (byte)uVar8 | 0x80;
      if (uVar8 >> 0xe == 0) {
        *(char *)((long)param_2 + 3) = (char)((ulong)(long)(int)uVar8 >> 7);
        param_2 = param_2 + 2;
        uVar8 = *(uint *)(param_1 + 0x7c);
      }
      else {
        uVar10 = (ulong)(long)(int)uVar8 >> 7;
        param_2 = param_2 + 2;
        do {
          puVar5 = param_2;
          uVar6 = uVar10 >> 7;
          *(byte *)((long)puVar5 + -1) = (byte)uVar10 | 0x80;
          param_2 = (undefined2 *)((long)puVar5 + 1);
          uVar12 = uVar10 >> 0xe;
          uVar10 = uVar6;
        } while (uVar12 != 0);
        *(char *)puVar5 = (char)uVar6;
        uVar8 = *(uint *)(param_1 + 0x7c);
      }
    }
  }
  if (uVar8 == 0) {
    uVar8 = *(uint *)(param_1 + 0x80);
  }
  else {
    if (param_2 < (undefined2 *)*param_3) {
      *param_2 = 0x198;
    }
    else {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
      uVar8 = *(uint *)(param_1 + 0x7c);
      *param_2 = 0x198;
    }
    if (uVar8 < 0x80) {
      *(byte *)(param_2 + 1) = (byte)uVar8;
      param_2 = (undefined2 *)((long)param_2 + 3);
      uVar8 = *(uint *)(param_1 + 0x80);
    }
    else {
      *(byte *)(param_2 + 1) = (byte)uVar8 | 0x80;
      if (uVar8 >> 0xe == 0) {
        *(char *)((long)param_2 + 3) = (char)((ulong)(long)(int)uVar8 >> 7);
        param_2 = param_2 + 2;
        uVar8 = *(uint *)(param_1 + 0x80);
      }
      else {
        uVar10 = (ulong)(long)(int)uVar8 >> 7;
        param_2 = param_2 + 2;
        do {
          puVar5 = param_2;
          uVar6 = uVar10 >> 7;
          *(byte *)((long)puVar5 + -1) = (byte)uVar10 | 0x80;
          param_2 = (undefined2 *)((long)puVar5 + 1);
          uVar12 = uVar10 >> 0xe;
          uVar10 = uVar6;
        } while (uVar12 != 0);
        *(char *)puVar5 = (char)uVar6;
        uVar8 = *(uint *)(param_1 + 0x80);
      }
    }
  }
  if (uVar8 == 0) {
    uVar8 = *(uint *)(param_1 + 0x84);
  }
  else {
    if (param_2 < (undefined2 *)*param_3) {
      *param_2 = 0x1a0;
    }
    else {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
      uVar8 = *(uint *)(param_1 + 0x80);
      *param_2 = 0x1a0;
    }
    if (uVar8 < 0x80) {
      *(byte *)(param_2 + 1) = (byte)uVar8;
      param_2 = (undefined2 *)((long)param_2 + 3);
      uVar8 = *(uint *)(param_1 + 0x84);
    }
    else {
      *(byte *)(param_2 + 1) = (byte)uVar8 | 0x80;
      if (uVar8 >> 0xe == 0) {
        *(char *)((long)param_2 + 3) = (char)((ulong)(long)(int)uVar8 >> 7);
        param_2 = param_2 + 2;
        uVar8 = *(uint *)(param_1 + 0x84);
      }
      else {
        uVar10 = (ulong)(long)(int)uVar8 >> 7;
        param_2 = param_2 + 2;
        do {
          puVar5 = param_2;
          uVar6 = uVar10 >> 7;
          *(byte *)((long)puVar5 + -1) = (byte)uVar10 | 0x80;
          param_2 = (undefined2 *)((long)puVar5 + 1);
          uVar12 = uVar10 >> 0xe;
          uVar10 = uVar6;
        } while (uVar12 != 0);
        *(char *)puVar5 = (char)uVar6;
        uVar8 = *(uint *)(param_1 + 0x84);
      }
    }
  }
  if (uVar8 == 0) {
    uVar8 = *(uint *)(param_1 + 0x88);
  }
  else {
    if (param_2 < (undefined2 *)*param_3) {
      *param_2 = 0x1a8;
    }
    else {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
      uVar8 = *(uint *)(param_1 + 0x84);
      *param_2 = 0x1a8;
    }
    if (uVar8 < 0x80) {
      *(byte *)(param_2 + 1) = (byte)uVar8;
      param_2 = (undefined2 *)((long)param_2 + 3);
      uVar8 = *(uint *)(param_1 + 0x88);
    }
    else {
      *(byte *)(param_2 + 1) = (byte)uVar8 | 0x80;
      if (uVar8 >> 0xe == 0) {
        *(char *)((long)param_2 + 3) = (char)((ulong)(long)(int)uVar8 >> 7);
        param_2 = param_2 + 2;
        uVar8 = *(uint *)(param_1 + 0x88);
      }
      else {
        uVar10 = (ulong)(long)(int)uVar8 >> 7;
        param_2 = param_2 + 2;
        do {
          puVar5 = param_2;
          uVar6 = uVar10 >> 7;
          *(byte *)((long)puVar5 + -1) = (byte)uVar10 | 0x80;
          param_2 = (undefined2 *)((long)puVar5 + 1);
          uVar12 = uVar10 >> 0xe;
          uVar10 = uVar6;
        } while (uVar12 != 0);
        *(char *)puVar5 = (char)uVar6;
        uVar8 = *(uint *)(param_1 + 0x88);
      }
    }
  }
  if (uVar8 == 0) {
    uVar8 = *(uint *)(param_1 + 0x8c);
  }
  else {
    if (param_2 < (undefined2 *)*param_3) {
      *param_2 = 0x1b0;
    }
    else {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
      uVar8 = *(uint *)(param_1 + 0x88);
      *param_2 = 0x1b0;
    }
    if (uVar8 < 0x80) {
      *(byte *)(param_2 + 1) = (byte)uVar8;
      param_2 = (undefined2 *)((long)param_2 + 3);
      uVar8 = *(uint *)(param_1 + 0x8c);
    }
    else {
      *(byte *)(param_2 + 1) = (byte)uVar8 | 0x80;
      if (uVar8 >> 0xe == 0) {
        *(char *)((long)param_2 + 3) = (char)((ulong)(long)(int)uVar8 >> 7);
        param_2 = param_2 + 2;
        uVar8 = *(uint *)(param_1 + 0x8c);
      }
      else {
        uVar10 = (ulong)(long)(int)uVar8 >> 7;
        param_2 = param_2 + 2;
        do {
          puVar5 = param_2;
          uVar6 = uVar10 >> 7;
          *(byte *)((long)puVar5 + -1) = (byte)uVar10 | 0x80;
          param_2 = (undefined2 *)((long)puVar5 + 1);
          uVar12 = uVar10 >> 0xe;
          uVar10 = uVar6;
        } while (uVar12 != 0);
        *(char *)puVar5 = (char)uVar6;
        uVar8 = *(uint *)(param_1 + 0x8c);
      }
    }
  }
  if (uVar8 == 0) {
    uVar8 = *(uint *)(param_1 + 0x90);
  }
  else {
    if (param_2 < (undefined2 *)*param_3) {
      *param_2 = 0x1b8;
    }
    else {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
      uVar8 = *(uint *)(param_1 + 0x8c);
      *param_2 = 0x1b8;
    }
    if (uVar8 < 0x80) {
      *(byte *)(param_2 + 1) = (byte)uVar8;
      param_2 = (undefined2 *)((long)param_2 + 3);
      uVar8 = *(uint *)(param_1 + 0x90);
    }
    else {
      *(byte *)(param_2 + 1) = (byte)uVar8 | 0x80;
      if (uVar8 >> 0xe == 0) {
        *(char *)((long)param_2 + 3) = (char)((ulong)(long)(int)uVar8 >> 7);
        param_2 = param_2 + 2;
        uVar8 = *(uint *)(param_1 + 0x90);
      }
      else {
        uVar10 = (ulong)(long)(int)uVar8 >> 7;
        param_2 = param_2 + 2;
        do {
          puVar5 = param_2;
          uVar6 = uVar10 >> 7;
          *(byte *)((long)puVar5 + -1) = (byte)uVar10 | 0x80;
          param_2 = (undefined2 *)((long)puVar5 + 1);
          uVar12 = uVar10 >> 0xe;
          uVar10 = uVar6;
        } while (uVar12 != 0);
        *(char *)puVar5 = (char)uVar6;
        uVar8 = *(uint *)(param_1 + 0x90);
      }
    }
  }
  if (uVar8 == 0) {
    uVar8 = *(uint *)(param_1 + 0x94);
  }
  else {
    if (param_2 < (undefined2 *)*param_3) {
      *param_2 = 0x1c0;
    }
    else {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
      uVar8 = *(uint *)(param_1 + 0x90);
      *param_2 = 0x1c0;
    }
    if (uVar8 < 0x80) {
      *(byte *)(param_2 + 1) = (byte)uVar8;
      param_2 = (undefined2 *)((long)param_2 + 3);
      uVar8 = *(uint *)(param_1 + 0x94);
    }
    else {
      *(byte *)(param_2 + 1) = (byte)uVar8 | 0x80;
      if (uVar8 >> 0xe == 0) {
        *(char *)((long)param_2 + 3) = (char)((ulong)(long)(int)uVar8 >> 7);
        param_2 = param_2 + 2;
        uVar8 = *(uint *)(param_1 + 0x94);
      }
      else {
        uVar10 = (ulong)(long)(int)uVar8 >> 7;
        param_2 = param_2 + 2;
        do {
          puVar5 = param_2;
          uVar6 = uVar10 >> 7;
          *(byte *)((long)puVar5 + -1) = (byte)uVar10 | 0x80;
          param_2 = (undefined2 *)((long)puVar5 + 1);
          uVar12 = uVar10 >> 0xe;
          uVar10 = uVar6;
        } while (uVar12 != 0);
        *(char *)puVar5 = (char)uVar6;
        uVar8 = *(uint *)(param_1 + 0x94);
      }
    }
  }
  if (uVar8 == 0) {
    uVar8 = *(uint *)(param_1 + 0x98);
  }
  else {
    if (param_2 < (undefined2 *)*param_3) {
      *param_2 = 0x1c8;
    }
    else {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
      uVar8 = *(uint *)(param_1 + 0x94);
      *param_2 = 0x1c8;
    }
    if (uVar8 < 0x80) {
      *(byte *)(param_2 + 1) = (byte)uVar8;
      param_2 = (undefined2 *)((long)param_2 + 3);
      uVar8 = *(uint *)(param_1 + 0x98);
    }
    else {
      *(byte *)(param_2 + 1) = (byte)uVar8 | 0x80;
      if (uVar8 >> 0xe == 0) {
        *(char *)((long)param_2 + 3) = (char)((ulong)(long)(int)uVar8 >> 7);
        param_2 = param_2 + 2;
        uVar8 = *(uint *)(param_1 + 0x98);
      }
      else {
        uVar10 = (ulong)(long)(int)uVar8 >> 7;
        param_2 = param_2 + 2;
        do {
          puVar5 = param_2;
          uVar6 = uVar10 >> 7;
          *(byte *)((long)puVar5 + -1) = (byte)uVar10 | 0x80;
          param_2 = (undefined2 *)((long)puVar5 + 1);
          uVar12 = uVar10 >> 0xe;
          uVar10 = uVar6;
        } while (uVar12 != 0);
        *(char *)puVar5 = (char)uVar6;
        uVar8 = *(uint *)(param_1 + 0x98);
      }
    }
  }
  if (uVar8 != 0) {
    if (param_2 < (undefined2 *)*param_3) {
      *param_2 = 0x1d0;
    }
    else {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
      uVar8 = *(uint *)(param_1 + 0x98);
      *param_2 = 0x1d0;
    }
    if (uVar8 < 0x80) {
      *(byte *)(param_2 + 1) = (byte)uVar8;
      param_2 = (undefined2 *)((long)param_2 + 3);
    }
    else {
      *(byte *)(param_2 + 1) = (byte)uVar8 | 0x80;
      if (uVar8 >> 0xe == 0) {
        *(char *)((long)param_2 + 3) = (char)((ulong)(long)(int)uVar8 >> 7);
        param_2 = param_2 + 2;
      }
      else {
        uVar10 = (ulong)(long)(int)uVar8 >> 7;
        param_2 = param_2 + 2;
        do {
          puVar5 = param_2;
          uVar6 = uVar10 >> 7;
          *(byte *)((long)puVar5 + -1) = (byte)uVar10 | 0x80;
          param_2 = (undefined2 *)((long)puVar5 + 1);
          uVar12 = uVar10 >> 0xe;
          uVar10 = uVar6;
        } while (uVar12 != 0);
        *(char *)puVar5 = (char)uVar6;
      }
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar10 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar10 + 8) & 1) == 0) {
      __src = (void *)(uVar10 + 9);
      uVar6 = (ulong)(*(byte *)(uVar10 + 8) >> 1);
    }
    else {
      uVar6 = *(ulong *)(uVar10 + 0x10);
      __src = *(void **)(uVar10 + 0x18);
    }
    sVar13 = (size_t)(int)uVar6;
    if (*param_3 - (long)param_2 < (long)sVar13) {
      puVar5 = (undefined2 *)FUN_0052c7dc(param_3,__src,uVar6,param_2);
      return puVar5;
    }
    memcpy(param_2,__src,sVar13);
    param_2 = (undefined2 *)((long)param_2 + sVar13);
  }
  return param_2;
}


