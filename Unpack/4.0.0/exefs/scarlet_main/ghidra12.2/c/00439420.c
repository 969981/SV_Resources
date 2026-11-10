/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00439420; name: FUN_00439420
 */


/* WARNING: Removing unreachable block (ram,0x00439564) */

undefined8 FUN_00439420(uint *param_1,char *param_2,undefined4 *param_3,void *param_4,uint param_5)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  char cVar9;
  uint uVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  size_t __n;
  
  *param_3 = 0;
  if ((int)param_5 < 1) {
    return 0;
  }
  uVar10 = param_1[1];
  if (0x50 < (int)uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_003f6d60("assertion failed: ctx->length <= (int)sizeof(ctx->enc_data)",
                 "external/openssl/crypto/evp/encode.c",0xab);
  }
  lVar6 = (long)(int)*param_1;
  __n = (int)uVar10 - lVar6;
  if ((int)param_5 < (int)__n) {
    memcpy((void *)((long)param_1 + lVar6 + 8),param_4,(ulong)param_5);
    *param_1 = *param_1 + param_5;
    return 1;
  }
  if (*param_1 == 0) {
    uVar7 = 0;
  }
  else {
    memcpy((void *)((long)param_1 + lVar6 + 8),param_4,__n);
    uVar10 = param_1[1];
    pcVar8 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    if ((param_1[0x17] & 2) != 0) {
      pcVar8 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz./";
    }
    if ((int)uVar10 < 1) {
      uVar7 = 0;
      pcVar8 = param_2;
    }
    else {
      uVar7 = 0;
      pbVar11 = (byte *)((long)param_1 + 9);
      do {
        uVar12 = (ulong)pbVar11[-1] << 0x10;
        if ((int)uVar10 < 3) {
          if (uVar10 == 2) {
            uVar12 = uVar12 | (ulong)*pbVar11 << 8;
          }
          cVar4 = pcVar8[uVar12 >> 0xc & 0x3f];
          pcVar1 = param_2 + uVar7;
          *pcVar1 = pcVar8[uVar12 >> 0x12];
          cVar9 = '=';
          pcVar1[1] = cVar4;
          if (uVar10 != 1) {
            cVar9 = pcVar8[uVar12 >> 6 & 0x3f];
          }
          pcVar1[2] = cVar9;
          uVar7 = (ulong)((int)uVar7 + 4);
          pcVar1[3] = '=';
          pcVar8 = pcVar1 + 4;
          goto LAB_004395c4;
        }
        bVar3 = pbVar11[1];
        bVar2 = *pbVar11;
        pcVar1 = param_2 + uVar7;
        cVar4 = pcVar8[(ulong)bVar3 & 0x3f];
        *pcVar1 = pcVar8[pbVar11[-1] >> 2];
        pcVar1[1] = pcVar8[(ulong)(((uint)bVar2 << 8 | (uint)uVar12) >> 0xc) & 0x3f];
        cVar9 = pcVar8[(ulong)(ushort)(CONCAT11(bVar2,bVar3) >> 6) & 0x3f];
        uVar10 = uVar10 - 3;
        uVar7 = uVar7 + 4;
        pcVar1[3] = cVar4;
        pcVar1[2] = cVar9;
        pbVar11 = pbVar11 + 3;
      } while (uVar10 != 0);
      pcVar8 = param_2 + uVar7;
    }
LAB_004395c4:
    *pcVar8 = '\0';
    param_4 = (void *)((long)param_4 + __n);
    param_5 = param_5 - (int)__n;
    uVar7 = (ulong)(int)uVar7;
    pcVar8 = param_2 + uVar7;
    *param_1 = 0;
    param_2 = pcVar8;
    if ((param_1[0x17] & 1) == 0) {
      uVar7 = uVar7 + 1;
      param_2 = pcVar8 + 1;
      *pcVar8 = '\n';
    }
    *param_2 = '\0';
    uVar10 = param_1[1];
    if (uVar7 >> 0x1f != 0) goto LAB_00439734;
  }
  if ((int)uVar10 <= (int)param_5) {
    do {
      pcVar8 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
      if ((param_1[0x17] & 2) != 0) {
        pcVar8 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz./";
      }
      if ((int)uVar10 < 1) {
        uVar12 = 0;
        pcVar8 = param_2;
      }
      else {
        uVar12 = 0;
        pbVar11 = (byte *)((long)param_4 + 1);
        do {
          uVar13 = (ulong)pbVar11[-1] << 0x10;
          if ((int)uVar10 < 3) {
            if (uVar10 == 2) {
              uVar13 = uVar13 | (ulong)*pbVar11 << 8;
            }
            cVar4 = pcVar8[uVar13 >> 0xc & 0x3f];
            pcVar1 = param_2 + uVar12;
            *pcVar1 = pcVar8[uVar13 >> 0x12];
            cVar9 = '=';
            pcVar1[1] = cVar4;
            if (uVar10 != 1) {
              cVar9 = pcVar8[uVar13 >> 6 & 0x3f];
            }
            pcVar1[2] = cVar9;
            uVar12 = (ulong)((int)uVar12 + 4);
            pcVar1[3] = '=';
            pcVar8 = pcVar1 + 4;
            goto LAB_004396f0;
          }
          bVar3 = pbVar11[1];
          bVar2 = *pbVar11;
          pcVar1 = param_2 + uVar12;
          cVar4 = pcVar8[(ulong)bVar3 & 0x3f];
          *pcVar1 = pcVar8[pbVar11[-1] >> 2];
          pcVar1[1] = pcVar8[(ulong)(((uint)bVar2 << 8 | (uint)uVar13) >> 0xc) & 0x3f];
          cVar9 = pcVar8[(ulong)(ushort)(CONCAT11(bVar2,bVar3) >> 6) & 0x3f];
          uVar10 = uVar10 - 3;
          uVar12 = uVar12 + 4;
          pcVar1[3] = cVar4;
          pcVar1[2] = cVar9;
          pbVar11 = pbVar11 + 3;
        } while (uVar10 != 0);
        pcVar8 = param_2 + uVar12;
      }
LAB_004396f0:
      *pcVar8 = '\0';
      pcVar8 = param_2 + (int)uVar12;
      uVar7 = uVar7 + (long)(int)uVar12;
      param_4 = (void *)((long)param_4 + (long)(int)param_1[1]);
      param_5 = param_5 - param_1[1];
      param_2 = pcVar8;
      if ((param_1[0x17] & 1) == 0) {
        uVar7 = uVar7 + 1;
        param_2 = pcVar8 + 1;
        *pcVar8 = '\n';
      }
      *param_2 = '\0';
    } while ((uVar7 >> 0x1f == 0) && (uVar10 = param_1[1], (int)uVar10 <= (int)param_5));
  }
LAB_00439734:
  if (uVar7 >> 0x1f == 0) {
    if (param_5 != 0) {
      memcpy(param_1 + 2,param_4,(long)(int)param_5);
    }
    uVar5 = 1;
    *param_1 = param_5;
    *param_3 = (int)uVar7;
  }
  else {
    uVar5 = 0;
    *param_3 = 0;
  }
  return uVar5;
}


