/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034d5760; name: FUN_034d5760
 */


void FUN_034d5760(byte param_1,ulong param_2,long param_3,int param_4,long param_5,uint param_6,
                 long param_7)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  float *pfVar7;
  long lVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  float *pfVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  void *__s;
  int iVar27;
  ulong uVar28;
  float fVar29;
  float fVar30;
  float afStack_15c [3];
  float afStack_150 [2];
  size_t local_148;
  long local_140;
  long local_138;
  void *local_130;
  ulong local_128;
  ulong local_120;
  ulong local_118;
  ulong local_110;
  uint local_104;
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  size_t local_e8;
  ulong local_e0;
  int local_d4;
  long local_d0;
  float *local_c8;
  ulong local_c0;
  long local_b8;
  ulong local_b0;
  long local_a8;
  int local_9c;
  undefined *local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  
  uVar28 = param_2 & 0xff;
  cVar5 = (&DAT_03d984b4)[uVar28];
  local_d4 = param_4;
  local_d0 = param_5;
  local_a8 = param_3;
  lVar8 = FUN_034ce820((int)cVar5);
  if (lVar8 != 0) {
    uVar4 = *(uint *)(&DAT_03d984a0 + (long)(int)cVar5 * 4);
    uVar26 = (ulong)uVar4;
    lVar23 = -(ulong)(uVar4 * 4 + 0xc & 0xfffffff0);
    __s = (void *)((long)afStack_150 + lVar23);
    iVar27 = (int)uVar28;
    uVar2 = (iVar27 + 3U) * 4 & 0x7f0;
    local_e0 = (ulong)param_1;
    if (param_1 != 0) {
      fVar30 = 1.0 / (float)uVar4;
      local_e8 = uVar26 << 2;
      local_f0 = (ulong)(iVar27 + 3U & 0x1fc);
      iVar12 = cVar5 + 2;
      local_b8 = (long)(int)cVar5;
      uVar6 = iVar12 * iVar12;
      local_118 = (ulong)uVar6;
      local_104 = (uint)(param_6 == 0 || iVar27 == 0);
      local_80 = param_2 & 3;
      uVar3 = uVar4;
      if (uVar4 < 2) {
        uVar3 = 1;
      }
      uVar24 = (ulong)uVar3;
      local_138 = (ulong)(uVar4 * uVar6) << 2;
      uStack_f8 = (ulong)param_6;
      local_9c = cVar5 + 1;
      uVar22 = 0;
      local_148 = local_118 << 2;
      local_100 = uVar28 - 1;
      local_120 = uVar24 - 1;
      local_90 = param_2 & 0xfc;
      local_128 = uVar24 & 3;
      local_c0 = uVar24 & 0xfffffffc;
      local_110 = (ulong)(iVar27 * 4 + 0xc) & 0x7f0;
      local_c8 = (float *)((long)afStack_150 + lVar23 + 8);
      local_140 = param_7;
      do {
        memset(__s,0,local_e8);
        lVar25 = local_a8;
        lVar23 = local_d0;
        iVar12 = local_d4;
        uVar18 = uStack_f8;
        uVar28 = local_100;
        lVar10 = uVar22 * local_f0;
        if ((local_104 & 1) == 0) {
          uVar11 = 0;
          uVar13 = 0;
          do {
            uVar16 = local_90;
            fVar29 = *(float *)(lVar23 + uVar13 * 4);
            if (uVar28 < 3) {
              uVar14 = 0;
            }
            else {
              lVar15 = lVar25 + uVar11 * 4;
              uVar14 = 0;
              lVar20 = 0xc;
              do {
                pfVar17 = (float *)(lVar15 + lVar20);
                pfVar7 = (float *)((long)__s + (lVar20 - (ulong)uVar2));
                lVar1 = uVar14 * 4;
                uVar14 = uVar14 + 4;
                pfVar7[-3] = pfVar17[-3] * fVar29;
                pfVar7[-2] = *(float *)(lVar15 + lVar1 + 4) * fVar29;
                pfVar7[-1] = pfVar17[-1] * fVar29;
                lVar20 = lVar20 + 0x10;
                *pfVar7 = *pfVar17 * fVar29;
              } while (uVar16 != uVar14);
            }
            if (local_80 != 0) {
              lVar15 = uVar11 * 4 + uVar14 * 4;
              pfVar17 = (float *)((long)__s + (uVar14 * 4 - (ulong)uVar2));
              uVar16 = local_80;
              do {
                pfVar7 = (float *)(lVar25 + lVar15);
                lVar15 = lVar15 + 4;
                *pfVar17 = *pfVar7 * fVar29;
                uVar16 = uVar16 - 1;
                pfVar17 = pfVar17 + 1;
              } while (uVar16 != 0);
            }
            uVar16 = 0;
            do {
              if (iVar27 == 1) {
                uVar14 = 0;
                fVar29 = 0.0;
              }
              else {
                fVar29 = 0.0;
                uVar14 = 0;
                uVar21 = uVar16 & 0xffffffff;
                do {
                  pfVar17 = (float *)((long)__s + (uVar14 * 4 - (ulong)uVar2));
                  lVar15 = uVar21 * 4;
                  uVar14 = uVar14 + 2;
                  iVar19 = (int)uVar21;
                  uVar21 = (ulong)(iVar19 + uVar4 * 2);
                  fVar29 = fVar29 + fVar30 * *pfVar17 * *(float *)(lVar8 + lVar15) +
                           fVar30 * pfVar17[1] * *(float *)(lVar8 + (ulong)(uVar4 + iVar19) * 4);
                } while ((param_2 & 0xfe) != uVar14);
              }
              if ((param_2 & 1) != 0) {
                fVar29 = fVar29 + fVar30 * *(float *)((long)__s + (uVar14 * 4 - (ulong)uVar2)) *
                                           *(float *)(lVar8 + (ulong)((int)uVar16 +
                                                                     uVar4 * (int)uVar14) * 4);
              }
              if (ABS(*(float *)((long)__s + uVar16 * 4)) < ABS(fVar29)) {
                *(float *)((long)__s + uVar16 * 4) = fVar29;
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 != uVar24);
            uVar13 = uVar13 + 1;
            uVar11 = (ulong)(uint)((int)uVar11 + iVar12);
          } while (uVar13 != uVar18);
        }
        pvVar9 = (void *)(param_7 + lVar10 * 4);
        local_b0 = uVar22;
        lVar23 = (&DAT_048b04c8)[local_b8];
        if (lVar23 == 0) {
          local_130 = pvVar9;
          lVar23 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,local_138);
          if (lVar23 != 0) {
            local_98 = (&PTR_DAT_047c5318)[local_b8];
            lVar25 = 0;
            uVar28 = uVar26;
            do {
              pfVar17 = (float *)(local_98 + lVar25 * 4);
              local_88 = uVar28;
              FUN_034ce9c0(pfVar17[2],-*pfVar17,pfVar17[1],local_9c,uVar4,lVar23 + lVar25);
              uVar28 = local_88 - 1;
              lVar25 = lVar25 + 4;
            } while (uVar28 != 0);
            (&DAT_048b04c8)[local_b8] = lVar23;
            pvVar9 = local_130;
            lVar25 = local_a8;
            param_7 = local_140;
            goto LAB_034d5af8;
          }
          if ((int)local_118 != 0) {
            memset(local_130,0,local_148);
          }
        }
        else {
LAB_034d5af8:
          local_a8 = lVar25;
          if ((int)local_118 != 0) {
            lVar25 = 0;
            uVar28 = 0;
            do {
              if (local_120 < 3) {
                uVar22 = 0;
                fVar29 = 0.0;
              }
              else {
                fVar29 = 0.0;
                uVar22 = 0;
                pfVar17 = local_c8;
                do {
                  uVar18 = lVar25 + uVar22;
                  uVar22 = uVar22 + 4;
                  iVar12 = (int)uVar18;
                  fVar29 = fVar29 + *(float *)(lVar23 + (uVar18 & 0xffffffff) * 4) * pfVar17[-2] +
                           *(float *)(lVar23 + (ulong)(iVar12 + 1) * 4) * pfVar17[-1] +
                           *(float *)(lVar23 + (ulong)(iVar12 + 2) * 4) * *pfVar17 +
                           *(float *)(lVar23 + (ulong)(iVar12 + 3) * 4) * pfVar17[1];
                  pfVar17 = pfVar17 + 4;
                } while (local_c0 != uVar22);
              }
              if (local_128 != 0) {
                uVar18 = local_128;
                do {
                  iVar12 = (int)uVar22;
                  lVar10 = uVar22 * 4;
                  uVar22 = uVar22 + 1;
                  fVar29 = fVar29 + *(float *)(lVar23 + (ulong)(uint)((int)lVar25 + iVar12) * 4) *
                                    *(float *)((long)__s + lVar10);
                  uVar18 = uVar18 - 1;
                } while (uVar18 != 0);
              }
              *(float *)((long)pvVar9 + uVar28 * 4) = fVar29;
              uVar28 = uVar28 + 1;
              lVar25 = lVar25 + uVar26;
            } while (uVar28 != local_118);
          }
        }
        local_a8 = local_a8 + local_110;
        uVar22 = local_b0 + 1;
      } while (uVar22 != local_e0);
    }
  }
  return;
}


