/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034463f8; name: FUN_034463f8
 */


void FUN_034463f8(long param_1,uint param_2,undefined8 param_3,float *param_4,undefined8 param_5,
                 ulong param_6,ulong param_7,long param_8,long param_9)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined1 *puVar11;
  size_t __n;
  ulong uVar12;
  float *pfVar13;
  undefined1 *puVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  uint uVar23;
  ulong uVar24;
  float *pfVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  undefined1 *__s;
  float *pfVar32;
  ulong uVar33;
  ulong __n_00;
  uint uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 auStack_140 [2];
  float afStack_130 [2];
  ulong local_128;
  ulong local_120;
  long local_118;
  long local_110;
  int local_104;
  ulong local_100;
  int local_f8;
  uint local_f4;
  uint local_f0;
  uint uStack_ec;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  long local_c0;
  int local_b4;
  long local_b0;
  float *pfStack_a8;
  uint local_a0;
  uint local_9c;
  ulong local_98;
  ulong local_90;
  uint local_84;
  long local_80;
  
  uVar15 = (uint)param_7;
  local_f4 = uVar15 & 0xf00;
  uVar31 = param_7 & 0xffffffff;
  if (local_f4 == 0x100) {
    uVar2 = uVar15 >> 0xc & 0x637;
    uVar19 = uVar2 - (uVar2 >> 1 & 0xf1f1f1f1);
    uVar19 = (uVar19 & 0x33333333) + (uVar19 >> 2 & 0x33333333);
    uVar31 = (ulong)(uVar2 << 0xc | (uVar19 + (uVar19 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 | 0x100
                    );
  }
  uVar19 = *(uint *)(param_9 + 0xb8);
  if ((uVar19 & 0xf00) == 0x300) {
    uVar19 = *(uint *)(param_9 + 0x120);
  }
  uVar2 = uVar19 & 0xff;
  uVar33 = (ulong)uVar2;
  local_90 = (ulong)uVar19;
  local_a0 = uVar2 + 3;
  uVar15 = uVar15 & 0xff;
  local_9c = local_a0 >> 2;
  local_104 = uVar15 * local_9c * 0x10;
  local_b4 = uVar15 * local_9c * 4;
  lVar6 = -(ulong)(local_104 * param_2);
  __s = (undefined1 *)((long)afStack_130 + lVar6);
  local_c0 = param_8;
  local_98 = param_7;
  local_84 = param_2;
  local_80 = param_1;
  memset(__s,0,(ulong)(local_104 * param_2));
  uVar5 = local_84;
  uVar29 = (uint)uVar31 & 0xff;
  uVar27 = (ulong)uVar29;
  if ((uVar31 & 0xff) != 0) {
    local_b0 = param_9;
    pfStack_a8 = param_4;
    if (*(char *)(local_80 + 0x88) == '\0') {
      if (local_84 < 2) {
        uVar5 = 1;
      }
      uVar28 = (ulong)uVar5;
      fVar35 = 1.0 / SQRT((float)uVar27);
      if ((local_90 & 0xe00) == 0) {
        local_128 = (ulong)(local_a0 & 0x1fc);
        uVar5 = (uint)local_90 - ((uint)local_90 >> 0xf & 1) & 0xff;
        uVar24 = (ulong)uVar5;
        uVar29 = (uint)(uVar29 < 2 || uVar2 == 0);
        uVar17 = uVar27 - 1;
        local_e0 = uVar27;
        local_d8 = uVar17;
        local_120 = uVar28;
        local_118 = (long)&local_120 + lVar6;
        uVar34 = local_9c * uVar15 * 4 & 0x3ffffffc;
        fVar35 = fVar35 / (float)uVar5;
        local_110 = -(uVar24 & 7);
        uVar18 = (local_90 & 0xff) + 3 >> 2;
        uVar20 = 0;
        uVar31 = 0;
        __n_00 = (ulong)(uVar2 << 2);
        uVar12 = uVar24 & 0xf8;
        local_e8 = uVar24;
        local_d0 = uVar24 & 7;
        local_c8 = uVar24 - 1;
        local_f0 = uVar34;
        uStack_ec = uVar29;
        do {
          iVar22 = (int)uVar20;
          if ((int)uVar24 != 0) {
            if (local_c8 < 7) {
              uVar21 = 0;
            }
            else {
              pfVar13 = (float *)(local_118 + uVar20 * 4);
              uVar21 = 0;
              do {
                uVar21 = uVar21 + 8;
                pfVar13[-4] = fVar35;
                pfVar13[-3] = fVar35;
                pfVar13[-2] = fVar35;
                pfVar13[-1] = fVar35;
                *pfVar13 = fVar35;
                pfVar13[1] = fVar35;
                pfVar13[2] = fVar35;
                pfVar13[3] = fVar35;
                pfVar13 = pfVar13 + 8;
              } while (uVar12 != uVar21);
            }
            if (local_d0 != 0) {
              pfVar13 = (float *)(__s + uVar20 * 4 + uVar21 * 4);
              lVar8 = local_110;
              do {
                bVar7 = lVar8 != -1;
                lVar8 = lVar8 + 1;
                *pfVar13 = fVar35;
                pfVar13 = pfVar13 + 1;
              } while (bVar7);
            }
          }
          if ((uVar29 & 1) == 0) {
            if ((int)uVar27 == 2) {
              lVar8 = 1;
            }
            else {
              puVar14 = __s + uVar20 * 4;
              uVar27 = 0;
              local_100 = uVar31;
              local_f8 = iVar22;
              do {
                uVar31 = uVar27;
                puVar11 = puVar14 + uVar18 * 0x10;
                memcpy(puVar11,puVar14,__n_00);
                puVar14 = puVar14 + uVar18 * 0x20;
                memcpy(puVar14,puVar11,__n_00);
                uVar27 = uVar31 + 2;
              } while ((uVar17 & 0xfffffffffffffffe) != uVar27);
              lVar8 = uVar31 + 3;
              uVar31 = local_100;
              uVar27 = local_e0;
              uVar24 = local_e8;
              param_4 = pfStack_a8;
              param_9 = local_b0;
              uVar28 = local_120;
              uVar29 = uStack_ec;
              uVar34 = local_f0;
              iVar22 = local_f8;
            }
            if ((local_d8 & 1) != 0) {
              uVar29 = local_b4 * (int)uVar31;
              memcpy(__s + lVar8 * local_128 * 4 + (ulong)uVar29 * 4,
                     __s + (lVar8 + -1) * local_128 * 4 + (ulong)uVar29 * 4,__n_00);
              uVar27 = local_e0;
              uVar24 = local_e8;
              param_4 = pfStack_a8;
              param_9 = local_b0;
              uVar29 = uStack_ec;
              uVar34 = local_f0;
            }
          }
          uVar31 = uVar31 + 1;
          uVar20 = (ulong)(iVar22 + uVar34);
        } while (uVar31 != uVar28);
      }
      else {
        uVar24 = (local_90 & 0xff) + 3;
        uVar18 = uVar24 >> 2;
        iVar22 = local_9c * uVar15;
        lVar8 = uVar18 * 2 + (uVar24 >> 2);
        uVar20 = 0;
        uVar17 = 0;
        do {
          if (uVar27 - 1 < 7) {
            uVar12 = 0;
          }
          else {
            pfVar13 = (float *)(__s + uVar20 * 4);
            uVar12 = 0;
            do {
              uVar12 = uVar12 + 8;
              *pfVar13 = fVar35;
              pfVar13[uVar18 * 4] = fVar35;
              pfVar13[uVar18 * 8] = fVar35;
              pfVar13[lVar8 * 4] = fVar35;
              pfVar13[uVar18 * 0x10] = fVar35;
              pfVar13[(uVar18 * 4 + (uVar24 >> 2)) * 4] = fVar35;
              pfVar13[lVar8 * 8] = fVar35;
              pfVar13[uVar18 * 0x1c] = fVar35;
              pfVar13 = pfVar13 + uVar18 * 0x20;
            } while ((uVar27 & 0xf8) != uVar12);
          }
          if ((uVar31 & 7) != 0) {
            pfVar13 = (float *)(__s + uVar20 * 4 + uVar18 * 0x10 * uVar12);
            uVar12 = uVar27 & 7;
            do {
              *pfVar13 = fVar35;
              uVar12 = uVar12 - 1;
              pfVar13 = pfVar13 + uVar18 * 4;
            } while (uVar12 != 0);
          }
          uVar17 = uVar17 + 1;
          uVar20 = (ulong)((int)uVar20 + (iVar22 * 4 & 0x3ffffffcU));
        } while (uVar17 != uVar28);
      }
    }
    else if (*(int *)(param_9 + 0x6c) == 0) {
      if ((((param_6 & 1) == 0) && (local_84 < 2)) && ((*(byte *)(local_c0 + 0x1d8) >> 1 & 1) == 0))
      {
        iVar22 = (local_a0 & 0x1fc) * uVar15;
        if (iVar22 == 0) goto LAB_0344697c;
        __n = (size_t)(uint)(iVar22 * 4);
        puVar14 = __s;
        puVar11 = *(undefined1 **)(param_9 + 0x140);
      }
      else {
        uVar9 = FUN_0349fff0(*(long *)(local_c0 + 0x198) + 0x60);
        FUN_034d2278(*(undefined4 *)(param_9 + 0x5c),*(undefined4 *)(param_9 + 0x60),
                     *(undefined4 *)(param_9 + 100),*(undefined4 *)(param_9 + 0x58),
                     *(undefined4 *)(param_9 + 0x70),local_98 & 0xffffffff,local_90,__s,uVar9);
        if ((uVar5 < 2) || (iVar22 = (local_a0 & 0x1fc) * uVar15, iVar22 == 0)) goto LAB_0344697c;
        __n = (size_t)(uint)(iVar22 * 4);
        uVar31 = (ulong)local_84;
        if (local_84 == 2) {
          iVar22 = 1;
        }
        else {
          uVar5 = local_9c * uVar15 * 4 & 0x3ffffffc;
          uVar29 = 0;
          uVar27 = 0;
          do {
            uVar28 = uVar27;
            memcpy(__s + (ulong)(uVar5 + uVar29) * 4,__s,__n);
            uVar29 = uVar5 * 2 + uVar29;
            memcpy(__s + (ulong)uVar29 * 4,__s,__n);
            uVar27 = uVar28 + 2;
          } while ((uVar31 - 1 & 0xfffffffffffffffe) != uVar27);
          iVar22 = (int)uVar28 + 3;
          param_4 = pfStack_a8;
          param_9 = local_b0;
        }
        if ((uVar31 - 1 & 1) == 0) goto LAB_0344697c;
        puVar14 = __s + (ulong)(uint)(local_b4 * iVar22) * 4;
        puVar11 = __s;
      }
      memcpy(puVar14,puVar11,__n);
    }
    else {
      lVar8 = FUN_0349fff0(*(long *)(local_c0 + 0x198) + 0x60);
      if (lVar8 != 0) {
        uVar27 = local_98 & 0xffffffff;
        *(undefined1 **)((long)auStack_140 + lVar6) = __s;
        FUN_034458bc(param_9 + 0x58,param_5,local_84,uVar27,uVar31,local_90,local_b4,lVar8);
      }
    }
  }
LAB_0344697c:
  uVar29 = local_84;
  uVar31 = local_90;
  uVar5 = local_a0;
  uVar34 = (uint)local_90;
  if ((((uint)local_98 & uVar34) >> 0xf & 1) != 0) {
    uVar23 = local_84;
    if (local_84 < 2) {
      uVar23 = 1;
    }
    uVar28 = (ulong)uVar23;
    lVar8 = (long)(int)(uVar2 - 1) * 4 + (ulong)((local_a0 & 0x1fc) * (uVar15 - 1)) * 4;
    uVar27 = uVar28 & 3;
    if (uVar28 - 1 < 3) {
      uVar24 = 0;
    }
    else {
      uVar30 = local_9c * uVar15;
      uVar3 = uVar30 * 4 & 0x3ffffffc;
      iVar22 = uVar3 * 2;
      uVar26 = 0;
      uVar24 = 0;
      do {
        *(undefined4 *)(__s + (ulong)uVar26 * 4 + lVar8) = 0x3f800000;
        *(undefined4 *)(__s + (ulong)(uVar3 + uVar26) * 4 + lVar8) = 0x3f800000;
        uVar24 = uVar24 + 4;
        *(undefined4 *)(__s + (ulong)(iVar22 + uVar26) * 4 + lVar8) = 0x3f800000;
        uVar16 = iVar22 + (uVar30 & 0xfffffff) * 4 + uVar26;
        uVar26 = uVar26 + uVar30 * 0x10;
        *(undefined4 *)(__s + (ulong)uVar16 * 4 + lVar8) = 0x3f800000;
      } while ((uVar28 & 0xfffffffc) != uVar24);
    }
    if ((uVar23 & 3) != 0) {
      uVar26 = local_9c * uVar15 * 4 & 0x3ffffffc;
      uVar23 = uVar26 * (int)uVar24;
      do {
        *(undefined4 *)(__s + (ulong)uVar23 * 4 + lVar8) = 0x3f800000;
        uVar27 = uVar27 - 1;
        uVar23 = uVar23 + uVar26;
      } while (uVar27 != 0);
    }
  }
  lVar8 = *(long *)(local_80 + 0x30);
  puVar14 = __s;
  if (((lVar8 != 0) && ((uVar34 & 0xf00) == 0x100)) &&
     ((local_f4 == 0x100 && ((*(int *)(param_9 + 0x6c) != 0 && (uVar2 != 0)))))) {
    iVar22 = local_9c * 0x10;
    uVar26 = *(uint *)(local_80 + 0x38);
    iVar4 = local_9c * uVar15;
    uVar28 = (ulong)(uVar2 * 4 + 0xc) & 0x7f0;
    uVar24 = 0;
    uVar27 = 0;
    uVar23 = uVar29;
    if (uVar29 < 2) {
      uVar23 = 1;
    }
    do {
      puVar11 = __s + uVar24 * 4;
      puVar14 = puVar14 + -((ulong)(iVar22 + 0xf) & 0xff0);
      pfVar13 = (float *)((long)afStack_130 + uVar24 * 4 + lVar6 + 8);
      uVar17 = 0;
      uVar18 = 0;
      uVar30 = 1;
      do {
        uVar3 = uVar30 & uVar26 >> 0xc;
        uVar16 = (uint)uVar17;
        if ((uVar30 & (uint)(uVar31 >> 0xc) & 0xfffff) == 0) {
          if (uVar3 != 0) {
            uVar16 = uVar16 + 1;
          }
          uVar17 = (ulong)uVar16;
        }
        else {
          if (uVar3 == 0) {
            *(undefined4 *)(puVar14 + uVar18 * 4) = 0x3f800000;
          }
          else {
            lVar1 = uVar17 * 4;
            uVar17 = (ulong)(uVar16 + 1);
            *(undefined4 *)(puVar14 + uVar18 * 4) = *(undefined4 *)(lVar8 + lVar1);
          }
          uVar18 = (ulong)((int)uVar18 + 1);
        }
        uVar30 = uVar30 << 1;
      } while ((uint)uVar18 < uVar2);
      if ((param_7 & 0xff) != 0) {
        uVar17 = 0;
        do {
          if (uVar33 - 1 < 3) {
            uVar18 = 0;
          }
          else {
            uVar18 = 0;
            pfVar32 = (float *)(puVar14 + 8);
            pfVar25 = pfVar13;
            do {
              fVar35 = pfVar32[-1];
              uVar18 = uVar18 + 4;
              fVar36 = *pfVar32;
              fVar37 = pfVar32[1];
              pfVar25[-2] = pfVar25[-2] * pfVar32[-2];
              pfVar25[-1] = pfVar25[-1] * fVar35;
              pfVar25[1] = pfVar25[1] * fVar37;
              *pfVar25 = *pfVar25 * fVar36;
              pfVar25 = pfVar25 + 4;
              pfVar32 = pfVar32 + 4;
            } while ((uVar33 & 0xfc) != uVar18);
          }
          if ((uVar19 & 3) != 0) {
            pfVar25 = (float *)(puVar14 + uVar18 * 4);
            pfVar32 = (float *)(puVar11 + uVar18 * 4);
            uVar18 = uVar33 & 3;
            do {
              uVar18 = uVar18 - 1;
              *pfVar32 = *pfVar32 * *pfVar25;
              pfVar25 = pfVar25 + 1;
              pfVar32 = pfVar32 + 1;
            } while (uVar18 != 0);
          }
          uVar17 = uVar17 + 1;
          pfVar13 = (float *)((long)pfVar13 + uVar28);
          puVar11 = puVar11 + uVar28;
        } while (uVar17 != uVar15);
      }
      uVar27 = uVar27 + 1;
      uVar24 = (ulong)((int)uVar24 + (iVar4 * 4 & 0x3ffffffcU));
    } while (uVar27 != uVar23);
  }
  if (uVar29 == 1) {
    uVar15 = (uVar5 & 0x1fc) * uVar15;
    uVar31 = (ulong)uVar15;
    if (uVar15 != 0) {
      fVar35 = *param_4;
      pfVar13 = (float *)((long)afStack_130 + lVar6 + 4);
      pfVar25 = (float *)(*(long *)(param_9 + 0x138) + 4);
      do {
        pfVar25[-1] = pfVar13[-1] * fVar35;
        *pfVar25 = *pfVar13 * fVar35;
        uVar31 = uVar31 - 2;
        pfVar13 = pfVar13 + 2;
        pfVar25 = pfVar25 + 2;
      } while (uVar31 != 0);
    }
  }
  else {
    uVar19 = *(uint *)(param_9 + 0x120);
    if ((*(uint *)(param_9 + 0xb8) & 0xf00) != 0x300) {
      uVar19 = *(uint *)(param_9 + 0xb8);
    }
    lVar8 = ((ulong)((uVar19 & 0xff) + 3) & 0x1fc) * ((ulong)*(uint *)(param_9 + 0x120) & 0xff);
    if ((int)lVar8 != 0) {
      memset(*(void **)(param_9 + 0x138),0,lVar8 * 4);
    }
    lVar8 = *(long *)(*(long *)(local_c0 + 400) + 8);
    plVar10 = *(long **)(lVar8 + 0x178);
    if (((plVar10 == (long *)0x0) || (uVar27 = (**(code **)(*plVar10 + 0x38))(), (uVar27 & 1) == 0))
       && ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x10) + 0x28) + 0x3a) & 7) == 1)) {
      uVar19 = (uVar5 & 0x1fc) * uVar15;
      if (uVar19 != 0) {
        uVar27 = 0;
        uVar31 = 0;
        if (uVar29 < 2) {
          uVar29 = 1;
        }
        do {
          fVar35 = param_4[uVar31];
          pfVar25 = (float *)((long)afStack_130 + uVar27 * 4 + lVar6 + 8);
          pfVar13 = (float *)(puVar14 + (8 - ((ulong)(local_104 + 0xf) & 0xffff0)));
          uVar33 = (ulong)uVar19;
          do {
            fVar36 = pfVar25[-2];
            fVar37 = *pfVar25;
            fVar38 = pfVar25[1];
            pfVar13[-1] = pfVar25[-1] * fVar35;
            uVar33 = uVar33 - 4;
            pfVar13[-2] = fVar36 * fVar35;
            *pfVar13 = fVar37 * fVar35;
            pfVar13[1] = fVar38 * fVar35;
            pfVar13 = pfVar13 + 4;
            pfVar25 = pfVar25 + 4;
          } while (uVar33 != 0);
          pfVar13 = (float *)(*(long *)(param_9 + 0x138) + 8);
          pfVar25 = (float *)(puVar14 + (8 - ((ulong)(local_104 + 0xf) & 0xffff0)));
          uVar33 = (ulong)uVar19;
          do {
            uVar33 = uVar33 - 4;
            pfVar13[-2] = pfVar13[-2] + pfVar25[-2];
            pfVar13[-1] = pfVar13[-1] + pfVar25[-1];
            *pfVar13 = *pfVar13 + *pfVar25;
            pfVar32 = pfVar25 + 1;
            pfVar25 = pfVar25 + 4;
            pfVar13[1] = pfVar13[1] + *pfVar32;
            pfVar13 = pfVar13 + 4;
          } while (uVar33 != 0);
          uVar31 = uVar31 + 1;
          uVar27 = (ulong)((int)uVar27 + (local_9c * uVar15 * 4 & 0x3ffffffc));
        } while (uVar31 != uVar29);
      }
    }
    else if ((uVar34 & 0xf00) == 0x200) {
      FUN_034d5760(local_98 & 0xffffffff,uVar31,__s,local_b4,param_4,uVar29,
                   *(undefined8 *)(param_9 + 0x138));
    }
    else {
      uVar31 = (ulong)(local_104 + 0xf) & 0xffff0;
      uVar19 = (uVar5 & 0x1fc) * uVar15;
      if (uVar19 != 0) {
        uVar33 = 0;
        uVar27 = 0;
        if (uVar29 < 2) {
          uVar29 = 1;
        }
        do {
          fVar35 = param_4[uVar27];
          pfVar13 = (float *)((long)afStack_130 + uVar33 * 4 + lVar6 + 8);
          pfVar25 = (float *)(puVar14 + (8 - uVar31));
          uVar28 = (ulong)uVar19;
          do {
            fVar36 = pfVar13[-1];
            fVar37 = *pfVar13;
            fVar38 = pfVar13[1];
            pfVar25[-2] = pfVar13[-2] * fVar35;
            pfVar25[-1] = fVar36 * fVar35;
            uVar28 = uVar28 - 4;
            *pfVar25 = fVar37 * fVar35;
            pfVar25[1] = fVar38 * fVar35;
            pfVar13 = pfVar13 + 4;
            pfVar25 = pfVar25 + 4;
          } while (uVar28 != 0);
          pfVar13 = (float *)(*(long *)(param_9 + 0x138) + 4);
          uVar28 = (ulong)uVar19;
          pfVar25 = (float *)(puVar14 + (4 - uVar31));
          do {
            fVar36 = pfVar13[-1];
            fVar37 = pfVar25[-1];
            fVar35 = *pfVar13;
            if (fVar36 * fVar36 <= fVar37 * fVar37) {
              fVar36 = fVar37;
            }
            fVar37 = *pfVar25;
            if (fVar35 * fVar35 <= fVar37 * fVar37) {
              fVar35 = fVar37;
            }
            uVar28 = uVar28 - 2;
            pfVar13[-1] = fVar36;
            *pfVar13 = fVar35;
            pfVar13 = pfVar13 + 2;
            pfVar25 = pfVar25 + 2;
          } while (uVar28 != 0);
          uVar27 = uVar27 + 1;
          uVar33 = (ulong)((int)uVar33 + (local_9c * uVar15 * 4 & 0x3ffffffc));
        } while (uVar27 != uVar29);
      }
    }
  }
  return;
}


