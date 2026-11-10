/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030df500; name: FUN_030df500
 */


void FUN_030df500(long param_1,long param_2,long param_3,long param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  ulong uVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  long lVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  int *piVar25;
  long lVar26;
  long lVar27;
  int iVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  int iVar32;
  int iVar33;
  long *plVar34;
  ulong uVar35;
  int *piVar36;
  float fVar37;
  float fVar38;
  ulong local_210;
  int local_1e8 [2];
  undefined2 local_1e0 [4];
  int local_1d8 [2];
  undefined2 local_1d0 [4];
  int local_1c8 [2];
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined2 local_178 [4];
  int local_170 [2];
  undefined2 local_168 [4];
  int local_160 [2];
  undefined2 local_158 [4];
  int local_150 [2];
  undefined2 local_148 [4];
  int local_140 [2];
  uint *local_138;
  undefined8 local_130;
  uint *local_128;
  undefined8 local_120;
  undefined2 local_118;
  undefined4 local_114;
  ulong local_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  float local_f0;
  float fStack_ec;
  long local_e0;
  ulong uStack_d8;
  long local_d0;
  undefined8 local_c8;
  float local_c0;
  float fStack_bc;
  int local_b0 [2];
  int local_a8 [2];
  uint local_a0 [2];
  uint local_98 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  
  lVar30 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x38) +
                    (long)*(int *)(param_1 + 0x20) * 0x100);
  lVar31 = *(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0x38) +
                    (long)*(int *)(param_2 + 0x20) * 0x100);
  puVar1 = (ulong *)(lVar30 + 0x20);
  if (*(char *)(lVar30 + 0x30) == '\x01') {
    uVar35 = *puVar1;
  }
  else {
    uVar35 = FUN_0307d71c();
  }
  puVar2 = (ulong *)(lVar31 + 0x20);
  if (*(char *)(lVar31 + 0x30) == '\x01') {
    local_210 = *puVar2;
  }
  else {
    local_210 = FUN_0307d71c();
  }
  lVar23 = *(long *)(param_3 + 0x20);
  if ((lVar23 != 0) && (*(int *)(lVar23 + 0x28) != 0)) {
    piVar36 = *(int **)(lVar23 + 0x20);
    piVar18 = piVar36 + (long)*(int *)(lVar23 + 0x28) * 4;
    do {
      lVar23 = FUN_0305c290(param_1 + 0xd8,piVar36);
      if (lVar23 == 0) {
        uVar14 = 0;
        uVar19 = 0xffffffff;
      }
      else {
        uVar19 = *(uint *)(lVar23 + 4);
        uVar14 = ((int)lVar23 - (int)*(undefined8 *)(param_1 + 0xe8)) * 0x20000000;
      }
      piVar25 = piVar36 + 2;
      lVar23 = FUN_0305c290(param_2 + 0xd8,piVar25);
      if (lVar23 == 0) {
        uVar15 = 0;
        uVar20 = 0xffffffff;
      }
      else {
        uVar20 = *(uint *)(lVar23 + 4);
        uVar15 = ((int)lVar23 - (int)*(undefined8 *)(param_2 + 0xe8)) * 0x20000000;
      }
      if ((int)(uVar19 | uVar14) < 0) {
        if (-1 < (int)(uVar20 | uVar15)) {
          lVar23 = param_1 + 0xb8;
          piVar13 = piVar36;
          goto LAB_030df6bc;
        }
      }
      else {
        if ((int)(uVar20 | uVar15) < 0) {
          lVar23 = param_2 + 0xb8;
          piVar13 = piVar25;
LAB_030df6bc:
          FUN_030d9db8(lVar23,piVar13);
        }
        local_138 = (uint *)0x0;
        local_130 = -0x8000000000000000;
        local_128 = (uint *)0x0;
        local_120 = -0x8000000000000000;
        lVar23 = *(long *)(*(long *)(lVar30 + 0x20) + 0x168);
        uVar19 = *(uint *)(lVar23 + (long)*piVar36 * 4);
        uVar29 = (ulong)uVar19;
        if (-1 < (int)uVar19) {
          iVar11 = *(int *)(*(long *)(lVar30 + 0x20) + 0x170);
          lVar24 = (long)iVar11;
          if (iVar11 <= (int)(uVar19 + 1)) {
            iVar11 = uVar19 + 1;
          }
          uVar12 = uVar29;
          do {
            uVar3 = uVar12 + 1;
            if (lVar24 <= (long)uVar3) goto LAB_030df770;
            lVar17 = uVar12 * 4;
            uVar12 = uVar3;
          } while (*(int *)(lVar23 + 4 + lVar17) == *piVar36);
          iVar11 = (int)uVar3;
LAB_030df770:
          while (iVar28 = (int)uVar29, iVar28 != iVar11) {
            if (*(int *)(lVar30 + 0x40) != 0) {
              plVar34 = *(long **)(lVar30 + 0x38);
              lVar23 = (long)*(int *)(lVar30 + 0x40) * 0x18;
              do {
                lVar24 = *plVar34;
                if (lVar24 != 0) {
                  if ((char)plVar34[2] != '\x01') {
                    lVar24 = FUN_03065a74(plVar34);
                  }
                  local_1c0 = CONCAT44(local_1c0._4_4_,iVar28);
                  FUN_03077488(lVar24,lVar30,&local_1c0);
                }
                plVar34 = plVar34 + 3;
                lVar23 = lVar23 + -0x18;
              } while (lVar23 != 0);
            }
            uVar29 = (ulong)(iVar28 + 1);
          }
        }
        lVar23 = *(long *)(*(long *)(lVar31 + 0x20) + 0x168);
        uVar19 = *(uint *)(lVar23 + (long)*piVar25 * 4);
        uVar29 = (ulong)uVar19;
        if (-1 < (int)uVar19) {
          iVar11 = *(int *)(*(long *)(lVar31 + 0x20) + 0x170);
          lVar24 = (long)iVar11;
          if (iVar11 <= (int)(uVar19 + 1)) {
            iVar11 = uVar19 + 1;
          }
          uVar12 = uVar29;
          do {
            uVar3 = uVar12 + 1;
            if (lVar24 <= (long)uVar3) goto LAB_030df81c;
            lVar17 = uVar12 * 4;
            uVar12 = uVar3;
          } while (*(int *)(lVar23 + 4 + lVar17) == *piVar25);
          iVar11 = (int)uVar3;
LAB_030df81c:
          while (iVar28 = (int)uVar29, iVar28 != iVar11) {
            if (*(int *)(lVar31 + 0x40) != 0) {
              plVar34 = *(long **)(lVar31 + 0x38);
              lVar23 = (long)*(int *)(lVar31 + 0x40) * 0x18;
              do {
                lVar24 = *plVar34;
                if (lVar24 != 0) {
                  if ((char)plVar34[2] != '\x01') {
                    lVar24 = FUN_03065a74(plVar34);
                  }
                  local_1c0 = CONCAT44(local_1c0._4_4_,iVar28);
                  FUN_03077488(lVar24,lVar31,&local_1c0);
                }
                plVar34 = plVar34 + 3;
                lVar23 = lVar23 + -0x18;
              } while (lVar23 != 0);
            }
            uVar29 = (ulong)(iVar28 + 1);
          }
        }
        local_140[0] = *piVar36;
        iVar11 = local_140[0] - *(int *)(uVar35 + 0x20);
        if (local_140[0] < *(int *)(uVar35 + 0x20)) {
          lVar23 = *(long *)(uVar35 + 0x18);
          iVar11 = local_140[0];
          if (*(int *)(uVar35 + 0x98) != 0) {
            iVar11 = *(int *)(*(long *)(uVar35 + 0x90) + (long)local_140[0] * 4);
          }
          plVar34 = (long *)(uVar35 + 0xb0);
          if (iVar11 != -1) goto LAB_030df868;
          iVar11 = local_140[0];
        }
        else {
          plVar34 = (long *)(uVar35 + 0xd0);
LAB_030df868:
          lVar23 = *plVar34;
        }
        piVar25 = (int *)(lVar23 + (long)iVar11 * 0x10);
        iVar11 = piVar36[2];
        uVar19 = piVar36[1] - *piVar25;
        if ((uint)(int)(short)piVar25[2] <= uVar19) {
          uVar19 = (int)(short)piVar25[2] + (piVar36[1] - piVar25[1]);
        }
        if (iVar11 < *(int *)(local_210 + 0x20)) {
          lVar23 = *(long *)(local_210 + 0x18);
          iVar28 = iVar11;
          if (*(int *)(local_210 + 0x98) != 0) {
            iVar28 = *(int *)(*(long *)(local_210 + 0x90) + (long)iVar11 * 4);
          }
          plVar34 = (long *)(local_210 + 0xb0);
          if (iVar28 != -1) goto LAB_030df8d0;
        }
        else {
          plVar34 = (long *)(local_210 + 0xd0);
          iVar28 = iVar11 - *(int *)(local_210 + 0x20);
LAB_030df8d0:
          iVar11 = iVar28;
          lVar23 = *plVar34;
        }
        piVar25 = (int *)(lVar23 + (long)iVar11 * 0x10);
        uVar14 = piVar36[3] - *piVar25;
        if ((uint)(int)(short)piVar25[2] <= uVar14) {
          uVar14 = (int)(short)piVar25[2] + (piVar36[3] - piVar25[1]);
        }
        local_148[0] = (short)uVar19;
        FUN_030df010(param_1,lVar30,local_140,local_148);
        local_150[0] = piVar36[2];
        local_158[0] = (short)uVar14;
        FUN_030df010(param_2,lVar31,local_150,local_158);
        local_160[0] = *piVar36;
        local_168[0] = (short)uVar19;
        FUN_030df1a8(lVar30,local_160,local_168,&local_138,1);
        local_170[0] = piVar36[2];
        local_178[0] = (short)uVar14;
        FUN_030df1a8(lVar31,local_170,local_178,&local_128,1);
        puVar10 = local_128;
        puVar9 = local_138;
        iVar11 = (int)local_130;
        lVar23 = (long)(int)local_130;
        if (((int)local_130 != 0) && (iVar28 = (int)local_120, (int)local_120 != 0)) {
          uVar16 = *(undefined8 *)(param_1 + 0x18);
          iVar5 = *piVar36;
          iVar33 = piVar36[1];
          iVar6 = piVar36[2];
          iVar32 = piVar36[3];
          if (*(char *)(lVar30 + 0x30) == '\x01') {
            uVar29 = *puVar1;
          }
          else {
            uVar29 = FUN_0307d71c(puVar1);
          }
          if (*(char *)(lVar31 + 0x30) == '\x01') {
            uVar12 = *puVar2;
          }
          else {
            uVar12 = FUN_0307d71c();
          }
          lVar24 = (long)iVar33;
          iVar21 = iVar33 - *(int *)(uVar29 + 0x30);
          if (iVar33 < *(int *)(uVar29 + 0x30)) {
            lVar17 = *(long *)(uVar29 + 0x28);
            iVar21 = iVar33;
            if (*(int *)(uVar29 + 0x78) != 0) {
              iVar21 = *(int *)(*(long *)(uVar29 + 0x70) + lVar24 * 4);
            }
            if (iVar21 != -1) {
              plVar34 = (long *)(uVar29 + 0xc0);
              goto LAB_030dfa40;
            }
            iVar21 = iVar33;
          }
          else {
            plVar34 = (long *)(uVar29 + 0xe0);
LAB_030dfa40:
            lVar17 = *plVar34;
          }
          lVar27 = (long)iVar32;
          iVar22 = iVar32 - *(int *)(uVar12 + 0x30);
          if (iVar32 < *(int *)(uVar12 + 0x30)) {
            lVar26 = *(long *)(uVar12 + 0x28);
            iVar22 = iVar32;
            if (*(int *)(uVar12 + 0x78) != 0) {
              iVar22 = *(int *)(*(long *)(uVar12 + 0x70) + lVar27 * 4);
            }
            if (iVar22 != -1) {
              plVar34 = (long *)(uVar12 + 0xc0);
              goto LAB_030dfa8c;
            }
            iVar22 = iVar32;
          }
          else {
            plVar34 = (long *)(uVar12 + 0xe0);
LAB_030dfa8c:
            lVar26 = *plVar34;
          }
          if ((*(byte *)(lVar17 + (long)iVar21 * 0x14 + 0x10) >> 4 & 1) == 0) {
            if (*(char *)(lVar30 + 0x30) == '\x01') {
              uVar29 = *puVar1;
            }
            else {
              uVar29 = FUN_0307d71c(puVar1);
            }
            if (*(char *)(lVar31 + 0x30) == '\x01') {
              uVar12 = *puVar2;
            }
            else {
              uVar12 = FUN_0307d71c();
            }
            uStack_88 = *(undefined8 *)(param_4 + 0x18);
            local_90 = *(undefined8 *)(param_4 + 0x10);
            if (((*(byte *)(*(long *)(uVar29 + 0x68) + 0x80) & 1) != 0) ||
               ((*(byte *)(*(long *)(uVar12 + 0x68) + 0x80) & 1) != 0)) {
              local_90 = 0;
              uStack_88 = 0;
            }
            if ((iVar11 == 1) && (iVar28 == 1)) {
              uVar19 = *puVar9;
              uVar14 = puVar9[1];
              uVar20 = *puVar10;
              uVar15 = puVar10[1];
              fVar38 = *(float *)(param_4 + 4);
              local_a0[0] = uVar15;
              local_98[0] = uVar14;
              fVar37 = (float)FUN_030ef8f4(lVar30,lVar31,&local_90,local_98,local_a0);
              if (fVar37 < fVar38) {
                iVar11 = *(int *)(uVar29 + 0x17c);
                uVar3 = uVar12;
                if (uVar12 <= uVar29) {
                  uVar3 = uVar29;
                }
                iVar28 = *(int *)(uVar12 + 0x17c);
                uVar4 = uVar29;
                if (uVar12 <= uVar29) {
                  uVar4 = uVar12;
                }
                nn::os::LockMutex(*(MutexType **)(uVar4 + 0x1a8));
                nn::os::LockMutex(*(MutexType **)(uVar3 + 0x1a8));
                lVar23 = *(long *)(uVar29 + 0xe0) +
                         (long)(int)(uVar14 - *(int *)(uVar29 + 0x30)) * 0x14;
                iVar5 = *(int *)(uVar12 + 0x30);
                lVar24 = *(long *)(uVar12 + 0xe0);
                *(byte *)(lVar23 + 0x10) = *(byte *)(lVar23 + 0x10) | 0x40;
                *(uint *)(lVar23 + 8) = uVar15 | iVar28 << 0x16;
                *(uint *)(lVar23 + 0xc) = uVar20 | iVar28 << 0x16;
                lVar24 = lVar24 + (long)(int)(uVar15 - iVar5) * 0x14;
                *(uint *)(lVar24 + 8) = uVar14 | iVar11 << 0x16;
                *(uint *)(lVar24 + 0xc) = uVar19 | iVar11 << 0x16;
                *(byte *)(lVar24 + 0x10) = *(byte *)(lVar24 + 0x10) | 0x40;
                nn::os::UnlockMutex(*(MutexType **)(uVar29 + 0x1a8));
                nn::os::UnlockMutex(*(MutexType **)(uVar12 + 0x1a8));
                goto LAB_030e0060;
              }
            }
            fVar38 = *(float *)(param_4 + 4);
            local_b0[0] = iVar32;
            local_a8[0] = iVar33;
            fVar37 = (float)FUN_030ef8f4(lVar30,lVar31,&local_90,local_a8,local_b0);
            if (fVar38 <= fVar37) {
              iVar11 = FUN_0316cc20(*(undefined8 *)(param_4 + 0x20),(undefined8 *)(param_4 + 0x10),
                                    lVar30,lVar31,iVar33,iVar32,iVar5,iVar6,&local_1c0);
              if (iVar11 != -1) goto LAB_030e0060;
              lVar17 = *(long *)(lVar30 + 0x20);
              if (iVar33 < *(int *)(lVar17 + 0x30)) {
                lVar26 = *(long *)(lVar17 + 0x28);
                iVar11 = iVar33;
                if (*(int *)(lVar17 + 0x78) != 0) {
                  iVar11 = *(int *)(*(long *)(lVar17 + 0x70) + lVar24 * 4);
                }
                if (iVar11 != -1) {
                  plVar34 = (long *)(lVar17 + 0xc0);
                  iVar33 = iVar11;
                  goto LAB_030dff04;
                }
              }
              else {
                plVar34 = (long *)(lVar17 + 0xe0);
                iVar33 = iVar33 - *(int *)(lVar17 + 0x30);
LAB_030dff04:
                lVar26 = *plVar34;
              }
              piVar25 = (int *)(lVar26 + (long)iVar33 * 0x14);
              iVar5 = *(int *)(lVar17 + 0x40);
              iVar11 = *piVar25;
              iVar28 = piVar25[1];
              lVar24 = 0x38;
              if (iVar5 <= iVar11) {
                lVar24 = 0xf0;
              }
              iVar33 = 0;
              if (iVar5 <= iVar11) {
                iVar33 = iVar5;
              }
              iVar6 = 0;
              if (iVar5 <= iVar28) {
                iVar6 = iVar5;
              }
              plVar34 = (long *)(*(long *)(lVar17 + lVar24) + (long)(iVar11 - iVar33) * 0x10);
              uStack_d8 = plVar34[1];
              local_e0 = *plVar34;
              lVar24 = 0x38;
              if (iVar5 <= iVar28) {
                lVar24 = 0xf0;
              }
              plVar34 = (long *)(*(long *)(lVar17 + lVar24) + (long)(iVar28 - iVar6) * 0x10);
              local_c8 = plVar34[1];
              local_d0 = *plVar34;
              local_c0 = 1.0 / (local_1a0._4_4_ - (float)local_1a0);
              fStack_bc = local_c0 * -(float)local_1a0;
              lVar24 = *(long *)(lVar31 + 0x20);
              if (iVar32 < *(int *)(lVar24 + 0x30)) {
                lVar17 = *(long *)(lVar24 + 0x28);
                iVar11 = iVar32;
                if (*(int *)(lVar24 + 0x78) != 0) {
                  iVar11 = *(int *)(*(long *)(lVar24 + 0x70) + lVar27 * 4);
                }
                if (iVar11 != -1) {
                  plVar34 = (long *)(lVar24 + 0xc0);
                  iVar32 = iVar11;
                  goto LAB_030dffb4;
                }
              }
              else {
                plVar34 = (long *)(lVar24 + 0xe0);
                iVar32 = iVar32 - *(int *)(lVar24 + 0x30);
LAB_030dffb4:
                lVar17 = *plVar34;
              }
              piVar25 = (int *)(lVar17 + (long)iVar32 * 0x14);
              iVar5 = *(int *)(lVar24 + 0x40);
              iVar11 = *piVar25;
              iVar28 = piVar25[1];
              lVar17 = 0x38;
              if (iVar5 <= iVar11) {
                lVar17 = 0xf0;
              }
              iVar33 = 0;
              if (iVar5 <= iVar11) {
                iVar33 = iVar5;
              }
              iVar6 = 0;
              if (iVar5 <= iVar28) {
                iVar6 = iVar5;
              }
              puVar7 = (ulong *)(*(long *)(lVar24 + lVar17) + (long)(iVar11 - iVar33) * 0x10);
              uStack_108 = puVar7[1];
              local_110 = *puVar7;
              lVar17 = 0x38;
              if (iVar5 <= iVar28) {
                lVar17 = 0xf0;
              }
              puVar8 = (undefined8 *)(*(long *)(lVar24 + lVar17) + (long)(iVar28 - iVar6) * 0x10);
              uStack_f8 = puVar8[1];
              uStack_100 = *puVar8;
              local_f0 = 1.0 / (uStack_198._4_4_ - (float)uStack_198);
              fStack_ec = local_f0 * -(float)uStack_198;
              local_118 = 0x100;
              local_114 = *(undefined4 *)(param_4 + 0x30);
              FUN_030eb410(uVar16,lVar30,lVar31,&local_e0,&local_110,puVar9,puVar9 + lVar23 * 2);
              goto LAB_030e0060;
            }
            lVar17 = *(long *)(lVar30 + 0x20);
            if (iVar33 < *(int *)(lVar17 + 0x30)) {
              lVar26 = *(long *)(lVar17 + 0x28);
              iVar11 = iVar33;
              if (*(int *)(lVar17 + 0x78) != 0) {
                iVar11 = *(int *)(*(long *)(lVar17 + 0x70) + lVar24 * 4);
              }
              if (iVar11 != -1) {
                plVar34 = (long *)(lVar17 + 0xc0);
                iVar33 = iVar11;
                goto LAB_030dfdd4;
              }
            }
            else {
              plVar34 = (long *)(lVar17 + 0xe0);
              iVar33 = iVar33 - *(int *)(lVar17 + 0x30);
LAB_030dfdd4:
              lVar26 = *plVar34;
            }
            piVar25 = (int *)(lVar26 + (long)iVar33 * 0x14);
            iVar5 = *(int *)(lVar17 + 0x40);
            iVar11 = *piVar25;
            iVar28 = piVar25[1];
            lVar24 = 0x38;
            if (iVar5 <= iVar11) {
              lVar24 = 0xf0;
            }
            iVar33 = 0;
            if (iVar5 <= iVar11) {
              iVar33 = iVar5;
            }
            iVar6 = 0;
            if (iVar5 <= iVar28) {
              iVar6 = iVar5;
            }
            puVar8 = (undefined8 *)(*(long *)(lVar17 + lVar24) + (long)(iVar11 - iVar33) * 0x10);
            uStack_1b8 = puVar8[1];
            local_1c0 = *puVar8;
            lVar24 = 0x38;
            if (iVar5 <= iVar28) {
              lVar24 = 0xf0;
            }
            puVar8 = (undefined8 *)(*(long *)(lVar17 + lVar24) + (long)(iVar28 - iVar6) * 0x10);
            uStack_1a8 = puVar8[1];
            local_1b0 = *puVar8;
            lVar24 = *(long *)(lVar31 + 0x20);
            if (iVar32 < *(int *)(lVar24 + 0x30)) {
              lVar17 = *(long *)(lVar24 + 0x28);
              iVar11 = iVar32;
              if (*(int *)(lVar24 + 0x78) != 0) {
                iVar11 = *(int *)(*(long *)(lVar24 + 0x70) + lVar27 * 4);
              }
              if (iVar11 != -1) {
                plVar34 = (long *)(lVar24 + 0xc0);
                iVar32 = iVar11;
                goto LAB_030dfe64;
              }
            }
            else {
              plVar34 = (long *)(lVar24 + 0xe0);
              iVar32 = iVar32 - *(int *)(lVar24 + 0x30);
LAB_030dfe64:
              lVar17 = *plVar34;
            }
            piVar25 = (int *)(lVar17 + (long)iVar32 * 0x14);
            iVar5 = *(int *)(lVar24 + 0x40);
            iVar11 = *piVar25;
            iVar28 = piVar25[1];
            lVar17 = 0x38;
            if (iVar5 <= iVar11) {
              lVar17 = 0xf0;
            }
            iVar33 = 0;
            if (iVar5 <= iVar11) {
              iVar33 = iVar5;
            }
            iVar6 = 0;
            if (iVar5 <= iVar28) {
              iVar6 = iVar5;
            }
            plVar34 = (long *)(*(long *)(lVar24 + lVar17) + (long)(iVar11 - iVar33) * 0x10);
            uStack_d8 = plVar34[1];
            local_e0 = *plVar34;
            lVar17 = 0x38;
            if (iVar5 <= iVar28) {
              lVar17 = 0xf0;
            }
            plVar34 = (long *)(*(long *)(lVar24 + lVar17) + (long)(iVar28 - iVar6) * 0x10);
            local_c8 = plVar34[1];
            local_d0 = *plVar34;
            local_110 = CONCAT44(*(undefined4 *)(param_4 + 0x30),(int)local_110);
          }
          else {
            piVar25 = (int *)(lVar17 + (long)iVar21 * 0x14);
            lVar17 = *(long *)(lVar30 + 0x20);
            iVar11 = *piVar25;
            iVar28 = piVar25[1];
            iVar5 = *(int *)(lVar17 + 0x40);
            lVar24 = 0x38;
            if (iVar5 <= iVar11) {
              lVar24 = 0xf0;
            }
            iVar33 = 0;
            if (iVar5 <= iVar11) {
              iVar33 = iVar5;
            }
            iVar6 = 0;
            if (iVar5 <= iVar28) {
              iVar6 = iVar5;
            }
            puVar8 = (undefined8 *)(*(long *)(lVar17 + lVar24) + (long)(iVar11 - iVar33) * 0x10);
            uStack_1b8 = puVar8[1];
            local_1c0 = *puVar8;
            lVar24 = 0x38;
            if (iVar5 <= iVar28) {
              lVar24 = 0xf0;
            }
            puVar8 = (undefined8 *)(*(long *)(lVar17 + lVar24) + (long)(iVar28 - iVar6) * 0x10);
            uStack_1a8 = puVar8[1];
            local_1b0 = *puVar8;
            piVar25 = (int *)(lVar26 + (long)iVar22 * 0x14);
            lVar17 = *(long *)(lVar31 + 0x20);
            iVar11 = *piVar25;
            iVar28 = piVar25[1];
            iVar5 = *(int *)(lVar17 + 0x40);
            lVar24 = 0x38;
            if (iVar5 <= iVar11) {
              lVar24 = 0xf0;
            }
            iVar33 = 0;
            if (iVar5 <= iVar11) {
              iVar33 = iVar5;
            }
            iVar6 = 0;
            if (iVar5 <= iVar28) {
              iVar6 = iVar5;
            }
            plVar34 = (long *)(*(long *)(lVar17 + lVar24) + (long)(iVar11 - iVar33) * 0x10);
            uStack_d8 = plVar34[1];
            local_e0 = *plVar34;
            lVar24 = 0x38;
            if (iVar5 <= iVar28) {
              lVar24 = 0xf0;
            }
            plVar34 = (long *)(*(long *)(lVar17 + lVar24) + (long)(iVar28 - iVar6) * 0x10);
            local_c8 = plVar34[1];
            local_d0 = *plVar34;
            local_110 = CONCAT44(*(undefined4 *)(param_4 + 0x30),(int)local_110);
          }
          local_110 = local_110 & 0xffffffffffff0000;
          FUN_030eae80(uVar16,lVar30,lVar31,&local_1c0,&local_e0,puVar9,puVar9 + lVar23 * 2);
        }
LAB_030e0060:
        iVar11 = *(int *)PTR_DAT_047e4f38;
        lVar23 = tpidr_el0;
        lVar24 = *(long *)(lVar23 + 0x1000b8);
        if (lVar24 == 0) {
          lVar24 = FUN_00e5d3b4();
          *(long *)(lVar23 + 0x1000b8) = lVar24;
        }
        if (*(long *)(lVar24 + (long)iVar11 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
        lVar23 = local_120;
        uVar29 = (ulong)local_120._4_4_;
        local_120 = (ulong)local_120._4_4_ << 0x20;
        if ((-1 < lVar23) && (puVar10 != (uint *)0x0)) {
          (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                    (PTR_PTR_047d1a50 + 0x20,puVar10,uVar29 << 3);
        }
        lVar23 = local_130;
        local_120 = CONCAT44(0x80000000,(int)local_120);
        uVar29 = (ulong)local_130._4_4_;
        local_128 = (uint *)0x0;
        local_130 = (ulong)local_130._4_4_ << 0x20;
        if ((-1 < lVar23) && (puVar9 != (uint *)0x0)) {
          (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                    (PTR_PTR_047d1a50 + 0x20,puVar9,uVar29 << 3);
        }
      }
      piVar36 = piVar36 + 4;
    } while (piVar36 != piVar18);
  }
  if (*(int *)(param_3 + 0x30) != 0) {
    piVar36 = *(int **)(param_3 + 0x28);
    piVar18 = piVar36 + (long)*(int *)(param_3 + 0x30) * 3;
    do {
      lVar23 = FUN_0305c290(param_1 + 0xd8,piVar36);
      if (lVar23 == 0) {
        uVar14 = 0;
        uVar19 = 0xffffffff;
      }
      else {
        uVar19 = *(uint *)(lVar23 + 4);
        uVar14 = ((int)lVar23 - (int)*(undefined8 *)(param_1 + 0xe8)) * 0x20000000;
      }
      lVar23 = FUN_0305c290(param_2 + 0xd8,piVar36 + 1);
      if (lVar23 == 0) {
        uVar15 = 0;
        uVar20 = 0xffffffff;
      }
      else {
        uVar20 = *(uint *)(lVar23 + 4);
        uVar15 = ((int)lVar23 - (int)*(undefined8 *)(param_2 + 0xe8)) * 0x20000000;
      }
      if ((int)(uVar19 | uVar14) < 0) {
        if (-1 < (int)(uVar20 | uVar15)) {
          lVar23 = param_1 + 0xb8;
          piVar25 = piVar36;
          goto LAB_030e0220;
        }
      }
      else {
        if ((int)(uVar20 | uVar15) < 0) {
          lVar23 = param_2 + 0xb8;
          piVar25 = piVar36 + 1;
LAB_030e0220:
          FUN_030d9db8(lVar23,piVar25);
        }
        local_e0 = 0;
        uStack_d8 = 0x8000000000000000;
        local_d0 = 0;
        local_c8 = -0x8000000000000000;
        iVar11 = *piVar36;
        lVar23 = *(long *)(*(long *)(lVar30 + 0x20) + 0x168);
        uVar19 = *(uint *)(lVar23 + (long)iVar11 * 4);
        uVar29 = (ulong)uVar19;
        if (-1 < (int)uVar19) {
          uVar14 = *(uint *)(*(long *)(lVar30 + 0x20) + 0x170);
          lVar24 = (long)(int)uVar14;
          if ((int)uVar14 <= (int)(uVar19 + 1)) {
            uVar14 = uVar19 + 1;
          }
          uVar12 = uVar29;
          do {
            uVar3 = uVar12 + 1;
            if (lVar24 <= (long)uVar3) goto LAB_030e027c;
            lVar17 = uVar12 * 4;
            uVar12 = uVar3;
          } while (*(int *)(lVar23 + 4 + lVar17) == iVar11);
          uVar14 = (uint)uVar3;
LAB_030e027c:
          if (uVar19 != uVar14) {
            do {
              if (*(int *)(lVar30 + 0x40) != 0) {
                plVar34 = *(long **)(lVar30 + 0x38);
                lVar23 = (long)*(int *)(lVar30 + 0x40) * 0x18;
                do {
                  lVar24 = *plVar34;
                  if (lVar24 != 0) {
                    if ((char)plVar34[2] != '\x01') {
                      lVar24 = FUN_03065a74(plVar34);
                    }
                    local_110 = CONCAT44(local_110._4_4_,(int)uVar29);
                    FUN_03077488(lVar24,lVar30,&local_110);
                  }
                  plVar34 = plVar34 + 3;
                  lVar23 = lVar23 + -0x18;
                } while (lVar23 != 0);
              }
              uVar19 = (int)uVar29 + 1;
              uVar29 = (ulong)uVar19;
            } while (uVar19 != uVar14);
            iVar11 = *piVar36;
          }
        }
        local_1d0[0] = (undefined2)piVar36[2];
        local_1c8[0] = iVar11;
        FUN_030df010(param_1,lVar30,local_1c8,local_1d0);
        local_1d8[0] = *piVar36;
        local_1e0[0] = (undefined2)piVar36[2];
        FUN_030df1a8(lVar30,local_1d8,local_1e0,&local_e0,1);
        local_1e8[0] = *piVar36;
        lVar17 = (long)local_1e8[0];
        lVar23 = *(long *)(*(long *)(lVar30 + 0x20) + 0x18);
        lVar24 = FUN_03095288((long *)(uVar35 + 0x188),local_1e8);
        if (lVar24 == 0) {
          uVar14 = 0;
          uVar19 = 0xffffffff;
        }
        else {
          uVar19 = *(uint *)(lVar24 + 4);
          uVar14 = ((int)lVar24 - (int)*(undefined8 *)(uVar35 + 0x198)) * 0x20000000;
        }
        lVar23 = lVar23 + lVar17 * 0x10;
        piVar25 = (int *)(*(long *)(*(long *)(uVar35 + 0x188) + (long)(int)(uVar19 | uVar14) * 0x38
                                   + 8) +
                         ((ulong)(((uint)*(ushort *)(piVar36 + 2) - (uint)*(ushort *)(lVar23 + 8)) -
                                 (uint)*(ushort *)(lVar23 + 10)) & 0xffff) * 0x14);
        lVar24 = *(long *)(lVar30 + 0x20);
        iVar11 = *(int *)(lVar24 + 0x40);
        iVar28 = *piVar25;
        lVar23 = 0x38;
        if (iVar11 <= iVar28) {
          lVar23 = 0xf0;
        }
        iVar5 = 0;
        if (iVar11 <= iVar28) {
          iVar5 = iVar11;
        }
        puVar8 = (undefined8 *)(*(long *)(lVar24 + lVar23) + (long)(iVar28 - iVar5) * 0x10);
        uStack_1b8 = puVar8[1];
        local_1c0 = *puVar8;
        iVar28 = piVar25[1];
        lVar23 = 0x38;
        if (iVar11 <= iVar28) {
          lVar23 = 0xf0;
        }
        iVar5 = 0;
        if (iVar11 <= iVar28) {
          iVar5 = iVar11;
        }
        puVar8 = (undefined8 *)(*(long *)(lVar24 + lVar23) + (long)(iVar28 - iVar5) * 0x10);
        uStack_1a8 = puVar8[1];
        local_1b0 = *puVar8;
        iVar11 = piVar36[1];
        lVar23 = *(long *)(*(long *)(lVar31 + 0x20) + 0x168);
        uVar19 = *(uint *)(lVar23 + (long)iVar11 * 4);
        uVar29 = (ulong)uVar19;
        if (-1 < (int)uVar19) {
          uVar14 = *(uint *)(*(long *)(lVar31 + 0x20) + 0x170);
          lVar24 = (long)(int)uVar14;
          if ((int)uVar14 <= (int)(uVar19 + 1)) {
            uVar14 = uVar19 + 1;
          }
          uVar12 = uVar29;
          do {
            uVar3 = uVar12 + 1;
            if (lVar24 <= (long)uVar3) goto LAB_030e0438;
            lVar17 = uVar12 * 4;
            uVar12 = uVar3;
          } while (*(int *)(lVar23 + 4 + lVar17) == iVar11);
          uVar14 = (uint)uVar3;
LAB_030e0438:
          if (uVar19 != uVar14) {
            do {
              if (*(int *)(lVar31 + 0x40) != 0) {
                plVar34 = *(long **)(lVar31 + 0x38);
                lVar23 = (long)*(int *)(lVar31 + 0x40) * 0x18;
                do {
                  lVar24 = *plVar34;
                  if (lVar24 != 0) {
                    if ((char)plVar34[2] != '\x01') {
                      lVar24 = FUN_03065a74(plVar34);
                    }
                    local_110 = CONCAT44(local_110._4_4_,(int)uVar29);
                    FUN_03077488(lVar24,lVar31,&local_110);
                  }
                  plVar34 = plVar34 + 3;
                  lVar23 = lVar23 + -0x18;
                } while (lVar23 != 0);
              }
              uVar19 = (int)uVar29 + 1;
              uVar29 = (ulong)uVar19;
            } while (uVar19 != uVar14);
            iVar11 = piVar36[1];
          }
        }
        local_1d0[0] = *(undefined2 *)((long)piVar36 + 10);
        local_1c8[0] = iVar11;
        FUN_030df010(param_2,lVar31,local_1c8,local_1d0);
        local_1d8[0] = piVar36[1];
        local_1e0[0] = *(undefined2 *)((long)piVar36 + 10);
        FUN_030df1a8(lVar31,local_1d8,local_1e0,&local_d0,1);
        local_1e8[0] = piVar36[1];
        lVar26 = (long)local_1e8[0];
        lVar23 = *(long *)(*(long *)(lVar31 + 0x20) + 0x18);
        lVar27 = FUN_03095288((long *)(local_210 + 0x188),local_1e8);
        lVar17 = local_d0;
        lVar24 = local_e0;
        if (lVar27 == 0) {
          uVar14 = 0;
          uVar19 = 0xffffffff;
        }
        else {
          uVar19 = *(uint *)(lVar27 + 4);
          uVar14 = ((int)lVar27 - (int)*(undefined8 *)(local_210 + 0x198)) * 0x20000000;
        }
        lVar23 = lVar23 + lVar26 * 0x10;
        piVar25 = (int *)(*(long *)(*(long *)(local_210 + 0x188) +
                                    (long)(int)(uVar19 | uVar14) * 0x38 + 8) +
                         ((ulong)(((uint)*(ushort *)((long)piVar36 + 10) -
                                  (uint)*(ushort *)(lVar23 + 8)) - (uint)*(ushort *)(lVar23 + 10)) &
                         0xffff) * 0x14);
        iVar11 = *(int *)(*(long *)(lVar31 + 0x20) + 0x40);
        iVar28 = *piVar25;
        lVar23 = 0x38;
        if (iVar11 <= iVar28) {
          lVar23 = 0xf0;
        }
        iVar5 = 0;
        if (iVar11 <= iVar28) {
          iVar5 = iVar11;
        }
        puVar8 = (undefined8 *)
                 (*(long *)(*(long *)(lVar31 + 0x20) + lVar23) + (long)(iVar28 - iVar5) * 0x10);
        uStack_198 = puVar8[1];
        local_1a0 = *puVar8;
        iVar11 = piVar25[1];
        iVar28 = *(int *)(*(long *)(lVar31 + 0x20) + 0x40);
        lVar23 = 0x38;
        if (iVar28 <= iVar11) {
          lVar23 = 0xf0;
        }
        iVar5 = 0;
        if (iVar28 <= iVar11) {
          iVar5 = iVar28;
        }
        puVar8 = (undefined8 *)
                 (*(long *)(*(long *)(lVar31 + 0x20) + lVar23) + (long)(iVar11 - iVar5) * 0x10);
        uStack_188 = puVar8[1];
        local_190 = *puVar8;
        local_110 = CONCAT44(*(undefined4 *)(param_4 + 0x30),(int)local_110) & 0xffffffffffff0000;
        FUN_030eae80(*(undefined8 *)(param_1 + 0x18),lVar30,lVar31,&local_1c0,&local_1a0,local_e0,
                     local_e0 + (long)(int)uStack_d8 * 8);
        lVar23 = local_c8;
        uVar29 = (ulong)local_c8._4_4_;
        local_c8 = (ulong)local_c8._4_4_ << 0x20;
        if ((-1 < lVar23) && (lVar17 != 0)) {
          (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                    (PTR_PTR_047d1a50 + 0x20,lVar17,uVar29 << 3);
        }
        uVar12 = uStack_d8;
        local_d0 = 0;
        uVar29 = uStack_d8 >> 0x20;
        uStack_d8 = uVar29 << 0x20;
        local_c8 = CONCAT44(0x80000000,(undefined4)local_c8);
        if ((lVar24 != 0) && (-1 < (long)uVar12)) {
          (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                    (PTR_PTR_047d1a50 + 0x20,lVar24,uVar29 << 3);
        }
      }
      piVar36 = piVar36 + 3;
    } while (piVar36 != piVar18);
  }
  return;
}


