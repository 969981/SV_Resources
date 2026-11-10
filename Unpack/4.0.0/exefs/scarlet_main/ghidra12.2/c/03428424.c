/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03428424; name: FUN_03428424
 */


void FUN_03428424(float param_1,long *param_2,undefined8 param_3,long *param_4,long *param_5,
                 long *param_6)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  bool bVar7;
  ulong *puVar8;
  ulong uVar9;
  void *__dest;
  long lVar10;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  uint *puVar22;
  long lVar23;
  int iVar24;
  ulong uVar25;
  long lVar26;
  long *plVar27;
  uint *puVar28;
  long lVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 uStack_170;
  undefined8 auStack_168 [28];
  int local_88;
  uint local_84;
  
  uVar11 = *(uint *)(param_2 + 1);
  if (uVar11 == 0) {
    return;
  }
  plVar13 = (long *)*param_2;
  plVar27 = plVar13;
LAB_03428474:
  if ((*(float *)((long)plVar27 + 0x84) < param_1) && (uVar12 = *(uint *)(param_4 + 1), uVar12 != 0)
     ) {
    lVar29 = *plVar27;
    iVar30 = 0;
    lVar15 = *param_4;
    uVar21 = *(ulong *)(lVar29 + 0x68);
    do {
      iVar2 = iVar30 + (uVar12 >> 1);
      lVar17 = (long)iVar2;
      uVar25 = *(ulong *)(lVar15 + (long)iVar2 * 0x90);
      if (uVar25 == uVar21) {
        if (((*(char *)(lVar15 + lVar17 * 0x90 + 0x22) == '\0') &&
            (puVar28 = (uint *)(lVar15 + lVar17 * 0x90 + 0x30), *puVar28 != 0)) &&
           (uVar12 = *(uint *)(param_5 + 1), uVar12 != 0)) {
          iVar30 = 0;
          uVar21 = *(ulong *)(plVar27[(int)plVar27[0x10] - 1] + 0x68);
          lVar19 = *param_5;
          goto LAB_03428514;
        }
        break;
      }
      if (uVar25 < uVar21) {
        iVar30 = iVar2 + 1;
      }
      uVar12 = uVar12 - (uVar25 < uVar21) >> 1;
    } while (uVar12 != 0);
  }
  goto LAB_034284d4;
  while( true ) {
    if (uVar25 < uVar21) {
      iVar30 = iVar2 + 1;
    }
    uVar12 = uVar12 - (uVar25 < uVar21) >> 1;
    if (uVar12 == 0) break;
LAB_03428514:
    iVar2 = iVar30 + (uVar12 >> 1);
    uVar25 = *(ulong *)(lVar19 + (long)iVar2 * 0x90);
    if (uVar25 == uVar21) {
      puVar22 = (uint *)(lVar19 + (long)iVar2 * 0x90 + 0x40);
      if (*puVar22 != 0) {
        uVar21 = 0;
        plVar13 = (long *)(lVar15 + lVar17 * 0x90 + 0x28);
        goto LAB_03428570;
      }
      break;
    }
  }
  goto LAB_034284d4;
LAB_03428570:
  do {
    memcpy(&uStack_170,(void *)(*(long *)(lVar19 + (long)iVar2 * 0x90 + 0x38) + uVar21 * 0xf0),0xf0)
    ;
    iVar30 = (int)plVar27[0x10];
    if (iVar30 - 1U == 0) {
LAB_03428848:
      if (*puVar28 != 0) {
        lVar15 = *plVar13;
        do {
          memcpy(&local_290,&uStack_170,0xf0);
          uVar25 = FUN_034293fc(&local_290,lVar29,lVar15,param_3,0);
          if ((uVar25 & 1) != 0) {
            uVar12 = *(uint *)(param_6 + 1);
            uVar11 = *(uint *)((long)param_6 + 0xc);
            if (uVar11 <= uVar12) {
              iVar30 = uVar11 + (uVar11 >> 1);
              if (uVar11 == 0) {
                iVar30 = 1;
              }
              uVar11 = iVar30 + uVar11;
              lVar17 = (**(code **)(PTR_DAT_047e2fd0 + 0x28))(9,*param_6,(ulong)uVar11 * 0xf0,0x10);
              if (lVar17 == 0) goto LAB_03428908;
              *param_6 = lVar17;
              *(uint *)((long)param_6 + 0xc) = uVar11;
            }
            if (uVar12 < uVar11) {
              uVar11 = *(uint *)(param_6 + 1);
              *(uint *)(param_6 + 1) = uVar11 + 1;
              if (*param_6 != 0) {
                __dest = (void *)(*param_6 + (ulong)uVar11 * 0xf0);
                *(undefined4 *)((long)__dest + 0xe8) = 0;
                *(undefined8 *)((long)__dest + 0xe0) = 0x3f80000000000000;
                memcpy(__dest,&local_290,0xf0);
              }
            }
          }
LAB_03428908:
          lVar15 = lVar15 + 0x94;
        } while (lVar15 != *plVar13 + (ulong)*puVar28 * 0x94);
      }
    }
    else {
      uVar25 = (ulong)(iVar30 - 1U);
      do {
        puVar14 = (undefined8 *)plVar27[iVar30 - 2U];
        lVar15 = (plVar27 + uVar25)[8];
        uVar16 = puVar14[0xd];
        uVar18 = *(ulong *)(plVar27[uVar25] + 0x68);
        uVar11 = *(uint *)(lVar15 + 0x88);
        uVar9 = uVar18;
        uVar6 = uVar16;
        if (uVar18 <= uVar16) {
          uVar9 = uVar16;
          uVar6 = uVar18;
        }
        if (uVar11 != 0) {
          lVar15 = *(long *)(lVar15 + 0x80);
          iVar24 = 0;
LAB_034285e0:
          iVar3 = iVar24 + (uVar11 >> 1);
          lVar17 = (long)iVar3;
          puVar8 = (ulong *)(lVar15 + (long)iVar3 * 0x48);
          uVar4 = *puVar8;
          uVar5 = puVar8[1];
          if (uVar4 != uVar6 || uVar5 != uVar9) goto code_r0x034285fc;
          if ((*(float *)(lVar15 + lVar17 * 0x48 + 0x14) != 3.4028235e+38) &&
             (uVar11 = *(uint *)(lVar15 + lVar17 * 0x48 + 0x40), uVar11 != 0)) {
            lVar20 = *(long *)(lVar15 + lVar17 * 0x48 + 0x38);
            lVar23 = (ulong)uVar11 * 0x94;
            uVar9 = lVar23 - 0x94;
            uVar11 = ((uint)(uVar9 / 0x94) & 0x1ffffff) + 1;
            lVar15 = 0;
            lVar17 = lVar20;
            if ((uVar11 & 3) == 0) {
              fVar31 = 3.4028235e+38;
            }
            else {
              lVar26 = -((ulong)uVar11 & 3);
              lVar10 = lVar15;
              fVar32 = 3.4028235e+38;
              do {
                fVar31 = (float)NEON_fminnm(*(float *)(lVar17 + 0x80),fVar32);
                lVar15 = lVar17;
                if (fVar32 <= *(float *)(lVar17 + 0x80)) {
                  lVar15 = lVar10;
                }
                lVar17 = lVar17 + 0x94;
                bVar7 = lVar26 != -1;
                lVar26 = lVar26 + 1;
                lVar10 = lVar15;
                fVar32 = fVar31;
              } while (bVar7);
            }
            if (0x1bb < uVar9) {
              do {
                fVar32 = (float)NEON_fminnm(*(float *)(lVar17 + 0x80),fVar31);
                lVar26 = lVar17;
                if (fVar31 <= *(float *)(lVar17 + 0x80)) {
                  lVar26 = lVar15;
                }
                fVar31 = (float)NEON_fminnm(*(float *)(lVar17 + 0x114),fVar32);
                lVar15 = lVar17 + 0x94;
                if (fVar32 <= *(float *)(lVar17 + 0x114)) {
                  lVar15 = lVar26;
                }
                fVar32 = (float)NEON_fminnm(*(float *)(lVar17 + 0x1a8),fVar31);
                pfVar1 = (float *)(lVar17 + 0x23c);
                lVar26 = lVar17 + 0x128;
                if (fVar31 <= *(float *)(lVar17 + 0x1a8)) {
                  lVar26 = lVar15;
                }
                fVar31 = (float)NEON_fminnm(*pfVar1,fVar32);
                lVar15 = lVar17 + 0x1bc;
                lVar17 = lVar17 + 0x250;
                if (fVar32 <= *pfVar1) {
                  lVar15 = lVar26;
                }
              } while (lVar20 + lVar23 != lVar17);
            }
            if ((lVar15 == 0) || (*(int *)(lVar15 + 0x78) == 0)) goto LAB_0342863c;
            local_290 = *puVar14;
            local_288 = *(undefined4 *)(puVar14 + 1);
            uVar9 = FUN_034293fc(&uStack_170,plVar27[uVar25],lVar15,&local_290,uVar16 < uVar18);
            goto LAB_03428710;
          }
        }
LAB_0342863c:
        local_290 = 0;
        local_288 = 0;
        local_180 = *(undefined8 *)plVar27[iVar30 - 2U];
        local_178 = *(undefined4 *)((undefined8 *)plVar27[iVar30 - 2U] + 1);
        local_190 = auStack_168[(ulong)(local_88 - 1) * 2 + -1];
        local_188 = *(undefined4 *)(auStack_168 + (ulong)(local_88 - 1) * 2);
        FUN_034237c0(plVar27[uVar25],&local_190,&local_180,&local_290);
        lVar15 = plVar27[uVar25];
        uVar12 = (uint)lVar15;
        uVar11 = (uint)((ulong)lVar15 >> 0x20);
        local_84 = (((((((local_84 * 0x1000193 ^ uVar12 & 0xff) * 0x1000193 ^ uVar12 >> 8 & 0xff) *
                        0x1000193 ^ uVar12 >> 0x10 & 0xff) * 0x1000193 ^ uVar12 >> 0x18) * 0x1000193
                     ^ uVar11 & 0xff) * 0x1000193 ^ uVar11 >> 8 & 0xff) * 0x1000193 ^
                   (ushort)((ulong)lVar15 >> 0x30) & 0xff) * 0x1000193 ^
                   (uint)(byte)((ulong)lVar15 >> 0x38);
        local_1a0 = local_290;
        local_198 = local_288;
        uVar9 = FUN_034292bc(&uStack_170,&local_1a0,&local_180);
LAB_03428710:
        iVar30 = (int)uVar25;
      } while ((iVar30 != 1) && (uVar25 = uVar25 - 1, (uVar9 & 1) != 0));
      if ((uVar9 & 1) != 0) goto LAB_03428848;
    }
    uVar21 = uVar21 + 1;
  } while (uVar21 < *puVar22);
  uVar11 = *(uint *)(param_2 + 1);
  plVar13 = (long *)*param_2;
LAB_034284d4:
  plVar27 = plVar27 + 0x12;
  if (plVar27 == plVar13 + (ulong)uVar11 * 0x12) {
    return;
  }
  goto LAB_03428474;
code_r0x034285fc:
  bVar7 = uVar5 < uVar9;
  if (uVar4 != uVar6) {
    bVar7 = uVar4 < uVar6;
  }
  if (bVar7 != 0) {
    iVar24 = iVar3 + 1;
  }
  uVar11 = uVar11 - bVar7 >> 1;
  if (uVar11 == 0) goto LAB_0342863c;
  goto LAB_034285e0;
}


