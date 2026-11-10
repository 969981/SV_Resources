/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034ce9c0; name: FUN_034ce9c0
 */


void FUN_034ce9c0(float param_1,float param_2,float param_3,uint param_4,uint param_5,
                 undefined4 *param_6)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  ulong __n;
  float *pfVar12;
  float *__s;
  undefined4 *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float afStack_b0 [2];
  undefined8 local_a8;
  int local_a0;
  uint local_9c;
  uint local_98;
  uint uStack_94;
  size_t local_90;
  ulong local_88;
  
  *param_6 = 0x3f800000;
  pfVar4 = (float *)(param_6 + param_5);
  *pfVar4 = param_2;
  pfVar4 = pfVar4 + param_5;
  *pfVar4 = param_3;
  pfVar4[param_5] = param_1;
  if (1 < param_4) {
    fVar14 = param_3 * param_3;
    pfVar4 = pfVar4 + param_5 + param_5;
    if (0.99 <= fVar14) {
      param_4 = param_4 + 1;
      if (2 < param_4) {
        uVar2 = 2;
        fVar14 = param_3;
        do {
          iVar5 = (int)uVar2;
          do {
            *pfVar4 = 0.0;
            pfVar4 = pfVar4 + param_5;
          } while (pfVar4 < param_6 + (iVar5 + iVar5 * iVar5) * param_5);
          fVar14 = fVar14 * param_3;
          uVar2 = uVar2 + 1;
          *pfVar4 = fVar14;
          pfVar4 = pfVar4 + param_5;
        } while (uVar2 != param_4);
      }
      do {
        *pfVar4 = 0.0;
        pfVar4 = pfVar4 + param_5;
      } while (pfVar4 < param_6 + param_4 * param_4 * param_5);
    }
    else {
      fVar17 = 1.0;
      fVar15 = 1.0 - fVar14;
      fVar20 = SQRT(fVar15);
      param_1 = (1.0 / fVar20) * param_1;
      param_2 = (1.0 / fVar20) * param_2;
      if (param_4 < 4) {
        pfVar12 = pfVar4 + param_5;
        fVar19 = (param_1 + param_1) * param_2;
        fVar17 = param_1 * param_1;
        fVar18 = param_2 * param_2;
        *pfVar4 = fVar19 * fVar15 * 0.8660254;
        pfVar4 = pfVar12 + param_5;
        *pfVar12 = fVar20 * param_3 * 1.7320508 * param_2;
        pfVar12 = pfVar4 + param_5;
        *pfVar4 = fVar14 * 1.5 + -0.5;
        pfVar4 = pfVar12 + param_5;
        *pfVar12 = fVar20 * param_3 * 0.8660254 * (param_1 + param_1);
        *pfVar4 = (fVar17 - fVar18) * fVar15 * 0.8660254;
        if (param_4 == 3) {
          fVar16 = param_3 * 1.9364917 * fVar15;
          fVar21 = fVar15 * 0.7905694 * fVar20;
          fVar15 = fVar14 * 5.0 * fVar20 * 0.61237246 - fVar20 * 0.61237246;
          pfVar4 = pfVar4 + param_5;
          *pfVar4 = param_2 * fVar21 * (-(fVar17 * -3.0) - fVar18);
          pfVar4 = pfVar4 + param_5;
          pfVar12 = pfVar4 + param_5;
          *pfVar4 = fVar19 * fVar16;
          *pfVar12 = fVar15 * param_2;
          pfVar12 = pfVar12 + param_5;
          pfVar4 = pfVar12 + param_5;
          *pfVar12 = param_3 * 0.5 * (fVar14 * 5.0 + -3.0);
          *pfVar4 = fVar15 * param_1;
          pfVar4[param_5] = (fVar17 - fVar18) * fVar16;
          (pfVar4 + param_5)[param_5] = param_1 * fVar21 * (fVar17 + fVar18 * -3.0);
        }
      }
      else {
        uVar3 = param_4 + 1;
        __n = (ulong)(uVar3 * 4);
        uVar2 = __n + 0xf & 0x1fffffff0;
        lVar1 = -uVar2;
        puVar11 = (undefined4 *)(((long)afStack_b0 + lVar1) - uVar2);
        *(float *)((long)afStack_b0 + lVar1 + 4) = param_1;
        *(undefined4 *)((long)afStack_b0 + lVar1) = 0x3f800000;
        *puVar11 = 0;
        puVar11[1] = param_2;
        if (2 < uVar3) {
          fVar14 = param_1 * (param_2 + param_2);
          fVar15 = param_1 * (param_1 + param_1) + -1.0;
          lVar7 = (ulong)uVar3 - 3;
          puVar11[2] = fVar14;
          *(float *)((long)afStack_b0 + lVar1 + 8) = fVar15;
          pfVar4 = (float *)((long)afStack_b0 + lVar1 + 0xc);
          pfVar12 = (float *)(puVar11 + 3);
          do {
            fVar14 = fVar14 * param_1 + param_2 * fVar15;
            fVar15 = (param_1 + param_1) * fVar15 - pfVar4[-2];
            lVar7 = lVar7 + -1;
            *pfVar4 = fVar15;
            *pfVar12 = fVar14;
            pfVar4 = pfVar4 + 1;
            pfVar12 = pfVar12 + 1;
          } while (lVar7 != 0);
        }
        pfVar12 = (float *)((long)puVar11 - uVar2);
        __s = (float *)((long)pfVar12 - uVar2);
        memset(pfVar12,0,__n);
        memset(__s,0,__n);
        pfVar4 = (float *)((long)__s - ((ulong)(param_4 + 2) * 4 + 0xf & 0x7fffffff0));
        uVar10 = param_5 * 5;
        local_a8 = (ulong)param_4;
        uVar9 = param_5 * 7;
        local_a0 = param_5 * 6;
        *pfVar12 = 1.0;
        *__s = param_3;
        __s[1] = fVar20;
        afStack_b0[1] = (float)(param_5 << 1);
        uVar3 = 3;
        puVar13 = &DAT_03d98438;
        uVar2 = 1;
        fVar14 = param_3;
        while( true ) {
          local_88 = uVar2 + 1;
          local_9c = uVar3;
          fVar15 = (float)((int)uVar2 << 1 | 1);
          if (uVar3 < 3) {
            uVar3 = 2;
          }
          iVar5 = (int)local_88;
          fVar17 = (fVar14 * param_3 * fVar15 - fVar17 * (float)(uVar2 & 0xffffffff)) /
                   (float)(local_88 & 0xffffffff);
          *pfVar4 = fVar17;
          param_6[(iVar5 + iVar5 * iVar5) * param_5] = fVar17;
          if (uVar2 < 0xfffffffe) {
            lVar7 = 0;
            uVar6 = uVar10;
            uVar8 = uVar9;
            while( true ) {
              fVar14 = *(float *)((long)pfVar12 + lVar7 + 4) + fVar14 * fVar20 * fVar15;
              fVar17 = *(float *)((long)puVar13 + lVar7);
              *(float *)((long)pfVar4 + lVar7 + 4) = fVar14;
              fVar17 = fVar17 * fVar14;
              param_6[uVar8] = fVar17 * *(float *)((long)afStack_b0 + lVar7 + lVar1 + 4);
              param_6[uVar6] = *(float *)((long)puVar11 + lVar7 + 4) * fVar17;
              if ((ulong)uVar3 * 4 + -8 == lVar7) break;
              fVar14 = *(float *)((long)(__s + 1) + lVar7);
              lVar7 = lVar7 + 4;
              uVar8 = uVar8 + param_5;
              uVar6 = uVar6 - param_5;
            }
          }
          local_90 = uVar2 * 4 + 8 & 0x3fffffffc;
          local_98 = uVar10;
          uStack_94 = uVar9;
          memcpy(pfVar12,__s,local_90);
          memcpy(__s,pfVar4,local_90);
          if (local_88 == local_a8) break;
          puVar13 = puVar13 + 5;
          fVar14 = *__s;
          fVar17 = *pfVar12;
          uVar3 = local_9c + 1;
          uVar9 = uStack_94 + local_a0;
          uVar10 = local_98 + local_a0;
          local_a0 = local_a0 + (int)afStack_b0[1];
          uVar2 = local_88;
        }
      }
    }
  }
  return;
}


