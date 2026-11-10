/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03488dac; name: FUN_03488dac
 */


void FUN_03488dac(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,
                 undefined8 *param_5)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  ulong uVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  float *pfVar13;
  undefined8 *puVar14;
  float *pfVar15;
  byte bVar16;
  undefined8 *puVar17;
  byte bVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  float fVar22;
  undefined4 local_348 [2];
  long local_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined8 uStack_330;
  int *local_328;
  long local_320;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined8 local_2c4;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  char local_2b0 [5];
  char local_2ab;
  undefined8 local_2a0;
  undefined1 auStack_298 [104];
  undefined4 local_230;
  undefined8 local_22c;
  undefined8 uStack_224;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined2 local_20c;
  ushort local_20a;
  long local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined1 auStack_1e0 [256];
  undefined1 *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  byte local_bc;
  byte local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  long *local_a0;
  byte local_98;
  float local_90;
  byte local_74 [4];
  
  if ((int)param_3[4] != 0) {
    local_98 = *param_4 == 0 | 0x1c;
    local_a0 = param_3;
    (**(code **)(*param_3 + 0x10))();
    uVar12 = *(uint *)(param_3 + 4);
    if (uVar12 != 0) {
      lVar20 = param_3[3];
      lVar21 = lVar20;
      do {
        if (*(long **)(lVar20 + 0x10) != (long *)0x0) {
          (**(code **)(**(long **)(lVar20 + 0x10) + 0x28))();
          lVar21 = param_3[3];
          uVar12 = *(uint *)(param_3 + 4);
        }
        lVar20 = lVar20 + 0x48;
      } while (lVar20 != lVar21 + (ulong)uVar12 * 0x48);
      if (uVar12 != 0) {
        puVar17 = uStack_330;
        do {
          uStack_330 = puVar17;
          if (*(long *)(lVar21 + 0x10) != 0) {
            plVar8 = *(long **)(lVar21 + 0x40);
            if ((plVar8 == (long *)0x0) || (*(uint *)(plVar8 + 1) == 0)) {
              bVar16 = 0;
LAB_03488f0c:
              bVar18 = 0;
            }
            else {
              lVar9 = (ulong)*(uint *)(plVar8 + 1) << 3;
              pfVar13 = (float *)(*plVar8 + 4);
              pfVar15 = pfVar13;
              lVar20 = lVar9;
              do {
                if ((pfVar15[-1] <= (float)param_1) && ((float)param_1 <= *pfVar15)) {
                  bVar16 = 0;
                  goto LAB_03488f18;
                }
                lVar20 = lVar20 + -8;
                pfVar15 = pfVar15 + 2;
              } while (lVar20 != 0);
              bVar16 = 1;
LAB_03488f18:
              do {
                if ((pfVar13[-1] <= (float)param_2) && ((float)param_2 <= *pfVar13))
                goto LAB_03488f0c;
                lVar9 = lVar9 + -8;
                pfVar13 = pfVar13 + 2;
              } while (lVar9 != 0);
              bVar18 = 1;
            }
            if ((((bool)(bVar16 ^ bVar18)) && (*(char *)(param_3[6] + 0x138) != '\0')) &&
               (plVar8 = *(long **)(param_3[6] + 0x130), plVar8 != (long *)0x0)) {
              do {
                if (((((*param_4 == 0) || (plVar8[1] == *param_4)) &&
                     (((int)param_4[1] == 0 || ((int)plVar8[2] == (int)param_4[1])))) &&
                    ((((int)param_4[2] == 0 || ((int)plVar8[3] == (int)param_4[2])) &&
                     (((char)param_4[3] == -1 || ((char)plVar8[4] == (char)param_4[3])))))) &&
                   ((((char)param_4[4] == -1 || ((char)plVar8[5] == (char)param_4[4])) &&
                    ((param_4[5] == 0 || (plVar8[6] == param_4[5])))))) {
                  if (param_5 != (undefined8 *)0x0) {
                    uStack_330 = puVar17;
                    uVar6 = (**(code **)*param_5)(param_5);
                    puVar17 = uStack_330;
                    if ((uVar6 & 1) != 0) goto LAB_03489398;
                  }
                  uStack_330._4_4_ = (uint)((ulong)puVar17 >> 0x20);
                  uVar12 = *(uint *)(plVar8 + 0xc);
                  if (uVar12 != 0) {
                    uVar11 = *(uint *)(lVar21 + 8);
                    iVar5 = 0;
                    lVar20 = plVar8[0xb];
LAB_03489020:
                    uVar1 = iVar5 + (uVar12 >> 1);
                    uVar3 = *(uint *)(lVar20 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 |
                                               (ulong)uVar1 << 3));
                    if (uVar3 != uVar11) goto code_r0x03489038;
                    if ((bool)(bVar18 | bVar16 ^ 1)) {
                      if ((!(bool)(bVar16 | bVar18 ^ 1)) &&
                         (lVar20 = lVar20 + (long)(int)uVar1 * 8, iVar5 = *(int *)(lVar20 + 4),
                         *(int *)(lVar20 + 4) = iVar5 + 1, iVar5 == 0)) {
                        uStack_330._4_4_ = uStack_330._4_4_ & 0xffffff00;
                        local_320 = 0;
                        local_348[0] = 0;
                        local_328 = (int *)((ulong)local_328 & 0xffffffff00000000);
                        local_340 = plVar8[1];
                        local_338 = (undefined4)plVar8[2];
                        uStack_334 = 0;
                        uStack_330._0_4_ = 4;
                        (**(code **)(**(long **)(lVar21 + 0x10) + 0x98))
                                  (*(long **)(lVar21 + 0x10),local_348);
                        FUN_0345423c(*(undefined8 *)PTR_DAT_047e2fe8,*(undefined8 *)(lVar21 + 0x10),
                                     plVar8[1],(int)plVar8[2]);
                        puVar17 = (undefined8 *)CONCAT44(uStack_330._4_4_,(undefined4)uStack_330);
                      }
                    }
                    else {
                      lVar20 = lVar20 + (long)(int)uVar1 * 8;
                      iVar5 = *(int *)(lVar20 + 4) + -1;
                      *(int *)(lVar20 + 4) = iVar5;
                      if (iVar5 == 0) {
                        local_b0 = 0x400000000;
                        local_320 = 0;
                        local_318 = 0;
                        local_314 = 0;
                        local_328 = (int *)0x0;
                        local_2cc = 0;
                        local_2b0[0] = '\0';
                        local_2b8 = 0;
                        uStack_2b4 = 0;
                        local_2b0[1] = 0xff;
                        local_2a0 = 0;
                        local_210 = 0;
                        local_218 = 0;
                        uVar2 = local_20a & 0xfc00;
                        local_a8 = 0;
                        local_e0 = (undefined1 *)0x0;
                        local_d8 = 0;
                        local_d4 = 0;
                        uStack_330 = puVar17;
                        memset(auStack_298,0,0x68);
                        local_20c = 0;
                        local_21c = 0;
                        local_22c = 0;
                        uStack_224 = 0;
                        local_208 = 0;
                        local_1fc = 0;
                        local_230 = 0x3f800000;
                        local_200 = 0;
                        local_1e8 = 0;
                        local_1f8 = 0;
                        uStack_1f0 = 0;
                        local_d0 = 0;
                        uStack_c8 = 0;
                        local_c0 = 0;
                        local_bc = local_bc & 0xfe;
                        local_310 = 0;
                        local_348[0] = 0;
                        local_340 = 0;
                        if (param_3[6] != 0) {
                          local_340 = param_3[6] + 8;
                        }
                        lVar20 = plVar8[1];
                        uStack_330 = &local_b0;
                        local_338 = (undefined4)lVar20;
                        uStack_334 = (undefined4)((ulong)lVar20 >> 0x20);
                        local_320 = plVar8[8];
                        local_314 = *(undefined4 *)((long)plVar8 + 0x4c);
                        local_318 = (undefined4)plVar8[9];
                        local_328 = (int *)plVar8[7];
                        if (local_328 == (int *)0x0) {
                          local_2b0[0] = '\0';
                        }
                        else {
                          *local_328 = *local_328 + 1;
                        }
                        local_2c8 = (undefined4)plVar8[10];
                        local_b8 = local_b8 & 0xf0 | 0xb;
                        local_2c4 = 0;
                        uStack_2bc = 0;
                        local_2b8 = 0;
                        plVar19 = *(long **)(lVar21 + 0x10);
                        local_20a = uVar2;
                        if ((local_2b0[0] == -0x70) && (local_2ab != '\0')) {
                          local_74[0] = 1;
                          if (local_340 == 0) {
                            uVar7 = 0;
                          }
                          else {
                            uVar7 = *(undefined4 *)(local_340 + 0x10);
                          }
                          iVar5 = FUN_034a7e5c(plVar19,local_2b0,uVar7,local_74,lVar20,local_314);
                          if (iVar5 == 1) {
                            local_b8 = local_b8 & 0xfe | local_74[0];
                            goto LAB_03489294;
                          }
                        }
                        else {
LAB_03489294:
                          iVar5 = FUN_034a9828(plVar19,local_348);
                          if (iVar5 == 1) {
                            (**(code **)(*plVar19 + 0x240))(plVar19,local_348);
                          }
                        }
                        if (local_208 != 0) {
                          local_200 = 0;
                          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
                          local_208 = 0;
                          local_1fc = 0;
                        }
                        if (local_e0 != (undefined1 *)0x0) {
                          local_d8 = 0;
                          if (auStack_1e0 != local_e0) {
                            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
                          }
                          local_e0 = (undefined1 *)0x0;
                          local_d4 = 0;
                        }
                        piVar4 = local_328;
                        if ((local_328 != (int *)0x0) &&
                           (iVar5 = *local_328, *local_328 = iVar5 + -1, iVar5 + -1 == 0)) {
                          uVar12 = local_328[1];
                          if (uVar12 != 0) {
                            uVar6 = 0;
                            plVar19 = (long *)(local_328 + 4);
                            do {
                              if (*plVar19 != 0) {
                                (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
                                uVar12 = piVar4[1];
                              }
                              uVar6 = uVar6 + 1;
                              plVar19 = plVar19 + 4;
                            } while (uVar6 < uVar12);
                          }
                          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,piVar4);
                        }
                        puVar17 = uStack_330;
                      }
                    }
                  }
                }
LAB_03489398:
                plVar8 = (long *)*plVar8;
              } while (plVar8 != (long *)0x0);
            }
            uStack_330 = puVar17;
            if (((!(bool)(bVar16 & bVar18)) &&
                (lVar20 = *(long *)(*(long *)(lVar21 + 0x10) + 0x90), lVar20 != 0)) &&
               (0 < *(short *)(lVar20 + 0x90))) {
              local_348[0] = *(undefined4 *)(lVar21 + 0x28);
              local_90 = (float)FUN_03447dcc(param_2,lVar21 + 0x18,local_348);
              *(undefined4 *)(lVar21 + 0x28) = local_348[0];
              if (!(bool)(bVar16 ^ bVar18) && local_90 == 1.0) {
                local_348[0] = *(undefined4 *)(lVar21 + 0x28);
                fVar22 = (float)FUN_03447dcc(param_1,lVar21 + 0x18,local_348);
                *(undefined4 *)(lVar21 + 0x28) = local_348[0];
                if (fVar22 == 1.0) goto LAB_0348965c;
              }
              uVar12 = *(uint *)(param_4 + 1);
              uVar11 = *(uint *)(lVar21 + 0x38);
              if ((uVar12 != 0) && (4 < uVar11)) {
                plVar8 = *(long **)PTR_DAT_047e6f38;
                nn::os::LockMutex((MutexType *)(plVar8 + 3));
                uVar11 = *(uint *)(plVar8 + 1);
                if (uVar11 != 0) {
                  uVar1 = 0;
                  if (uVar11 != 0) {
                    uVar1 = uVar12 / uVar11;
                  }
                  for (lVar20 = *(long *)(*plVar8 + (ulong)(uVar12 - uVar1 * uVar11) * 8);
                      lVar20 != 0; lVar20 = *(long *)(lVar20 + 0x70)) {
                    if (*(uint *)(lVar20 + 0x54) == uVar12) {
                      puVar17 = (undefined8 *)(lVar20 + 0x20);
                      goto LAB_03489484;
                    }
                  }
                }
                puVar17 = (undefined8 *)0x0;
LAB_03489484:
                nn::os::UnlockMutex((MutexType *)(plVar8 + 3));
                uVar11 = *(uint *)(lVar21 + 0x38);
                uVar12 = *(uint *)(puVar17 + 1);
                uVar6 = (ulong)uVar12;
                if (uVar12 < uVar11) {
                  if (uVar12 != 0) {
                    puVar14 = (undefined8 *)*puVar17;
                    puVar10 = puVar14;
                    do {
                      plVar8 = (long *)*puVar10;
                      if ((((((*param_4 == 0) || (plVar8[5] == *param_4)) &&
                            (((int)param_4[1] == 0 || ((int)plVar8[6] == (int)param_4[1])))) &&
                           (((int)param_4[2] == 0 || ((int)plVar8[7] == (int)param_4[2])))) &&
                          (((char)param_4[3] == -1 || ((char)plVar8[8] == (char)param_4[3])))) &&
                         ((((char)param_4[4] == -1 || ((char)plVar8[9] == (char)param_4[4])) &&
                          ((param_4[5] == 0 || (plVar8[10] == param_4[5])))))) {
                        plVar19 = plVar8 + 0x31;
                        do {
                          lVar20 = *plVar19;
                          plVar19 = (long *)(lVar20 + 0x98);
                        } while (lVar20 != 0 && lVar20 != *(long *)(lVar21 + 0x10));
                        if (lVar20 != *(long *)(lVar21 + 0x10)) {
                          FUN_034a43c0(local_90,plVar8 + 0x3e,&local_a0,1);
                          (**(code **)(*plVar8 + 0x70))(plVar8);
                          puVar14 = (undefined8 *)*puVar17;
                          uVar6 = (ulong)*(uint *)(puVar17 + 1);
                        }
                      }
                      puVar10 = puVar10 + 1;
                    } while (puVar10 != puVar14 + uVar6);
                  }
                  goto LAB_0348965c;
                }
              }
              if (uVar11 != 0) {
                puVar10 = *(undefined8 **)(lVar21 + 0x30);
                puVar17 = puVar10;
                do {
                  plVar8 = (long *)*puVar17;
                  if (((((*param_4 == 0) || (plVar8[5] == *param_4)) &&
                       ((((int)param_4[1] == 0 || ((int)plVar8[6] == (int)param_4[1])) &&
                        (((int)param_4[2] == 0 || ((int)plVar8[7] == (int)param_4[2])))))) &&
                      (((char)param_4[3] == -1 || ((char)plVar8[8] == (char)param_4[3])))) &&
                     ((((char)param_4[4] == -1 || ((char)plVar8[9] == (char)param_4[4])) &&
                      ((param_4[5] == 0 || (plVar8[10] == param_4[5])))))) {
                    FUN_034a43c0(local_90,plVar8 + 0x3e,&local_a0,1);
                    (**(code **)(*plVar8 + 0x70))(plVar8);
                    puVar10 = *(undefined8 **)(lVar21 + 0x30);
                    uVar11 = *(uint *)(lVar21 + 0x38);
                  }
                  puVar17 = puVar17 + 1;
                } while (puVar17 != puVar10 + uVar11);
              }
            }
          }
LAB_0348965c:
          lVar20 = param_3[3];
          lVar21 = lVar21 + 0x48;
          uVar12 = *(uint *)(param_3 + 4);
          uVar6 = (ulong)uVar12;
          puVar17 = uStack_330;
        } while (lVar21 != lVar20 + uVar6 * 0x48);
        if (0 < (int)uVar12) {
          while( true ) {
            uVar12 = uVar12 - 1;
            plVar8 = *(long **)(lVar20 + (ulong)uVar12 * 0x48 + 0x10);
            if (plVar8 != (long *)0x0) {
              iVar5 = (**(code **)(*plVar8 + 0x30))();
              if (iVar5 == 0) {
                *(undefined8 *)(param_3[3] + (ulong)uVar12 * 0x48 + 0x10) = 0;
              }
            }
            if ((long)uVar6 < 2) break;
            lVar20 = param_3[3];
            uVar6 = uVar6 - 1;
          }
        }
      }
    }
    (**(code **)(*param_3 + 0x18))(param_3);
  }
  return;
code_r0x03489038:
  if (uVar3 < uVar11) {
    iVar5 = uVar1 + 1;
  }
  uVar12 = uVar12 - (uVar3 < uVar11) >> 1;
  if (uVar12 == 0) goto LAB_03489398;
  goto LAB_03489020;
}


