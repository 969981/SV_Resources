/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00175360; name: FUN_00175360
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_00175360(undefined8 param_1,undefined1 *param_2,byte *param_3,ulong *param_4,ulong param_5,
                 long param_6,float *param_7,long *param_8,uint param_9,undefined4 param_10)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char cVar5;
  int iVar6;
  size_t sVar7;
  ulong *puVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  undefined1 *__src;
  size_t sVar16;
  size_t __n;
  long lVar17;
  byte *pbVar18;
  byte *pbVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  float fVar23;
  float fVar24;
  uint local_484;
  float local_480;
  undefined1 auStack_47c [1024];
  float local_7c [3];
  
  if (((long)param_5 < 1) || ((long)param_3 - (long)param_2 < 5)) goto LAB_001753a4;
  lVar10 = 0;
  if (0x11 < param_5) {
    lVar10 = param_5 - 0x12;
  }
  puVar1 = (ulong *)((long)param_4 + lVar10);
  puVar2 = (ulong *)((long)param_4 + param_5);
  puVar22 = (ulong *)(param_2 + 1);
  *param_2 = 0;
  puVar8 = param_4;
  pbVar19 = param_3;
  puVar21 = puVar22;
  if (param_4 < puVar1) {
    uVar14 = 0;
LAB_00175434:
    do {
      uVar11 = *(ulong *)((long)param_4 + 2) ^ *param_4 | *(ulong *)((long)param_4 + 1) ^ *param_4;
      uVar11 = uVar11 + 0xfefefefefefefeff & (uVar11 ^ 0xffffffffffffffff) & 0x8080808080808080;
      if (uVar11 == 0) {
        param_4 = param_4 + 1;
        puVar20 = param_4;
        if (param_4 < puVar1) goto LAB_00175434;
      }
      else {
        uVar11 = uVar11 >> 7;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        puVar20 = (ulong *)((long)param_4 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3));
      }
      if (puVar1 <= puVar20) break;
      param_4 = (ulong *)((long)puVar20 + 1);
      uVar11 = *puVar20;
      do {
        uVar13 = *param_4 ^ uVar11;
        if (uVar13 != 0) {
          uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          param_4 = (ulong *)((long)param_4 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3)
                             );
          goto LAB_001754e0;
        }
        param_4 = param_4 + 1;
      } while (param_4 < puVar1);
      if (param_4 < puVar2) {
        do {
          if ((uint)(byte)*param_4 != ((uint)uVar11 & 0xff)) goto LAB_001754e0;
          param_4 = (ulong *)((long)param_4 + 1);
        } while (puVar2 != param_4);
        param_4 = puVar2;
      }
LAB_001754e0:
      uVar13 = (long)puVar20 - (long)puVar8;
      if ((ulong)((long)pbVar19 - (long)puVar21) < uVar13 + 0x12) goto LAB_001753a4;
      uVar12 = (long)param_4 - (long)puVar20;
      if (((uint)uVar14 & 0xff) == ((uint)uVar11 & 0xff)) {
        uVar11 = uVar14;
        pbVar18 = pbVar19;
        puVar20 = puVar21;
LAB_00175530:
        puVar21 = (ulong *)((long)puVar20 + uVar13);
        do {
          uVar14 = *puVar8;
          puVar15 = puVar20 + 2;
          puVar20[1] = puVar8[1];
          *puVar20 = uVar14;
          puVar8 = puVar8 + 2;
          puVar20 = puVar15;
        } while (puVar15 < puVar21);
        puVar8 = param_4;
        if (uVar13 < 0x1f) {
          if ((0x1e < uVar12) || (0xf < uVar13 && 0xf < uVar12)) {
LAB_00175604:
            uVar14 = uVar12 & 0x7f;
            if ((2 < uVar14) && (uVar13 < 0x1f)) {
              if ((uVar14 < 0x1f) && (uVar14 < 0x10 || uVar13 < 0x10)) {
                cVar5 = (char)uVar13;
                if (uVar13 < 0x10) {
                  if (uVar14 < 0x10) {
                    pbVar18[-1] = 0xfU - cVar5 | (byte)((int)uVar14 << 4);
                    pbVar19 = pbVar18 + -1;
                    goto joined_r0x00175658;
                  }
                  pbVar18[-2] = ((char)uVar12 - (char)(uVar14 >> 1)) * '\x10' | 0xf;
                  pbVar18[-1] = 0xfU - cVar5 | (byte)((int)(uVar14 >> 1) << 4);
                }
                else {
                  pbVar18[-2] = 0x1eU - cVar5 | (byte)((int)uVar14 << 4);
                  pbVar18[-1] = 0;
                }
                pbVar19 = pbVar18 + -2;
                goto joined_r0x00175658;
              }
            }
LAB_00175688:
            pbVar19 = pbVar18;
            if (uVar13 != 0 || (uVar12 & 0x7f) != 0) {
LAB_00175690:
              uVar13 = uVar13 | (uVar12 & 0x7f) << 6;
              pbVar18[-2] = (byte)uVar13;
              pbVar18[-1] = (char)(uVar13 >> 8) + 0x10;
              pbVar19 = pbVar18 + -2;
            }
            goto joined_r0x00175658;
          }
          cVar5 = (char)uVar13;
          if (0xf < uVar13) {
            pbVar19 = pbVar18 + -2;
            *pbVar19 = 0x1eU - cVar5 | (byte)((int)uVar12 << 4);
            pbVar18[-1] = 0;
            uVar14 = uVar11 & 0xffffffff;
            if (puVar1 <= param_4) break;
            goto LAB_00175434;
          }
          if (uVar12 < 0x10) {
            pbVar19 = pbVar18 + -1;
            *pbVar19 = 0xfU - cVar5 | (byte)((int)uVar12 << 4);
          }
          else {
            pbVar19 = pbVar18 + -2;
            *pbVar19 = ((char)uVar12 - (char)(uVar12 >> 1)) * '\x10' | 0xf;
            pbVar18[-1] = 0xfU - cVar5 | (byte)((int)(uVar12 >> 1) << 4);
          }
        }
        else {
          if (0xe < uVar13 - 0x40) {
            pbVar19 = pbVar18;
            if (0x3f < uVar13) {
              do {
                uVar14 = uVar13 >> 6;
                if (0x6ff < uVar14) {
                  uVar14 = 0x700;
                }
                if ((long)pbVar19 - (long)puVar21 < 4) goto LAB_001753a4;
                iVar6 = (int)uVar14 + -1;
                uVar13 = uVar13 + uVar14 * -0x40;
                pbVar18 = pbVar19 + -2;
                *pbVar18 = (byte)iVar6;
                pbVar19[-1] = (char)((uint)iVar6 >> 8) + 2;
                pbVar19 = pbVar18;
              } while (0x3f < uVar13);
              goto LAB_00175604;
            }
            goto LAB_00175688;
          }
          uVar13 = uVar13 - 0xf;
          pbVar18 = pbVar18 + -1;
          *pbVar18 = 0;
          pbVar19 = pbVar18;
          if (uVar13 != 0 || (uVar12 & 0x7f) != 0) goto LAB_00175690;
joined_r0x00175658:
          for (; 0x7f < uVar12; uVar12 = uVar12 + uVar14 * -0x80) {
            uVar14 = uVar12 >> 7;
            if (0x6ff < uVar14) {
              uVar14 = 0x700;
            }
            if ((long)pbVar19 - (long)puVar21 < 2) goto LAB_001753a4;
            iVar6 = (int)uVar14 + -1;
            pbVar19[-2] = (byte)iVar6;
            pbVar19[-1] = (char)((uint)iVar6 >> 8) + 9;
            pbVar19 = pbVar19 + -2;
          }
          if (pbVar19 == (byte *)0x0) goto LAB_001753a4;
        }
        uVar14 = uVar11 & 0xffffffff;
      }
      else if (7 < uVar12) {
        pbVar18 = pbVar19 + -1;
        *pbVar18 = 1;
        puVar20 = (ulong *)((long)puVar21 + 1);
        *(char *)puVar21 = (char)uVar11;
        goto LAB_00175530;
      }
    } while (param_4 < puVar1);
  }
  sVar16 = (long)puVar2 - (long)puVar8;
  if (sVar16 != 0) {
    if ((ulong)((long)pbVar19 - (long)puVar21) < sVar16 + 0x10) goto LAB_001753a4;
    memcpy(puVar21,puVar8,sVar16);
    puVar21 = (ulong *)((long)puVar21 + sVar16);
    if (sVar16 - 0x40 < 0xf) {
      sVar16 = sVar16 - 0xf;
      pbVar19 = pbVar19 + -1;
      *pbVar19 = 0;
LAB_00175844:
      pbVar19[-2] = (byte)sVar16;
      pbVar19[-1] = (char)(sVar16 >> 8) + 0x10;
      pbVar19 = pbVar19 + -2;
    }
    else {
      for (; 0x3f < sVar16; sVar16 = sVar16 + uVar14 * -0x40) {
        uVar14 = sVar16 >> 6;
        if (0x6ff < uVar14) {
          uVar14 = 0x700;
        }
        if ((long)pbVar19 - (long)puVar21 < 4) goto LAB_001753a4;
        iVar6 = (int)uVar14 + -1;
        pbVar19[-2] = (byte)iVar6;
        pbVar19[-1] = (char)((uint)iVar6 >> 8) + 2;
        pbVar19 = pbVar19 + -2;
      }
      if (sVar16 != 0) goto LAB_00175844;
    }
    if (pbVar19 == (byte *)0x0) {
LAB_001753a4:
      return param_5 + 1;
    }
  }
  lVar17 = (long)puVar21 - (long)puVar22;
  lVar10 = lVar17 + 1;
  fVar24 = (float)lVar10;
  __src = (undefined1 *)0x0;
  uVar14 = 0;
  sVar16 = (long)param_3 - (long)pbVar19;
  local_7c[0] = 1.0737418e+09;
  if (((param_9 >> 3 & 1) == 0) || (lVar17 < 0x20)) {
    __n = 0;
    if (1.0737418e+09 < fVar24) goto LAB_00175a24;
  }
  else {
    __n = 0;
    if ((long)(lVar17 + sVar16) < 0xc001) {
      __src = (undefined1 *)param_8[1];
      uVar14 = lVar17 + 0xfU & 0xfffffffffffffff0;
      puVar3 = __src + uVar14;
      if ((undefined1 *)(param_8[3] + *param_8) < puVar3) {
        if ((int)param_8[4] == 0) {
          __src = (undefined1 *)0x0;
        }
        else {
          __src = (undefined1 *)(**(code **)PTR_PTR_047cb890)(uVar14,0x10);
          if (__src == (undefined1 *)0x0) {
            FUN_0015ed40(uVar14);
          }
        }
      }
      else {
        param_8[1] = (long)puVar3;
        puVar4 = (undefined1 *)param_8[2];
        if ((undefined1 *)param_8[2] <= puVar3) {
          puVar4 = puVar3;
        }
        param_8[2] = (long)puVar4;
      }
      FUN_0015edc0(puVar22,lVar17,auStack_47c,0x100,0);
      iVar6 = FUN_00160010(auStack_47c);
      if (iVar6 == (int)lVar17) {
        fVar23 = (float)(**(code **)(param_6 + 8))(lVar17);
        local_7c[0] = fVar23 * (float)param_1 + 6.0;
        *__src = (char)*puVar22;
        uVar14 = 3;
        __n = 1;
      }
      else {
        local_484 = 0;
        local_480 = fVar24;
        sVar7 = FUN_00176360(param_1,0x53800000,__src,__src + lVar17,puVar22,lVar17,auStack_47c,
                             param_6,&local_480,&local_484,param_9,param_8,param_10);
        __n = 0;
        uVar14 = 0;
        if ((-1 < (long)sVar7) && ((long)sVar7 < lVar17)) {
          uVar14 = (ulong)local_484;
          local_7c[0] = local_480;
          __n = sVar7;
        }
      }
    }
    if (local_7c[0] < fVar24) {
LAB_00175a24:
      lVar10 = lVar17 * 0x40000 + (uVar14 << 0x24) + __n + -0x40000;
      uVar9 = (uint)lVar10;
      uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
      *param_2 = (char)((ulong)lVar10 >> 0x20);
      *(uint *)(param_2 + 1) = uVar9 >> 0x10 | uVar9 << 0x10;
      memcpy(param_2 + 5,__src,__n);
      lVar10 = FUN_00174b80(param_2,__n + 5,local_7c);
      memmove(param_2 + lVar10,pbVar19,sVar16);
      fVar24 = (float)(long)sVar16;
      fVar23 = local_7c[0];
      goto LAB_00175a80;
    }
  }
  memmove(puVar21,pbVar19,sVar16);
  fVar23 = (float)(long)sVar16;
LAB_00175a80:
  *param_7 = fVar23 + fVar24;
  fVar24 = (float)(**(code **)(param_6 + 0x60))(param_5);
  *param_7 = *param_7 + fVar24 * (float)param_1 + 5.0;
  if (__src != (undefined1 *)0x0) {
    if (__src + (lVar17 + 0xfU & 0xfffffffffffffff0) == (undefined1 *)param_8[1]) {
      param_8[1] = (long)__src;
    }
    else {
      (**(code **)PTR_PTR_047cb898)(__src);
    }
  }
  return lVar10 + sVar16;
}


