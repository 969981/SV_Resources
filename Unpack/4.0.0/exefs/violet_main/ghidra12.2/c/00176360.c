/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00176360; name: FUN_00176360
 */


undefined1 *
FUN_00176360(float param_1,float param_2,undefined1 *param_3,undefined1 *param_4,byte *param_5,
            ulong param_6,undefined8 param_7,char *param_8,float *param_9,undefined4 *param_10,
            uint param_11,undefined8 param_12,int param_13)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  byte *pbVar21;
  int iVar22;
  undefined1 *puVar23;
  long lVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  int local_183c;
  ulong *local_1808 [2];
  ulong local_17f8;
  long local_17f0;
  ulong local_17e8 [32];
  undefined8 local_16e8;
  int aiStack_16e0 [512];
  undefined1 auStack_ee0 [2048];
  undefined1 auStack_6e0 [256];
  undefined1 auStack_5e0 [256];
  undefined1 auStack_4e0 [256];
  undefined1 auStack_3e0 [256];
  undefined1 auStack_2e0 [256];
  undefined1 local_1e0 [256];
  int local_e0 [24];
  
  lVar10 = FUN_0015dc00(0x100,0,auStack_ee0);
  FUN_00160610(lVar10,param_7,param_6 & 0xffffffff,0xb,param_12,5 < param_13);
  iVar22 = *(int *)(lVar10 + 0x288);
  lVar24 = (long)iVar22;
  if (iVar22 < 2) {
    if ((long)param_4 - (long)param_3 < 3) {
      return (undefined1 *)0xffffffffffffffff;
    }
    fVar26 = (float)(**(code **)(param_8 + 8))(param_6);
    fVar26 = fVar26 * param_1 + 8.0;
    if (fVar26 < *param_9) {
      bVar4 = *param_5;
      *param_3 = 0;
      param_3[1] = bVar4 >> 2 | 0x40;
      param_3[2] = bVar4 << 6;
      *param_10 = 2;
      *param_9 = fVar26;
      return (undefined1 *)0x3;
    }
    return (undefined1 *)0xffffffffffffffff;
  }
  uVar1 = *(int *)(lVar10 + 0x294) + 1;
  if (*param_8 == '\0') {
    lVar12 = 0;
    uVar25 = 0;
  }
  else {
    lVar15 = *(long *)(lVar10 + 0x2a0);
    lVar12 = 0;
    do {
      if (*(char *)(lVar15 + lVar12) != '\0') break;
      if (*(char *)(lVar15 + lVar12 + 1) != '\0') {
        lVar12 = lVar12 + 1;
        break;
      }
      lVar12 = lVar12 + 2;
    } while (lVar12 != 0x100);
    uVar25 = 1;
    local_16e8._0_4_ = (int)lVar12;
    if ((int)local_16e8 < 0x100) {
      do {
        lVar13 = (long)(int)lVar12;
        do {
          if (*(char *)(lVar15 + lVar13) == '\0') break;
          lVar13 = lVar13 + 1;
        } while ((int)lVar13 != 0x100);
        iVar16 = (int)lVar13;
        iVar9 = uVar25 + 1;
        aiStack_16e0[(long)(int)uVar25 + -2] = iVar16 - (int)lVar12;
        if (0xff < iVar16) {
          uVar25 = uVar25 + 2;
          aiStack_16e0[(long)iVar9 + -2] = 0;
          break;
        }
        lVar12 = (long)iVar16;
        do {
          if (*(char *)(*(long *)(lVar10 + 0x2a0) + lVar12) != '\0') break;
          lVar12 = lVar12 + 1;
        } while ((int)lVar12 != 0x100);
        uVar25 = uVar25 + 2;
        aiStack_16e0[(long)iVar9 + -2] = (int)lVar12 - iVar16;
        if (0xff < (int)lVar12) break;
        lVar15 = *(long *)(lVar10 + 0x2a0);
      } while( true );
    }
    uVar8 = uVar25;
    if (-1 < (int)(uVar25 - 1)) {
      uVar8 = uVar25 - 1;
    }
    lVar12 = (long)((ulong)uVar8 << 0x20) >> 0x21;
  }
  uVar8 = FUN_0015f190(param_7,param_6 & 0xffffffff,*(undefined8 *)(lVar10 + 0x2a0),uVar1);
  fVar26 = (float)uVar8 / (float)(long)param_6;
  if ((param_11 & 1) != 0) {
    fVar27 = (float)(**(code **)(param_8 + 0x50))(fVar26,param_6,lVar24,lVar12);
    fVar28 = (float)(**(code **)(param_8 + 0x48))(fVar26,param_6,lVar24,lVar12);
    if ((fVar27 - fVar28) * param_1 + 6.3125 < 0.0) {
      local_183c = 4;
      *param_10 = 4;
      pcVar14 = *(code **)(param_8 + 0x50);
      goto LAB_00176608;
    }
  }
  local_183c = 2;
  *param_10 = 2;
  pcVar14 = *(code **)(param_8 + 0x48);
LAB_00176608:
  fVar26 = (float)(*pcVar14)(fVar26,param_6,lVar24,lVar12);
  if (fVar26 <= param_2) {
    lVar24 = ((ulong)uVar8 + 7 >> 3) + 0xd;
    iVar9 = iVar22 * 2 + 0xf;
    fVar26 = fVar26 * param_1 + 5.0;
    iVar22 = iVar22 * 2 + 0x16;
    if (-1 < iVar9) {
      iVar22 = iVar9;
    }
    if (fVar26 + (float)lVar24 + (float)(iVar22 >> 3) < *param_9) {
      if (*param_8 == '\0') {
        lVar15 = *(long *)(lVar10 + 0x2a0);
        lVar12 = 0;
        do {
          if (*(char *)(lVar15 + lVar12) != '\0') break;
          if (*(char *)(lVar15 + lVar12 + 1) != '\0') {
            lVar12 = lVar12 + 1;
            break;
          }
          lVar12 = lVar12 + 2;
        } while (lVar12 != 0x100);
        uVar25 = 1;
        local_16e8._0_4_ = (int)lVar12;
        if ((int)local_16e8 < 0x100) {
          do {
            lVar13 = (long)(int)lVar12;
            do {
              if (*(char *)(lVar15 + lVar13) == '\0') break;
              lVar13 = lVar13 + 1;
            } while ((int)lVar13 != 0x100);
            iVar9 = (int)lVar13;
            iVar22 = uVar25 + 1;
            aiStack_16e0[(long)(int)uVar25 + -2] = iVar9 - (int)lVar12;
            if (0xff < iVar9) {
              uVar25 = uVar25 + 2;
              aiStack_16e0[(long)iVar22 + -2] = 0;
              break;
            }
            lVar12 = (long)iVar9;
            do {
              if (*(char *)(*(long *)(lVar10 + 0x2a0) + lVar12) != '\0') break;
              lVar12 = lVar12 + 1;
            } while ((int)lVar12 != 0x100);
            uVar25 = uVar25 + 2;
            aiStack_16e0[(long)iVar22 + -2] = (int)lVar12 - iVar9;
            if (0xff < (int)lVar12) break;
            lVar15 = *(long *)(lVar10 + 0x2a0);
          } while( true );
        }
      }
      local_1808[0] = local_17e8;
      if (((param_11 >> 6 & 1) == 0) || (*(int *)(lVar10 + 0x288) < 5)) {
        local_17f8 = 0;
        local_17f0 = 0x3e;
        FUN_0015dd30(lVar10,local_1808);
      }
      else {
        iVar22 = 0;
        local_e0[0x14] = 0;
        local_17f8 = 2;
        local_17f0 = 0x3d;
        local_e0[0x10] = 0;
        local_e0[0x11] = 0;
        local_e0[0x12] = 0;
        local_e0[0x13] = 0;
        local_e0[0xc] = 0;
        local_e0[0xd] = 0;
        local_e0[0xe] = 0;
        local_e0[0xf] = 0;
        local_e0[8] = 0;
        local_e0[9] = 0;
        local_e0[10] = 0;
        local_e0[0xb] = 0;
        local_e0[4] = 0;
        local_e0[5] = 0;
        local_e0[6] = 0;
        local_e0[7] = 0;
        local_e0[0] = 0;
        local_e0[1] = 0;
        local_e0[2] = 0;
        local_e0[3] = 0;
        if (1 < (int)uVar25) {
          iVar22 = 0;
          iVar9 = 1;
          iVar17 = 0x20;
          iVar16 = (int)local_16e8;
          iVar18 = (int)local_16e8;
          iVar5 = local_16e8._4_4_ + (int)local_16e8;
          if (local_16e8._4_4_ + (int)local_16e8 <= (int)local_16e8) goto LAB_001767c8;
          do {
            iVar16 = iVar5;
            lVar12 = *(long *)(lVar10 + 0x2a0);
            uVar20 = (ulong)iVar18;
            uVar19 = ~uVar20;
            if ((iVar16 - iVar18 & 1U) != 0) {
              iVar5 = (uint)*(byte *)(lVar12 + uVar20) - (iVar17 + 2 >> 2);
              uVar8 = iVar5 * 2 ^ iVar5 >> 0x1f;
              uVar11 = -(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2;
              iVar18 = *(int *)((long)local_e0 + uVar11);
              local_1e0[iVar22] = (char)uVar8;
              iVar22 = iVar22 + 1;
              iVar17 = iVar5 + iVar17;
              uVar20 = uVar20 + 1;
              *(int *)((long)local_e0 + uVar11) = iVar18 + 1;
            }
            if (uVar19 + (long)iVar16 != 0) {
              lVar15 = (long)iVar16 - uVar20;
              pbVar21 = (byte *)(lVar12 + uVar20 + 1);
              do {
                iVar6 = (uint)pbVar21[-1] - (iVar17 + 2 >> 2);
                uVar8 = iVar6 * 2 ^ iVar6 >> 0x1f;
                uVar20 = -(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2;
                local_1e0[iVar22] = (char)uVar8;
                *(int *)((long)local_e0 + uVar20) = *(int *)((long)local_e0 + uVar20) + 1;
                iVar7 = (uint)*pbVar21 - (iVar6 + iVar17 + 2 >> 2);
                uVar8 = iVar7 * 2 ^ iVar7 >> 0x1f;
                uVar20 = -(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2;
                iVar5 = *(int *)((long)local_e0 + uVar20);
                iVar18 = iVar22 + 1;
                iVar17 = iVar7 + iVar6 + iVar17;
                iVar22 = iVar22 + 2;
                lVar15 = lVar15 + -2;
                local_1e0[iVar18] = (char)uVar8;
                *(int *)((long)local_e0 + uVar20) = iVar5 + 1;
                pbVar21 = pbVar21 + 2;
              } while (lVar15 != 0);
            }
LAB_001767c8:
            do {
              iVar18 = iVar9 + 1;
              iVar9 = iVar9 + 2;
              iVar16 = aiStack_16e0[(long)iVar18 + -2] + iVar16;
              if ((int)uVar25 <= iVar9) goto LAB_001768d4;
              iVar18 = iVar16;
              iVar5 = aiStack_16e0[(long)iVar9 + -2] + iVar16;
            } while (aiStack_16e0[(long)iVar9 + -2] + iVar16 <= iVar16);
          } while( true );
        }
LAB_001768d4:
        local_17e8[0] = 0x80;
        iVar9 = FUN_0015ec70(local_e0,0x15,0);
        dVar30 = (double)iVar9;
        iVar9 = FUN_0015ec70(local_e0,0x15,1);
        dVar29 = (double)iVar9;
        dVar31 = dVar29;
        if (dVar30 <= dVar29) {
          dVar31 = dVar30;
        }
        iVar9 = FUN_0015ec70(local_e0,0x15,2);
        uVar8 = 2;
        dVar32 = (double)iVar9;
        if (dVar31 <= (double)iVar9) {
          uVar8 = (uint)(dVar29 < dVar30);
          dVar32 = dVar31;
        }
        iVar9 = FUN_0015ec70(local_e0,0x15,3);
        local_17f0 = local_17f0 + -2;
        uVar3 = 3;
        if (dVar32 <= (double)iVar9) {
          uVar3 = uVar8;
        }
        uVar19 = (ulong)uVar3;
        local_17f8 = uVar19 | local_17f8 << 2;
        iVar9 = FUN_001790b0(auStack_2e0,auStack_3e0,auStack_4e0,iVar22,&local_16e8,uVar25);
        local_17f0 = local_17f0 + -8;
        local_17f8 = (long)(iVar22 + -1) | local_17f8 << 8;
        FUN_00179160(local_1808,iVar9,iVar22);
        lVar12 = (long)iVar22;
        uVar20 = local_17f8 << (local_17f0 + 1U & 0x3f);
        uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
        uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
        *local_1808[0] = uVar20 >> 0x20 | uVar20 << 0x20;
        local_1808[0] = (ulong *)((long)local_1808[0] + ((long)(0x3fU - local_17f0) >> 3));
        local_17f0 = local_17f0 + (0x3fU - local_17f0 & 0xfffffffffffffff8);
        FUN_00178e20(auStack_5e0,auStack_6e0,local_1e0,lVar12,uVar19);
        FUN_00178c30(local_1808,auStack_5e0,lVar12);
        FUN_00178c30(local_1808,auStack_2e0,(long)iVar9);
        FUN_00178b20(local_1808,auStack_6e0,lVar12,uVar19);
        FUN_00178bb0(local_1808,auStack_3e0,auStack_4e0,(long)iVar9);
      }
      uVar20 = local_17f8 << (local_17f0 + 1U & 0x3f);
      uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
      uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
      *local_1808[0] = uVar20 >> 0x20 | uVar20 << 0x20;
      local_1808[0] = (ulong *)((long)local_1808[0] + ((long)(0x3fU - local_17f0) >> 3));
      local_17f0 = local_17f0 + (0x3fU - local_17f0 & 0xfffffffffffffff8);
      lVar12 = 0x3f - local_17f0;
      if (0 < lVar12) {
        uVar25 = (int)local_17f0 + 1;
        uVar20 = (ulong)uVar25 & 7;
        if ((uVar25 & 7) != 0) {
          local_17f0 = local_17f0 - uVar20;
          local_17f8 = local_17f8 << uVar20;
          lVar12 = 0x3f - local_17f0;
        }
        if (7 < lVar12) {
          do {
            *(char *)local_1808[0] = (char)(local_17f8 >> (0x37U - local_17f0 & 0x3f));
            lVar12 = 0x37 - local_17f0;
            local_17f0 = local_17f0 + 8;
            local_1808[0] = (ulong *)((long)local_1808[0] + 1);
            local_17f8 = local_17f8 & *(uint *)(PTR_DAT_047cb910 + lVar12 * 4);
          } while (7 < lVar12);
        }
      }
      lVar12 = 0x4d - local_17f0;
      if (-1 < 0x46 - local_17f0) {
        lVar12 = 0x46 - local_17f0;
      }
      puVar23 = (undefined1 *)((long)local_1808[0] + ((lVar12 >> 3) - (long)local_17e8));
      if ((fVar26 + (float)(long)(puVar23 + lVar24) < *param_9) &&
         ((long)(puVar23 + lVar24 + 8) < (long)param_4 - (long)param_3)) {
        if (param_3 + param_6 + 0x100 <= param_4) {
          param_4 = param_3 + param_6 + 0x100;
        }
        memcpy(param_3,local_17e8,(size_t)puVar23);
        puVar23 = param_3 + (long)puVar23;
        FUN_001620a0(lVar10);
        lVar24 = *(long *)(lVar10 + 0x2a0);
        if (0 < (int)uVar1) {
          uVar20 = 0;
          do {
            uVar25 = *(uint *)(*(long *)(lVar10 + 0x2a8) + uVar20 * 4);
            uVar25 = (uVar25 & 0xaaaaaaaa) >> 1 | (uVar25 & 0x55555555) << 1;
            uVar25 = (uVar25 & 0xcccccccc) >> 2 | (uVar25 & 0x33333333) << 2;
            uVar25 = (uVar25 & 0xf0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f) << 4;
            local_17e8[uVar20 + 0x20] =
                 (ulong)(((((uVar25 & 0xff00ff00) >> 8 | (uVar25 & 0xff00ff) << 8) & 0xffff) >> 5)
                        >> (ulong)(0xb - *(byte *)(lVar24 + uVar20) & 0x1f));
            uVar20 = uVar20 + 1;
          } while (uVar1 != uVar20);
        }
        if (local_183c == 4) {
          puVar2 = puVar23 + 3;
          lVar10 = (long)(param_6 + 1) >> 1;
          lVar12 = FUN_00176d00(puVar2,param_4,param_5,lVar10,lVar24,&local_16e8,param_12);
          *puVar23 = (char)lVar12;
          puVar23[1] = (char)((ulong)lVar12 >> 8);
          puVar23[2] = (char)((ulong)lVar12 >> 0x10);
          lVar10 = FUN_00176d00(puVar2 + lVar12,param_4,param_5 + lVar10,param_6 - lVar10,lVar24,
                                &local_16e8,param_12);
          puVar23 = puVar2 + lVar12;
        }
        else {
          lVar10 = FUN_00176d00(puVar23,param_4,param_5,param_6,lVar24,&local_16e8,param_12);
        }
        *param_9 = fVar26 + (float)(long)(puVar23 + (lVar10 - (long)param_3));
        return puVar23 + (lVar10 - (long)param_3);
      }
    }
  }
  return (undefined1 *)0xffffffffffffffff;
}


